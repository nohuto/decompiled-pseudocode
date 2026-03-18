/*
 * XREFs of xxxCancelTrackingForThread @ 0x1C01F6400
 * Callers:
 *     xxxCancelTracking @ 0x1C00B6D04 (xxxCancelTracking.c)
 * Callees:
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     IsInsideMenuLoop @ 0x1C00CAF40 (IsInsideMenuLoop.c)
 *     ChangeComposableCursor @ 0x1C0195E08 (ChangeComposableCursor.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxCancelTrackingForThread(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v3; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 592);
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 180) & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0);
        *(_DWORD *)(v1 + 180) &= ~0x8000000u;
      }
      *(_DWORD *)(v1 + 180) |= 8u;
      if ( (*(_DWORD *)(a1 + 440) & 0x10) != 0 )
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, 0LL, 0);
        if ( (*(_DWORD *)(v1 + 180) & 0x20) == 0 )
          xxxDrawDragRectEx((struct _MOVESIZEDATA *)v1);
      }
      *(_DWORD *)(a1 + 440) &= ~0x10u;
      if ( *(_QWORD *)(a1 + 384) )
        SetWakeBit(a1, 2u);
      if ( (unsigned int)IsInsideMenuLoop(a1) )
      {
        v3 = *(__int64 **)(a1 + 592);
        if ( v3 )
          PostMessage(*v3, 31LL, 0LL, 0LL);
      }
      xxxCapture((_QWORD *)a1, 0LL, 0);
    }
  }
}
