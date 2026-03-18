/*
 * XREFs of DpQueryServices @ 0x1C01EDED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpQueryServices(__int64 a1, unsigned int a2, unsigned __int16 *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(); // rax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(struct _DXGK_TIMED_OPERATION *, PVOID, KWAIT_REASON, KPROCESSOR_MODE, BOOLEAN, __int64 *); // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v3 = 0;
  v4 = (int)a2;
  if ( !a1
    || !a3
    || (v7 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(v7 + 16) != 1953656900
    || (unsigned int)(*(_DWORD *)(v7 + 20) - 2) > 1 )
  {
    v3 = -1073741811;
LABEL_52:
    v16 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return v3;
  }
  if ( KeGetCurrentIrql() )
  {
    v3 = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 40) + 28LL) >= 0x2003u )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
      v8[3] = 275LL;
      v8[4] = 21LL;
      v8[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v8);
    }
    goto LABEL_52;
  }
  v9 = a2;
  if ( !a2 )
  {
    if ( a3[1] == 1 )
    {
      if ( *a3 == 56 )
      {
        if ( !*(_QWORD *)(v7 + 680) )
        {
          v3 = -1073741823;
          v13 = WdLogNewEntry5_WdWarning(a2, 1LL, v7);
          *(_QWORD *)(v13 + 24) = -1073741823LL;
          goto LABEL_46;
        }
        v11 = *(_QWORD *)(v7 + 24);
        *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 6) = DpiAgpSetAgpCommand;
        *((_QWORD *)a3 + 4) = &DpiAgpAllocatePool;
        v12 = DpiAgpFreePool;
LABEL_48:
        *((_QWORD *)a3 + 5) = v12;
        goto LABEL_49;
      }
LABEL_43:
      v3 = -1073741811;
      v10 = WdLogNewEntry5_WdWarning(v9, 1LL, v7);
      v15 = *a3;
      goto LABEL_40;
    }
LABEL_39:
    v3 = -1073741811;
    v10 = WdLogNewEntry5_WdWarning(v9, 1LL, v7);
    v15 = a3[1];
LABEL_40:
    *(_QWORD *)(v10 + 24) = v15;
    goto LABEL_41;
  }
  v9 = a2 - 1;
  if ( a2 == 1 )
  {
    if ( a3[1] != 1 )
      goto LABEL_39;
    if ( *a3 != 56 )
      goto LABEL_43;
    *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 4) = DpiDbgReportCreate;
    *((_QWORD *)a3 + 5) = DpiDbgReportSecondaryData;
    v14 = (__int64 (__fastcall *)(struct _DXGK_TIMED_OPERATION *, PVOID, KWAIT_REASON, KPROCESSOR_MODE, BOOLEAN, __int64 *))DpiDbgReportComplete;
    goto LABEL_37;
  }
  v9 = a2 - 2;
  if ( a2 == 2 )
  {
    if ( a3[1] != 1 )
      goto LABEL_39;
    if ( *a3 != 56 )
      goto LABEL_43;
    *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 4) = TdrTimedOperationStart;
    *((_QWORD *)a3 + 5) = TdrTimedOperationDelay;
    v14 = TdrTimedOperationWaitForSingleObject;
LABEL_37:
    *((_QWORD *)a3 + 1) = 0LL;
    v11 = 0LL;
    *((_QWORD *)a3 + 6) = v14;
LABEL_50:
    WdpInterfaceReferenceNop(v11);
    return v3;
  }
  v9 = a2 - 3;
  if ( a2 == 3 )
  {
    if ( a3[1] == 1 )
    {
      if ( *a3 == 72 )
      {
        v11 = *(_QWORD *)(v7 + 24);
        *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 4) = &DpOpenSpbResource;
        *((_QWORD *)a3 + 5) = DpCloseSpbResource;
        *((_QWORD *)a3 + 6) = &DpReadSpbResource;
        *((_QWORD *)a3 + 7) = &DpWriteSpbResource;
        *((_QWORD *)a3 + 8) = &DpSpbResourceIoControl;
        goto LABEL_49;
      }
      goto LABEL_43;
    }
    goto LABEL_39;
  }
  v9 = a2 - 4;
  if ( a2 == 4 )
  {
    if ( !*(_BYTE *)(v7 + 1139) )
    {
LABEL_24:
      v3 = -1073741816;
      v13 = WdLogNewEntry5_WdWarning(v9, 1LL, v7);
      *(_QWORD *)(v13 + 24) = a1;
LABEL_46:
      v10 = v13;
      goto LABEL_41;
    }
    if ( *a3 != 40 )
      goto LABEL_43;
    if ( a3[1] == 1 )
    {
      v11 = *(_QWORD *)(v7 + 24);
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 4) = DpGetPostDisplayInfoPlusEdid;
      goto LABEL_49;
    }
    goto LABEL_39;
  }
  v9 = a2 - 5;
  if ( a2 == 5 )
  {
    if ( a3[1] == 1 )
    {
      if ( *a3 == 48 )
      {
        v11 = *(_QWORD *)(v7 + 24);
        *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 4) = &DpiEnumSystemFirmwareTables;
        v12 = (__int64 (__fastcall *)())DpiReadSystemFirmwareTable;
        goto LABEL_48;
      }
      goto LABEL_43;
    }
    goto LABEL_39;
  }
  if ( a2 == 6 )
  {
    if ( *(_BYTE *)(v7 + 1143) )
    {
      if ( *a3 == 80 )
      {
        v11 = *(_QWORD *)(v7 + 24);
        *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 4) = &DpiIndirectCbSendMessage;
        *((_QWORD *)a3 + 5) = DpiIndirectCbForceDisplaySwitch;
        *((_QWORD *)a3 + 6) = DpiIndirectCbDisableRenderD3Requests;
        *((_QWORD *)a3 + 7) = DpiIndirectCbNotifyCursorSupportChange;
        *((_QWORD *)a3 + 8) = DpiIndirectCbOpmSetSrmList;
        *((_QWORD *)a3 + 9) = DpiIndirectCbOpmGetSrmListVersion;
LABEL_49:
        *((_QWORD *)a3 + 1) = v11;
        goto LABEL_50;
      }
      goto LABEL_43;
    }
    goto LABEL_24;
  }
  v3 = -1073741811;
  v10 = WdLogNewEntry5_WdWarning(v9, 1LL, v7);
  *(_QWORD *)(v10 + 24) = v4;
LABEL_41:
  WdLogEvent5_WdWarning(v10);
  return v3;
}
