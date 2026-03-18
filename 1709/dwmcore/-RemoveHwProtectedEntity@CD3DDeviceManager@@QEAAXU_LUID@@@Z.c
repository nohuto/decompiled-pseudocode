/*
 * XREFs of ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801A5C6C
 * Callers:
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x18002B16C (--1CBitmapRealization@@MEAA@XZ.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18004D4E0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18011B0A4 (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x1800BC208 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 */

void __fastcall CD3DDeviceManager::RemoveHwProtectedEntity(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // r11
  unsigned int v7; // eax
  __int64 v8; // r11
  __int64 v9; // r8
  int v10; // eax
  int v11; // r9d
  bool v12; // r9
  char IsHardwareProtectionDisabled; // al
  char v14; // cl
  char v15; // dl

  v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  v4 = 0LL;
  v5 = CD3DDeviceManager::s_cHwProtectedEntities;
  if ( *((_DWORD *)this + 26) )
  {
    v6 = *((_QWORD *)this + 10);
    while ( *(_QWORD *)(v6 + 12 * v4) != a2 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 26) )
        goto LABEL_12;
    }
    --*(_DWORD *)(v6 + 12 * v4 + 8);
    if ( !*(_DWORD *)(*((_QWORD *)this + 10) + 12 * v4 + 8) )
    {
      v7 = *((_DWORD *)this + 26);
      if ( (unsigned int)v4 < v7 )
      {
        v8 = *((_QWORD *)this + 10);
        if ( (unsigned int)v4 < v7 - 1 )
        {
          do
          {
            v9 = (unsigned int)(v4 + 1);
            v4 = 3LL * (unsigned int)v4;
            v10 = *(_DWORD *)(v8 + 12 * v9 + 8);
            *(_QWORD *)(v8 + 4 * v4) = *(_QWORD *)(v8 + 12 * v9);
            *(_DWORD *)(v8 + 4 * v4 + 8) = v10;
            LODWORD(v4) = v9;
          }
          while ( (unsigned int)v9 < *((_DWORD *)this + 26) - 1 );
        }
        --*((_DWORD *)this + 26);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x193u);
        v2 = CD3DDeviceManager::s_cHwProtectedEntities;
      }
    }
  }
LABEL_12:
  v11 = v2 - 1;
  CD3DDeviceManager::s_cHwProtectedEntities = v11;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE, v5, v11);
    v11 = CD3DDeviceManager::s_cHwProtectedEntities;
  }
  if ( !v11 )
  {
    CD3DDeviceManager::IsHardwareProtectionDisabled();
    CD3DDeviceManager::s_bHwProtectionTempDisabled = v12;
    IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
    if ( v15 != IsHardwareProtectionDisabled && (v14 & 0x20) != 0 )
      McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 0);
  }
}
