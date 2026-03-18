/*
 * XREFs of ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x18001A0A0
 * Callers:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18004DCC0 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18006777C (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180010EA8 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x1800753AC (-IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CD3DDeviceManager::IsXboxAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  DWORD LowPart; // ebx
  bool IsXboxAdapter; // di
  CMILRefCountBase *v4; // rsi
  unsigned int v5; // ecx
  __int64 v6; // r8
  unsigned int (__fastcall *v7)(CMILRefCountBase *__hidden); // rax
  CMILRefCountBase *v9; // [rsp+30h] [rbp+8h] BYREF
  struct _LUID v10; // [rsp+38h] [rbp+10h]

  v10 = a2;
  LowPart = a2.LowPart;
  IsXboxAdapter = 0;
  v9 = 0LL;
  if ( (int)CDisplayManager::EnsureDXGIEnumeration((CDisplayManager *)&g_DisplayManager, &v9) >= 0 )
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
    v7 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v4 + 8LL);
    if ( v7 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v4);
    else
      v7(v4);
  }
  return IsXboxAdapter;
}
