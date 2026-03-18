/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00442EC
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0211648 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024EF0 (--1-$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0044668 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00BC9A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
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
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // xmm0_8
  _QWORD *v19; // rax
  int v20; // ecx
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, __int64); // [rsp+28h] [rbp-20h] BYREF

  v4 = 0;
  v5 = a3;
  v22 = 0LL;
  v9 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v9 )
    v11 = DMMVIDPN::DMMVIDPN(v9, a2);
  else
    v11 = 0LL;
  if ( v11 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v11 + 9))((__int64)v11 + 72) )
    {
      auto_rc<DMMVIDPN>::reset(&v22, (__int64)v11);
      v23 = 0LL;
      v15 = operator new[](0x48uLL, 0x4E506456u, PagedPool);
      v17 = v15;
      if ( v15 )
      {
        v18 = *(_QWORD *)a4;
        v16 = *((unsigned int *)a4 + 2);
        v15[1] = 0LL;
        v15[2] = 0LL;
        *((_DWORD *)v15 + 10) = 1833173016;
        *v15 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
        v15[3] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
        v15[4] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
        v15[6] = v22;
        *(_QWORD *)((char *)v15 + 60) = v18;
        *((_DWORD *)v15 + 17) = v16;
        *((_DWORD *)v15 + 14) = v5;
      }
      else
      {
        v17 = 0LL;
      }
      if ( v17 )
      {
        v22 = 0LL;
        v23 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue((char *)this + 152, v17);
      }
      else
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v16);
        v20 = *(_DWORD *)a4;
        v19[3] = 72LL;
        v19[4] = a2;
        v19[5] = v20 << 28 >> 28;
        v19[7] = (char)v20 >> 4;
        v19[6] = v5;
        WdLogEvent5_WdLowResource(v19);
        v4 = -1073741801;
      }
      auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>(&v23);
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v14[3] = v11;
      v14[4] = a2;
      v14[5] = *((int *)v11 + 20);
      WdLogEvent5_WdError(v14);
      v4 = *((_DWORD *)v11 + 20);
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v12 + 24) = 320LL;
    *(_QWORD *)(v12 + 32) = a2;
    WdLogEvent5_WdLowResource(v12);
    v4 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v22, 0LL);
  return v4;
}
