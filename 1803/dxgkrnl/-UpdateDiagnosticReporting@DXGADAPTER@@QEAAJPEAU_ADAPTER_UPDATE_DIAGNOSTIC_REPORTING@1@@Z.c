/*
 * XREFs of ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C01500B4
 * Callers:
 *     ?UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0030880 (-UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C014AE90 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z @ 0x1C015DAC4 (-DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z.c)
 *     ?DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z @ 0x1C01608B4 (-DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::UpdateDiagnosticReporting(DXGADAPTER *this, UINT *a2)
{
  __int64 v2; // rsi
  UINT v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 Value; // rcx
  _QWORD *v12; // rax
  UINT v13; // edi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  struct _DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT v20; // [rsp+20h] [rbp-20h] BYREF

  LODWORD(v2) = 0;
  if ( *((_DWORD *)this + 1048) < *((_DWORD *)this + 1049) )
  {
    *(_QWORD *)&v20.DiagnosticCategory.0 = 0LL;
    v20.InvasiveTypes.Notifications.Value = 0;
    v5 = *a2;
    *((_DWORD *)this + 1049) = 0;
    v20.DiagnosticCategory.Value = v5;
    v6 = DXGADAPTER::DdiQueryDiagnosticTypesSupport(this, &v20);
    v2 = v6;
    if ( v6 < 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
      v12[3] = v20.DiagnosticCategory.Value;
      v12[4] = v2;
      v12[5] = 3LL;
      WdLogEvent5_WdWarning(v12);
      goto LABEL_10;
    }
    if ( ((v20.NoninvasiveTypes.Notifications.Value | v20.InvasiveTypes.Notifications.Value) & a2[2]) != 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v10[3] = v20.DiagnosticCategory.Value;
      v10[4] = v20.NoninvasiveTypes.Notifications.Value;
      Value = v20.InvasiveTypes.Notifications.Value;
      v10[6] = 2LL;
    }
    else
    {
      if ( (v20.NoninvasiveTypes.Notifications.Value & v20.InvasiveTypes.Notifications.Value) == 0 )
      {
        *((_DWORD *)this + 1048) = v20.NoninvasiveTypes.Notifications.Value | v20.InvasiveTypes.Notifications.Value;
        goto LABEL_10;
      }
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v10[3] = v20.DiagnosticCategory.Value;
      v10[4] = v20.NoninvasiveTypes.Notifications.Value;
      Value = v20.InvasiveTypes.Notifications.Value;
      v10[6] = 1LL;
    }
    v10[5] = Value;
    WdLogEvent5_WdError(v10);
  }
LABEL_10:
  v13 = a2[1] & *((_DWORD *)this + 1048);
  if ( *((_DWORD *)this + 1048) && *((_DWORD *)this + 1049) != v13 )
  {
    v20.DiagnosticCategory.Value = *(_QWORD *)a2;
    v20.NoninvasiveTypes.Notifications.Value = v13;
    v14 = DXGADAPTER::DdiControlDiagnosticReporting(this, (struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *)&v20);
    v2 = v14;
    if ( v14 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      v18[3] = *a2;
      v18[4] = a2[1];
      v18[5] = v2;
      v18[6] = 4LL;
      WdLogEvent5_WdWarning(v18);
    }
    else
    {
      *((_DWORD *)this + 1049) = v13;
    }
  }
  return (unsigned int)v2;
}
