/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x14048ADE0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14004D524 (PiControlFreeUserModeCallersBuffer.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14047FBFC (PiControlMakeUserModeCallersCopy.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  __int64 result; // rax
  int Object; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-20h] BYREF
  _WORD v12[4]; // [rsp+38h] [rbp-18h] BYREF
  void *v13; // [rsp+40h] [rbp-10h] BYREF
  _WORD *v14; // [rsp+78h] [rbp+28h] BYREF

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
      Object = PiDmGetObject(3, v14, (__int64 *)&BugCheckParameter2);
      if ( Object >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v10 = BugCheckParameter2;
        ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
        *((_BYTE *)a2 + 20) = *(_QWORD *)(v10 + 40) != 0LL;
        ExReleasePushLockEx(v10, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
      }
    }
    PnpUnicodeStringToWstrFree(v14, v12);
    PiControlFreeUserModeCallersBuffer(a4, v13);
    return (unsigned int)Object;
  }
  return result;
}
