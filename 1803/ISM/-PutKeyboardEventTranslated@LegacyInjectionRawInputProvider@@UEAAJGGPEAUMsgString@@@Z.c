/*
 * XREFs of ?PutKeyboardEventTranslated@LegacyInjectionRawInputProvider@@UEAAJGGPEAUMsgString@@@Z @ 0x18006BAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::PutKeyboardEventTranslated(
        LegacyInjectionRawInputProvider *this,
        unsigned __int16 a2,
        __int64 a3,
        struct MsgString *a4)
{
  unsigned __int16 v5; // bp
  int v8; // edi
  __int16 v10; // [rsp+20h] [rbp-28h]
  __int16 v11; // [rsp+28h] [rbp-20h]

  v5 = a3;
  if ( !*((_BYTE *)this + 88)
    && (LOBYTE(a3) = 1,
        v8 = (*(__int64 (__fastcall **)(LegacyInjectionRawInputProvider *, __int64, __int64))(*(_QWORD *)this + 24LL))(
               this,
               4LL,
               a3),
        v8 < 0)
    || (v11 = -2,
        v10 = -2,
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct MsgString *, __int16, __int16, _DWORD))(**((_QWORD **)this + 10) + 56LL))(
               *((_QWORD *)this + 10),
               a2,
               v5,
               a4,
               v10,
               v11,
               0),
        v8 < 0) )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)v8;
}
