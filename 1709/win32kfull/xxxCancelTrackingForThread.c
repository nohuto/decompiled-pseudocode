/*
 * XREFs of xxxCancelTrackingForThread @ 0x1C01DD620
 * Callers:
 *     xxxCancelTracking @ 0x1C00CB4A0 (xxxCancelTracking.c)
 * Callees:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     IsInsideMenuLoop @ 0x1C00CF214 (IsInsideMenuLoop.c)
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     ChangeComposableCursor @ 0x1C01A0F94 (ChangeComposableCursor.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxCancelTrackingForThread(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 648);
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 196) & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0);
        *(_DWORD *)(v1 + 196) &= ~0x8000000u;
      }
      *(_DWORD *)(v1 + 196) |= 8u;
      if ( (*(_DWORD *)(a1 + 464) & 0x10) != 0 )
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, 0LL, 0);
        if ( (*(_DWORD *)(v1 + 196) & 0x20) == 0 )
          xxxDrawDragRectEx((struct _MOVESIZEDATA *)v1);
      }
      *(_DWORD *)(a1 + 464) &= ~0x10u;
      if ( *(_QWORD *)(a1 + 408) )
        SetWakeBit(a1, 2LL);
      if ( (unsigned int)IsInsideMenuLoop(a1) )
      {
        v3 = *(_QWORD *)(a1 + 648);
        if ( v3 )
          PostMessage(*(_QWORD *)(v3 + 16), 31LL, 0LL, 0LL);
      }
      xxxCapture((_QWORD *)a1, 0LL, 0);
    }
  }
}
