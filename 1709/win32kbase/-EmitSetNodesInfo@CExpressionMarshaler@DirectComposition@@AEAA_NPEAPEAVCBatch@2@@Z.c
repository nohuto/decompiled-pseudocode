/*
 * XREFs of ?EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002DB58
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002D5C0 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

char __fastcall DirectComposition::CExpressionMarshaler::EmitSetNodesInfo(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  char *v4; // rax
  _DWORD *v5; // rdi
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 && *((_QWORD *)this + 15) && *((_QWORD *)this + 17) )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v8) )
    {
      v4 = (char *)v8;
      *(_DWORD *)v8 = 52;
      v5 = v4 + 4;
      memset(v4 + 4, 0, 0x30uLL);
      *v5 = 129;
      v5[1] = *((_DWORD *)this + 6);
      v5[2] = *(_DWORD *)(*((_QWORD *)this + 15) + 24LL);
      v5[3] = *((_DWORD *)this + 34);
      v5[4] = *((_DWORD *)this + 32);
      v5[5] = *((_DWORD *)this + 36);
      v6 = *((_QWORD *)this + 19);
      if ( v6 )
        LODWORD(v6) = *(_DWORD *)(v6 + 24);
      v5[6] = v6;
      v5[7] = *((_DWORD *)this + 42);
      v5[8] = *((_DWORD *)this + 40);
      v5[10] = *((_DWORD *)this + 44);
      v5[11] = *((_DWORD *)this + 45);
      v5[9] = *((_DWORD *)this + 46);
      *((_DWORD *)this + 46) = 0;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
