/*
 * XREFs of ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C01A9274
 * Callers:
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C01A8624 (--0EDIDCACHE@@QEAA@XZ.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01A872C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EDIDCACHE::SetPhysicalDimensionOfInternalPanel(EDIDCACHE *this, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  _DWORD *v5; // rdx
  int updated; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rax

  v3 = a3;
  v4 = a2;
  if ( !*((_BYTE *)this + 624) )
  {
    v5 = (_DWORD *)((char *)this + 616);
    if ( a3 * (int)v4 > *((_DWORD *)this + 155) * *((_DWORD *)this + 154) )
    {
      *((_DWORD *)this + 155) = a3;
      *((_BYTE *)this + 624) = 0;
      *v5 = v4;
      updated = ZwUpdateWnfStateData(&WNF_DX_INTERNAL_PANEL_DIMENSIONS, v5, 8LL, 0LL, 0LL, 0, 0);
      v11 = updated;
      if ( updated >= 0 )
      {
        v13 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
        *(_QWORD *)(v13 + 24) = v4;
        *(_QWORD *)(v13 + 32) = v3;
      }
      else
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdError(v8);
        v12[3] = v11;
        v12[4] = v4;
        v12[5] = v3;
        WdLogEvent5_WdError(v12);
      }
    }
  }
}
