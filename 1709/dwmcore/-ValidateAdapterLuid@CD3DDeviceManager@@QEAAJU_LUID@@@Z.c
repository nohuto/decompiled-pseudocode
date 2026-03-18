/*
 * XREFs of ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x18001AD64
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18001A14C (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x18001A290 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x18001ACC8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x1800987D8 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180010EA8 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::ValidateAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  DWORD LowPart; // ebx
  int v3; // eax
  CMILRefCountBase *v4; // rsi
  unsigned int v5; // edi
  int v6; // ebp
  __int64 v7; // rcx
  __int64 *v8; // rdx
  __int64 i; // rax
  unsigned int (__fastcall *v10)(CMILRefCountBase *__hidden); // rax
  CMILRefCountBase *v12; // [rsp+50h] [rbp+8h] BYREF
  struct _LUID v13; // [rsp+58h] [rbp+10h]

  v13 = a2;
  v12 = 0LL;
  LowPart = a2.LowPart;
  v3 = CDisplayManager::EnsureDXGIEnumeration((CDisplayManager *)&g_DisplayManager, &v12);
  v4 = v12;
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x5D9u);
    goto LABEL_6;
  }
  v6 = 0;
  LODWORD(v7) = 0;
  if ( !*((_DWORD *)v12 + 22) )
  {
    v5 = -2003304307;
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, -2003304307, 0x56u);
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x5DBu);
    goto LABEL_6;
  }
  v8 = (__int64 *)*((_QWORD *)v12 + 8);
  for ( i = *v8; __PAIR64__(v13.HighPart, LowPart) != *(_QWORD *)(i + 336); i = v8[v7] )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *((_DWORD *)v12 + 22) )
    {
      v6 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, -2003304307, 0x63u);
      break;
    }
  }
  v5 = v6;
  if ( v6 < 0 )
    goto LABEL_14;
LABEL_6:
  if ( v4 )
  {
    v10 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v4 + 8LL);
    if ( v10 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v4);
    else
      v10(v4);
  }
  return v5;
}
