/*
 * XREFs of ndisImmediateReadWriteSharedMemory @ 0x1C00E6528
 * Callers:
 *     NdisImmediateReadSharedMemory @ 0x1C00E5F60 (NdisImmediateReadSharedMemory.c)
 *     NdisImmediateWriteSharedMemory @ 0x1C00E6010 (NdisImmediateWriteSharedMemory.c)
 * Callees:
 *     ndisTranslateResources @ 0x1C00C9D28 (ndisTranslateResources.c)
 *     ndisStartMapping @ 0x1C00E6604 (ndisStartMapping.c)
 */

void __fastcall ndisImmediateReadWriteSharedMemory(__int64 a1, unsigned int a2, void *a3, unsigned int a4, char a5)
{
  __int64 v5; // rcx
  int v9; // r14d
  int v10; // r15d
  int v11; // ecx
  PVOID v12; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+30h] BYREF
  char v17; // [rsp+88h] [rbp+38h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v14 = 0LL;
  v9 = *(_DWORD *)(v5 + 3736);
  v10 = *(_DWORD *)(v5 + 3740);
  if ( !(unsigned int)ndisTranslateResources(v5, 3, a2, &v15, &v14) )
  {
    v11 = -1;
    LODWORD(BaseAddress) = v15;
    if ( !v14 )
      v11 = v9;
    if ( (int)ndisStartMapping(v11, v10, a2, a4, 0, (__int64)&BaseAddress, (__int64)&v17) >= 0 )
    {
      if ( a5 )
      {
        v12 = BaseAddress;
        qmemcpy(a3, BaseAddress, a4);
      }
      else
      {
        qmemcpy(BaseAddress, a3, a4);
        _InterlockedOr(v13, 0);
        v12 = BaseAddress;
      }
      if ( v17 )
        MmUnmapIoSpace(v12, a4);
    }
  }
}
