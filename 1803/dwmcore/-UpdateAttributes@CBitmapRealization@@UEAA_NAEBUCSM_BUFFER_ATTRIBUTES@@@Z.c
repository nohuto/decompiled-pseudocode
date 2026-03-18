/*
 * XREFs of ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180049404
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180045A60 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CSectionBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802133A0 (-UpdateAttributes@CSectionBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180215F80 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801DDC8C (-AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 *     ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801DE78C (-RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

bool __fastcall CBitmapRealization::UpdateAttributes(CBitmapRealization *this, const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  char *v3; // rbx
  bool v5; // zf
  unsigned int v6; // eax
  bool v7; // bp
  int v8; // ecx
  struct _LUID v10; // rdx

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
    v10 = (struct _LUID)*((_QWORD *)this + 36);
    if ( v8 )
      CD3DDeviceManager::AddHwProtectedEntity((CD3DDeviceManager *)&g_D3DDeviceManager, v10);
    else
      CD3DDeviceManager::RemoveHwProtectedEntity((CD3DDeviceManager *)&g_D3DDeviceManager, v10);
  }
  return v7;
}
