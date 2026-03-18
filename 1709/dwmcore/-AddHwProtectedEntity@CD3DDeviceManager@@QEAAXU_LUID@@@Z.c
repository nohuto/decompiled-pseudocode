/*
 * XREFs of ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801A513C
 * Callers:
 *     ??0CBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18002B1C4 (--0CBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitm.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18004D4E0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18011B0A4 (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 *     ?AddMultipleAndSet@?$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z @ 0x1801A521C (-AddMultipleAndSet@-$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z.c)
 */

void __fastcall CD3DDeviceManager::AddHwProtectedEntity(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r10
  int v5; // edi
  __int64 v6; // rcx
  signed int v7; // eax
  int v8; // r9d

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
        goto LABEL_6;
    }
    ++*(_DWORD *)(v6 + 12 * v3 + 8);
  }
  else
  {
LABEL_6:
    v7 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet((char *)this + 80);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x642u);
    v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  }
  v8 = v2 + 1;
  CD3DDeviceManager::s_cHwProtectedEntities = v8;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE, v5, v8);
}
