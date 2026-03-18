/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0203660
 * Callers:
 *     xxxMNButtonDown @ 0x1C02043DC (xxxMNButtonDown.c)
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(_QWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(*a1 + 24LL);
  if ( v3 )
  {
    v1 = 1;
    v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v7;
    v7[1] = v3;
    ++*(_DWORD *)(v3 + 8);
    if ( v3 != *(_QWORD *)(*a1 + 56LL) )
      xxxSendMessage(v3, 484, 0, 0);
    xxxSendMessage(v3, 485, -1, 0);
    ThreadUnlock1(v5, v4);
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return v1;
}
