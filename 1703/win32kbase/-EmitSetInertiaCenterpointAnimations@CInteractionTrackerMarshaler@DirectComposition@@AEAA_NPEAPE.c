/*
 * XREFs of ?EmitSetInertiaCenterpointAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014537C
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0145D50 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaCenterpointAnimations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // ebx
  char v5; // si
  char *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  char *v9; // rcx
  __int64 v10; // rax
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v5 = 1;
  if ( (*((_DWORD *)this + 4) & 0x4000000) == 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
      return 0;
    v6 = (char *)v12;
    *(_DWORD *)v12 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 268;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    v7 = *((_QWORD *)this + 34);
    if ( v7 )
      v8 = *(_DWORD *)(*(_QWORD *)(v7 + 16) + 24LL);
    else
      v8 = 0;
    *((_DWORD *)v6 + 3) = v8;
    *((_DWORD *)this + 4) |= 0x4000000u;
  }
  if ( (*((_DWORD *)this + 4) & 0x8000000) != 0 )
    return v5;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
    return 0;
  v9 = (char *)v12;
  *(_DWORD *)v12 = 16;
  *(_QWORD *)(v9 + 4) = 0LL;
  *((_DWORD *)v9 + 3) = 0;
  *((_DWORD *)v9 + 1) = 269;
  *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
  v10 = *((_QWORD *)this + 35);
  if ( v10 )
    v2 = *(_DWORD *)(*(_QWORD *)(v10 + 16) + 24LL);
  *((_DWORD *)v9 + 3) = v2;
  *((_DWORD *)this + 4) |= 0x8000000u;
  return v5;
}
