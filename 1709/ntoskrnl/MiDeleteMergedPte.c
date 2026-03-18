/*
 * XREFs of MiDeleteMergedPte @ 0x1400E4F14
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x1400E4E0C (MiDecrementCloneBlockReference.c)
 *     MiDecrementCombinedPte @ 0x1400E5700 (MiDecrementCombinedPte.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x1400E4FE4 (MiTryDeleteTransitionPte.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiDeleteMergedPte(struct _KEVENT *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 PteShadow; // rax
  unsigned __int8 v8; // [rsp+48h] [rbp+10h] BYREF

  result = *a2;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    result = MiReadPteShadow(a2, *a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage((unsigned __int64)a2, &v8);
    v6 = MiTryDeleteTransitionPte((ULONG_PTR)a2);
    if ( v6 == 1 )
    {
      PteShadow = *a2;
      if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(a2, *a2);
      MiReleasePageFileSpace(a1, PteShadow);
    }
    MiUnlockProtoPoolPage(v5, v8);
    return v6;
  }
  return result;
}
