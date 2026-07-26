/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1C0025C68
 * Callers:
 *     ?RebalanceExtensions@@YAXXZ @ 0x1C00B497C (-RebalanceExtensions@@YAXXZ.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00FE120 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
