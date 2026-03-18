/*
 * XREFs of DxgkSetProtectedSessionStatusCB @ 0x1C01BD620
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0029764 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 */

__int64 __fastcall DxgkSetProtectedSessionStatusCB(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  DXGPROTECTEDSESSION *v5; // rcx
  unsigned int v6; // ebx

  if ( KeGetCurrentIrql() >= 2u )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v4[5] = DxgkSetProtectedSessionStatusCB;
    v4[3] = 275LL;
    v4[4] = 20LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 15000);
  v5 = *(DXGPROTECTEDSESSION **)a1;
  if ( *(_QWORD *)a1 )
    v6 = DXGPROTECTEDSESSION::SetSessionStatus(v5, (enum _DXGK_PROTECTED_SESSION_STATUS)*(_DWORD *)(a1 + 8));
  else
    v6 = -1073741811;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v5, &EventProfilerExit, a3, 15000);
  return v6;
}
