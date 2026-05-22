/*
 * XREFs of ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006D870
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003A910 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800494A0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NonPointerProcessor::OnInputReport(NonPointerProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  if ( v5 )
  {
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v5 + 64LL))(
           v5,
           *((_QWORD *)this + 5),
           *((_QWORD *)this + 4),
           0LL,
           &v13);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *, __int64))(*(_QWORD *)v5 + 72LL))(v5, a2, v13);
      v6 = v8;
      if ( v8 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_13;
      v10 = 144;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_13;
      v10 = 138;
    }
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, v10, v8);
    goto LABEL_13;
  }
  v6 = -2147418113;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 129, 255);
LABEL_13:
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v6;
}
