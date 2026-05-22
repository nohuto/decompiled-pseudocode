/*
 * XREFs of ?NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800A1544
 * Callers:
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x18009FEF8 (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyDeviceAttach(WGIController *this, struct IRawInputProvider *a2)
{
  unsigned int v4; // edi
  int v5; // r9d
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx

  if ( a2 )
  {
    v6 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      *v6 = 0LL;
      v6[1] = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( !v6 )
    {
      v4 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v5 = 1064;
      goto LABEL_4;
    }
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
    if ( (struct IRawInputProvider *)v6[1] != a2 )
    {
      (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = v6[1];
      v6[1] = (__int64)a2;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v6[2] = *((_QWORD *)this + 20);
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64 *, __int64))(**((_QWORD **)this + 13)
                                                                                                + 128LL))(
            *((_QWORD *)this + 13),
            WGIController::NotifyDeviceAttachCallback,
            v6,
            4LL);
    v4 = v10;
    if ( v10 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 1073, v10);
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
      v5 = 1061;
LABEL_4:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v5, v4);
    }
  }
  return v4;
}
