/*
 * XREFs of ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C01A9094
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002D40 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0009A80 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall GetDiagnosticsBuffer(struct _D3DKMT_DXGK_DIAGNOSTICS *a1, unsigned int a2, int a3)
{
  unsigned int Diagnostics; // edi
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v8; // rbx
  DXGDIAGNOSTICS *v9; // rcx
  __int64 v10; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-29h] BYREF
  DXGPUSHLOCK *v13; // [rsp+28h] [rbp-21h]
  int v14; // [rsp+30h] [rbp-19h]
  _QWORD v15[8]; // [rsp+40h] [rbp-9h] BYREF

  Diagnostics = -1073741811;
  if ( a2 >= 4 )
  {
    v6 = *(unsigned int *)a1 + 4LL;
    if ( a2 == v6 )
    {
      if ( a3 )
      {
        memset(v15, 0, sizeof(v15));
        v15[7] = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime((PLARGE_INTEGER)&v15[7], (PLARGE_INTEGER)&v15[6]);
        memset(&v15[1], 0, 36);
        v15[0] = 0x400000000ALL;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15);
      }
      Global = DXGGLOBAL::GetGlobal(v6);
      v8 = Global;
      if ( Global )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)Global + 68);
        DXGPUSHLOCK::AcquireShared(v13);
        v14 = 1;
        if ( a3 )
          v9 = (DXGDIAGNOSTICS *)*((_QWORD *)v8 + 71);
        else
          v9 = (DXGDIAGNOSTICS *)*((_QWORD *)v8 + 72);
        if ( !v9 )
        {
          v10 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v10 + 32) = 0LL;
          *(_QWORD *)(v10 + 24) = a1;
          WdLogEvent5_WdError(v10);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
          return 3221225860LL;
        }
        Diagnostics = DXGDIAGNOSTICS::ReadDiagnostics(v9, (unsigned __int8 *)a1 + 4, (unsigned int *)a1);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
      }
    }
  }
  return Diagnostics;
}
