/*
 * XREFs of ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142A90
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?EmitSegmentCountUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01428B4 (-EmitSegmentCountUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142934 (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CGenericInkMarshaler::EmitUpdateCommands(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  unsigned int v5; // ebp
  unsigned int *v6; // rcx
  unsigned int *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) == 0 && *((_QWORD *)this + 11) )
  {
    v5 = *((_DWORD *)this + 22) + 12;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, v5, (void **)&v8) )
      return v2;
    v6 = v8;
    *v8 = v5;
    *(_QWORD *)(v6 + 1) = 0LL;
    v6[1] = 280;
    v6[2] = *((_DWORD *)this + 6);
    memmove(v6 + 3, *((const void **)this + 6), *((_QWORD *)this + 11) * *((_QWORD *)this + 10));
    *((_DWORD *)this + 4) |= 0x20u;
  }
  if ( DirectComposition::CGenericInkMarshaler::EmitSegmentCountUpdate(this, a2)
    && DirectComposition::CGenericInkMarshaler::EmitSegmentUpdate(this, (struct DirectComposition::CBatch ***)a2) )
  {
    return 1;
  }
  return v2;
}
