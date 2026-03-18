/*
 * XREFs of ?EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A384
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A5D0 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C01478D8 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6da1c83d8ac4e7d0fe7fd4b6a56f1faf___ @ 0x1C0149FA4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6da1c83d8ac4e7d0fe7fd4b6a56f1fa.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetDiagnosticItemId(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v3; // esi
  char updated; // di
  unsigned int v6; // ecx
  unsigned int *v8[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 40);
  v9 = *((_DWORD *)this + 44);
  updated = 1;
  if ( v9 < v3 )
  {
    v8[0] = (unsigned int *)this;
    v8[1] = &v9;
    do
    {
      updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6da1c83d8ac4e7d0fe7fd4b6a56f1faf___(
                  (__int64)this,
                  a2,
                  v8);
      if ( !updated )
        break;
      v6 = v9;
      ++*((_DWORD *)this + 44);
      v9 = v6 + 1;
    }
    while ( v6 + 1 < v3 );
  }
  if ( *((_DWORD *)this + 44) == v3 )
  {
    updated = 1;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 136),
      0LL,
      0x6D6C4344u);
    *((_DWORD *)this + 44) = 0;
  }
  return updated;
}
