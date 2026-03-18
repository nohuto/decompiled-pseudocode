/*
 * XREFs of NVMeControllerStop @ 0x1C0004EAC
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 * Callees:
 *     AdminQueuesFreeResources @ 0x1C0002D54 (AdminQueuesFreeResources.c)
 *     IoQueuesDeletion @ 0x1C0004170 (IoQueuesDeletion.c)
 *     IoQueuesFreeResources @ 0x1C00043D0 (IoQueuesFreeResources.c)
 *     NVMePowerCleanUp @ 0x1C000605C (NVMePowerCleanUp.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C0006C10 (NVMeFreeHostMemoryBuffer.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

bool __fastcall NVMeControllerStop(__int64 a1)
{
  bool v2; // si
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  bool result; // al

  v2 = IoQueuesDeletion(a1);
  NVMePowerCleanUp(a1);
  if ( *(_QWORD *)(a1 + 3280) )
    NVMeFreeHostMemoryBuffer(a1);
  IoQueuesFreeResources(a1, v3, v4, v5);
  AdminQueuesFreeResources(a1, v6, v7, v8);
  v10 = *(_QWORD *)(a1 + 192);
  if ( v10 )
  {
    StorPortExtendedFunction(1LL, a1, v10, v9);
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  v11 = *(_QWORD *)(a1 + 200);
  if ( v11 )
  {
    StorPortExtendedFunction(1LL, a1, v11, v9);
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 172) = 0LL;
  if ( v12 )
  {
    StorPortExtendedFunction(1LL, a1, v12, v9);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 216);
  if ( v13 )
  {
    StorPortExtendedFunction(1LL, a1, v13, v9);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  *(_WORD *)(a1 + 208) = 0;
  if ( !*(_BYTE *)(a1 + 16) )
    StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1224), v9);
  memset((void *)(a1 + 1224), 0, 0x7F8uLL);
  result = v2;
  *(_DWORD *)(a1 + 156) = 0;
  return result;
}
