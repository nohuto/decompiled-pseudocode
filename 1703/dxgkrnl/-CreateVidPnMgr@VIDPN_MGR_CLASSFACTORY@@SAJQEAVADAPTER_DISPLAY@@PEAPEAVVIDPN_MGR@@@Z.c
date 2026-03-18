/*
 * XREFs of ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C0118708
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0117980 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0114098 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(
        struct ADAPTER_DISPLAY *const a1,
        struct VIDPN_MGR **a2,
        __int64 a3,
        __int64 a4)
{
  VIDPN_MGR *v6; // rax
  __int64 v7; // rcx
  VIDPN_MGR *v8; // rdi
  VIDPN_MGR *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax

  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  v6 = (VIDPN_MGR *)operator new(0x1F8uLL, 0x4E506456u, (POOL_TYPE)512);
  if ( v6 )
    v8 = VIDPN_MGR::VIDPN_MGR(v6, a1);
  else
    v8 = 0LL;
  v9 = v8;
  if ( v8 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v8 + 2))((__int64)v8 + 16) )
    {
      v9 = 0LL;
      *a2 = v8;
      v14 = 0;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v11, v10, v12, v13);
      v19[3] = v8;
      v19[4] = a1;
      v19[5] = *((int *)v8 + 14);
      WdLogEvent5_WdDmmEvent(v19);
      v14 = *((_DWORD *)v8 + 14);
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdLowResource(v18);
    v14 = -1073741801;
  }
  if ( v9 )
    (**(void (__fastcall ***)(VIDPN_MGR *, __int64))v9)(v9, 1LL);
  return v14;
}
