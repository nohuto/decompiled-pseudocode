/*
 * XREFs of ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0194584
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0036810 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall GetDiagnosticsBuffer(struct _D3DKMT_DXGK_DIAGNOSTICS *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int Diagnostics; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGGLOBAL *v14; // rbx
  __int64 v15; // rdx
  DXGDIAGNOSTICS *v16; // rcx
  __int64 v17; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-29h] BYREF
  DXGPUSHLOCK *v20; // [rsp+28h] [rbp-21h]
  int v21; // [rsp+30h] [rbp-19h]
  _QWORD v22[8]; // [rsp+40h] [rbp-9h] BYREF

  v4 = a3;
  Diagnostics = -1073741811;
  if ( (unsigned int)a2 >= 4 )
  {
    v7 = *(unsigned int *)a1 + 4LL;
    if ( (unsigned int)a2 == v7 )
    {
      if ( (_DWORD)a3 )
      {
        memset(v22, 0, sizeof(v22));
        v22[7] = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime((PLARGE_INTEGER)&v22[7], (PLARGE_INTEGER)&v22[6]);
        memset(&v22[1], 0, 36);
        v22[0] = 0x400000000ALL;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v22, v8, v9, v10);
      }
      Global = DXGGLOBAL::GetGlobal(v7, a2, a3, a4);
      v14 = Global;
      if ( Global )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)Global + 68, v12, v13);
        DXGPUSHLOCK::AcquireShared(v20);
        v21 = 1;
        if ( v4 )
          v16 = (DXGDIAGNOSTICS *)*((_QWORD *)v14 + 71);
        else
          v16 = (DXGDIAGNOSTICS *)*((_QWORD *)v14 + 72);
        if ( !v16 )
        {
          v17 = WdLogNewEntry5_WdError(0LL, v15);
          *(_QWORD *)(v17 + 32) = 0LL;
          *(_QWORD *)(v17 + 24) = a1;
          WdLogEvent5_WdError(v17);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
          return 3221225860LL;
        }
        Diagnostics = DXGDIAGNOSTICS::ReadDiagnostics(v16, (unsigned __int8 *)a1 + 4, (unsigned int *)a1);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
      }
    }
  }
  return Diagnostics;
}
