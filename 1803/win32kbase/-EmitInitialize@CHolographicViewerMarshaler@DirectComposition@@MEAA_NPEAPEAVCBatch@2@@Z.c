/*
 * XREFs of ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C015A7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ReferenceDwmProcess @ 0x1C0066A40 (ReferenceDwmProcess.c)
 */

char __fastcall DirectComposition::CHolographicViewerMarshaler::EmitInitialize(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  PVOID v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rcx
  char v8; // [rsp+38h] [rbp-10h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  void *v10; // [rsp+60h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 11) & 0x8000001F) == 0x1F )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x38uLL, &v10) )
      return 0;
    v3 = ReferenceDwmProcess();
    if ( !v3 )
      return 0;
    v5 = *((_QWORD *)this + 10);
    v6 = *((_QWORD *)this + 13);
    v9 = 0LL;
    v8 = 0;
    if ( (int)ObDuplicateObject(v6, v5, v3, &v9, 0, 0, 6, v8) < 0 )
      return 0;
    v7 = (char *)v10;
    *(_DWORD *)v10 = 56;
    *((_DWORD *)v7 + 1) = 192;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = *((_DWORD *)this + 12);
    *((_DWORD *)v7 + 4) = *((_DWORD *)this + 13);
    *(_QWORD *)(v7 + 20) = *(_QWORD *)((char *)this + 92);
    *(_OWORD *)(v7 + 28) = *(_OWORD *)((char *)this + 56);
    *(_QWORD *)(v7 + 44) = v9;
    *((_DWORD *)v7 + 13) = *((_DWORD *)this + 25);
    *((_DWORD *)this + 11) |= 0x80000000;
  }
  return 1;
}
