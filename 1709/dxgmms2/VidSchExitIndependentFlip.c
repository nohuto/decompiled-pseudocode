/*
 * XREFs of VidSchExitIndependentFlip @ 0x1C0014CF0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchExitIndependentFlipInternal @ 0x1C0014E08 (VidSchExitIndependentFlipInternal.c)
 */

_UNKNOWN **__fastcall VidSchExitIndependentFlip(
        __int64 a1,
        int a2,
        struct _LUID *a3,
        int a4,
        unsigned int a5,
        int a6,
        char a7,
        _DWORD *a8,
        _QWORD *a9)
{
  _UNKNOWN **result; // rax
  _DWORD *v10; // r14
  _QWORD *v12; // r15
  unsigned int v15; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  struct _LUID v18; // [rsp+90h] [rbp+8h] BYREF

  result = &retaddr;
  v10 = a8;
  v12 = a9;
  *a8 = 0;
  *v12 = 0LL;
  if ( *(_BYTE *)(a1 + 47) && a2 != -1 )
  {
    v15 = a5;
    if ( a5 < *(_DWORD *)(a1 + 128) )
    {
      RtlCopyLuid(&v18, a3);
      a9 = 0LL;
      LOBYTE(a8) = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
      VidSchExitIndependentFlipInternal(a1, a2, (unsigned int)&v18, a4, v15, a6, a7, (__int64)&a8, (__int64)&a9);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *v10 = (unsigned __int8)a8;
      result = (_UNKNOWN **)a9;
      *v12 = a9;
    }
  }
  return result;
}
