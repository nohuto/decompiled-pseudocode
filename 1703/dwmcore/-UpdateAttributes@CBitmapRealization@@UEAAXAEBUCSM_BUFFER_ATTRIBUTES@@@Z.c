/*
 * XREFs of ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180036E30
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18007A120 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1801B4F00 (-UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1801B7320 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBitmapRealization::UpdateAttributes(CBitmapRealization *this, const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  int v2; // r8d
  int v3; // edx
  bool v4; // zf
  struct _LUID v5; // rdx

  v2 = *((_DWORD *)this + 59);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 136) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 152) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 200) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 216) = *((_OWORD *)a2 + 6);
  *((_QWORD *)this + 29) = *((_QWORD *)a2 + 14);
  v3 = *((_DWORD *)this + 59);
  if ( ((v2 ^ v3) & 0x100) != 0 )
  {
    v4 = (v3 & 0x100) == 0;
    v5 = (struct _LUID)*((_QWORD *)this + 32);
    if ( v4 )
      CD3DDeviceManager::RemoveHwProtectedEntity((CD3DDeviceManager *)&g_D3DDeviceManager, v5);
    else
      CD3DDeviceManager::AddHwProtectedEntity((CD3DDeviceManager *)&g_D3DDeviceManager, v5);
  }
}
