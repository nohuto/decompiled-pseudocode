/*
 * XREFs of VfTargetDriversRemove @ 0x14014885C
 * Callers:
 *     VfDriverUnloadImage @ 0x1407621FC (VfDriverUnloadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x14077B740 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140148980 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x1401489E0 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VfThunkRemoveTargetNotify @ 0x140762268 (VfThunkRemoveTargetNotify.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140775484 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x1407754F4 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x1407758E8 (VfPoolCheckForLeaks.c)
 */

void __fastcall VfTargetDriversRemove(__int64 a1)
{
  __int64 v2; // r14
  void *v3; // rbx
  __int64 v4; // rax
  __m128i *v5; // rdi
  __int64 v6; // rbx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  _QWORD v10[2]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v11[3]; // [rsp+30h] [rbp-40h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-10h]

  if ( !VfSafeMode && ViTargetInitialized )
  {
    v2 = *(_QWORD *)(a1 + 48);
    v10[1] = 1024LL;
    v3 = 0LL;
    v10[0] = 0LL;
    v4 = ((__int64 (__fastcall *)(void *, _QWORD *, __int64, __int64))VfAvlLookupTreeNode)(
           &ViTargetDriversAvl,
           v10,
           v2,
           1LL);
    v5 = (__m128i *)v4;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 56);
      if ( v6 )
      {
        ViTargetRemovingCheckEtwWmi(*(_QWORD *)(v4 + 56), v2);
        VfPoolCheckForLeaks(v6, a1);
        ViTargetRemovingCheckContiguousMemory(v6, a1);
      }
      v7 = *v5;
      v11[1] = v5[1];
      v8 = v5[3];
      v11[0] = v7;
      v9 = v5[2];
      *(__m128i *)P = v8;
      v11[2] = v9;
      if ( _mm_srli_si128(v8, 8).m128i_u64[0] )
        --dword_140348588;
      v3 = (void *)VfAvlDeleteTreeNode(&ViTargetDriversAvl, v10, v2, 1LL);
    }
    VfAvlCleanupLockContext((__int64)v10);
    if ( v3 )
    {
      VfThunkRemoveTargetNotify(v11);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0x44566656u);
      if ( dword_140348580 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
      else
        VfUtilFreePoolCheckIRQL(v3);
    }
  }
}
