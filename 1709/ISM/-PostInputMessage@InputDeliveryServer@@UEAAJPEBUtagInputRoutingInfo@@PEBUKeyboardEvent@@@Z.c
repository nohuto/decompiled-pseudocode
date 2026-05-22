/*
 * XREFs of ?PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBUKeyboardEvent@@@Z @ 0x18007EA50
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeliverEventToInputService@InputDeliveryServer@@AEAAXPEBUKeyboardEvent@@I@Z @ 0x18007F75C (-DeliverEventToInputService@InputDeliveryServer@@AEAAXPEBUKeyboardEvent@@I@Z.c)
 *     ??A?$unordered_map@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@U?$hash@UtagInputRoutingInfo@@@3@U?$equal_to@UtagInputRoutingInfo@@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@@std@@QEAAAEAV?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@1@AEBUtagInputRoutingInfo@@@Z @ 0x18007FF44 (--A-$unordered_map@UtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_delete@VInputTar.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::PostInputMessage(
        InputDeliveryServer *this,
        const struct tagInputRoutingInfo *a2,
        const struct KeyboardEvent *a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // xmm1_8
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)this + 68) )
  {
    v5 = std::unordered_map<tagInputRoutingInfo,std::unique_ptr<InputTarget>>::operator[]((char *)this + 464, a2);
    v6 = *(_QWORD **)(*(_QWORD *)v5 + 8LL);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*v6 + 8LL))(*(_QWORD *)(*(_QWORD *)v5 + 8LL));
    v7 = v6[3];
    memset(v15, 0, 0x20uLL);
    v8 = *(_OWORD *)a3;
    v9 = *(_QWORD *)(v7 + 72);
    v10 = *((_QWORD *)a3 + 2);
    v11 = *(unsigned int *)(v7 + 40);
    v12 = *(unsigned int *)(v7 + 36);
    HIDWORD(v15[0]) = *((_DWORD *)a2 + 1);
    *(_OWORD *)&v15[1] = v8;
    LODWORD(v15[0]) = 1;
    v15[3] = v10;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, int))(*(_QWORD *)v9 + 56LL))(
            v9,
            v12,
            v11,
            v15,
            32);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
        (const char *)(unsigned int)v13);
      JUMPOUT(0x18007EB48LL);
    }
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  }
  else
  {
    InputDeliveryServer::DeliverEventToInputService(this, a3, 0);
  }
  return 0LL;
}
