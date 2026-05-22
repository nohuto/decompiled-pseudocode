/*
 * XREFs of ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x1800A019C
 * Callers:
 *     ?OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18009DC90 (-OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@I.c)
 *     ??1WGIController@@UEAA@XZ @ 0x18009F5A8 (--1WGIController@@UEAA@XZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WGIController::NotifyRemovedAndStop(WGIController *this)
{
  int v2; // edi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  _QWORD *v13; // rcx
  _QWORD *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 20) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, WGIController *))(**((_QWORD **)this + 8) + 176LL))(
           *((_QWORD *)this + 8),
           this);
    if ( v3 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 416, v3);
      goto LABEL_5;
    }
    v6 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      *v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    v15 = v6;
    if ( v6 )
    {
      v7 = *((_QWORD *)this + 12);
      if ( *v6 != v7 )
      {
        if ( v7 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)this + 12));
        v8 = *v6;
        *v6 = v7;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v6[1] = *((_QWORD *)this + 20);
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _QWORD *, __int64))(**((_QWORD **)this + 13)
                                                                                                + 128LL))(
             *((_QWORD *)this + 13),
             WGIController::NotifyDeviceRemovalCallback,
             v6,
             4LL);
      v2 = v9;
      if ( v9 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 1113, v9);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    else
    {
      v2 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 1105, 14);
    }
    if ( v2 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 417, v2);
LABEL_5:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    *((_QWORD *)this + 20) = 0LL;
  }
  if ( *((_QWORD *)this + 9) )
  {
    v15 = 0LL;
    v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))this + 9))(
            *((_QWORD *)this + 9),
            &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
            &v15);
    v2 = v10;
    if ( v10 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_39;
      v12 = 430;
      goto LABEL_33;
    }
    if ( *((_QWORD *)this + 30) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v15 + 88LL))(v15, *((_QWORD *)this + 30));
      v2 = v10;
      if ( v10 >= 0 )
      {
        *((_QWORD *)this + 30) = 0LL;
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 433;
LABEL_33:
        McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, v12, v10);
      }
    }
LABEL_39:
    v13 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    }
  }
  return (unsigned int)v2;
}
