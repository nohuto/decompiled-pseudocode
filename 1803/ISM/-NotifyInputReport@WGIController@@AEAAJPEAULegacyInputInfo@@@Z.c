/*
 * XREFs of ?NotifyInputReport@WGIController@@AEAAJPEAULegacyInputInfo@@@Z @ 0x18007A194
 * Callers:
 *     ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x1800796C0 (-OnKeyReceived@WGIController@@UEAAJ_KEE@Z.c)
 *     ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x1800797D0 (-OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@.c)
 *     ?OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatus@3456@@Z @ 0x1800798F0 (-OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatu.c)
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x180079B58 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyInputReport(WGIController *this, struct LegacyInputInfo *a2)
{
  struct LegacyInputInfo *v2; // rsi
  _DWORD *v4; // rbx
  int v5; // edi
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  _OWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  v2 = a2;
  v4 = 0LL;
  if ( a2 )
  {
    v6 = operator new(0x6D0uLL, (const struct std::nothrow_t *)&std::nothrow);
    v4 = v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0x6D0uLL);
      *(_QWORD *)v4 = 0LL;
      memset_0(v4 + 2, 0, 0x6C8uLL);
      v4[8] = 1736;
    }
    else
    {
      v4 = 0LL;
    }
    if ( v4 )
    {
      v7 = *(_QWORD *)v4;
      v8 = *((_QWORD *)this + 12);
      if ( *(_QWORD *)v4 != v8 )
      {
        if ( v8 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this + 12));
          v7 = *(_QWORD *)v4;
        }
        *(_QWORD *)v4 = v8;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v9 = v4 + 2;
      v10 = 13LL;
      do
      {
        *v9 = *(_OWORD *)v2;
        v9[1] = *((_OWORD *)v2 + 1);
        v9[2] = *((_OWORD *)v2 + 2);
        v9[3] = *((_OWORD *)v2 + 3);
        v9[4] = *((_OWORD *)v2 + 4);
        v9[5] = *((_OWORD *)v2 + 5);
        v9[6] = *((_OWORD *)v2 + 6);
        v9 += 8;
        *(v9 - 1) = *((_OWORD *)v2 + 7);
        v2 = (struct LegacyInputInfo *)((char *)v2 + 128);
        --v10;
      }
      while ( v10 );
      *v9 = *(_OWORD *)v2;
      v9[1] = *((_OWORD *)v2 + 1);
      v9[2] = *((_OWORD *)v2 + 2);
      v9[3] = *((_OWORD *)v2 + 3);
      *((_QWORD *)v9 + 8) = *((_QWORD *)v2 + 8);
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _DWORD *, __int64))(**((_QWORD **)this + 13)
                                                                                                + 128LL))(
             *((_QWORD *)this + 13),
             WGIController::NotifyInputReportCallback,
             v4,
             4LL);
      if ( v5 >= 0 )
      {
        v4 = 0LL;
      }
      else
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v4 )
  {
    v11 = *(_QWORD *)v4;
    if ( *(_QWORD *)v4 )
    {
      *(_QWORD *)v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    operator delete(v4);
  }
  return (unsigned int)v5;
}
