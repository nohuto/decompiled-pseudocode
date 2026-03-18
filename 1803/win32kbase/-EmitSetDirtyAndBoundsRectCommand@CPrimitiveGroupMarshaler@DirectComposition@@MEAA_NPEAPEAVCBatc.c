/*
 * XREFs of ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0014430
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

char __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitSetDirtyAndBoundsRectCommand(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  unsigned int v6; // esi
  char *v7; // rcx
  char *v9; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v10) )
      return 0;
    v9 = (char *)v10;
    *(_DWORD *)v10 = 28;
    *(_QWORD *)(v9 + 4) = 0LL;
    *(_QWORD *)(v9 + 12) = 0LL;
    *(_QWORD *)(v9 + 20) = 0LL;
    *((_DWORD *)v9 + 1) = 311;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
    *(_OWORD *)(v9 + 12) = *(_OWORD *)((char *)this + 172);
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  v5 = *((_DWORD *)this + 42);
  if ( v5 )
  {
    v6 = 16 * (v5 + 1);
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, v6, &v10) )
    {
      v7 = (char *)v10;
      *(_DWORD *)v10 = v6;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 312;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 42);
      memmove(v7 + 16, (char *)this + 104, 16LL * *((unsigned int *)this + 42));
      *((_DWORD *)this + 42) = 0;
      return v4;
    }
    return 0;
  }
  return v4;
}
