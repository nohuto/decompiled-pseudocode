/*
 * XREFs of PsFreeSiloContextSlot @ 0x140714630
 * Callers:
 *     VrpRegistryUnload @ 0x1406A38E0 (VrpRegistryUnload.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     PspStorageGetObject @ 0x140250164 (PspStorageGetObject.c)
 *     PspGetNextSilo @ 0x140510998 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x14071D0C4 (PspStorageFreeSlot.c)
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
