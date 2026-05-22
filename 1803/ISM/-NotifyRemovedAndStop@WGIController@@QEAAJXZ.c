/*
 * XREFs of ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x180078F48
 * Callers:
 *     ?OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800770A0 (-OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@I.c)
 *     ??1WGIController@@UEAA@XZ @ 0x1800784C4 (--1WGIController@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WGIController::NotifyRemovedAndStop(WGIController *this)
{
  int v2; // edi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD **); // rcx
  _QWORD *v8; // rcx
  _QWORD *v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 20) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, WGIController *))(**((_QWORD **)this + 8) + 176LL))(
           *((_QWORD *)this + 8),
           this);
    if ( v2 < 0 )
      goto LABEL_37;
    v3 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v3 )
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      *v3 = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
    v10 = v3;
    if ( v3 )
    {
      v4 = *v3;
      v5 = *((_QWORD *)this + 12);
      if ( *v3 != v5 )
      {
        if ( v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 12));
          v4 = *v3;
        }
        *v3 = v5;
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v3[1] = *((_QWORD *)this + 20);
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _QWORD *, __int64))(**((_QWORD **)this + 13)
                                                                                                + 128LL))(
             *((_QWORD *)this + 13),
             WGIController::NotifyDeviceRemovalCallback,
             v3,
             4LL);
      if ( v2 >= 0 )
      {
        v3 = 0LL;
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
      v2 = -2147024882;
    }
    if ( v3 )
    {
      v6 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      operator delete(v3);
    }
    if ( v2 < 0 )
    {
LABEL_37:
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      return (unsigned int)v2;
    }
    *((_QWORD *)this + 20) = 0LL;
  }
  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))*((_QWORD *)this + 9);
  if ( v7 )
  {
    v10 = 0LL;
    v2 = (**v7)(v7, &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd, &v10);
    if ( v2 >= 0 )
    {
      if ( *((_QWORD *)this + 30) )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v10 + 88LL))(v10, *((_QWORD *)this + 30));
        if ( v2 >= 0 )
          *((_QWORD *)this + 30) = 0LL;
      }
    }
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    }
  }
  return (unsigned int)v2;
}
