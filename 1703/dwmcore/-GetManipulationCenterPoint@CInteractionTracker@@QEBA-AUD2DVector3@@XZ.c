/*
 * XREFs of ?GetManipulationCenterPoint@CInteractionTracker@@QEBA?AUD2DVector3@@XZ @ 0x18016CC78
 * Callers:
 *     ?GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180182F00 (-GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CInteractionTracker::GetManipulationCenterPoint(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+30h] [rbp-88h]

  v2 = *(_QWORD *)(a1 + 512);
  if ( v2 )
  {
    v4 = *(_OWORD *)(v2 + 284);
    *a2 = DWORD1(v4) ^ _xmm;
    a2[2] = HIDWORD(v4) ^ _xmm;
    a2[1] = DWORD2(v4) ^ _xmm;
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    a2[2] = 0;
  }
  return a2;
}
