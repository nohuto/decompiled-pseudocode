/*
 * XREFs of ?DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z @ 0x18006F2A8
 * Callers:
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006E8A0 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18006EC88 (-ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18006EDB4 (-ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?ComputeSuperimposedDisplayPixelsFromTouchpadHimetricValues@PTPProcessor@@AEAAXPEAUInputInfo@@_N@Z @ 0x18006F350 (-ComputeSuperimposedDisplayPixelsFromTouchpadHimetricValues@PTPProcessor@@AEAAXPEAUInputInfo@@_N.c)
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180070F70 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall PTPProcessor::DeliverTouchpadGestureMessage(
        PTPProcessor *this,
        struct InputInfo *a2,
        char a3,
        bool a4)
{
  unsigned int v4; // edi
  __int64 i; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  v4 = 0;
  *(_DWORD *)a2 = 32;
  *((_DWORD *)a2 + 157) = *((_DWORD *)this + 151);
  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 12); *((_DWORD *)a2 + 4 * v8 + 15) &= 0xFFFFFFFC )
    {
      v8 = 3 * i;
      i = (unsigned int)(i + 1);
    }
  }
  PTPProcessor::ComputeSuperimposedDisplayPixelsFromTouchpadHimetricValues(this, a2, a4);
  if ( *((_DWORD *)this + 149) != 4 )
  {
    v9 = PointerProcessor::OnInputReport((PTPProcessor *)((char *)this + 8), a2);
    v4 = v9;
    if ( v9 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 11, 733, v9);
  }
  return v4;
}
