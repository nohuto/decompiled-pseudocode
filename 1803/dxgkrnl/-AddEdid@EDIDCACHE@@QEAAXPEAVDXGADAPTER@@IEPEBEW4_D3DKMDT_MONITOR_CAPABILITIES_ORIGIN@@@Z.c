/*
 * XREFs of ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01A872C
 * Callers:
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01A8B80 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0008E88 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z @ 0x1C01A8A18 (-FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C01A9274 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@@QEAAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01A9330 (-WriteEdidToRegistry@EDIDCACHE@@QEAAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

void __fastcall EDIDCACHE::AddEdid(
        EDIDCACHE *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a6)
{
  struct DXGFASTMUTEX *v8; // rdx
  struct _LUID v11; // rbx
  unsigned __int8 *v12; // rbp
  int EdidInCache; // eax
  EDIDCACHE *v14; // rcx
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v15; // r14d
  __int64 v16; // rcx
  unsigned __int8 v17; // r9
  unsigned int v18; // esi
  EDIDCACHE *v19; // r8
  unsigned int v20; // edx
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v24[48]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v25; // [rsp+60h] [rbp+8h] BYREF

  v8 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( v8 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, v8, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    v11 = *(struct _LUID *)((char *)a2 + 268);
    v12 = a5;
    EdidInCache = EDIDCACHE::FindEdidInCache(this, v11, a3, a5);
    if ( EdidInCache == -1 )
    {
      v15 = a6;
      if ( a4 )
      {
        if ( a6 == D3DKMDT_MCO_MONITORDESCRIPTOR )
        {
          EDIDCACHE::WriteEdidToRegistry(v14, a3, v12, D3DKMDT_MCO_MONITORDESCRIPTOR);
          if ( (int)EDID_V1_GetPhysicalSize(v16, v12, &v23, &v25) >= 0 )
            EDIDCACHE::SetPhysicalDimensionOfInternalPanel(this, v23, v25, v17);
        }
      }
      v18 = 0;
      v19 = this;
      v20 = 0;
      while ( *(_QWORD *)v19 )
      {
        v21 = v20;
        if ( *(_QWORD *)v19 >= *((_QWORD *)this + 19 * v18) )
          v21 = v18;
        ++v20;
        v19 = (EDIDCACHE *)((char *)v19 + 152);
        v18 = v21;
        if ( v20 >= 4 )
          goto LABEL_15;
      }
      v18 = v20;
LABEL_15:
      v22 = 152LL * v18;
      *(struct _LUID *)((char *)this + v22 + 8) = v11;
      *(_DWORD *)((char *)this + v22 + 16) = a3;
      *(_DWORD *)((char *)this + v22 + 20) = v15;
      *(_QWORD *)((char *)this + v22) = MEMORY[0xFFFFF78000000014];
      *(_OWORD *)((char *)this + v22 + 24) = *(_OWORD *)v12;
      *(_OWORD *)((char *)this + v22 + 40) = *((_OWORD *)v12 + 1);
      *(_OWORD *)((char *)this + v22 + 56) = *((_OWORD *)v12 + 2);
      *(_OWORD *)((char *)this + v22 + 72) = *((_OWORD *)v12 + 3);
      *(_OWORD *)((char *)this + v22 + 88) = *((_OWORD *)v12 + 4);
      *(_OWORD *)((char *)this + v22 + 104) = *((_OWORD *)v12 + 5);
      *(_OWORD *)((char *)this + v22 + 120) = *((_OWORD *)v12 + 6);
      *(_OWORD *)((char *)this + v22 + 136) = *((_OWORD *)v12 + 7);
    }
    else
    {
      *((_QWORD *)this + 19 * EdidInCache) = MEMORY[0xFFFFF78000000014];
    }
    if ( v24[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  }
}
