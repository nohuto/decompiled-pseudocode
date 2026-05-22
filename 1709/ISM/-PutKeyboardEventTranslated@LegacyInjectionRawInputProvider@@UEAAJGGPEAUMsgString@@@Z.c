/*
 * XREFs of ?PutKeyboardEventTranslated@LegacyInjectionRawInputProvider@@UEAAJGGPEAUMsgString@@@Z @ 0x180086D20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::PutKeyboardEventTranslated(
        LegacyInjectionRawInputProvider *this,
        unsigned __int16 a2,
        __int64 a3,
        struct MsgString *a4)
{
  unsigned __int16 v5; // bp
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // r9d
  __int16 v11; // [rsp+20h] [rbp-28h]
  __int16 v12; // [rsp+28h] [rbp-20h]

  v5 = a3;
  if ( !*((_BYTE *)this + 104) )
  {
    LOBYTE(a3) = 1;
    LODWORD(result) = (*(__int64 (__fastcall **)(LegacyInjectionRawInputProvider *, __int64, __int64))(*(_QWORD *)this + 24LL))(
                        this,
                        4LL,
                        a3);
    if ( (int)result < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_9;
      v10 = 559;
      goto LABEL_8;
    }
  }
  v12 = -2;
  v11 = -2;
  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct MsgString *, __int16, __int16, _DWORD))(**((_QWORD **)this + 12) + 56LL))(
                      *((_QWORD *)this + 12),
                      a2,
                      v5,
                      a4,
                      v11,
                      v12,
                      0);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_9;
    v10 = 572;
LABEL_8:
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, v10, result);
LABEL_9:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}
