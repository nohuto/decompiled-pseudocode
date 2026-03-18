/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01936E4
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001DCC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C009AFE8 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C01939D4 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 */

int __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  HANDLE hProcess; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGPROCESS *Process; // rax
  __int64 v18; // rax
  struct DXGPROCESS *Current; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-68h] BYREF
  HANDLE v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  int v23; // [rsp+38h] [rbp-50h]
  __int16 v24; // [rsp+3Ch] [rbp-4Ch]
  char v25; // [rsp+3Eh] [rbp-4Ah]

  hProcess = a1->Evict.hProcess;
  if ( hProcess )
  {
    if ( g_DRTEnable )
    {
      v22 = 0LL;
      v21 = hProcess;
      v24 = 0;
      v23 = 2048;
      v25 = 0;
      v6 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v20, 1);
      v11 = v6;
      if ( v6 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v20);
        LODWORD(v11) = DxgEscapeEvictWorker(a1, Process);
      }
      else
      {
        v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
        *(_QWORD *)(v12 + 24) = a1->Evict.hProcess;
        *(_QWORD *)(v12 + 32) = v11;
        WdLogEvent5_WdWarning(v12);
      }
      if ( (_BYTE)v24 )
        DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v20, v13, v14, v15);
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
      LODWORD(v11) = -1073741823;
      *(_QWORD *)(v18 + 24) = -1073741823LL;
      WdLogEvent5_WdWarning(v18);
    }
    return v11;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1);
    return DxgEscapeEvictWorker(a1, Current);
  }
}
