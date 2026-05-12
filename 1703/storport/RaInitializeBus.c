/*
 * XREFs of RaInitializeBus @ 0x1C00607B0
 * Callers:
 *     RaidAdapterHack @ 0x1C0019CA0 (RaidAdapterHack.c)
 *     RaidAdapterConfigureResources @ 0x1C001A0A4 (RaidAdapterConfigureResources.c)
 * Callees:
 *     RaQueryInterface @ 0x1C0019D5C (RaQueryInterface.c)
 */

__int64 __fastcall RaInitializeBus(bool *a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = RaQueryInterface(a2, (__int64)a2, a3, a4, (__int64)(a1 + 8));
  *a1 = (int)result >= 0;
  return result;
}
