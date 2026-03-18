/*
 * XREFs of ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0003B58
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00AA3B8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AC7A0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00ECDC8 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitMask(DXGADAPTERSOURCEHASH *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  DXGFASTMUTEX *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v11 = this;
  v12 = 0;
  if ( !this )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v8);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v11 + 1) == CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 460LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( v12 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v10[5] = &v11;
    v10[3] = 275LL;
    v10[4] = 4LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  DXGFASTMUTEX::Acquire(v11);
  v12 = 0;
  v6 = 0xFFFFFFFF >> (32 - *((_BYTE *)this + 60)) << (32 - *((_BYTE *)this + 60));
  DXGFASTMUTEX::Release(v11);
  return v6;
}
