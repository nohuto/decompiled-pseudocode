/*
 * XREFs of ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x18019578C
 * Callers:
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180036E30 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18003704C (--0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     ?AddMultipleAndSet@?$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z @ 0x18018CA2C (-AddMultipleAndSet@-$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z.c)
 */

void __fastcall CD3DDeviceManager::AddHwProtectedEntity(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  int v4; // edi
  __int64 v5; // r10
  int v6; // eax
  __int64 v7; // rcx
  int v8; // r9d
  struct _LUID v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  v3 = 0LL;
  v4 = CD3DDeviceManager::s_cHwProtectedEntities;
  v9 = a2;
  if ( *((_DWORD *)this + 26) )
  {
    v5 = *((_QWORD *)this + 10);
    while ( *(_QWORD *)(v5 + 12 * v3) != __PAIR64__(v9.HighPart, a2.LowPart) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 26) )
        goto LABEL_5;
    }
    v7 = 3 * v3;
    ++*(_DWORD *)(v5 + 12 * v3 + 8);
  }
  else
  {
LABEL_5:
    v9 = a2;
    v10 = 1;
    v6 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet((__int64)this + 80, (__int64 *)&v9, v3);
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x642u);
    v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  }
  v8 = v2 + 1;
  CD3DDeviceManager::s_cHwProtectedEntities = v8;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v7, &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE, v4, v8);
}
