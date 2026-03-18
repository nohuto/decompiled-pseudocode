/*
 * XREFs of ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x18008C290
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001AC40 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?AreEffectsSupported@CD3DDeviceLevel1@@QEAA_NXZ @ 0x18001FEB0 (-AreEffectsSupported@CD3DDeviceLevel1@@QEAA_NXZ.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x180076EB8 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800BE3B8 (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
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
  unsigned int v13; // r9d
  struct _LUID v14; // rdx
  int ExistingDevice; // eax
  int v16; // eax
  bool v17; // bl
  int v18; // r8d
  int v19; // edx
  int v20; // r9d
  int v21; // ecx
  struct CCrossThreadComposition *v22; // rax
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
          while ( !DXGIOutputInfo::IsAttachedToDesktop((DXGIOutputInfo *)(*(_QWORD *)(v10 + 368) + 272LL * v11)) )
          {
            v11 = v8 + v12;
            if ( v11 >= v13 )
              goto LABEL_13;
          }
          v14 = *(struct _LUID *)(v10 + 336);
          v25 = v1;
          ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v14, &v25);
          LODWORD(v1) = 0;
          if ( ExistingDevice < 0 )
          {
            v8 = 1;
          }
          else
          {
            v16 = *((_DWORD *)v25 + 189);
            if ( !v3 || v16 < v3 )
              v3 = *((_DWORD *)v25 + 189);
            if ( v16 > v4 && (*(_DWORD *)(v10 + 296) != 5140 || *(_DWORD *)(v10 + 300) != 140) )
              v4 = *((_DWORD *)v25 + 189);
            if ( *(_DWORD *)(v10 + 296) == 5140 && *(_DWORD *)(v10 + 300) == 140 )
              v5 = 1;
            v17 = CD3DDeviceLevel1::AreEffectsSupported(v25);
            ReleaseInterface<CD3DDeviceLevel1>(&v25);
            v8 = 1;
            v6 = 1;
            v9 &= -v17;
            LODWORD(v1) = 0;
          }
        }
      }
LABEL_13:
      v7 += v8;
    }
    while ( v7 < *((_DWORD *)this + 22) );
    if ( v6 )
    {
      v18 = 37120;
      v19 = v5;
      v20 = 37120;
      DWORD2(v24) = v5;
      if ( v3 )
        v20 = v3;
      v21 = v9;
      LODWORD(v24) = v20;
      if ( v4 )
        v18 = v4;
      DWORD1(v24) = v18;
      if ( CCommonRegistryData::m_forceEffectMode == 2 )
      {
        v19 = (int)v1;
        v21 = v8;
        DWORD2(v24) = (_DWORD)v1;
      }
      else if ( CCommonRegistryData::m_forceEffectMode == v8 )
      {
        v21 = (int)v1;
      }
      v22 = g_pComposition;
      HIDWORD(v24) = v21;
      if ( *((_DWORD *)g_pComposition + 332) != v20
        || *((_DWORD *)g_pComposition + 333) != v18
        || *((_DWORD *)g_pComposition + 334) != v19
        || *((_DWORD *)g_pComposition + 335) != v21 )
      {
        *((_BYTE *)g_pComposition + 1344) = v8;
        *((_OWORD *)v22 + 83) = v24;
      }
    }
  }
  return 0LL;
}
