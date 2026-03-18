/*
 * XREFs of ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D92D4
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_ @ 0x1C00B5DA0 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     RtlStringCchLengthW @ 0x1C000BCF8 (RtlStringCchLengthW.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     MonitorGetCCDMonitorID @ 0x1C00D8C78 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // r15
  __int64 v13; // rcx
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  int v15; // ebx
  unsigned __int16 Length; // dx
  unsigned __int16 MaximumLength; // r8
  unsigned __int16 *v19; // r13
  unsigned __int64 v20; // r12
  int CCDMonitorID; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  size_t pcchLength; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+70h] [rbp+18h] BYREF
  __int64 v31; // [rsp+78h] [rbp+20h]

  LODWORD(v5) = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v25);
  }
  v6 = *((_QWORD *)a1 + 288);
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(v6 + 88);
  if ( !v7 )
  {
    v26 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v26 + 24) = a1;
    WdLogEvent5_WdError(v26);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v30, v7);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 80) + 72LL));
  v8 = *(_QWORD *)(v7 + 80);
  v31 = v8;
  v9 = *(_QWORD *)(v8 + 24);
  if ( v9 == v8 + 24 )
    goto LABEL_13;
  v10 = v9 - 8;
  if ( !v10 )
    goto LABEL_13;
  v11 = -1073741789;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v10 + 404) )
    {
      v12 = *(_QWORD *)(v10 + 104);
      if ( v12 )
        break;
    }
LABEL_10:
    v13 = *(_QWORD *)(v10 + 8);
    v10 = v13 - 8;
    if ( v13 == v8 + 24 )
      v10 = 0LL;
    if ( !v10 )
      goto LABEL_13;
  }
  Length = a2->Length;
  MaximumLength = a2->MaximumLength;
  if ( a2->Length >= MaximumLength )
    goto LABEL_14;
  v19 = &a2->Buffer[(unsigned __int64)Length >> 1];
  v20 = (unsigned __int64)(MaximumLength - Length) >> 1;
  CCDMonitorID = MonitorGetCCDMonitorID(*(struct HDXGMONITOR__ **)(v10 + 104), v20, v19);
  v5 = CCDMonitorID;
  if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
    goto LABEL_14;
  if ( CCDMonitorID >= 0 )
  {
    RtlStringCchLengthW(v19, (unsigned int)v20, &pcchLength);
    a2->Length += 2 * pcchLength;
    if ( a2->Length >= a2->MaximumLength )
      goto LABEL_14;
    a2->Buffer[(unsigned __int64)a2->Length >> 1] = 94;
    a2->Length += 2;
    LODWORD(v5) = 0;
    goto LABEL_10;
  }
  v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
  *(_QWORD *)(v27 + 24) = v12;
  *(_QWORD *)(v27 + 32) = v5;
  WdLogEvent5_WdWarning(v27);
LABEL_13:
  v11 = v5;
LABEL_14:
  if ( v8 )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(v8 + 64);
    v15 = _InterlockedDecrement((volatile signed __int32 *)(v8 + 72));
    if ( v15 )
    {
      if ( v15 < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v28 + 24) = v15;
        WdLogEvent5_WdError(v28);
      }
    }
    else if ( v14 )
    {
      (**v14)(v14, 1LL);
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v30 + 40));
  return v11;
}
