/*
 * XREFs of ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C01EBD30
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01EA0A8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x1C01EE958 (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
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
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_QWORD *)a1 + 288);
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
    goto LABEL_18;
  v12 = (char *)operator new(0x2CuLL, 0x4E506456u, PagedPool);
  if ( v12 )
  {
    operator delete(0LL);
    if ( *(_DWORD *)a2 == 10 )
    {
      *(_DWORD *)v12 = *((_DWORD *)a2 + 6);
    }
    else
    {
      if ( *(_DWORD *)a2 != 11 )
      {
        v16 = WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)a2 - 10));
        *(_QWORD *)(v16 + 24) = *(int *)a2;
        WdLogEvent5_WdError(v16);
        v15 = -1073741811;
        goto LABEL_22;
      }
      *(_DWORD *)v12 = *((_DWORD *)a2 + 6);
      *(_OWORD *)(v12 + 4) = *(_OWORD *)((char *)a2 + 28);
      *(_OWORD *)(v12 + 20) = *(_OWORD *)((char *)a2 + 44);
      *(_QWORD *)(v12 + 36) = *(_QWORD *)((char *)a2 + 60);
    }
LABEL_18:
    v17 = VIDPN_MGR::MapEscapeCodeToDiagInfoType(*(unsigned int *)a2);
    v18 = VIDPN_MGR::AcquireDiagInfo(v9, (char *)a2 + 24, *((_QWORD *)a2 + 1), v17, (int *)v12, (size_t *)a2 + 2);
    v15 = v18;
    if ( v18 == -2147483643 )
    {
      v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v22 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v22 + 32) = *(int *)a2;
      WdLogEvent5_WdWarning(v22);
      v15 = 1075707914;
    }
    else if ( v18 >= 0 )
    {
      v23 = WdLogNewEntry5_WdTrace(v20, v19);
      v15 = 0;
      *(_QWORD *)(v23 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v23 + 32) = *(int *)a2;
    }
    goto LABEL_22;
  }
  v14 = WdLogNewEntry5_WdLowResource(v13);
  *(_QWORD *)(v14 + 24) = 44LL;
  WdLogEvent5_WdLowResource(v14);
  v15 = -1073741801;
LABEL_22:
  operator delete(v12);
  return v15;
}
