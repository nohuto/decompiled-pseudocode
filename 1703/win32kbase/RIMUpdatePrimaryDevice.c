/*
 * XREFs of RIMUpdatePrimaryDevice @ 0x1C0106768
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C00096B0 (RIMRemoveFromActiveDevices.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104474 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0111020 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01112F4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x1C0106658 (RIMGetPointerInputType.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C013D1C8 (ApiSetIsPointerInputTypeRedirected.c)
 */

__int64 __fastcall RIMUpdatePrimaryDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // eax

  result = *(_QWORD *)(a1 + 608);
  if ( result )
    *(_DWORD *)(result + 260) &= ~4u;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 260) |= 4u;
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
