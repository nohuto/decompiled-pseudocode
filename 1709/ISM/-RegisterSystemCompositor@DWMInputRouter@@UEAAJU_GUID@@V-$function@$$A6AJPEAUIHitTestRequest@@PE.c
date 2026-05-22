/*
 * XREFs of ?RegisterSystemCompositor@DWMInputRouter@@UEAAJU_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x18001C0F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SetValueForKey@?$DynamicSizeMap@U_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@$00@@QEAAJAEBU_GUID@@AEBV?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x18001EF28 (-SetValueForKey@-$DynamicSizeMap@U_GUID@@V-$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV-$vector.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RegisterSystemCompositor(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx

  v3 = a1 + 328;
  if ( *a2 == *(_QWORD *)(a1 + 344) && a2[1] == *(_QWORD *)(a1 + 352) || (v6 = 0LL, !*(_DWORD *)(v3 + 8)) )
  {
LABEL_7:
    v8 = DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::SetValueForKey(
           v3,
           a2);
    v10 = v8;
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, 2184, v8);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = (_QWORD *)(*(_QWORD *)v3 + 80 * v6);
      if ( *v7 == *a2 && v7[1] == a2[1] )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(v3 + 8) )
        goto LABEL_7;
    }
    v10 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 2180, 87);
  }
  v11 = *(_QWORD *)(a3 + 56);
  if ( v11 )
  {
    LOBYTE(v7) = v11 != a3;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 32LL))(v11, v7);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return v10;
}
