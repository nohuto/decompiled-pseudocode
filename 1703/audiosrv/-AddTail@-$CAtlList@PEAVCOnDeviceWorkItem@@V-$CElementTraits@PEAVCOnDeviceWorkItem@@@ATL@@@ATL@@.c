/*
 * XREFs of ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x18007C0DC
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800818B0 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAXXZ @ 0x180024108 (-GetFreeNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@A.c)
 */

_QWORD *__fastcall ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rsi
  _QWORD *v5; // r8
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *result; // rax

  v2 = a1[1];
  ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::GetFreeNode((__int64)a1);
  v5 = (_QWORD *)a1[4];
  v6 = *v5;
  if ( v5 )
    v5[2] = *a2;
  a1[4] = v6;
  *v5 = 0LL;
  v5[1] = v2;
  ++a1[2];
  v7 = (_QWORD *)a1[1];
  if ( v7 )
    *v7 = v5;
  else
    *a1 = v5;
  result = v5;
  a1[1] = v5;
  return result;
}
