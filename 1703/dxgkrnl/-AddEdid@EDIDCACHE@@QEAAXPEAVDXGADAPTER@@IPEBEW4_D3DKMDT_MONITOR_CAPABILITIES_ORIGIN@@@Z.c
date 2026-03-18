/*
 * XREFs of ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C012189C
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0198918 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 * Callees:
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0004038 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0099E20 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C0121820 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z @ 0x1C0121A54 (-FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0198E44 (-WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

void __fastcall EDIDCACHE::AddEdid(
        struct DXGFASTMUTEX **this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a5)
{
  bool v9; // si
  __int64 v10; // r8
  __int64 v11; // r9
  struct _LUID v12; // rbx
  int EdidInCache; // eax
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 v16; // r9
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v17; // r15d
  EDIDCACHE *v18; // rcx
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v19; // r8d
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v25; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v26[16]; // [rsp+60h] [rbp-10h] BYREF
  int v27; // [rsp+A0h] [rbp+30h] BYREF

  if ( this[76] )
  {
    v27 = 0;
    v23 = -2;
    v9 = (int)DxgkQueryMonitorTypeLockHeld(a2, a3, (__int64)&v27, 0LL, &v23, 0LL, 0LL, 0LL, 0LL, 0LL) >= 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, this[76], v10, v11);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    v12 = *(struct _LUID *)((char *)a2 + 268);
    EdidInCache = EDIDCACHE::FindEdidInCache((EDIDCACHE *)this, v12, a3, a4);
    if ( EdidInCache == -1 )
    {
      v17 = a5;
      if ( !*((_BYTE *)this + 624)
        && a5 == D3DKMDT_MCO_MONITORDESCRIPTOR
        && v9
        && v27 == 1
        && IsInternalVideoOutput(v23) )
      {
        EDIDCACHE::WriteEdidToRegistry(v18, a4, v19);
        if ( (int)EDID_V1_GetPhysicalSize(v22, a4, &v25, &v24) >= 0 )
          EDIDCACHE::SetPhysicalDimensionOfInternalPanel((EDIDCACHE *)this, v25, v24, 0);
      }
      v20 = 0;
      v14 = 0LL;
      v15 = (__int64 *)this;
      while ( 1 )
      {
        v16 = *v15;
        if ( !*v15 )
          break;
        if ( v16 < (__int64)this[19 * v20] )
          v20 = v14;
        v14 = (unsigned int)(v14 + 1);
        v15 += 19;
        if ( (unsigned int)v14 >= 4 )
          goto LABEL_11;
      }
      v20 = v14;
LABEL_11:
      v21 = 19LL * v20;
      this[v21 + 1] = (struct DXGFASTMUTEX *)v12;
      LODWORD(this[v21 + 2]) = a3;
      HIDWORD(this[v21 + 2]) = v17;
      this[v21] = (struct DXGFASTMUTEX *)MEMORY[0xFFFFF78000000014];
      *(_OWORD *)&this[v21 + 3] = *(_OWORD *)a4;
      *(_OWORD *)&this[v21 + 5] = *((_OWORD *)a4 + 1);
      *(_OWORD *)&this[v21 + 7] = *((_OWORD *)a4 + 2);
      *(_OWORD *)&this[v21 + 9] = *((_OWORD *)a4 + 3);
      *(_OWORD *)&this[v21 + 11] = *((_OWORD *)a4 + 4);
      *(_OWORD *)&this[v21 + 13] = *((_OWORD *)a4 + 5);
      *(_OWORD *)&this[v21 + 15] = *((_OWORD *)a4 + 6);
      *(_OWORD *)&this[v21 + 17] = *((_OWORD *)a4 + 7);
    }
    else
    {
      this[19 * EdidInCache] = (struct DXGFASTMUTEX *)MEMORY[0xFFFFF78000000014];
    }
    if ( v26[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v14, (__int64)v15, v16);
  }
}
