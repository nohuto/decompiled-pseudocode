/*
 * XREFs of ?EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0031818
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0031FB0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitSharedSectionUpdateCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( *((_QWORD *)this + 52) )
  {
    do
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct DirectComposition::CBatch **))(**((_QWORD **)this + 52)
                                                                                           + 80LL))(
              *((_QWORD *)this + 52),
              a2) )
        break;
      *(_DWORD *)(*((_QWORD *)this + 52) + 16LL) &= ~2u;
      v5 = *((_QWORD *)this + 52);
      v6 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 8) = 0LL;
      *((_QWORD *)this + 52) = v6;
    }
    while ( v6 );
  }
  return *((_QWORD *)this + 52) == 0LL;
}
