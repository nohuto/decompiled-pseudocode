/*
 * XREFs of ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800CAC94
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800445F0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?AreEffectsSupported@CD3DDeviceLevel1@@QEAA_NXZ @ 0x180076790 (-AreEffectsSupported@CD3DDeviceLevel1@@QEAA_NXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180089958 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800CB660 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800CB778 (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDXGIEnumeration::UpdateFeatureLevels(CDXGIEnumeration *this)
{
  CD3DDeviceLevel1 *v1; // r10
  int v3; // esi
  int v4; // r12d
  unsigned __int8 v5; // bp
  char v6; // r14
  unsigned int v7; // edi
  int v8; // r11d
  unsigned __int8 v9; // r13
  __int64 v10; // rbx
  unsigned int v11; // r8d
  int v12; // r8d
  int v13; // edx
  int v14; // r9d
  int v15; // ecx
  struct CCrossThreadComposition *v16; // rax
  int v18; // r8d
  unsigned int v19; // r9d
  struct _LUID v20; // rdx
  int ExistingDevice; // eax
  int v22; // eax
  bool v23; // bl
  __int128 v24; // [rsp+20h] [rbp-38h]
  CD3DDeviceLevel1 *v25; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v1) = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 1;
  v9 = 1;
  if ( *((_DWORD *)this + 22) )
  {
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v7);
      if ( v10 )
      {
        v11 = (unsigned int)v1;
        if ( *(_DWORD *)(v10 + 392) )
        {
          while ( !DXGIOutputInfo::IsAttachedToDesktop((DXGIOutputInfo *)(*(_QWORD *)(v10 + 368) + 280LL * v11)) )
          {
            v11 = v8 + v18;
            if ( v11 >= v19 )
              goto LABEL_4;
          }
          v20 = *(struct _LUID *)(v10 + 336);
          v25 = v1;
          ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v20, &v25);
          LODWORD(v1) = 0;
          if ( ExistingDevice < 0 )
          {
            v8 = 1;
          }
          else
          {
            v22 = *((_DWORD *)v25 + 189);
            if ( !v3 || v22 < v3 )
              v3 = *((_DWORD *)v25 + 189);
            if ( v22 > v4 && (*(_DWORD *)(v10 + 296) != 5140 || *(_DWORD *)(v10 + 300) != 140) )
              v4 = *((_DWORD *)v25 + 189);
            if ( *(_DWORD *)(v10 + 296) == 5140 && *(_DWORD *)(v10 + 300) == 140 )
              v5 = 1;
            v23 = CD3DDeviceLevel1::AreEffectsSupported(v25);
            ReleaseInterface<CD3DDeviceLevel1>(&v25);
            v8 = 1;
            v6 = 1;
            v9 &= -v23;
            LODWORD(v1) = 0;
          }
        }
      }
LABEL_4:
      v7 += v8;
    }
    while ( v7 < *((_DWORD *)this + 22) );
    if ( v6 )
    {
      v12 = 37120;
      v13 = v5;
      v14 = 37120;
      DWORD2(v24) = v5;
      if ( v3 )
        v14 = v3;
      v15 = v9;
      LODWORD(v24) = v14;
      if ( v4 )
        v12 = v4;
      DWORD1(v24) = v12;
      if ( CCommonRegistryData::m_forceEffectMode == 2 )
      {
        v13 = (int)v1;
        v15 = v8;
        DWORD2(v24) = (_DWORD)v1;
      }
      else if ( CCommonRegistryData::m_forceEffectMode == v8 )
      {
        v15 = (int)v1;
      }
      v16 = g_pComposition;
      HIDWORD(v24) = v15;
      if ( *((_DWORD *)g_pComposition + 344) != v14
        || *((_DWORD *)g_pComposition + 345) != v12
        || *((_DWORD *)g_pComposition + 346) != v13
        || *((_DWORD *)g_pComposition + 347) != v15 )
      {
        *((_BYTE *)g_pComposition + 1392) = v8;
        *((_OWORD *)v16 + 86) = v24;
      }
    }
  }
  return 0LL;
}
