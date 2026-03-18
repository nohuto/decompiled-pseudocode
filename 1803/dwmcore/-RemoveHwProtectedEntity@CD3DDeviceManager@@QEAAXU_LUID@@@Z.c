/*
 * XREFs of ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801DE78C
 * Callers:
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180049404 (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x180049740 (--1CBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x1800C5F2C (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

void __fastcall CD3DDeviceManager::RemoveHwProtectedEntity(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r10
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r9d
  bool v12; // r9
  char IsHardwareProtectionDisabled; // al
  char v14; // cl
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
    v7 = *((_QWORD *)this + 10);
    if ( !*(_DWORD *)(v7 + 12 * v3 + 8) )
    {
      v8 = *((_DWORD *)this + 26);
      if ( (unsigned int)v3 < v8 )
      {
        for ( ; (unsigned int)v3 < v8 - 1; v8 = *((_DWORD *)this + 26) )
        {
          v9 = (unsigned int)v3;
          LODWORD(v3) = v3 + 1;
          v10 = 3 * v9;
          LODWORD(v9) = *(_DWORD *)(v7 + 12LL * (unsigned int)v3 + 8);
          *(_QWORD *)(v7 + 4 * v10) = *(_QWORD *)(v7 + 12LL * (unsigned int)v3);
          *(_DWORD *)(v7 + 4 * v10 + 8) = v9;
        }
        *((_DWORD *)this + 26) = v8 - 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
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
