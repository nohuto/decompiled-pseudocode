/*
 * XREFs of ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006AE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchProcessor::OnInputReport(TouchProcessor *this, struct InputInfo *a2)
{
  if ( (*(_DWORD *)a2 & 8) == 0 )
    return 2147942487LL;
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 124);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6));
  return 0LL;
}
