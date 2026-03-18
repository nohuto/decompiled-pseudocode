/*
 * XREFs of RIMUpdatePrimaryDevice @ 0x1C0107450
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C000B7A0 (RIMRemoveFromActiveDevices.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104504 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C010FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C010FDC4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x1C0107340 (RIMGetPointerInputType.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C013C698 (ApiSetIsPointerInputTypeRedirected.c)
 */

__int64 __fastcall RIMUpdatePrimaryDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // eax

  result = *(_QWORD *)(a1 + 608);
  if ( result )
    *(_DWORD *)(result + 276) &= ~4u;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 276) |= 4u;
    *(_QWORD *)(a1 + 608) = a2;
    v4 = RIMGetPointerInputType(a2);
    result = ApiSetIsPointerInputTypeRedirected(v4);
    *(_DWORD *)(a1 + 616) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 608) = 0LL;
    *(_DWORD *)(a1 + 616) = 0;
  }
  return result;
}
