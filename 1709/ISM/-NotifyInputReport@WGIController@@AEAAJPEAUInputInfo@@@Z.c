/*
 * XREFs of ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800A1984
 * Callers:
 *     ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x1800A0B20 (-OnKeyReceived@WGIController@@UEAAJ_KEE@Z.c)
 *     ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x1800A0C50 (-OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@.c)
 *     ?OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatus@3456@@Z @ 0x1800A0D70 (-OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatu.c)
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x1800A0FF4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyInputReport(WGIController *this, struct InputInfo *a2)
{
  struct InputInfo *v2; // rdi
  unsigned int v4; // edi
  int v5; // r9d
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  v2 = a2;
  if ( a2 )
  {
    v6 = operator new(0xB28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0xB28uLL);
      *v7 = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( !v7 )
    {
      v4 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v5 = 1153;
      goto LABEL_4;
    }
    v8 = *((_QWORD *)this + 12);
    if ( *v7 != v8 )
    {
      if ( v8 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this + 12));
      v9 = *v7;
      *v7 = v8;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v7 + 1;
    v11 = 22LL;
    do
    {
      *v10 = *(_OWORD *)v2;
      v10[1] = *((_OWORD *)v2 + 1);
      v10[2] = *((_OWORD *)v2 + 2);
      v10[3] = *((_OWORD *)v2 + 3);
      v10[4] = *((_OWORD *)v2 + 4);
      v10[5] = *((_OWORD *)v2 + 5);
      v10[6] = *((_OWORD *)v2 + 6);
      v10 += 8;
      *(v10 - 1) = *((_OWORD *)v2 + 7);
      v2 = (struct InputInfo *)((char *)v2 + 128);
      --v11;
    }
    while ( v11 );
    *v10 = *(_OWORD *)v2;
    v10[1] = *((_OWORD *)v2 + 1);
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _QWORD *, __int64))(**((_QWORD **)this + 13)
                                                                                               + 128LL))(
            *((_QWORD *)this + 13),
            WGIController::NotifyInputReportCallback,
            v7,
            4LL);
    v4 = v12;
    if ( v12 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 1161, v12);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  else
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 1150;
LABEL_4:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v5, v4);
    }
  }
  return v4;
}
