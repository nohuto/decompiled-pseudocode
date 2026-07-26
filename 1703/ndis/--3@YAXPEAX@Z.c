/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1C00285C8
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00F2120 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
