/*
 * XREFs of ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0031894
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0031FB0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitUpdateCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  bool result; // al

  if ( !*((_QWORD *)this + 51) )
    return 1;
  while ( 1 )
  {
    v4 = (__int64 *)*((_QWORD *)this + 51);
    *((_QWORD *)this + 51) = v4[1];
    v5 = *v4;
    v4[1] = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, struct DirectComposition::CBatch **))(v5 + 80))(v4, a2) )
      break;
    *((_DWORD *)v4 + 4) &= ~2u;
    if ( !*((_QWORD *)this + 51) )
      return 1;
  }
  v4[1] = *((_QWORD *)this + 51);
  result = 0;
  *((_QWORD *)this + 51) = v4;
  return result;
}
