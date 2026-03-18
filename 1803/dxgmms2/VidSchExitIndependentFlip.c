/*
 * XREFs of VidSchExitIndependentFlip @ 0x1C0014B90
 * Callers:
 *     <none>
 * Callees:
 *     VidSchExitIndependentFlipInternal @ 0x1C0015004 (VidSchExitIndependentFlipInternal.c)
 */

_UNKNOWN **__fastcall VidSchExitIndependentFlip(
        __int64 a1,
        __int64 a2,
        struct _LUID *a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        _DWORD *a8,
        _QWORD *a9)
{
  _UNKNOWN **result; // rax
  _DWORD *v10; // rdi
  _QWORD *v12; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  struct _LUID v16; // [rsp+70h] [rbp+8h] BYREF

  result = &retaddr;
  v10 = a8;
  v12 = a9;
  *a8 = 0;
  *v12 = 0LL;
  if ( *(_BYTE *)(a1 + 47) )
  {
    RtlCopyLuid(&v16, a3);
    a9 = 0LL;
    LOBYTE(a8) = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
    VidSchExitIndependentFlipInternal(a1, (unsigned int)&v16, a4, a6, a7, (__int64)&a8, (__int64)&a9);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *v10 = (unsigned __int8)a8;
    result = (_UNKNOWN **)a9;
    *v12 = a9;
  }
  return result;
}
