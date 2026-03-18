/*
 * XREFs of ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z @ 0x180045F1C
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042480 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?AreEffectsSupported@CD3DDeviceLevel1@@QEAA_NXZ @ 0x180079580 (-AreEffectsSupported@CD3DDeviceLevel1@@QEAA_NXZ.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800B6974 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800C5F9C (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ @ 0x180176338 (-OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ.c)
 */

__int64 __fastcall CDXGIEnumeration::UpdateFeatureLevels(CDXGIEnumeration *this, const struct _GUID *a2)
{
  unsigned int v2; // edi
  int v4; // ebp
  int v5; // r12d
  unsigned __int8 v6; // r14
  unsigned int v7; // esi
  int v8; // r11d
  unsigned __int8 i; // r13
  __int64 v10; // rbx
  unsigned int v11; // r8d
  int v12; // r8d
  unsigned int v13; // r9d
  const struct _GUID *v14; // r10
  struct _LUID v15; // r8
  int v16; // eax
  bool v17; // bl
  int v18; // edx
  int v19; // eax
  int v20; // r8d
  int v21; // ecx
  struct CCrossThreadComposition *v22; // rbx
  __int128 v24; // [rsp+20h] [rbp-48h]
  CD3DDeviceLevel1 *v25; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 1;
  for ( i = 1; v7 < *((_DWORD *)this + 22); v7 += v8 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v7);
    if ( v10 )
    {
      v11 = 0;
      if ( *(_DWORD *)(v10 + 392) )
      {
        while ( !DXGIOutputInfo::IsAttachedToDesktop((DXGIOutputInfo *)(*(_QWORD *)(v10 + 368) + 272LL * v11)) )
        {
          v11 = v8 + v12;
          if ( v11 >= v13 )
            goto LABEL_14;
        }
        v15 = *(struct _LUID *)(v10 + 336);
        v25 = 0LL;
        if ( (int)CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v14, v15, &v25) >= 0 )
        {
          v16 = *((_DWORD *)v25 + 185);
          if ( !v4 || v16 < v4 )
            v4 = *((_DWORD *)v25 + 185);
          if ( v16 > v5 && (*(_DWORD *)(v10 + 296) != 5140 || *(_DWORD *)(v10 + 300) != 140) )
            v5 = *((_DWORD *)v25 + 185);
          if ( *(_DWORD *)(v10 + 296) == 5140 && *(_DWORD *)(v10 + 300) == 140 )
            v6 = 1;
          v17 = CD3DDeviceLevel1::AreEffectsSupported(v25);
          ReleaseInterface<CD3DDeviceLevel1>(&v25);
          i &= -v17;
        }
        v8 = 1;
      }
    }
LABEL_14:
    ;
  }
  v18 = 37120;
  v19 = v6;
  v20 = 37120;
  DWORD2(v24) = v6;
  if ( v4 )
    v20 = v4;
  v21 = i;
  LODWORD(v24) = v20;
  if ( v5 )
    v18 = v5;
  DWORD1(v24) = v18;
  if ( CCommonRegistryData::m_forceEffectMode == 2 )
  {
    v19 = 0;
    HIDWORD(v24) = v8;
    DWORD2(v24) = 0;
  }
  else
  {
    if ( CCommonRegistryData::m_forceEffectMode == v8 )
      v21 = 0;
    HIDWORD(v24) = v21;
  }
  v22 = g_pComposition;
  if ( *((_DWORD *)g_pComposition + 346) != v20
    || *((_DWORD *)g_pComposition + 347) != v18
    || *((_DWORD *)g_pComposition + 348) != v19 )
  {
    *(_OWORD *)((char *)g_pComposition + 1384) = v24;
    if ( *((_DWORD *)v22 + 286) )
    {
      do
        CCompositionCapabilities::OnCapabilitiesChanged(*(CCompositionCapabilities **)(*((_QWORD *)v22 + 140)
                                                                                     + 8LL * v2++));
      while ( v2 < *((_DWORD *)v22 + 286) );
    }
  }
  return 0LL;
}
