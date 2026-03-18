/*
 * XREFs of DpQueryServices @ 0x1C0122080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpQueryServices(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 (__fastcall *v12)(); // rax
  __int64 (__fastcall *v13)(); // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = 0;
  v5 = (int)a2;
  if ( !a1
    || !a3
    || (v8 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(v8 + 16) != 1953656900
    || (a2 = 1LL, (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1) )
  {
    v4 = -1073741811;
LABEL_53:
    v18 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    return v4;
  }
  if ( KeGetCurrentIrql() )
  {
    v4 = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 40) + 28LL) >= 0x2003u )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, 1LL, v8);
      v14[3] = 275LL;
      v14[4] = 21LL;
      v14[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    goto LABEL_53;
  }
  v9 = (unsigned int)v5;
  if ( !(_DWORD)v5 )
  {
    if ( a3[1] != 1 )
      goto LABEL_48;
    if ( *a3 == 56 )
    {
      if ( !*(_QWORD *)(v8 + 680) )
      {
        v4 = -1073741823;
        v16 = WdLogNewEntry5_WdWarning((unsigned int)v5, 1LL, v8, a4);
        *(_QWORD *)(v16 + 24) = -1073741823LL;
        goto LABEL_36;
      }
      v10 = *(_QWORD *)(v8 + 24);
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 6) = DpiAgpSetAgpCommand;
      *((_QWORD *)a3 + 4) = &DpiAgpAllocatePool;
      v12 = DpiAgpFreePool;
LABEL_23:
      *((_QWORD *)a3 + 5) = v12;
      goto LABEL_16;
    }
LABEL_49:
    v4 = -1073741811;
    v15 = WdLogNewEntry5_WdWarning(v9, 1LL, v8, a4);
    v17 = *a3;
    goto LABEL_50;
  }
  v9 = (unsigned int)(v5 - 1);
  if ( (_DWORD)v5 == 1 )
  {
    if ( a3[1] != 1 )
      goto LABEL_48;
    if ( *a3 != 56 )
      goto LABEL_49;
    *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 4) = DpiDbgReportCreate;
    *((_QWORD *)a3 + 5) = DpiDbgReportSecondaryData;
    v13 = DpiDbgReportComplete;
    goto LABEL_27;
  }
  v9 = (unsigned int)(v5 - 2);
  if ( (_DWORD)v5 == 2 )
  {
    if ( a3[1] != 1 )
      goto LABEL_48;
    if ( *a3 != 56 )
      goto LABEL_49;
    *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 4) = TdrTimedOperationStart;
    *((_QWORD *)a3 + 5) = TdrTimedOperationDelay;
    v13 = (__int64 (__fastcall *)())TdrTimedOperationWaitForSingleObject;
LABEL_27:
    *((_QWORD *)a3 + 1) = 0LL;
    *((_QWORD *)a3 + 6) = v13;
    goto LABEL_17;
  }
  v9 = (unsigned int)(v5 - 3);
  if ( (_DWORD)v5 == 3 )
  {
    if ( a3[1] != 1 )
      goto LABEL_48;
    if ( *a3 == 72 )
    {
      v10 = *(_QWORD *)(v8 + 24);
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 4) = &DpOpenSpbResource;
      *((_QWORD *)a3 + 5) = DpCloseSpbResource;
      *((_QWORD *)a3 + 6) = &DpReadSpbResource;
      *((_QWORD *)a3 + 7) = &DpWriteSpbResource;
      *((_QWORD *)a3 + 8) = &DpSpbResourceIoControl;
      goto LABEL_16;
    }
    goto LABEL_49;
  }
  v9 = (unsigned int)(v5 - 4);
  if ( (_DWORD)v5 != 4 )
  {
    v9 = (unsigned int)(v5 - 5);
    if ( (_DWORD)v5 != 5 )
    {
      if ( (_DWORD)v5 != 6 )
      {
        v4 = -1073741811;
        v15 = WdLogNewEntry5_WdWarning(v9, 1LL, v8, a4);
        *(_QWORD *)(v15 + 24) = v5;
LABEL_37:
        WdLogEvent5_WdWarning(v15);
        return v4;
      }
      if ( *(_BYTE *)(v8 + 1143) )
      {
        if ( *a3 == 64 )
        {
          v10 = *(_QWORD *)(v8 + 24);
          *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
          *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
          *((_QWORD *)a3 + 4) = &DpiIndirectCbSendMessage;
          *((_QWORD *)a3 + 5) = DpiIndirectCbForceDisplaySwitch;
          *((_QWORD *)a3 + 6) = DpiIndirectCbDisableRenderD3Requests;
          *((_QWORD *)a3 + 7) = DpiIndirectCbNotifyCursorSupportChange;
          goto LABEL_16;
        }
        goto LABEL_49;
      }
      goto LABEL_35;
    }
    if ( a3[1] != 1 )
      goto LABEL_48;
    if ( *a3 == 48 )
    {
      v10 = *(_QWORD *)(v8 + 24);
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 4) = &DpiEnumSystemFirmwareTables;
      v12 = (__int64 (__fastcall *)())DpiReadSystemFirmwareTable;
      goto LABEL_23;
    }
    goto LABEL_49;
  }
  if ( !*(_BYTE *)(v8 + 1139) )
  {
LABEL_35:
    v4 = -1073741816;
    v16 = WdLogNewEntry5_WdWarning(v9, 1LL, v8, a4);
    *(_QWORD *)(v16 + 24) = a1;
LABEL_36:
    v15 = v16;
    goto LABEL_37;
  }
  if ( *a3 != 40 )
    goto LABEL_49;
  if ( a3[1] != 1 )
  {
LABEL_48:
    v4 = -1073741811;
    v15 = WdLogNewEntry5_WdWarning(v9, 1LL, v8, a4);
    v17 = a3[1];
LABEL_50:
    *(_QWORD *)(v15 + 24) = v17;
    goto LABEL_37;
  }
  v10 = *(_QWORD *)(v8 + 24);
  *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
  *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
  *((_QWORD *)a3 + 4) = DpGetPostDisplayInfoPlusEdid;
LABEL_16:
  *((_QWORD *)a3 + 1) = v10;
LABEL_17:
  WdpInterfaceReferenceNop();
  return v4;
}
