/*
 * XREFs of ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140275660
 * Callers:
 *     SmEtwEnableCallback @ 0x1405D6D20 (SmEtwEnableCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140269FAC (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown(__int64 a1, __int64 a2)
{
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // rbx
  int LowPart; // edi
  unsigned int v7; // eax
  __int64 v8; // rcx
  struct _EX_RUNDOWN_REF *v9; // rax
  LARGE_INTEGER v11; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v13; // [rsp+42h] [rbp-1Eh]
  int v14; // [rsp+44h] [rbp-1Ch]
  _QWORD v15[3]; // [rsp+48h] [rbp-18h] BYREF

  Object = 0;
  v14 = 0;
  v15[1] = v15;
  v13 = 6;
  v15[0] = v15;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    v7 = *v5;
    v5[2] = -1;
    *v5 = v7 & 0xFFFFFFF8 | 3;
    LowPart = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v8, a2, (__int64)v5, (__int64)&Object, &v11);
    if ( LowPart >= 0 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      LowPart = v11.LowPart;
      a2 = 0LL;
      v5 = 0LL;
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  else
  {
    LowPart = -1073741670;
  }
  if ( a2 )
  {
    v9 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(a2 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v9 + 1);
  }
  return (unsigned int)LowPart;
}
