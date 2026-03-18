/*
 * XREFs of ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180089D0C
 * Callers:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180088DA0 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800899E0 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180089A7C (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x1800B6F74 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::ValidateAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  DWORD LowPart; // ebx
  int v3; // eax
  CMILRefCountBase *v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 *v7; // rdx
  int v8; // ebp
  __int64 i; // rax
  __int64 (__fastcall *v10)(CMILRefCountBase *); // rax
  CMILRefCountBase *v12; // [rsp+50h] [rbp+8h] BYREF
  struct _LUID v13; // [rsp+58h] [rbp+10h]

  v13 = a2;
  v12 = 0LL;
  LowPart = a2.LowPart;
  v3 = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v12);
  v4 = v12;
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x5DDu);
    goto LABEL_6;
  }
  LODWORD(v6) = 0;
  if ( !*((_DWORD *)v12 + 22) )
  {
    v5 = -2003304307;
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, -2003304307, 0x56u);
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5DFu);
    goto LABEL_6;
  }
  v7 = (__int64 *)*((_QWORD *)v12 + 8);
  v8 = 0;
  for ( i = *v7; __PAIR64__(v13.HighPart, LowPart) != *(_QWORD *)(i + 336); i = v7[v6] )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *((_DWORD *)v12 + 22) )
    {
      v8 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, -2003304307, 0x63u);
      break;
    }
  }
  v5 = v8;
  if ( v8 < 0 )
    goto LABEL_14;
LABEL_6:
  if ( v4 )
  {
    v10 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v4 + 8LL);
    if ( v10 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v4);
    else
      v10(v4);
  }
  return v5;
}
