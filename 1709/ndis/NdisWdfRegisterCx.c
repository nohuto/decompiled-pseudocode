/*
 * XREFs of NdisWdfRegisterCx @ 0x1C00EA020
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 */

NTSTATUS __fastcall NdisWdfRegisterCx(struct _DRIVER_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4, PVOID *a5)
{
  NTSTATUS result; // eax
  _OWORD *v9; // rax
  PVOID *v10; // rcx
  PVOID DriverObjectExtension; // [rsp+48h] [rbp+20h] BYREF

  if ( *(_WORD *)(a4 + 2) != 96 )
    return -1073741820;
  result = IoAllocateDriverObjectExtension(a1, (PVOID)0x4E574944, 0x88u, &DriverObjectExtension);
  if ( result >= 0 )
  {
    memset(DriverObjectExtension, 0, 0x88uLL);
    v9 = DriverObjectExtension;
    v10 = a5;
    *((_OWORD *)DriverObjectExtension + 2) = *(_OWORD *)a4;
    v9[3] = *(_OWORD *)(a4 + 16);
    v9[4] = *(_OWORD *)(a4 + 32);
    v9[5] = *(_OWORD *)(a4 + 48);
    v9[6] = *(_OWORD *)(a4 + 64);
    v9[7] = *(_OWORD *)(a4 + 80);
    *(_BYTE *)DriverObjectExtension = 22;
    *((_WORD *)DriverObjectExtension + 1) = 136;
    *((_BYTE *)DriverObjectExtension + 1) = 1;
    *((_BYTE *)DriverObjectExtension + 132) = 1;
    *((_QWORD *)DriverObjectExtension + 1) = a1;
    *((_QWORD *)DriverObjectExtension + 3) = a3;
    *v10 = DriverObjectExtension;
    return 0;
  }
  return result;
}
