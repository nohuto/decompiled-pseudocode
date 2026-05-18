/*
 * XREFs of ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001B5C
 * Callers:
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001C48 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 * Callees:
 *     ?LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001AA0 (-LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180003DF8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800096E4 (memset_0.c)
 */

__int64 __fastcall AddSidMappingToLsa(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        void *a3,
        enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *a4)
{
  __int128 v8; // xmm0
  int v9; // edi
  int v10; // esi
  int v11; // eax
  PVOID v12; // rdx
  _OWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  void *v15; // [rsp+50h] [rbp-38h]
  PVOID Buffer; // [rsp+90h] [rbp+8h] BYREF

  memset_0((char *)v14 + 2, 0, 0x2EuLL);
  v8 = (__int128)*a1;
  Buffer = 0LL;
  v9 = 0;
  v14[0] = v8;
  v10 = 1;
  if ( a2 )
    v14[1] = *a2;
  v15 = a3;
  v11 = LsaLookupManageSidNameMapping(0LL, v14, &Buffer);
  if ( v11 < 0 )
  {
    v9 = v11 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_18000B3A8, 2u, v11 | 0x10000000, 0x20Du);
  }
  v12 = Buffer;
  if ( Buffer )
  {
    v10 = *(_DWORD *)Buffer;
    if ( v9 < 0 && LsaCollisionResult(v10) )
      v9 = 0;
    LsaLookupFreeMemory(v12);
  }
  *(_DWORD *)a4 = v10;
  return (unsigned int)v9;
}
