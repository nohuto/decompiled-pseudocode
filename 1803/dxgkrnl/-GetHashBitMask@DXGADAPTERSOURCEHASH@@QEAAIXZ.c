/*
 * XREFs of ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0002CCC
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C009FEC4 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00ABA00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B4E1C (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitMask(DXGADAPTERSOURCEHASH *this)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  DXGFASTMUTEX *v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v8 = this;
  v9 = 0;
  if ( !this )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v5 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v5);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v8 + 1) == CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v6 + 24) = 515LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( v9 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v7[5] = &v8;
    v7[3] = 275LL;
    v7[4] = 4LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  DXGFASTMUTEX::Acquire(v8);
  v9 = 0;
  v3 = 0xFFFFFFFF >> (32 - *((_BYTE *)this + 60)) << (32 - *((_BYTE *)this + 60));
  DXGFASTMUTEX::Release(v8);
  return v3;
}
