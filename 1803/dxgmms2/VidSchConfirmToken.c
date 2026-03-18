/*
 * XREFs of VidSchConfirmToken @ 0x1C0014AB0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015360 (VidSchiTryEnterIndependentFlip.c)
 */

void __fastcall VidSchConfirmToken(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbp
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF

  if ( a2 != -1 )
  {
    v6 = *a4;
    v8 = a2;
    v12 = *a4;
    v9 = a3;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
    v10 = *(int *)(*(_QWORD *)(a1 + 8 * v8 + 3032) + 216 * v9 + 140);
    if ( (int)v10 <= -1 )
      v11 = 0LL;
    else
      v11 = *(_QWORD *)(a1 + 3160) + 136 * v10;
    if ( v11
      && *(_DWORD *)(v11 + 112) == 1
      && *(_BYTE *)(v11 + 97)
      && *(_OWORD *)v11 == __PAIR128__(a5, __PAIR64__(HIDWORD(v12), v6))
      && *(_QWORD *)(v11 + 88) == a6 )
    {
      *(_BYTE *)(v11 + 98) = 1;
      VidSchiTryEnterIndependentFlip(a1, (unsigned int)v8, (unsigned int)v9);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
