/*
 * XREFs of HasThreadRequestedLegacyMouseWheelRouting @ 0x1C0131B84
 * Callers:
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01309C4 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131458 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasThreadRequestedLegacyMouseWheelRouting(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 400) + 776LL) & 0x8000) != 0
     || (GetAppCompatFlags2QuadWord(a1) & 0x10000000000000LL) != 0) )
  {
    return 1;
  }
  return v1;
}
