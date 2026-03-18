/*
 * XREFs of ?EmitSetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014DABC
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014D9A0 (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPositionAnimation(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v8) )
  {
    v3 = (char *)v8;
    *(_DWORD *)v8 = 28;
    *(_QWORD *)(v3 + 4) = 0LL;
    *(_QWORD *)(v3 + 12) = 0LL;
    *(_QWORD *)(v3 + 20) = 0LL;
    *((_DWORD *)v3 + 1) = 234;
    v4 = *((_DWORD *)this + 6);
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 2) = v4;
    *((_DWORD *)v3 + 4) = (*((_BYTE *)this + 388) & 1) == 0;
    *((_DWORD *)v3 + 6) = *((_DWORD *)this + 31);
    v5 = *((_QWORD *)this + 23);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      if ( v6 )
        *((_DWORD *)v3 + 3) = *(_DWORD *)(v6 + 24);
    }
    *((_BYTE *)this + 388) |= 1u;
    *((_DWORD *)this + 4) |= 0x400u;
    return 1;
  }
  return 0;
}
