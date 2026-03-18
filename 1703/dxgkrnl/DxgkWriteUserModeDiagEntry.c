/*
 * XREFs of DxgkWriteUserModeDiagEntry @ 0x1C017EADC
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C04C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWriteUserModeDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGGLOBAL *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  DXGDIAGNOSTICS *v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ebx
  _BYTE v20[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v21; // [rsp+28h] [rbp-20h]
  int v22; // [rsp+30h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp+8h]

  if ( *((_DWORD *)a1 + 1) < 0x400u )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
    v12 = Global;
    if ( Global )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)Global + 68, v10, v11);
      DXGPUSHLOCK::AcquireExclusive(v21);
      v22 = 2;
      CurrentProcess = PsGetCurrentProcess(v14);
      *((_OWORD *)a1 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
      *((_QWORD *)a1 + 4) = PsGetCurrentThreadId();
      v23 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)a1 + 1) = v23 * KeQueryTimeIncrement();
      v17 = (DXGDIAGNOSTICS *)*((_QWORD *)v12 + 72);
      if ( v17 )
      {
        v19 = DXGDIAGNOSTICS::WriteDiagnosticEntry(v17, a1);
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(0LL, v16);
        *(_QWORD *)(v18 + 24) = a1;
        *(_QWORD *)(v18 + 32) = v12;
        WdLogEvent5_WdError(v18);
        v19 = -1073741436;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
      return v19;
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v13 + 24) = a1;
      WdLogEvent5_WdError(v13);
      return 3221225860LL;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = *((unsigned int *)a1 + 1);
    *(_QWORD *)(v5 + 32) = 1024LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
