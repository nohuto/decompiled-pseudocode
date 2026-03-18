/*
 * XREFs of ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x180006A50
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180092DA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005FB40 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
        CRenderTargetManager *this,
        const struct CVisual *a2,
        struct ISwapChainContent *a3)
{
  char v3; // bl
  unsigned int i; // esi
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  char v10; // al
  __int64 v11; // rdi
  unsigned int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v16; // r9
  __int64 v17; // r8

  v3 = 0;
  for ( i = 0; i < *((_DWORD *)this + 12); ++i )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * i);
    v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL);
    if ( v9 == CHwndRenderTarget::IsOfType )
      v10 = CHwndRenderTarget::IsOfType(v8, 76LL);
    else
      v10 = v9(v8, 76LL);
    if ( v10 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * i) + 840LL);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 280);
        v13 = 0;
        if ( v12 )
        {
          v16 = *(_QWORD *)(v11 + 256);
          while ( 1 )
          {
            v17 = 248LL * v13;
            if ( *(const struct CVisual **)(v17 + v16 + 8) == a2 && *(struct ISwapChainContent **)(v17 + v16 + 16) == a3 )
              break;
            if ( ++v13 >= v12 )
              goto LABEL_7;
          }
          if ( v13 != -1 )
            return 1;
        }
LABEL_7:
        v14 = *(_QWORD *)(v11 + 1056);
        if ( v14
          && *(const struct CVisual **)(v14 + 24) == a2
          && *(_QWORD *)(*(_QWORD *)(v11 + 1056) + 32LL) == (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a3 + 200LL))(a3) )
        {
          return 1;
        }
      }
    }
  }
  return v3;
}
