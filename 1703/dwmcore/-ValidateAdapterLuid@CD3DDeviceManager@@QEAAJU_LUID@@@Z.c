/*
 * XREFs of ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x18004231C
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18001B0A8 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEA.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800423E4 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180042720 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x1800B74C8 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007F134 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::ValidateAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  DWORD LowPart; // ebx
  int v3; // eax
  CMILRefCountBase *v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 i; // rax
  unsigned int (__fastcall *v8)(CMILRefCountBase *__hidden); // rax
  CMILRefCountBase *v10; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v11; // [rsp+48h] [rbp+10h]

  v11 = a2;
  v10 = 0LL;
  LowPart = a2.LowPart;
  v3 = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v10);
  v4 = v10;
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x5D9u);
  }
  else
  {
    v5 = 0;
    LODWORD(v6) = 0;
    if ( *((_DWORD *)v10 + 22) )
    {
      for ( i = **((_QWORD **)v10 + 8);
            __PAIR64__(v11.HighPart, LowPart) != *(_QWORD *)(i + 336);
            i = *(_QWORD *)(*((_QWORD *)v10 + 8) + 8 * v6) )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *((_DWORD *)v10 + 22) )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, -2003304307, 0x63u);
          v5 = -2003304307;
          goto LABEL_14;
        }
      }
    }
    else
    {
      v5 = -2003304307;
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, -2003304307, 0x56u);
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x5DBu);
    }
  }
  if ( v4 )
  {
    v8 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v4 + 8LL);
    if ( v8 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v4);
    else
      v8(v4);
  }
  return v5;
}
