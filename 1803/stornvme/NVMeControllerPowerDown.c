/*
 * XREFs of NVMeControllerPowerDown @ 0x1C0005174
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 *     NVMeHwStartIo @ 0x1C00025F0 (NVMeHwStartIo.c)
 * Callees:
 *     IoQueuesDeletion @ 0x1C0004170 (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000F970 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeControllerPowerDown(__int64 a1)
{
  int *v2; // rcx
  unsigned int v3; // edi
  int v4; // r9d
  int v5; // ebx
  unsigned int v6; // ebx
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  v2 = *(int **)(a1 + 3280);
  v3 = 0;
  if ( v2 )
  {
    v4 = *v2;
    LODWORD(Size) = v2[1];
    NVMeSetHostMemoryBuffer(a1, 0, 0, v4, v2 + 2, Size);
  }
  if ( (*(_BYTE *)(a1 + 3288) & 3) == 3 )
    *(_BYTE *)(a1 + 3288) |= 4u;
  v5 = 5;
  if ( *(unsigned __int8 *)(a1 + 43) >= 5u )
    v5 = *(unsigned __int8 *)(a1 + 43);
  StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, waiting %us seconds...\n");
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFFA | 4;
  IoQueuesDeletion(a1);
  *(_DWORD *)(*(_QWORD *)(a1 + 120) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v8, 0);
  v6 = 100 * v5;
  if ( v6 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 120) + 28LL) & 0xC) == 8 )
        break;
      StorPortStallExecution(10000LL);
      ++v3;
    }
    while ( v3 < v6 );
  }
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, took %ums\n", 10 * v3);
}
