/*
 * XREFs of ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800428F8
 * Callers:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18007A43C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?IsXboxAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x1800465C0 (-IsXboxAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007F134 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CD3DDeviceManager::IsXboxAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  bool IsXboxAdapterLuid; // di
  struct _LUID v4; // rdx
  CDXGIEnumeration *v5; // rbx
  unsigned int (__fastcall *v6)(CMILRefCountBase *__hidden); // rax
  CDXGIEnumeration *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  IsXboxAdapterLuid = 0;
  if ( (int)CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v8) >= 0 )
  {
    v4 = a2;
    v5 = v8;
    IsXboxAdapterLuid = CDXGIEnumeration::IsXboxAdapterLuid(v8, v4);
    if ( v5 )
    {
      v6 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v5 + 8LL);
      if ( v6 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(v5);
      else
        v6(v5);
    }
  }
  return IsXboxAdapterLuid;
}
