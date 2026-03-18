/*
 * XREFs of ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C0106C90
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveIntegratedPanelNativeOverride(
        DXGMONITOR ***this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // esi
  DXGMONITOR *v6; // rbx
  __int64 v7; // rbx
  __int64 v9; // rax
  char *v10; // rax
  char *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // xmm1_8
  DXGMONITOR *v15; // rax
  DXGMONITOR **v16; // r8
  _QWORD *i; // rcx
  _QWORD *v18; // rax
  _BYTE Source1[56]; // [rsp+20h] [rbp-40h] BYREF

  if ( !this[5] )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  v5 = -1071841279;
  v6 = this[5][8];
  memset(Source1, 0, sizeof(Source1));
  v7 = *(_QWORD *)(*((_QWORD *)v6 + 117) + 96LL);
  if ( v7 && RtlCompareMemory(Source1, (const void *)(v7 + 8), 0x38uLL) != 56 )
  {
    v5 = 0;
    *(_OWORD *)Source1 = *(_OWORD *)(v7 + 8);
    *(_OWORD *)&Source1[16] = *(_OWORD *)(v7 + 24);
    *(_OWORD *)&Source1[32] = *(_OWORD *)(v7 + 40);
    *(_QWORD *)&Source1[48] = *(_QWORD *)(v7 + 56);
  }
  if ( v5 >= 0 )
  {
    v10 = (char *)operator new(0x78uLL, 0x4D677844u, PagedPool);
    v11 = v10;
    if ( v10 )
    {
      v13 = this + 20;
      *(_DWORD *)v10 = (*((_DWORD *)this + 39))++;
      *(_OWORD *)(v10 + 8) = *(_OWORD *)Source1;
      *(_OWORD *)(v10 + 24) = *(_OWORD *)&Source1[16];
      *(_OWORD *)(v10 + 40) = *(_OWORD *)&Source1[32];
      v14 = *(_QWORD *)&Source1[48];
      *((_DWORD *)v10 + 17) = 8;
      *((_DWORD *)v10 + 18) = 8;
      *(_QWORD *)(v10 + 76) = 8LL;
      v15 = (DXGMONITOR *)(v10 + 96);
      *((_QWORD *)v11 + 7) = v14;
      *((_DWORD *)v11 + 16) = 2;
      *((_DWORD *)v11 + 21) = 5;
      *((_DWORD *)v11 + 22) = 1;
      v16 = this[21];
      if ( *v16 != (DXGMONITOR *)(this + 20) )
        __fastfail(3u);
      *(_QWORD *)v15 = v13;
      *((_QWORD *)v11 + 13) = v16;
      *v16 = v15;
      this[21] = (DXGMONITOR **)v15;
      ++*((_DWORD *)this + 38);
      this[22] = (DXGMONITOR **)v11;
      for ( i = (_QWORD *)*v13; i != v13; i = (_QWORD *)v18[12] )
      {
        v18 = i - 12;
        if ( !i )
          v18 = 0LL;
        if ( !v18 )
          break;
        if ( *((_DWORD *)v18 + 21) == 2 && *((_DWORD *)v18 + 22) == 1 )
        {
          *((_DWORD *)v18 + 22) = 2;
          return (unsigned int)v5;
        }
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdLowResource(0LL);
      WdLogEvent5_WdLowResource(v12);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v5;
}
