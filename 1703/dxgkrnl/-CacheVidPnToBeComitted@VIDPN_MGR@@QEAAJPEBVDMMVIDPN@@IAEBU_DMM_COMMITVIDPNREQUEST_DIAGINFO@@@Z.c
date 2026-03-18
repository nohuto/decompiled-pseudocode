/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C000A9CC
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00E399C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C0002B04 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00DEC70 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheVidPnToBeComitted(
        VIDPN_MGR *this,
        const struct DMMVIDPN *a2,
        unsigned int a3,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  DMMVIDPN *v9; // rax
  __int64 v10; // rcx
  DMMVIDPN *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // xmm0_8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  int v22; // ecx
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v25[0] = 0LL;
  v9 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v9 )
    v11 = DMMVIDPN::DMMVIDPN(v9, a2);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v19 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v19 + 24) = 320LL;
    *(_QWORD *)(v19 + 32) = a2;
LABEL_15:
    WdLogEvent5_WdLowResource(v19);
    v4 = -1073741801;
    goto LABEL_9;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v11 + 9))((__int64)v11 + 72) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v20[3] = v11;
    v20[4] = a2;
    v20[5] = *((int *)v11 + 20);
    WdLogEvent5_WdError(v20);
    v4 = *((_DWORD *)v11 + 20);
    goto LABEL_9;
  }
  auto_rc<DMMVIDPN>::reset(v25, (__int64)v11);
  v14 = operator new(0x48uLL, 0x4E506456u, PagedPool);
  v16 = v14;
  if ( v14 )
  {
    v17 = *(_QWORD *)a4;
    v15 = *((unsigned int *)a4 + 2);
    v14[1] = 0LL;
    v14[2] = 0LL;
    *((_DWORD *)v14 + 10) = 1833173016;
    *v14 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
    v14[3] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
    v14[4] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
    v14[6] = v25[0];
    *(_QWORD *)((char *)v14 + 60) = v17;
    *((_DWORD *)v14 + 17) = v15;
    *((_DWORD *)v14 + 14) = v5;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v15);
    v22 = *(_DWORD *)a4;
    v23 = v21;
    v21[3] = 72LL;
    v21[4] = a2;
    v21[5] = v22 << 28 >> 28;
    v24 = (char)v22 >> 4;
    v19 = (__int64)v23;
    v23[7] = v24;
    v23[6] = v5;
    goto LABEL_15;
  }
  v25[0] = 0LL;
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::Enqueue((_QWORD *)this + 19, v16);
LABEL_9:
  auto_rc<DMMVIDPN>::reset(v25, 0LL);
  return v4;
}
