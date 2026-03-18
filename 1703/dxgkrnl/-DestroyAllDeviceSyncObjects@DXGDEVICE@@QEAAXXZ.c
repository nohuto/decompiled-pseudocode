/*
 * XREFs of ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00C091C
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyDevice @ 0x1C00FBB20 (DxgkDestroyDevice.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000E090 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceSyncObjects(DXGDEVICE *this)
{
  DXGDEVICESYNCOBJECT **v2; // rbx
  DXGDEVICESYNCOBJECT *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 2284LL;
    WdLogEvent5_WdAssertion(v8);
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
