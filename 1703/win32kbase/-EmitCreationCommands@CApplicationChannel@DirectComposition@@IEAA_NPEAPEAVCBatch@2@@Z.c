/*
 * XREFs of ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C314
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C8E0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitCreationCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( *((_QWORD *)this + 52) )
  {
    do
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct DirectComposition::CBatch **))(**((_QWORD **)this + 52)
                                                                                           + 64LL))(
              *((_QWORD *)this + 52),
              a2) )
        break;
      *(_DWORD *)(*((_QWORD *)this + 52) + 16LL) |= 1u;
      v4 = *((_QWORD *)this + 52);
      v5 = *(_QWORD *)(v4 + 8);
      if ( (*(_DWORD *)(v4 + 16) & 2) != 0 )
      {
        v6 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 120LL))(v4, 100LL) != 0 ? 8 : 0;
        *(_QWORD *)(*((_QWORD *)this + 52) + 8LL) = *(_QWORD *)((char *)this + v6 + 424);
        *(_QWORD *)((char *)this + v6 + 424) = *((_QWORD *)this + 52);
      }
      else
      {
        *(_QWORD *)(v4 + 8) = 0LL;
      }
      *((_QWORD *)this + 52) = v5;
    }
    while ( v5 );
  }
  return *((_QWORD *)this + 52) == 0LL;
}
