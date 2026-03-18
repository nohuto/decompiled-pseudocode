/*
 * XREFs of ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18011B0A4
 * Callers:
 *     ?UpdateAttributes@CSectionBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1801D1050 (-UpdateAttributes@CSectionBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1801D4050 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801A513C (-AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 *     ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801A5C6C (-RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

bool __fastcall CBitmapRealization::UpdateAttributes(CBitmapRealization *this, const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  char *v3; // rbx
  bool v5; // zf
  unsigned int v6; // eax
  bool v7; // bp
  int v8; // ecx
  struct _LUID v9; // rdx

  v3 = (char *)this + 152;
  v5 = memcmp_0(a2, (char *)this + 152, 0x78uLL) == 0;
  v6 = *((_DWORD *)this + 67);
  *(_OWORD *)v3 = *(_OWORD *)a2;
  v7 = !v5;
  *((_OWORD *)v3 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v3 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v3 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v3 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v3 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v3 + 6) = *((_OWORD *)a2 + 6);
  *((_QWORD *)v3 + 14) = *((_QWORD *)a2 + 14);
  v8 = (*((_DWORD *)this + 67) >> 8) & 1;
  if ( ((v6 >> 8) & 1) != v8 )
  {
    v9 = (struct _LUID)*((_QWORD *)this + 36);
    if ( v8 )
      CD3DDeviceManager::AddHwProtectedEntity((CD3DDeviceManager *)&g_D3DDeviceManager, v9);
    else
      CD3DDeviceManager::RemoveHwProtectedEntity((CD3DDeviceManager *)&g_D3DDeviceManager, v9);
  }
  return v7;
}
