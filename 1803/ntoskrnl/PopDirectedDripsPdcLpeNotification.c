/*
 * XREFs of PopDirectedDripsPdcLpeNotification @ 0x140761B50
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x140278830 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsPdcLpeNotification(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  bool v3; // zf
  unsigned __int64 v4; // rdx

  v2 = 0;
  if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) )
  {
    v3 = a2 == 1;
    v4 = 16842752LL;
    *(_BYTE *)(a1 + 200) = v3;
    if ( !v3 )
      v4 = 0x601010000LL;
    PopQueueDirectedDripsWork(a1, v4);
    return 259;
  }
  return v2;
}
