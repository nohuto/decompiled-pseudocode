/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0006A54
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00A790C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000EBF0 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00A50B0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
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
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // xmm0_8
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  int v21; // ecx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  _QWORD v24[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v24[0] = 0LL;
  v9 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v9 )
    v11 = DMMVIDPN::DMMVIDPN(v9, a2);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v18 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v18 + 24) = 320LL;
    *(_QWORD *)(v18 + 32) = a2;
LABEL_15:
    WdLogEvent5_WdLowResource(v18);
    v4 = -1073741801;
    goto LABEL_9;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v11 + 9))((__int64)v11 + 72) )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v19[3] = v11;
    v19[4] = a2;
    v19[5] = *((int *)v11 + 20);
    WdLogEvent5_WdError(v19);
    v4 = *((_DWORD *)v11 + 20);
    goto LABEL_9;
  }
  auto_rc<DMMVIDPN>::reset(v24, v11);
  v13 = operator new(0x48uLL, 0x4E506456u, PagedPool);
  v15 = v13;
  if ( v13 )
  {
    v16 = *(_QWORD *)a4;
    v14 = *((unsigned int *)a4 + 2);
    v13[1] = 0LL;
    v13[2] = 0LL;
    *((_DWORD *)v13 + 10) = 1833173016;
    *v13 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
    v13[3] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
    v13[4] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
    v13[6] = v24[0];
    *(_QWORD *)((char *)v13 + 60) = v16;
    *((_DWORD *)v13 + 17) = v14;
    *((_DWORD *)v13 + 14) = v5;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14);
    v21 = *(_DWORD *)a4;
    v22 = v20;
    v20[3] = 72LL;
    v20[4] = a2;
    v20[5] = v21 << 28 >> 28;
    v23 = (char)v21 >> 4;
    v18 = (__int64)v22;
    v22[7] = v23;
    v22[6] = v5;
    goto LABEL_15;
  }
  v24[0] = 0LL;
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::Enqueue((char *)this + 152);
LABEL_9:
  auto_rc<DMMVIDPN>::reset(v24, 0LL);
  return v4;
}
