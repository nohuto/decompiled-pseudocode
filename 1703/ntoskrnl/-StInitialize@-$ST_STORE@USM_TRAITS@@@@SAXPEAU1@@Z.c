/*
 * XREFs of ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14012EB64
 * Callers:
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14012EA58 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x14012ECF0 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     StLcInitialize @ 0x14012F4B4 (StLcInitialize.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SmCrEncInitialize @ 0x140568208 (SmCrEncInitialize.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StInitialize(__int64 a1)
{
  unsigned int v2; // eax
  _QWORD *v3; // rcx
  _QWORD *i; // rax
  unsigned int v5; // eax
  __int64 result; // rax

  memset((void *)a1, 0, 0x1760uLL);
  *(_BYTE *)a1 = 2;
  ST_STORE<SM_TRAITS>::StDmInitialize(a1 + 80, a1 + 2000);
  ST_STORE<SM_TRAITS>::StDmInitialize(a1 + 2000, 0LL);
  memset((void *)(a1 + 3928), 0, 0x38uLL);
  SmCrEncInitialize(a1 + 4032);
  v2 = *(_DWORD *)(a1 + 4184) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 4192) = 3;
  *(_DWORD *)(a1 + 4184) = v2 | 6;
  memset((void *)(a1 + 4248), 0, 0x518uLL);
  *(_QWORD *)(a1 + 4248) = a1 + 4272;
  *(_QWORD *)(a1 + 4264) = MEMORY[0xFFFFF78000000008] + 600000000LL;
  *(_QWORD *)(a1 + 5576) = 500LL;
  *(_QWORD *)(a1 + 5592) = 1000LL;
  *(_QWORD *)(a1 + 5608) = 3000LL;
  *(_QWORD *)(a1 + 5624) = 5000LL;
  *(_QWORD *)(a1 + 5640) = 10000LL;
  *(_QWORD *)(a1 + 5656) = 20000LL;
  *(_QWORD *)(a1 + 5672) = 50000LL;
  *(_QWORD *)(a1 + 5688) = 100000LL;
  StLcInitialize(a1 + 5552);
  memset((void *)(a1 + 5712), 0, 0xE8uLL);
  v3 = (_QWORD *)(a1 + 5880);
  for ( i = (_QWORD *)(a1 + 5712); i < v3; i += 3 )
  {
    *i = -1LL;
    i[1] = -1LL;
  }
  v5 = *(_DWORD *)(a1 + 5904) & 0xFFFFFFFE;
  *v3 = -1LL;
  *(_DWORD *)(a1 + 5912) = 5;
  *(_DWORD *)(a1 + 5904) = v5 | 6;
  InitializeSListHead((PSLIST_HEADER)(a1 + 4016));
  result = *(_DWORD *)(a1 + 5944) & 0xFFFFFFF8 | 6;
  *(_DWORD *)(a1 + 5952) = 6;
  *(_DWORD *)(a1 + 5944) = result;
  return result;
}
