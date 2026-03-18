/*
 * XREFs of MNGetpItem @ 0x1C0205900
 * Callers:
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxMNSetGapState @ 0x1C0214314 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0214540 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 */

__int64 __fastcall MNGetpItem(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx

  v4 = 0LL;
  if ( **a1 )
  {
    a3 = **a1;
    if ( (_DWORD)a2 != -1 )
    {
      a3 = *(_QWORD *)(a3 + 40);
      if ( (unsigned int)a2 < *(_DWORD *)(a3 + 68) )
        v4 = *(_QWORD *)(a3 + 96) + 152LL * (unsigned int)a2;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, a3, a4);
  return v4;
}
