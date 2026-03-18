/*
 * XREFs of ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C0211BE0
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01550C8 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024EF0 (--1-$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C020F214 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(struct ADAPTER_DISPLAY *const a1, struct VIDPN_MGR **a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  VIDPN_MGR *v7; // rax
  __int64 v8; // rcx
  VIDPN_MGR *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  VIDPN_MGR *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (VIDPN_MGR *)operator new[](0x200uLL, 0x4E506456u, (POOL_TYPE)512);
  if ( v7 )
    v9 = VIDPN_MGR::VIDPN_MGR(v7, a1);
  else
    v9 = 0LL;
  v14 = v9;
  if ( v9 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v9 + 2))((__int64)v9 + 16) )
    {
      v14 = 0LL;
      *a2 = v9;
    }
    else
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v11);
      v12[3] = v9;
      v12[4] = a1;
      v12[5] = *((int *)v9 + 14);
      WdLogEvent5_WdDmmEvent(v12);
      v2 = *((_DWORD *)v9 + 14);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdLowResource(v10);
    v2 = -1073741801;
  }
  auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>((__int64 (__fastcall ****)(_QWORD, __int64))&v14);
  return v2;
}
