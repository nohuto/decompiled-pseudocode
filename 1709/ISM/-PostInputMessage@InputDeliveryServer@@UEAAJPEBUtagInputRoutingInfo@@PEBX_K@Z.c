/*
 * XREFs of ?PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBX_K@Z @ 0x18007E8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@U?$hash@UtagInputRoutingInfo@@@3@U?$equal_to@UtagInputRoutingInfo@@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@@std@@QEAAAEAV?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@1@AEBUtagInputRoutingInfo@@@Z @ 0x18007FF44 (--A-$unordered_map@UtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_delete@VInputTar.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::PostInputMessage(
        InputDeliveryServer *this,
        const struct tagInputRoutingInfo *a2,
        const void *a3,
        size_t a4)
{
  int v6; // ecx
  int v8; // edx
  __int64 **v10; // r10
  __int64 *i; // rax
  __int64 v12; // rax
  const char *v13; // r9
  _QWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // rbp
  int v17; // eax
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = *((_DWORD *)a2 + 1);
  v8 = *(_DWORD *)a2;
  v10 = (__int64 **)*((_QWORD *)this + 59);
  for ( i = *v10; i != (__int64 *)v10 && (*((_DWORD *)i + 4) != v8 || *((_DWORD *)i + 5) != v6); i = (__int64 *)*i )
    ;
  if ( i != (__int64 *)v10 )
    (*(void (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)i[8] + 8LL))(i[8], a3, a4);
  if ( *((_BYTE *)this + 68) )
  {
    v12 = std::unordered_map<tagInputRoutingInfo,std::unique_ptr<InputTarget>>::operator[]((char *)this + 464, a2);
    v14 = *(_QWORD **)(*(_QWORD *)v12 + 8LL);
    if ( v14 )
      (*(void (__fastcall **)(_QWORD))(*v14 + 8LL))(*(_QWORD *)(*(_QWORD *)v12 + 8LL));
    v15 = *((_DWORD *)a2 + 1);
    v16 = v14[3];
    if ( a4 + 32 >= 0x1000 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x86,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
        v13);
      __debugbreak();
    }
    dword_18010F590 = 0;
    dword_18010F594 = v15;
    dword_18010F598 = a4;
    memcpy_0(&unk_18010F5B0, a3, a4);
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, int))(**(_QWORD **)(v16 + 72) + 56LL))(
            *(_QWORD *)(v16 + 72),
            *(unsigned int *)(v16 + 36),
            *(unsigned int *)(v16 + 40),
            &dword_18010F590,
            (int)a4 + 32);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x96,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
  }
  else
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const void *, _DWORD))(**((_QWORD **)this + 13) + 56LL))(
            *((_QWORD *)this + 13),
            *(unsigned int *)a2,
            *((unsigned int *)a2 + 1),
            a3,
            a4);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x17C,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v19);
      JUMPOUT(0x18007EA40LL);
    }
  }
  return 0LL;
}
