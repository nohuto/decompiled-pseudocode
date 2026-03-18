/*
 * XREFs of ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A508
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A5D0 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_538836bead5a962845b1ca8b143e9ec1_::operator() @ 0x1C006F3FC (_lambda_538836bead5a962845b1ca8b143e9ec1_--operator().c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C01478D8 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogPropertyUpdates(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v2; // esi
  char v5; // di
  bool v6; // zf
  char *v7; // rax
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int *v11[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 16);
  v12 = *((_DWORD *)this + 20);
  v5 = 1;
  v6 = v12 == v2;
  if ( v12 < v2 )
  {
    v11[0] = (unsigned int *)this;
    v11[1] = &v12;
    while ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v13) )
    {
      v7 = (char *)v13;
      *(_DWORD *)v13 = 24;
      *(_QWORD *)(v7 + 4) = 0LL;
      *(_QWORD *)(v7 + 12) = 0LL;
      *((_DWORD *)v7 + 5) = 0;
      *((_DWORD *)v7 + 1) = 19;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
      lambda_538836bead5a962845b1ca8b143e9ec1_::operator()(v11, (_DWORD *)v7 + 1);
      v8 = v12;
      v9 = ++*((_DWORD *)this + 20);
      v12 = v8 + 1;
      if ( v8 + 1 >= v2 )
        goto LABEL_7;
    }
    v9 = *((_DWORD *)this + 20);
    v5 = 0;
LABEL_7:
    v6 = v9 == v2;
  }
  if ( v6 )
  {
    v5 = 1;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 40),
      0LL,
      0x6D6C4344u);
    *((_DWORD *)this + 20) = 0;
  }
  return v5;
}
