/*
 * XREFs of ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142D0C
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142DD0 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_538836bead5a962845b1ca8b143e9ec1_::operator() @ 0x1C009CC4C (_lambda_538836bead5a962845b1ca8b143e9ec1_--operator().c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0140898 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogPropertyUpdates(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v3; // esi
  char v5; // di
  char *v6; // rax
  unsigned int v7; // eax
  unsigned int *v9[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  void *v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = *((_DWORD *)this + 16);
  v10 = *((_DWORD *)this + 20);
  v5 = 1;
  if ( v10 < v3 )
  {
    v9[0] = (unsigned int *)this;
    v9[1] = &v10;
    while ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v11) )
    {
      v6 = (char *)v11;
      *(_DWORD *)v11 = 24;
      *(_QWORD *)(v6 + 4) = 0LL;
      *(_QWORD *)(v6 + 12) = 0LL;
      *((_DWORD *)v6 + 5) = 0;
      *((_DWORD *)v6 + 1) = 16;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
      lambda_538836bead5a962845b1ca8b143e9ec1_::operator()(v9, (_DWORD *)v6 + 1);
      v7 = v10;
      ++*((_DWORD *)this + 20);
      v10 = v7 + 1;
      if ( v7 + 1 >= v3 )
        goto LABEL_7;
    }
    v5 = 0;
  }
LABEL_7:
  if ( *((_DWORD *)this + 20) == v3 )
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
