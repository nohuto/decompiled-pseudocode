/*
 * XREFs of ?GetDisplayInformation@MouseProcessor@@AEAAJXZ @ 0x18006CB64
 * Callers:
 *     ?OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006BEC0 (-OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputDisplayBindingChanged@MouseProcessor@@UEAAJIPEAUIDisplayBinding@@@Z @ 0x18006CB30 (-OnInputDisplayBindingChanged@MouseProcessor@@UEAAJIPEAUIDisplayBinding@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z @ 0x18006D1B8 (-BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::GetDisplayInformation(MouseProcessor *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  v3 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 88LL))(v2, *((_QWORD *)this + 4), &v11);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_21;
    v7 = 748;
LABEL_6:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v7, v4);
    goto LABEL_21;
  }
  v8 = v11;
  if ( v11 != *((_QWORD *)this + 5) )
  {
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v5 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = v8;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( *((_BYTE *)this + 560) )
    {
      v4 = MouseAccelerator::BuildAccelerationCurve(
             (MouseProcessor *)((char *)this + 280),
             *((struct IInputDisplay **)this + 5));
      v6 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_21;
        v7 = 758;
        goto LABEL_6;
      }
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 64LL))(*((_QWORD *)this + 30));
  }
  else
  {
    v6 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 765, 3);
  }
LABEL_21:
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v6;
}
