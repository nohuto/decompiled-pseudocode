/*
 * XREFs of ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x180195C18
 * Callers:
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180036E30 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x180036FBC (--1CBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180046638 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 */

void __fastcall CD3DDeviceManager::RemoveHwProtectedEntity(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r11
  int v5; // edi
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r9d
  bool v12; // r9
  char IsHardwareProtectionDisabled; // al
  __int64 v14; // rcx
  char v15; // dl

  v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  v3 = 0LL;
  v5 = CD3DDeviceManager::s_cHwProtectedEntities;
  if ( *((_DWORD *)this + 26) )
  {
    v6 = *((_QWORD *)this + 10);
    while ( *(_QWORD *)(v6 + 12 * v3) != a2 )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 26) )
        goto LABEL_12;
    }
    --*(_DWORD *)(v6 + 12 * v3 + 8);
    if ( !*(_DWORD *)(*((_QWORD *)this + 10) + 12 * v3 + 8) )
    {
      v7 = *((_DWORD *)this + 26);
      if ( (unsigned int)v3 < v7 )
      {
        v8 = *((_QWORD *)this + 10);
        if ( (unsigned int)v3 < v7 - 1 )
        {
          do
          {
            v9 = (unsigned int)v3;
            LODWORD(v3) = v3 + 1;
            v10 = 3 * v9;
            LODWORD(v9) = *(_DWORD *)(v8 + 12LL * (unsigned int)v3 + 8);
            *(_QWORD *)(v8 + 4 * v10) = *(_QWORD *)(v8 + 12LL * (unsigned int)v3);
            *(_DWORD *)(v8 + 4 * v10 + 8) = v9;
          }
          while ( (unsigned int)v3 < *((_DWORD *)this + 26) - 1 );
        }
        --*((_DWORD *)this + 26);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x193u);
        v2 = CD3DDeviceManager::s_cHwProtectedEntities;
      }
    }
  }
LABEL_12:
  v11 = v2 - 1;
  CD3DDeviceManager::s_cHwProtectedEntities = v11;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    Template_qq(
      (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits,
      &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE,
      v5,
      v11);
    v11 = CD3DDeviceManager::s_cHwProtectedEntities;
  }
  if ( !v11 )
  {
    CD3DDeviceManager::IsHardwareProtectionDisabled();
    CD3DDeviceManager::s_bHwProtectionTempDisabled = v12;
    IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
    if ( v15 != IsHardwareProtectionDisabled && (v14 & 0x20) != 0 )
      Template_q(v14, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 0);
  }
}
