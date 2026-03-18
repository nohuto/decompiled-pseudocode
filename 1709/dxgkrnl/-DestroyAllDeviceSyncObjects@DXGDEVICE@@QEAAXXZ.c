/*
 * XREFs of ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00937A8
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009C68C (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyDevice @ 0x1C00F2970 (DxgkDestroyDevice.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0007E1C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceSyncObjects(DXGDEVICE *this)
{
  DXGDEVICESYNCOBJECT **v2; // rbx
  DXGDEVICESYNCOBJECT *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 2287LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 214) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL) + 8LL) + 528LL))();
    *((_QWORD *)this + 214) = 0LL;
  }
  v2 = (DXGDEVICESYNCOBJECT **)((char *)this + 392);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (DXGDEVICESYNCOBJECT *)v2 )
      break;
    if ( v3 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v3);
  }
}
