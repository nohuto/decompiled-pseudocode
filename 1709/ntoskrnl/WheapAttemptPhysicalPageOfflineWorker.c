/*
 * XREFs of WheapAttemptPhysicalPageOfflineWorker @ 0x140763240
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140763138 (WheapAttemptPhysicalPageOffline.c)
 */

LONG __fastcall WheapAttemptPhysicalPageOfflineWorker(__int64 a1)
{
  *(_DWORD *)(a1 + 12) = WheapAttemptPhysicalPageOffline(*(UNICODE_STRING **)a1, *(_BYTE *)(a1 + 8), *(_BYTE *)(a1 + 9));
  return KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
}
