/*
 * XREFs of ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000BE24 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C1F8 (-WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0036900 (-WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0036A5C (-WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003709C (-WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00375F8 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00377AC (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0037A10 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0037DE0 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0037F70 (-WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

void __fastcall WriteDxgDiagnosticsEvent(struct _DXGK_DIAG_HEADER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = *(unsigned int *)a1;
  if ( (int)v4 <= 18 )
  {
    if ( (_DWORD)v4 == 18 )
    {
      WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE(a1);
      return;
    }
    if ( (_DWORD)v4 == 7 )
    {
LABEL_23:
      WriteDxgDiagnosticsEvent_QDC(a1);
      return;
    }
    if ( (int)v4 > 7 )
    {
      switch ( (_DWORD)v4 )
      {
        case 8:
          WriteDxgDiagnosticsEvent_MONITOR_MGR(a1);
          return;
        case 9:
          WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND(a1);
          return;
        case 0xA:
          goto LABEL_40;
      }
      if ( (int)v4 > 14 )
      {
        if ( (_DWORD)v4 == 15 )
        {
          WriteDxgDiagnosticsEvent_OUTPUTDUPL(a1);
          return;
        }
        if ( (_DWORD)v4 == 16 )
        {
          WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS(a1);
          return;
        }
      }
    }
    else if ( (_DWORD)v4 )
    {
      v6 = v4 - 1;
      if ( !v6 )
        goto LABEL_29;
      v7 = v6 - 1;
      if ( !v7 )
      {
        WriteDxgDiagnosticsEvent_HPD(a1);
        return;
      }
      v8 = v7 - 1;
      if ( !v8 )
      {
        WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN(a1);
        return;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        WriteDxgDiagnosticsEvent_USER_CDS(a1);
        return;
      }
      v4 = (unsigned int)(v9 - 1);
      if ( !(_DWORD)v4 )
      {
        WriteDxgDiagnosticsEvent_DRV_CDS(a1);
        return;
      }
      if ( (_DWORD)v4 == 1 )
      {
        WriteDxgDiagnosticsEvent_CODE_POINT(a1);
        return;
      }
    }
  }
  else
  {
    if ( (int)v4 <= 30 )
    {
      switch ( (_DWORD)v4 )
      {
        case 0x1E:
          WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(a1);
          return;
        case 0x16:
          goto LABEL_23;
        case 0x19:
          WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX(a1);
          return;
        case 0x13:
          WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START(a1);
          return;
      }
      if ( (_DWORD)v4 != 21 )
      {
        if ( (_DWORD)v4 != 23 )
        {
          if ( (_DWORD)v4 == 24 )
          {
            WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2(a1);
            return;
          }
          if ( (unsigned int)(v4 - 26) <= 3 )
          {
LABEL_40:
            v13 = WdLogNewEntry5_WdError(a1, v4);
            *(_QWORD *)(v13 + 24) = *(int *)a1;
            WdLogEvent5_WdError(v13);
            return;
          }
        }
        goto LABEL_55;
      }
LABEL_29:
      WriteDxgDiagnosticsEvent_SDC(a1);
      return;
    }
    v4 = (unsigned int)(v4 - 31);
    if ( (_DWORD)v4 )
    {
      v10 = v4 - 1;
      if ( !v10 )
      {
        WriteDxgDiagnosticsEvent_BML_PACKET(a1);
        return;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED(a1);
        return;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN(a1);
        return;
      }
      v4 = (unsigned int)(v12 - 1);
      if ( !(_DWORD)v4 )
      {
        WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS(a1);
        return;
      }
      if ( (_DWORD)v4 == 1 )
      {
        WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET(a1);
        return;
      }
    }
  }
LABEL_55:
  v14 = WdLogNewEntry5_WdAssertion(a1, v4, a3, a4);
  *(_QWORD *)(v14 + 24) = *(int *)a1;
  WdLogEvent5_WdAssertion(v14);
}
