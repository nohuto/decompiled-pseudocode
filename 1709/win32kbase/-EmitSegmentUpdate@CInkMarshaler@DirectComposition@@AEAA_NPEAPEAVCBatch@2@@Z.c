/*
 * XREFs of ?EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0140ED8
 * Callers:
 *     ?EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0141130 (-EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

bool __fastcall DirectComposition::CInkMarshaler::EmitSegmentUpdate(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  _DWORD *v4; // rbx
  void *v6; // [rsp+80h] [rbp+10h] BYREF

  for ( ; *((_DWORD *)this + 34) != *((_QWORD *)this + 15); v4[2] = (*((_DWORD *)this + 34))++ )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v6) )
      break;
    v4 = (char *)v6 + 4;
    *(_DWORD *)v6 = 52;
    memset(v4, 0, 0x30uLL);
    *v4 = 177;
    v4[1] = *((_DWORD *)this + 6);
    v4[3] = *(_OWORD *)(*((unsigned int *)this + 34) * *((_QWORD *)this + 16) + *((_QWORD *)this + 12));
    v4[4] = *(_DWORD *)(*((unsigned int *)this + 34) * *((_QWORD *)this + 16) + *((_QWORD *)this + 12) + 4LL);
    v4[5] = *(_DWORD *)(*((unsigned int *)this + 34) * *((_QWORD *)this + 16) + *((_QWORD *)this + 12) + 8LL);
    v4[6] = *(_DWORD *)(*((unsigned int *)this + 34) * *((_QWORD *)this + 16) + *((_QWORD *)this + 12) + 12LL);
    v4[7] = *(_OWORD *)(*((unsigned int *)this + 34) * *((_QWORD *)this + 16) + *((_QWORD *)this + 12) + 16LL);
    v4[8] = *(_DWORD *)(*((unsigned int *)this + 34) * *((_QWORD *)this + 16) + *((_QWORD *)this + 12) + 20LL);
    v4[9] = *(_DWORD *)(*((unsigned int *)this + 34) * *((_QWORD *)this + 16) + *((_QWORD *)this + 12) + 24LL);
    v4[10] = *(_DWORD *)(*((unsigned int *)this + 34) * *((_QWORD *)this + 16) + *((_QWORD *)this + 12) + 28LL);
    v4[11] = *(_DWORD *)(*((unsigned int *)this + 34) * *((_QWORD *)this + 16) + *((_QWORD *)this + 12) + 32LL);
  }
  return *((unsigned int *)this + 34) == *((_QWORD *)this + 15);
}
