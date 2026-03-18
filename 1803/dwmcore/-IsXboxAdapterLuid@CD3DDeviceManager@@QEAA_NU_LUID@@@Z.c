/*
 * XREFs of ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800898AC
 * Callers:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180045BD8 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18007A040 (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x1800CB640 (-IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CD3DDeviceManager::IsXboxAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  DWORD LowPart; // ebx
  bool IsXboxAdapter; // di
  CMILRefCountBase *v4; // rsi
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 (__fastcall *v7)(CMILRefCountBase *); // rax
  CMILRefCountBase *v9; // [rsp+30h] [rbp+8h] BYREF
  struct _LUID v10; // [rsp+38h] [rbp+10h]

  v10 = a2;
  LowPart = a2.LowPart;
  IsXboxAdapter = 0;
  v9 = 0LL;
  if ( (int)CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v9) >= 0 )
  {
    v4 = v9;
    v5 = 0;
    if ( *((_DWORD *)v9 + 22) )
    {
      v6 = *((_QWORD *)v9 + 8);
      while ( __PAIR64__(v10.HighPart, LowPart) != *(_QWORD *)(*(_QWORD *)(v6 + 8LL * v5) + 336LL) )
      {
        if ( ++v5 >= *((_DWORD *)v9 + 22) )
          goto LABEL_6;
      }
      IsXboxAdapter = CDXGIAdapterLimited::IsXboxAdapter(*(CDXGIAdapterLimited **)(v6 + 8LL * v5));
    }
LABEL_6:
    v7 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v4 + 8LL);
    if ( v7 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v4);
    else
      v7(v4);
  }
  return IsXboxAdapter;
}
