/*
 * XREFs of ?DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01EBAEC
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C01A4544 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C01EE780 (-GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z.c)
 */

__int64 __fastcall DmmDRTTest(struct DXGADAPTER *const this, struct _D3DKMT_DRT_ESCAPE_HEAD *const a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  VIDPN_MGR *v15; // rsi
  __int64 v16; // rax
  int VidPnPathHwCapabilityInClientVidPn; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  if ( *((_DWORD *)a2 + 1) < 0x18u )
  {
    v7 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = *((unsigned int *)a2 + 1);
LABEL_5:
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)this + 288);
  if ( v13 )
  {
    v15 = *(VIDPN_MGR **)(v13 + 88);
    if ( v15 )
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v7 = WdLogNewEntry5_WdWarning(v10, v9, v11);
        *(_QWORD *)(v7 + 24) = *((int *)a2 + 3);
        *(_QWORD *)(v7 + 32) = this;
        goto LABEL_5;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, *(_QWORD *)(v13 + 88));
      VidPnPathHwCapabilityInClientVidPn = VIDPN_MGR::GetVidPnPathHwCapabilityInClientVidPn(
                                             v15,
                                             *((_DWORD *)a2 + 4),
                                             (struct _D3DKMDT_VIDPN_HW_CAPABILITY *)a2 + 5);
      v21 = VidPnPathHwCapabilityInClientVidPn;
      if ( VidPnPathHwCapabilityInClientVidPn == -1073741637 )
      {
        v22 = WdLogNewEntry5_WdDmmEvent(v19);
        *(_QWORD *)(v22 + 24) = this;
        WdLogEvent5_WdDmmEvent(v22);
      }
      else if ( VidPnPathHwCapabilityInClientVidPn == -1071774937 )
      {
        v23 = WdLogNewEntry5_WdWarning(v19, v18, v20);
        *(_QWORD *)(v23 + 24) = *((unsigned int *)a2 + 4);
        *(_QWORD *)(v23 + 32) = this;
        WdLogEvent5_WdWarning(v23);
      }
      else if ( VidPnPathHwCapabilityInClientVidPn < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v24 + 24) = this;
        *(_QWORD *)(v24 + 32) = v21;
        WdLogEvent5_WdError(v24);
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
      return (unsigned int)v21;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v16 + 24) = this;
      WdLogEvent5_WdError(v16);
      return 3223192373LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3223191554LL;
  }
}
