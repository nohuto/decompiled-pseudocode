/*
 * XREFs of NVMeControllerStop @ 0x1C0004E58
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C90 (NVMeHwAdapterControl.c)
 * Callees:
 *     AdminQueuesFreeResources @ 0x1C0002D98 (AdminQueuesFreeResources.c)
 *     IoQueuesDeletion @ 0x1C000414C (IoQueuesDeletion.c)
 *     IoQueuesFreeResources @ 0x1C00043C4 (IoQueuesFreeResources.c)
 *     NVMePowerCleanUp @ 0x1C0005FDC (NVMePowerCleanUp.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C0006990 (NVMeFreeHostMemoryBuffer.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

bool __fastcall NVMeControllerStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  bool result; // al

  v5 = IoQueuesDeletion(a1, a2, a3, a4);
  NVMePowerCleanUp(a1);
  if ( *(_QWORD *)(a1 + 3232) )
    NVMeFreeHostMemoryBuffer(a1);
  IoQueuesFreeResources(a1, v6, v7, v8);
  AdminQueuesFreeResources(a1, v9, v10, v11);
  v13 = *(_QWORD *)(a1 + 184);
  if ( v13 )
  {
    StorPortExtendedFunction(1LL, a1, v13, v12);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  v14 = *(_QWORD *)(a1 + 192);
  if ( v14 )
  {
    StorPortExtendedFunction(1LL, a1, v14, v12);
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  v15 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 164) = 0LL;
  if ( v15 )
  {
    StorPortExtendedFunction(1LL, a1, v15, v12);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  v16 = *(_QWORD *)(a1 + 208);
  if ( v16 )
  {
    StorPortExtendedFunction(1LL, a1, v16, v12);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  *(_WORD *)(a1 + 200) = 0;
  if ( !*(_BYTE *)(a1 + 16) )
    StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1184), v12);
  memset((void *)(a1 + 1184), 0, 0x7F8uLL);
  result = v5;
  *(_DWORD *)(a1 + 148) = 0;
  return result;
}
