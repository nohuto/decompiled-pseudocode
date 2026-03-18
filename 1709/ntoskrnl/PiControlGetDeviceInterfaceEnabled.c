/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x140527DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1400DF360 (PiControlFreeUserModeCallersBuffer.c)
 *     PiDmGetObject @ 0x140523950 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140525AE4 (PiControlMakeUserModeCallersCopy.c)
 *     PnpUnicodeStringToWstrFree @ 0x140527F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140527F48 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  __int64 result; // rax
  int Object; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-20h] BYREF
  _WORD v12[4]; // [rsp+38h] [rbp-18h] BYREF
  void *v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v14 = 0LL;
  v12[1] = v4;
  v12[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&v13, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    Object = PnpUnicodeStringToWstr(&v14, 0LL, v12);
    if ( Object >= 0 )
    {
      Object = PiDmGetObject(3LL, v14, (__int64 *)&BugCheckParameter2);
      if ( Object >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v10 = BugCheckParameter2;
        ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
        *((_BYTE *)a2 + 20) = *(_QWORD *)(v10 + 40) != 0LL;
        ExReleasePushLockEx(v10, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
      }
    }
    PnpUnicodeStringToWstrFree(v14, v12);
    PiControlFreeUserModeCallersBuffer(a4, v13);
    return (unsigned int)Object;
  }
  return result;
}
