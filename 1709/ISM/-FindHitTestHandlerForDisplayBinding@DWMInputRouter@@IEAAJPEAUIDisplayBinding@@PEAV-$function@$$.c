/*
 * XREFs of ?FindHitTestHandlerForDisplayBinding@DWMInputRouter@@IEAAJPEAUIDisplayBinding@@PEAV?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x18001B930
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18001A450 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?swap@?$function@$$A6AXXZ@std@@QEAAXAEAV12@@Z @ 0x18001FDC0 (-swap@-$function@$$A6AXXZ@std@@QEAAXAEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::FindHitTestHandlerForDisplayBinding(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // r9d
  __int64 v10; // r11
  __int64 (__fastcall ***v11)(_QWORD, _BYTE *); // rcx
  _BYTE *v12; // rdx
  __int64 v13; // rcx
  _BYTE v15[56]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE *v16; // [rsp+78h] [rbp-40h]
  __int64 v17; // [rsp+80h] [rbp-38h] BYREF

  v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v17);
  v6 = 0;
  v7 = *v5;
  if ( *v5 == *(_QWORD *)(a1 + 392) && (v7 = v5[1], v7 == *(_QWORD *)(a1 + 400)) || !a3 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 116, 87);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v8 = 0LL;
  v9 = *(_DWORD *)(a1 + 384);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 376);
    while ( 1 )
    {
      v7 = 10 * v8;
      if ( *(_QWORD *)(v10 + 80 * v8) == *v5 && *(_QWORD *)(v10 + 80 * v8 + 8) == v5[1] )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v9 )
        goto LABEL_14;
    }
    v16 = 0LL;
    v11 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(v10 + 80 * v8 + 72);
    if ( v11 )
      v16 = (_BYTE *)(**v11)(v11, v15);
    std::function<void (void)>::swap(v15, a3);
    if ( v16 )
    {
      v12 = v15;
      LOBYTE(v12) = v16 != v15;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v16 + 32LL))(v16, v12);
    }
  }
  else
  {
LABEL_14:
    v6 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 133, 5);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 1932, 5);
    }
  }
  return v6;
}
