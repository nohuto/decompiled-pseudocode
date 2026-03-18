/*
 * XREFs of SendPTPEndInertia @ 0x1C01B4330
 * Callers:
 *     SendPTPCancelInertia @ 0x1C01B42D0 (SendPTPCancelInertia.c)
 * Callees:
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     zzzPostInertiaMessage @ 0x1C020DBB4 (zzzPostInertiaMessage.c)
 */

__int64 __fastcall SendPTPEndInertia(__int64 a1)
{
  __int64 result; // rax

  EtwTraceTouchpadEndInertiaQueued();
  result = zzzPostInertiaMessage(0x23Cu, 1);
  *(_DWORD *)(a1 + 160) &= ~1u;
  if ( gtmridTouchpadInertiaTimer )
  {
    result = FindTimer(0LL, gtmridTouchpadInertiaTimer, 4u, 1, 0LL);
    gtmridTouchpadInertiaTimer = 0LL;
    ghdevTouchpad = 0LL;
  }
  return result;
}
