/*
 * XREFs of ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0031ABC
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0031FB0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitDeletionCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  bool result; // al
  _QWORD *v5; // rbx
  __int64 v6; // rax

  if ( !*((_QWORD *)this + 53) )
    return 1;
  while ( 1 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 53);
    *((_QWORD *)this + 53) = v5[1];
    v6 = *v5;
    v5[1] = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, struct DirectComposition::CBatch **))(v6 + 72))(v5, a2) )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v5 + 56LL))(v5) )
      ++*((_DWORD *)*a2 + 28);
    (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 104LL))(v5, 1LL);
    if ( !*((_QWORD *)this + 53) )
      return 1;
  }
  v5[1] = *((_QWORD *)this + 53);
  result = 0;
  *((_QWORD *)this + 53) = v5;
  return result;
}
