/*
 * XREFs of ndisIovTeardownVf @ 0x1C00F279C
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIovTeardownVf(__int64 a1)
{
  _IRP *v2; // rcx

  v2 = *(_IRP **)(a1 + 4664);
  if ( v2 )
  {
    *(_BYTE *)(a1 + 4706) = 1;
    IoCancelIrp(v2);
    KeWaitForSingleObject((PVOID)(a1 + 4680), Executive, 0, 0, 0LL);
    IoFreeIrp(*(PIRP *)(a1 + 4664));
    *(_QWORD *)(a1 + 4664) = 0LL;
  }
}
