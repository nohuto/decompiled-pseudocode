/*
 * XREFs of ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00F3264
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00A0808 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0DE0 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0004BC4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceSyncObjects(DXGDEVICE *this)
{
  __int64 v2; // rcx
  DXGDEVICESYNCOBJECT **v3; // rbx
  DXGDEVICESYNCOBJECT *v4; // rcx
  __int64 v5; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v5 + 24) = 2399LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 216) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 624LL))();
    *((_QWORD *)this + 216) = 0LL;
  }
  v3 = (DXGDEVICESYNCOBJECT **)((char *)this + 408);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (DXGDEVICESYNCOBJECT *)v3 )
      break;
    if ( v4 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v4);
  }
}
