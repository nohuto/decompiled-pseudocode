/*
 * XREFs of DmmEscape @ 0x1C01D4DD0
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x1C01D2E30 (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
 */

__int64 __fastcall DmmEscape(DXGADAPTER *a1, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // eax
  char *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)a1 + 285);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3223191554LL;
  }
  v12 = *(_QWORD *)(v9 + 88);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
  v14 = *a2;
  v15 = 0LL;
  if ( *a2 > 0 && (v14 <= 9 || (unsigned int)(v14 - 12) <= 2) )
    goto LABEL_18;
  v15 = (char *)operator new(0x2CuLL, 0x4E506456u, PagedPool);
  if ( v15 )
  {
    operator delete(0LL);
    if ( *a2 == 10 )
    {
      *(_DWORD *)v15 = a2[6];
    }
    else
    {
      if ( *a2 != 11 )
      {
        v19 = WdLogNewEntry5_WdError((unsigned int)(*a2 - 10), v4);
        *(_QWORD *)(v19 + 24) = *a2;
        WdLogEvent5_WdError(v19);
        v18 = -1073741811;
        goto LABEL_22;
      }
      *(_DWORD *)v15 = a2[6];
      *(_OWORD *)(v15 + 4) = *(_OWORD *)(a2 + 7);
      *(_OWORD *)(v15 + 20) = *(_OWORD *)(a2 + 11);
      *(_QWORD *)(v15 + 36) = *(_QWORD *)(a2 + 15);
    }
LABEL_18:
    v20 = VIDPN_MGR::MapEscapeCodeToDiagInfoType((unsigned int)*a2, v4);
    v21 = VIDPN_MGR::AcquireDiagInfo(v12, a2 + 6, *((_QWORD *)a2 + 1), v20, (int *)v15, (size_t *)a2 + 2);
    v18 = v21;
    if ( v21 == -2147483643 )
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v26 + 32) = *a2;
      WdLogEvent5_WdWarning(v26);
      v18 = 1075707914;
    }
    else if ( v21 >= 0 )
    {
      v27 = WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
      v18 = 0;
      *(_QWORD *)(v27 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v27 + 32) = *a2;
    }
    goto LABEL_22;
  }
  v17 = WdLogNewEntry5_WdLowResource(v16);
  *(_QWORD *)(v17 + 24) = 44LL;
  WdLogEvent5_WdLowResource(v17);
  v18 = -1073741801;
LABEL_22:
  operator delete(v15);
  return v18;
}
