/*
 * XREFs of ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1402A8A68
 * Callers:
 *     SmEtwEnableCallback @ 0x140641C40 (SmEtwEnableCallback.c)
 * Callees:
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1400836E8 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx
  int LowPart; // edi
  __int64 v7; // rcx
  struct _EX_RUNDOWN_REF *v8; // rax
  LARGE_INTEGER v10; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v12; // [rsp+42h] [rbp-1Eh]
  int v13; // [rsp+44h] [rbp-1Ch]
  _QWORD v14[3]; // [rsp+48h] [rbp-18h] BYREF

  Object = 0;
  v13 = 0;
  v14[1] = v14;
  v12 = 6;
  v14[0] = v14;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    v5[2] = -1;
    *v5 = 3;
    LowPart = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v7, a2, (__int64)v5, (__int64)&Object, &v10);
    if ( LowPart >= 0 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      LowPart = v10.LowPart;
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
    v8 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(a2 + 6016) & 0x3FF);
    ExReleaseRundownProtection(v8 + 1);
  }
  return (unsigned int)LowPart;
}
