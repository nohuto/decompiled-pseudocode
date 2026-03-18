/*
 * XREFs of ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140083570
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140081D08 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140083664 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(int a1, __int64 a2, unsigned __int8 a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  int v8; // eax
  int v9; // edx
  ULONG LowPart; // ebx
  LARGE_INTEGER v12; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v14; // [rsp+42h] [rbp-1Eh]
  int v15; // [rsp+44h] [rbp-1Ch]
  _QWORD v16[3]; // [rsp+48h] [rbp-18h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return (ULONG)-1073741670;
  memset(PoolWithTag, 0, 0x28uLL);
  v8 = v7[2];
  *v7 = 5;
  v7[2] ^= (a3 ^ (unsigned __int8)v8) & 7;
  v9 = *(_DWORD *)(a2 + 6016);
  Object = 0;
  v15 = 0;
  v16[1] = v16;
  v16[0] = v16;
  v14 = 6;
  LowPart = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(a1, v9, (_DWORD)v7, (unsigned int)&Object, (__int64)&v12);
  if ( (LowPart & 0x80000000) == 0 )
  {
    v7 = 0LL;
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    LowPart = v12.LowPart;
    if ( (v12.LowPart & 0x80000000) != 0 )
      return LowPart;
    LowPart = 0;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return LowPart;
}
