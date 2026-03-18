/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x140509520
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14006E290 (PiControlFreeUserModeCallersBuffer.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405093A8 (PiControlMakeUserModeCallersCopy.c)
 *     PnpUnicodeStringToWstrFree @ 0x140509650 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140509688 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  __int64 result; // rax
  int Object; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-20h] BYREF
  _WORD v14[4]; // [rsp+38h] [rbp-18h] BYREF
  void *v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v16 = 0LL;
  v14[1] = v4;
  v14[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&v15, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    Object = PnpUnicodeStringToWstr(&v16, 0LL, v14);
    if ( Object >= 0 )
    {
      Object = PiDmGetObject(3LL, v16, (__int64 *)&BugCheckParameter2);
      if ( Object >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v10 = BugCheckParameter2;
        ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
        *((_BYTE *)a2 + 20) = *(_QWORD *)(v10 + 40) != 0LL;
        ExReleasePushLockEx(v10, 0LL, v11, v12);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
      }
    }
    PnpUnicodeStringToWstrFree(v16, v14);
    PiControlFreeUserModeCallersBuffer(a4, v15);
    return (unsigned int)Object;
  }
  return result;
}
