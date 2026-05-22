/*
 * XREFs of ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180034FD0
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180032ED0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180036324 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::UpdatePointerTimer(ControllerProcessor *this, struct InputInfo *a2)
{
  char v3; // di
  bool v4; // r14
  bool v5; // bp
  bool v6; // si
  int v7; // esi
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 1;
  if ( !*((_BYTE *)a2 + 584) )
  {
    v4 = COERCE_DOUBLE(*((_QWORD *)a2 + 69) & _xmm) <= 0.239532470703125
      && COERCE_DOUBLE(*((_QWORD *)a2 + 70) & _xmm) <= 0.239532470703125;
    v5 = COERCE_DOUBLE(*((_QWORD *)a2 + 71) & _xmm) <= 0.265167236328125
      && COERCE_DOUBLE(*((_QWORD *)a2 + 72) & _xmm) <= 0.265167236328125;
    v6 = COERCE_DOUBLE(*((_QWORD *)a2 + 67) & _xmm) <= 0.1171875
      && COERCE_DOUBLE(*((_QWORD *)a2 + 68) & _xmm) <= 0.1171875;
    if ( v5 && !*((_BYTE *)this + 2020) && *((_DWORD *)this + 719) == 1 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
    if ( v6 && ((*((_DWORD *)this + 719) - 16) & 0xFFFFFFEF) == 0 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
    if ( v4 && v5 && v6 )
      v3 = 0;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 239) + 24LL))(*((_QWORD *)this + 239), &v9);
  if ( v7 < 0
    || v3
    && !*((_DWORD *)this + 474)
    && !v9
    && (v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 239) + 80LL))(
               *((_QWORD *)this + 239),
               0LL,
               *((_QWORD *)this + 896)),
        v7 < 0) )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)v7;
}
