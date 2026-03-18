/*
 * XREFs of ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01A7BB0
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01A63F0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A6F60 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C01A7180 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A7650 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A74E8 (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1C01A7AB0 (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A7B00 (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

char __fastcall TdrUpdateDbgReport(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r10
  bool v9; // cl
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  if ( v2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 64LL);
    if ( *(_BYTE *)(v4 + 2559) || *(_BYTE *)(v4 + 2558) )
      return 0;
  }
  v6 = *((_QWORD *)a1 + 354);
  if ( !v6 || a2 )
  {
    TdrGetDbgOwnerTag(a1);
    TdrRetrieveSecondaryBucketingKey(a1, &v18);
    v9 = 0;
    if ( v7 )
      v9 = *(_QWORD *)(v7 + 2312) == 0LL;
    if ( *((_DWORD *)a1 + 4) == 6 )
      v10 = (unsigned int)(*((_BYTE *)a1 + 2820) != 0) + 321;
    else
      v10 = 279LL;
    if ( v7 )
      v11 = *(_QWORD *)(v7 + 192);
    else
      v11 = 0LL;
    v12 = WdDbgReportRecreate(v11, v10, a1, v8, v18, *((_QWORD *)a1 + 351), v9, v6);
    *((_QWORD *)a1 + 354) = v12;
    if ( !v12 )
    {
      *((_DWORD *)a1 + 29) |= 0x80000000;
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = a1;
LABEL_17:
      WdLogEvent5_WdError(v14);
      return 0;
    }
    if ( !(unsigned __int8)WdDbgReportQueryInfo(v12, (char *)a1 + 128) )
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = a1;
      WdLogEvent5_WdError(v16);
    }
  }
  if ( *((_QWORD *)a1 + 355) )
  {
    if ( *((_QWORD *)a1 + 356) )
    {
      TdrUpdateDbgBuffer(a1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(
                               *((_QWORD *)a1 + 354),
                               *((_QWORD *)a1 + 355),
                               *((unsigned int *)a1 + 712)) )
      {
        *((_DWORD *)a1 + 29) |= 0x80000000;
        v14 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v14 + 24) = a1;
        *(_QWORD *)(v14 + 32) = *((_QWORD *)a1 + 356);
        goto LABEL_17;
      }
    }
  }
  return 1;
}
