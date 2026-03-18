/*
 * XREFs of ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00077CC
 * Callers:
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00D73B0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00DA620 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS(
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v1 + 16), (struct DXGDEVICE *)v1);
  }
}
