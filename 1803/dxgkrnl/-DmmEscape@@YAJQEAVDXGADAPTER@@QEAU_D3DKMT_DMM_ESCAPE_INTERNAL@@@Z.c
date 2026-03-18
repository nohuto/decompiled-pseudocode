/*
 * XREFs of ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C0212560
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C020FEC4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x1C02159E8 (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
 */

__int64 __fastcall DmmEscape(struct DXGADAPTER *const a1, struct _D3DKMT_DMM_ESCAPE_INTERNAL *const a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // eax
  char *v12; // rbx
  char *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_QWORD *)a1 + 307);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v7 + 24) = a1;
    WdLogEvent5_WdError(v7);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v6 + 88);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3223192373LL;
  }
  v11 = *(_DWORD *)a2;
  v12 = 0LL;
  if ( *(int *)a2 > 0 && (v11 <= 9 || (unsigned int)(v11 - 12) <= 2) )
  {
    v13 = (char *)a2 + 24;
    goto LABEL_19;
  }
  v12 = (char *)operator new[](0x2CuLL, 0x4E506456u, PagedPool);
  if ( v12 )
  {
    operator delete(0LL);
    if ( *(_DWORD *)a2 == 10 )
    {
      v13 = (char *)a2 + 24;
      *(_DWORD *)v12 = *((_DWORD *)a2 + 6);
    }
    else
    {
      if ( *(_DWORD *)a2 != 11 )
      {
        v17 = WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)a2 - 10));
        *(_QWORD *)(v17 + 24) = *(int *)a2;
        WdLogEvent5_WdError(v17);
        v16 = -1073741811;
        goto LABEL_23;
      }
      v13 = (char *)a2 + 24;
      *(_DWORD *)v12 = *((_DWORD *)a2 + 6);
      *(_OWORD *)(v12 + 4) = *(_OWORD *)((char *)a2 + 28);
      *(_OWORD *)(v12 + 20) = *(_OWORD *)((char *)a2 + 44);
      *(_QWORD *)(v12 + 36) = *(_QWORD *)((char *)a2 + 60);
    }
LABEL_19:
    v18 = VIDPN_MGR::MapEscapeCodeToDiagInfoType(*(unsigned int *)a2);
    v19 = VIDPN_MGR::AcquireDiagInfo(v9, v13, *((_QWORD *)a2 + 1), v18, (int *)v12, (size_t *)a2 + 2);
    v16 = v19;
    if ( v19 == -2147483643 )
    {
      v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v24 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v24 + 32) = *(int *)a2;
      WdLogEvent5_WdWarning(v24);
      v16 = 1075707914;
    }
    else if ( v19 >= 0 )
    {
      v25 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
      v16 = 0;
      *(_QWORD *)(v25 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v25 + 32) = *(int *)a2;
    }
    goto LABEL_23;
  }
  v15 = WdLogNewEntry5_WdLowResource(v14);
  *(_QWORD *)(v15 + 24) = 44LL;
  WdLogEvent5_WdLowResource(v15);
  v16 = -1073741801;
LABEL_23:
  operator delete(v12);
  return v16;
}
