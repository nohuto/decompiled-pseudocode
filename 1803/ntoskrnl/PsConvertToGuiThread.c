/*
 * XREFs of PsConvertToGuiThread @ 0x1404F11D0
 * Callers:
 *     KiConvertToGuiThread @ 0x1401AE730 (KiConvertToGuiThread.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14003E9A0 (MmSessionGetWin32Callouts.c)
 *     SeCaptureAtomTableCallout @ 0x14006CCC8 (SeCaptureAtomTableCallout.c)
 *     ExCallCallBack @ 0x1404B63E4 (ExCallCallBack.c)
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 *     PsQuerySectionSignatureInformation @ 0x1404F1E20 (PsQuerySectionSignatureInformation.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x1407AE5D4 (EtwTimLogProhibitWin32kSystemCalls.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rbp
  int UserDirectoryTableBase; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 result; // rax
  int v7; // esi
  _RTL_RUN_ONCE *v8; // rax
  int v9; // edi
  _KPROCESS *v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]
  struct _KTHREAD *v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]
  char v14; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread->PreviousMode )
    return 3221225485LL;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x80u) != 0 )
    return 1073741851LL;
  Process = CurrentThread->ApcState.Process;
  UserDirectoryTableBase = Process[2].UserDirectoryTableBase;
  if ( (UserDirectoryTableBase & 0x1000) != 0 || (Process[2].UserDirectoryTableBase & 0x2000) != 0 )
  {
    EtwTimLogProhibitWin32kSystemCalls(
      (unsigned int)((UserDirectoryTableBase & 0x1000) != 0) + 1,
      CurrentThread->ApcState.Process);
    if ( (UserDirectoryTableBase & 0x1000) != 0 )
      return 3221225506LL;
  }
  v10 = Process;
  v11 = 1;
  if ( (int)PsQuerySectionSignatureInformation(Process, &v14) >= 0 )
  {
    LOBYTE(v4) = v14;
    LOBYTE(v3) = 12;
    v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(2 * SeCompareSigningLevels(v4, v3))) & 2;
  }
  Win32Callouts = MmSessionGetWin32Callouts();
  result = ExCallCallBack((signed __int64 *)Win32Callouts, 0LL, (__int64)&v10);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
    v7 = UserDirectoryTableBase & 0xC000;
    if ( v7 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    v13 = 0;
    v12 = CurrentThread;
    v8 = MmSessionGetWin32Callouts();
    v9 = ExCallCallBack((signed __int64 *)v8, 1LL, (__int64)&v12);
    if ( v9 < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
      if ( v7 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    }
    SeCaptureAtomTableCallout();
    return (unsigned int)v9;
  }
  return result;
}
