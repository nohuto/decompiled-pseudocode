/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C019AE78
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0009844 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00D2E50 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C019B170 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 */

int __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1, __int64 a2, __int64 a3)
{
  HANDLE hProcess; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  struct DXGPROCESS *Process; // rax
  __int64 v13; // rax
  struct DXGPROCESS *Current; // rax
  _BYTE v15[8]; // [rsp+20h] [rbp-78h] BYREF
  HANDLE v16; // [rsp+28h] [rbp-70h]
  __int128 v17; // [rsp+30h] [rbp-68h]
  int v18; // [rsp+40h] [rbp-58h]
  __int16 v19; // [rsp+44h] [rbp-54h]
  char v20; // [rsp+46h] [rbp-52h]

  hProcess = a1->Evict.hProcess;
  if ( hProcess )
  {
    if ( g_DRTEnable )
    {
      v19 = 0;
      v16 = hProcess;
      v17 = 0LL;
      v18 = 2048;
      v20 = 0;
      v5 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v15, 1);
      v9 = v5;
      if ( v5 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v15);
        LODWORD(v9) = DxgEscapeEvictWorker(a1, Process);
      }
      else
      {
        v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
        *(_QWORD *)(v10 + 24) = a1->Evict.hProcess;
        *(_QWORD *)(v10 + 32) = v9;
        WdLogEvent5_WdWarning(v10);
      }
      if ( (_BYTE)v19 )
        DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v15);
    }
    else
    {
      v13 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      LODWORD(v9) = -1073741823;
      *(_QWORD *)(v13 + 24) = -1073741823LL;
      WdLogEvent5_WdWarning(v13);
    }
    return v9;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
    return DxgEscapeEvictWorker(a1, Current);
  }
}
