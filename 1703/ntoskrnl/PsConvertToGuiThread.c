/*
 * XREFs of PsConvertToGuiThread @ 0x140545BA0
 * Callers:
 *     KiConvertToGuiThread @ 0x140185040 (KiConvertToGuiThread.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14008BBF0 (MmSessionGetWin32Callouts.c)
 *     SeCaptureAtomTableCallout @ 0x140115D14 (SeCaptureAtomTableCallout.c)
 *     ExCallCallBack @ 0x1404F9EF4 (ExCallCallBack.c)
 *     SeCompareSigningLevels @ 0x140545CB0 (SeCompareSigningLevels.c)
 *     PsQuerySectionSignatureInformation @ 0x140545CE0 (PsQuerySectionSignatureInformation.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 result; // rax
  _RTL_RUN_ONCE *v6; // rax
  int v7; // esi
  _KPROCESS *v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  struct _KTHREAD *v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]
  char v12; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread->PreviousMode )
    return 3221225485LL;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0 )
    return 1073741851LL;
  Process = CurrentThread->ApcState.Process;
  if ( SLODWORD(Process[1].DirectoryTableBase) < 0 )
    return 3221225506LL;
  v8 = CurrentThread->ApcState.Process;
  v9 = 1;
  if ( (int)PsQuerySectionSignatureInformation(Process, &v12) >= 0 )
  {
    LOBYTE(v3) = v12;
    LOBYTE(v2) = 12;
    v9 ^= ((unsigned __int8)v9 ^ (unsigned __int8)(2 * SeCompareSigningLevels(v3, v2))) & 2;
  }
  Win32Callouts = MmSessionGetWin32Callouts();
  result = ExCallCallBack((signed __int64 *)Win32Callouts, 0LL, (__int64)&v8);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x1800000000000LL) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x14u);
    v11 = 0;
    v10 = CurrentThread;
    v6 = MmSessionGetWin32Callouts();
    v7 = ExCallCallBack((signed __int64 *)v6, 1LL, (__int64)&v10);
    if ( v7 < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
      if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x1800000000000LL) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x14u);
    }
    SeCaptureAtomTableCallout();
    return (unsigned int)v7;
  }
  return result;
}
