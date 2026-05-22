/*
 * XREFs of ?ConnectionClosed@MPCManager@@MEAAJPEBUtagMsgRoutingInfo@@@Z @ 0x18005DAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA_KAEBUtagMsgRoutingInfo@@@Z @ 0x18005E170 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@_ea_18005E170.c)
 *     ??A?$map@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@QEAAAEA_KAEBUtagMsgRoutingInfo@@@Z @ 0x18005E28C (--A-$map@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V-$allocator@U-$pair@$$.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManager::ConnectionClosed(MPCManager *this, const struct tagMsgRoutingInfo *a2)
{
  char *v4; // r14
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 *v7; // r8
  unsigned int v8; // r10d
  bool v9; // cf
  unsigned int v10; // ecx
  bool v11; // cf
  __int64 *v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // rax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v4 = (char *)this + 112;
    v5 = (__int64 *)*((_QWORD *)this + 14);
    v6 = v5;
    v7 = (__int64 *)v5[1];
    if ( !*((_BYTE *)v7 + 25) )
    {
      v8 = *(_DWORD *)a2;
      do
      {
        v9 = *((_DWORD *)v7 + 8) < v8;
        if ( *((_DWORD *)v7 + 8) == v8 )
          v9 = *((_DWORD *)v7 + 9) < *((_DWORD *)a2 + 1);
        if ( v9 )
        {
          v7 = (__int64 *)v7[2];
        }
        else
        {
          v6 = v7;
          v7 = (__int64 *)*v7;
        }
      }
      while ( !*((_BYTE *)v7 + 25) );
    }
    if ( v6 == v5 )
      goto LABEL_14;
    v10 = *((_DWORD *)v6 + 8);
    v11 = *(_DWORD *)a2 < v10;
    if ( *(_DWORD *)a2 == v10 )
      v11 = *((_DWORD *)a2 + 1) < *((_DWORD *)v6 + 9);
    if ( v11 )
LABEL_14:
      v6 = v5;
    if ( v6 != v5 )
    {
      v12 = (__int64 *)*((_QWORD *)this + 5);
      v13 = *v12;
      v14 = (_QWORD *)std::map<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>>::operator[]((int)v4);
      v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v13 + 144))(v12, *v14);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
          (const char *)(unsigned int)v15);
      std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
        v4,
        a2);
    }
  }
  return 0LL;
}
