/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01A8204
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000E380 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00F1AA0 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C01A84F4 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  struct DXGPROCESS *Process; // rax
  __int64 v15; // rax
  struct DXGPROCESS *Current; // rax
  _BYTE v17[8]; // [rsp+20h] [rbp-68h] BYREF
  HANDLE v18; // [rsp+28h] [rbp-60h]
  __int64 v19; // [rsp+30h] [rbp-58h]
  int v20; // [rsp+38h] [rbp-50h]
  __int16 v21; // [rsp+3Ch] [rbp-4Ch]
  char v22; // [rsp+3Eh] [rbp-4Ah]

  hProcess = a1->Evict.hProcess;
  if ( hProcess )
  {
    if ( g_DRTEnable )
    {
      v19 = 0LL;
      v18 = hProcess;
      v21 = 0;
      v20 = 2048;
      v22 = 0;
      v5 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v17, 1);
      v9 = v5;
      if ( v5 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v17);
        LODWORD(v9) = DxgEscapeEvictWorker(a1, Process);
      }
      else
      {
        v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
        *(_QWORD *)(v10 + 24) = a1->Evict.hProcess;
        *(_QWORD *)(v10 + 32) = v9;
        WdLogEvent5_WdWarning(v10);
      }
      if ( (_BYTE)v21 )
        DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v17, v11, v12);
    }
    else
    {
      v15 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      LODWORD(v9) = -1073741823;
      *(_QWORD *)(v15 + 24) = -1073741823LL;
      WdLogEvent5_WdWarning(v15);
    }
    return v9;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
    return DxgEscapeEvictWorker(a1, Current);
  }
}
