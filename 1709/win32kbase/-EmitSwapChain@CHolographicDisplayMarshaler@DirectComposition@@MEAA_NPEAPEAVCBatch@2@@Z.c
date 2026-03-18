/*
 * XREFs of ?EmitSwapChain@CHolographicDisplayMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014CCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ReferenceDwmProcess @ 0x1C003C930 (ReferenceDwmProcess.c)
 */

char __fastcall DirectComposition::CHolographicDisplayMarshaler::EmitSwapChain(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  PVOID v3; // rax
  char *v4; // rcx
  char v6; // [rsp+38h] [rbp-10h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  void *v8; // [rsp+60h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v8) )
  {
    v7 = 0LL;
    if ( *((_QWORD *)this + 7) )
    {
      v3 = ReferenceDwmProcess();
      if ( v3 )
      {
        v6 = 0;
        ObDuplicateObject(*((_QWORD *)this + 6), *((_QWORD *)this + 7), v3, &v7, 0, 0, 6, v6);
      }
    }
    v4 = (char *)v8;
    *(_DWORD *)v8 = 24;
    *(_QWORD *)(v4 + 4) = 0LL;
    *(_QWORD *)(v4 + 12) = 0LL;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 1) = 157;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    *(_QWORD *)(v4 + 12) = v7;
    *((_DWORD *)v4 + 5) = *((_DWORD *)this + 11);
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return 0;
}
