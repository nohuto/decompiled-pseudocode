/*
 * XREFs of IoQueryInterface @ 0x140517310
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1402874A0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     PnpQueryInterface @ 0x14051AEB4 (PnpQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x14059C284 (IopQueryInterfaceRecurseUp.c)
 */

__int64 __fastcall IoQueryInterface(
        struct _DEVICE_OBJECT *a1,
        char a2,
        int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6,
        void *a7)
{
  if ( (a2 & 1) != 0 )
    return IopQueryInterfaceRecurseUp((int)a1, a3, a4, a5, a6, a7);
  else
    return PnpQueryInterface(a1, a6, a7);
}
