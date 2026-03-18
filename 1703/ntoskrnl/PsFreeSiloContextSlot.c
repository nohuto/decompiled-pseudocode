/*
 * XREFs of PsFreeSiloContextSlot @ 0x1406DE190
 * Callers:
 *     RegistryUnload @ 0x140679000 (RegistryUnload.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     PspStorageGetObject @ 0x14023A8EC (PspStorageGetObject.c)
 *     PspGetNextSilo @ 0x14054B0C4 (PspGetNextSilo.c)
 */

__int64 __fastcall PsFreeSiloContextSlot(unsigned int a1)
{
  ULONG_PTR *i; // rcx
  __int64 v3; // rcx
  ULONG_PTR *NextSilo; // rax
  ULONG_PTR *v5; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = (ULONG_PTR *)PspGetNextSilo(i, 0);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    v3 = NextSilo[161];
    if ( v3 && (int)PspStorageGetObject(v3, a1, (unsigned __int64 *)&Object) >= 0 )
    {
      ObfDereferenceObject(Object);
      KeBugCheckEx(0x199u, v5[161], 0LL, 0LL, 0LL);
    }
  }
  return PspStorageFreeSlot(a1);
}
