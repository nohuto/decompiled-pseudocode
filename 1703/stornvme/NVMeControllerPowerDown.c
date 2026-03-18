/*
 * XREFs of NVMeControllerPowerDown @ 0x1C0004E10
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C10 (NVMeHwAdapterControl.c)
 *     NVMeHwStartIo @ 0x1C00023F0 (NVMeHwStartIo.c)
 * Callees:
 *     IoQueuesDeletion @ 0x1C0003EAC (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000ECD0 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeControllerPowerDown(__int64 a1)
{
  unsigned int v2; // edi
  int *v3; // rcx
  int v4; // r9d
  unsigned __int8 v5; // al
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9
  unsigned int v11; // esi
  signed __int32 v13[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v3 = *(int **)(a1 + 3232);
  if ( v3 )
  {
    v4 = *v3;
    LODWORD(Size) = v3[1];
    NVMeSetHostMemoryBuffer(a1, 0, 0, v4, v3 + 2, Size);
  }
  if ( (*(_BYTE *)(a1 + 3240) & 3) == 3 )
    *(_BYTE *)(a1 + 3240) |= 4u;
  v5 = *(_BYTE *)(a1 + 43);
  v6 = 5;
  if ( v5 >= 5u )
    v6 = v5;
  StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, waiting %us seconds...\n", v6);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFFA | 4;
  IoQueuesDeletion(a1, v7, v8, v9);
  *(_DWORD *)(*(_QWORD *)(a1 + 112) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v13, 0);
  v11 = 100 * v6;
  if ( v11 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 112) + 28LL) & 0xC) == 8 )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL, v10);
      ++v2;
    }
    while ( v2 < v11 );
  }
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, took %ums\n", 10 * v2);
}
