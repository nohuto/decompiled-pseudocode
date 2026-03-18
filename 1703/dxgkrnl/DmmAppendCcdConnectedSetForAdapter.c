/*
 * XREFs of DmmAppendCcdConnectedSetForAdapter @ 0x1C00AF490
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_ @ 0x1C009F490 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1C00048CC (RtlStringCchLengthW.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C00AF60C (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, unsigned __int16 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  unsigned int v17; // ebp
  __int64 v18; // r15
  __int64 v19; // rcx
  const wchar_t *v21; // r13
  unsigned __int64 v22; // r12
  int CCDMonitorID; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  size_t pcchLength; // [rsp+60h] [rbp+8h] BYREF
  __int64 v29; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v8) = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v25);
  }
  v9 = *((_QWORD *)a1 + 285);
  if ( !v9 )
    return 0LL;
  v10 = *(_QWORD *)(v9 + 88);
  if ( !v10 )
  {
    v26 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v26 + 24) = a1;
    WdLogEvent5_WdError(v26);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v29, v10, v6, v7);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 80) + 72LL));
  v14 = *(_QWORD *)(v10 + 80);
  v15 = *(_QWORD *)(v14 + 24);
  if ( v15 == v14 + 24 )
    goto LABEL_13;
  v16 = v15 - 8;
  if ( !v16 )
    goto LABEL_13;
  v17 = -1073741789;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v16 + 404) )
    {
      v18 = *(_QWORD *)(v16 + 104);
      if ( v18 )
        break;
    }
LABEL_10:
    v19 = *(_QWORD *)(v16 + 8);
    v16 = v19 - 8;
    if ( v19 == v14 + 24 )
      v16 = 0LL;
    if ( !v16 )
      goto LABEL_13;
  }
  v11 = *a2;
  v12 = a2[1];
  if ( (unsigned __int16)v11 >= (unsigned __int16)v12 )
    goto LABEL_14;
  v21 = (const wchar_t *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v11 >> 1));
  v22 = (unsigned __int64)((unsigned __int16)v12 - (unsigned __int16)v11) >> 1;
  CCDMonitorID = MonitorGetCCDMonitorID(*(_QWORD *)(v16 + 104), (unsigned int)v22, v21);
  v8 = CCDMonitorID;
  if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
    goto LABEL_14;
  if ( CCDMonitorID >= 0 )
  {
    RtlStringCchLengthW(v21, (unsigned int)v22, &pcchLength);
    v12 = (unsigned __int16)pcchLength;
    LOWORD(v12) = 2 * pcchLength;
    *a2 += 2 * pcchLength;
    if ( *a2 >= a2[1] )
      goto LABEL_14;
    v11 = 94LL;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 94;
    *a2 += 2;
    LODWORD(v8) = 0;
    goto LABEL_10;
  }
  v27 = WdLogNewEntry5_WdWarning(v24, v11, v12, v13);
  *(_QWORD *)(v27 + 24) = v18;
  *(_QWORD *)(v27 + 32) = v8;
  WdLogEvent5_WdWarning(v27);
LABEL_13:
  v17 = v8;
LABEL_14:
  if ( v14 )
    ReferenceCounted::Release((ReferenceCounted *)(v14 + 64), v11);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40), v11, v12, v13);
  return v17;
}
