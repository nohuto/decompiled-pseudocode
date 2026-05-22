/*
 * XREFs of ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x1800182F4
 * Callers:
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18001827C (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18007D530 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 * Callees:
 *     ??0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KK@Z @ 0x1800180A8 (--0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::CreateHelper(__int64 a1, __int64 *a2, int a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  unsigned int v10; // ebx
  void *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v5 = a5;
  if ( a5 )
  {
    *a5 = 0LL;
    v11 = malloc(0x88uLL);
    v12 = (__int64)v11;
    if ( v11 )
    {
      memset_0(v11, 0, 0x88uLL);
      v13 = *a2;
      a5 = (_QWORD *)v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v11 = (void *)DWMInputTarget::DWMInputTarget(v12, a1, (__int64 *)&a5, a3, a4);
    }
    v10 = 0;
    if ( v11 )
      *v5 = v11;
    else
      v10 = -2147024882;
  }
  else
  {
    v10 = -2147467261;
  }
  v14 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v10;
}
