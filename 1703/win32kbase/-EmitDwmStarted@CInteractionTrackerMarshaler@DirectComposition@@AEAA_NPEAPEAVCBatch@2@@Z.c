/*
 * XREFs of ?EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014524C
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0145D50 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitDwmStarted(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v4; // rcx
  char v5; // al
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x1000000) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    {
      v4 = (char *)v7;
      *(_DWORD *)v7 = 28;
      *(_QWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 12) = 0LL;
      *(_QWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 1) = 266;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = (*((unsigned __int8 *)this + 364) >> 2) & 1;
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 12);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 13);
      *((_DWORD *)v4 + 6) = *((_DWORD *)this + 34);
      v5 = *((_BYTE *)this + 364);
      if ( (v5 & 4) != 0 )
        *((_DWORD *)this + 4) &= ~0x2000000u;
      *((_DWORD *)this + 4) |= 0x1000000u;
      *((_BYTE *)this + 364) = v5 & 0xFB;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
