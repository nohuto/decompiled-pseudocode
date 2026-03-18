/*
 * XREFs of SendPTPCancelInertia @ 0x1C01B42D0
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     SendPTPEndInertia @ 0x1C01B4330 (SendPTPEndInertia.c)
 */

__int64 __fastcall SendPTPCancelInertia(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = *(unsigned int *)(a1 + 160);
    if ( (result & 1) != 0 )
      result = SendPTPEndInertia();
  }
  *(_DWORD *)(a1 + 160) &= ~1u;
  if ( gtmridTouchpadInertiaTimer )
  {
    result = FindTimer(0LL, gtmridTouchpadInertiaTimer, 4u, 1, 0LL);
    gtmridTouchpadInertiaTimer = 0LL;
    ghdevTouchpad = 0LL;
  }
  return result;
}
