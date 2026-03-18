/*
 * XREFs of VidSchConfirmToken @ 0x1C0014F90
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015064 (VidSchiTryEnterIndependentFlip.c)
 */

void __fastcall VidSchConfirmToken(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF

  if ( a2 != -1 )
  {
    v6 = *a4;
    v8 = a2;
    v12 = *a4;
    v9 = a3;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
    v10 = *(_QWORD *)(a1 + 8 * v8 + 3008);
    v11 = 280 * v9;
    if ( *(_DWORD *)(v10 + 280 * v9 + 180) == 1
      && *(_BYTE *)(v10 + v11 + 177)
      && *(_QWORD *)(v10 + v11 + 148) == __PAIR64__(HIDWORD(v12), v6)
      && *(_QWORD *)(v10 + v11 + 160) == a5
      && *(_QWORD *)(v10 + v11 + 168) == a6 )
    {
      *(_BYTE *)(v10 + v11 + 178) = 1;
      VidSchiTryEnterIndependentFlip(a1, (unsigned int)v8, (unsigned int)v9);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
