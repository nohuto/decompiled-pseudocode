/*
 * XREFs of ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C0211F38
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01996A0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C020FEC4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 */

__int64 __fastcall DmmCollectTdrDiagInfo(struct _TDR_RECOVERY_CONTEXT *a1, void *a2, size_t a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  size_t v20; // [rsp+50h] [rbp+18h] BYREF

  v20 = a3;
  v3 = 0;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  memset(a2, 0, 0x2000uLL);
  v9 = *((_QWORD *)a1 + 4);
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 2456);
    if ( !v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v12);
      v11 = *(_QWORD *)(v9 + 2456);
    }
    v13 = *(_QWORD *)(v11 + 88);
    if ( v13 )
    {
      v20 = 0LL;
      v15 = VIDPN_MGR::AcquireDiagInfo(v13, a2, 0x2000uLL, 1, 0LL, &v20);
      if ( v15 == -2147483643 )
      {
        v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v19 + 24) = 0x2000LL;
        *(_QWORD *)(v19 + 32) = v20;
        WdLogEvent5_WdWarning(v19);
        return 2147483653LL;
      }
      else
      {
        if ( v15 < 0 )
          return (unsigned int)v15;
        return v3;
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v14 + 24) = v9;
      WdLogEvent5_WdError(v14);
      return 3223192373LL;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdError(v10);
    return 3223191554LL;
  }
}
