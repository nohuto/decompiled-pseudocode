/*
 * XREFs of MNGetpItem @ 0x1C0203E44
 * Callers:
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxMNSetGapState @ 0x1C0212DEC (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0213060 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall MNGetpItem(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = 0LL;
  v4 = *a1;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( a2 != -1 && a2 < *(_DWORD *)(v5 + 68) )
      v3 = *(_QWORD *)(v5 + 96) + 152LL * a2;
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return v3;
}
