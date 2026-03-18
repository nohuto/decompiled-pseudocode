/*
 * XREFs of ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C010923C
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveIntegratedPanelNativeOverride(DXGMONITOR ***this)
{
  int v2; // esi
  DXGMONITOR *v3; // rbx
  __int64 v4; // rbx
  __int64 v6; // rax
  char *v7; // rax
  char *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // xmm1_8
  DXGMONITOR *v12; // rax
  DXGMONITOR **v13; // r8
  _QWORD *i; // rcx
  _QWORD *v15; // rax
  _BYTE Source1[56]; // [rsp+20h] [rbp-40h] BYREF

  if ( !this[5] )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v2 = -1071841279;
  v3 = this[5][8];
  memset(Source1, 0, sizeof(Source1));
  v4 = *(_QWORD *)(*((_QWORD *)v3 + 117) + 96LL);
  if ( v4 && RtlCompareMemory(Source1, (const void *)(v4 + 8), 0x38uLL) != 56 )
  {
    v2 = 0;
    *(_OWORD *)Source1 = *(_OWORD *)(v4 + 8);
    *(_OWORD *)&Source1[16] = *(_OWORD *)(v4 + 24);
    *(_OWORD *)&Source1[32] = *(_OWORD *)(v4 + 40);
    *(_QWORD *)&Source1[48] = *(_QWORD *)(v4 + 56);
  }
  if ( v2 >= 0 )
  {
    v7 = (char *)operator new(0x78uLL, 0x4D677844u, PagedPool);
    v8 = v7;
    if ( v7 )
    {
      v10 = this + 25;
      *(_DWORD *)v7 = (*((_DWORD *)this + 49))++;
      *(_OWORD *)(v7 + 8) = *(_OWORD *)Source1;
      *(_OWORD *)(v7 + 24) = *(_OWORD *)&Source1[16];
      *(_OWORD *)(v7 + 40) = *(_OWORD *)&Source1[32];
      v11 = *(_QWORD *)&Source1[48];
      *((_DWORD *)v7 + 17) = 8;
      *((_DWORD *)v7 + 18) = 8;
      *(_QWORD *)(v7 + 76) = 8LL;
      v12 = (DXGMONITOR *)(v7 + 96);
      *((_QWORD *)v8 + 7) = v11;
      *((_DWORD *)v8 + 16) = 2;
      *((_DWORD *)v8 + 21) = 5;
      *((_DWORD *)v8 + 22) = 1;
      v13 = this[26];
      if ( *v13 != (DXGMONITOR *)(this + 25) )
        __fastfail(3u);
      *(_QWORD *)v12 = v10;
      *((_QWORD *)v8 + 13) = v13;
      *v13 = v12;
      this[26] = (DXGMONITOR **)v12;
      ++*((_DWORD *)this + 48);
      this[27] = (DXGMONITOR **)v8;
      for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)v15[12] )
      {
        v15 = i - 12;
        if ( !i )
          v15 = 0LL;
        if ( !v15 )
          break;
        if ( *((_DWORD *)v15 + 21) == 2 && *((_DWORD *)v15 + 22) == 1 )
        {
          *((_DWORD *)v15 + 22) = 2;
          return (unsigned int)v2;
        }
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdLowResource(0LL);
      WdLogEvent5_WdLowResource(v9);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v2;
}
