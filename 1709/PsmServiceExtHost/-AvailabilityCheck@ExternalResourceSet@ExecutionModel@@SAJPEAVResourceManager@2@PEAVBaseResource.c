/*
 * XREFs of ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18003CDD4
 * Callers:
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x1800323F8 (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180002320 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017BA0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B54C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::AvailabilityCheck(
        __int64 *a1,
        ExecutionModel::BaseResourceSet *a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        int a5,
        unsigned int a6,
        bool *a7)
{
  int v11; // edi
  __int64 v12; // rcx
  struct ExecutionModel::ResourceManager *v13; // rcx
  __int64 v14; // rdx
  unsigned __int8 *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  char *v27; // rbx
  char v29; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v30[7]; // [rsp+51h] [rbp-AFh] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 v32[560]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[560]; // [rsp+290h] [rbp+190h] BYREF

  P = 0LL;
  if ( a4 )
  {
    memset_0(v32, 0, 0x228uLL);
    v12 = a1[26];
    *(_DWORD *)v32 = a6;
    if ( (int)RmpActivityHostFindByTypeAndIdentifier(v12, 1, v32, (__int64 *)&P) < 0
      && (*(int (__fastcall **)(__int64 *, _QWORD, _BYTE *))(*a1 + 40))(a1, a6, v33) >= 0 )
    {
      v14 = 4LL;
      v15 = v32;
      v16 = v33;
      do
      {
        v17 = v16[1];
        *(_OWORD *)v15 = *v16;
        v18 = v16[2];
        *((_OWORD *)v15 + 1) = v17;
        v19 = v16[3];
        *((_OWORD *)v15 + 2) = v18;
        v20 = v16[4];
        *((_OWORD *)v15 + 3) = v19;
        v21 = v16[5];
        *((_OWORD *)v15 + 4) = v20;
        v22 = v16[6];
        *((_OWORD *)v15 + 5) = v21;
        v23 = v16[7];
        v16 += 8;
        *((_OWORD *)v15 + 6) = v22;
        v15 += 128;
        *((_OWORD *)v15 - 1) = v23;
        --v14;
      }
      while ( v14 );
      v24 = *v16;
      v25 = v16[1];
      v26 = *((_QWORD *)v16 + 4);
      *(_OWORD *)v15 = v24;
      *((_OWORD *)v15 + 1) = v25;
      *((_QWORD *)v15 + 4) = v26;
      RmpActivityHostFindByTypeAndIdentifier(a1[26], 0, v32, (__int64 *)&P);
    }
    v27 = (char *)P;
    if ( P )
      ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        v13,
        2u,
        a3,
        a4,
        (struct _RM_ACTIVITY_HOST *)P);
    v11 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
            a2,
            a3,
            (unsigned int *)a4,
            a6,
            a5,
            1,
            v30,
            &v29,
            0LL);
    if ( v11 >= 0 )
      *a7 = v29 && !v30[0];
    if ( v27 )
      RmpObjectRelease(v27);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v11;
}
