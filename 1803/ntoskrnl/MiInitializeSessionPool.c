/*
 * XREFs of MiInitializeSessionPool @ 0x14060ABC4
 * Callers:
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     ExInitializePoolDescriptor @ 0x14060AF74 (ExInitializePoolDescriptor.c)
 */

__int64 MiInitializeSessionPool()
{
  unsigned __int64 v0; // rbx

  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  *(_QWORD *)(v0 + 160) = 0LL;
  ExInitializePoolDescriptor(v0 + 3456, 33LL);
  *(_QWORD *)(v0 + 184) = MiGetPteAddress(*(_QWORD *)(v0 + 56));
  if ( !(unsigned int)MiInitializeDynamicBitmap(v0 + 168, qword_1403CB5E8, 0x2000000LL, 0LL) )
    return 3221225626LL;
  *(_QWORD *)(v0 + 168) = 0LL;
  *(_QWORD *)(v0 + 192) = 0x2000000LL;
  *(_DWORD *)(v0 + 4) |= 4u;
  return 0LL;
}
