/*
 * XREFs of ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x1800023F4
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180001F68 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 * Callees:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180002320 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010220 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010840 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180015DEC (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x180015E20 (utl--list_ATL--CComPtr_ExecutionModel--BaseResourceSet__utl--allocator_ATL--CComPtr_ExecutionMod.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18001E938 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18001F8FC (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18001FB78 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18003D8C0 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AcquireResources(
        ExecutionModel::BaseResourceSet *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        unsigned __int8 *a9,
        int a10,
        unsigned int *a11)
{
  __int64 v12; // r12
  int v14; // eax
  unsigned __int8 v15; // si
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  __int64 v23; // rdx
  void (*v24)(void); // rax
  unsigned __int8 v25; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  ExecutionModel::BaseResourceSet *v28; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v33[4]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+BCh] [rbp-44h]
  int *v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  int *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  unsigned int *v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  int *v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  ExecutionModel::BaseResourceSet **v50; // [rsp+100h] [rbp+0h]
  int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]
  unsigned int v53[300]; // [rsp+110h] [rbp+10h] BYREF

  v12 = a3;
  `vector constructor iterator'(
    (ExecutionModel::_ResourceInfo *)v53,
    0x18uLL,
    0x32uLL,
    (void *(*)(void *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  v33[2] = 0LL;
  v33[0] = (__int64)v33;
  v33[1] = (__int64)v33;
  v25 = 0;
  memcpy_0(v53, a4, 24 * v12);
  if ( a10 == 1 )
  {
    v15 = 1;
    goto LABEL_18;
  }
  v14 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(a1, v12, v53, a6, a5, a8, &v25, v26, (__int64)v33);
  v15 = v25;
  v16 = v14;
  v27 = v14;
  if ( v14 >= 0 )
  {
    if ( !v26[0] )
      goto LABEL_19;
    if ( !v25 )
      goto LABEL_5;
LABEL_18:
    if ( a9 )
    {
LABEL_5:
      a11[352] = a5;
      a11[2] = a6;
      v27 = ExecutionModel::BaseResourceSet::AddToListPrioritized((char *)a1 + 160, a11);
      if ( v27 < 0 )
      {
        v16 = -2147024882;
      }
      else
      {
        if ( v15 )
        {
          a11[38] = 1;
          a11[350] = 1;
          if ( (_DWORD)v12 )
          {
            v23 = v12;
            do
            {
              if ( *(_DWORD *)a4 <= 0x31u )
              {
                v17 = 3 * (*(int *)a4 + 8LL);
                *(_OWORD *)&a11[2 * v17] = *(_OWORD *)a4;
                *(_QWORD *)&a11[2 * v17 + 4] = a4[2];
              }
              a4 += 3;
              --v23;
            }
            while ( v23 );
          }
          ExecutionModel::BaseResourceSet::RevokeResourceList(v17, v33, v18, 1LL);
        }
        else
        {
          ExecutionModel::BaseResourceSet::RecursiveVisit(a1, a11[2], 1, (__int64)&v25, (__int64)v26, 0LL, (__int64)a11);
          a11[350] = 2;
        }
        if ( a9 )
          *a9 = v15;
        v16 = 0;
      }
      goto LABEL_11;
    }
LABEL_19:
    v16 = -2147220992;
LABEL_11:
    v27 = v16;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v52 = 0;
    v35 = &v27;
    v38 = &v29;
    v30 = a5;
    v41 = &v30;
    v31 = a6;
    v44 = &v31;
    v32 = v15;
    v47 = &v32;
    LODWORD(v28) = a8;
    v50 = &v28;
    v36 = (int)v21;
    v29 = v12;
    v39 = (int)v21;
    v42 = (int)v21;
    v45 = (int)v21;
    v48 = (int)v21;
    v51 = (int)v21;
    TlgWrite(v19, &unk_180059669, v20, v21, 8u, &pData);
    v16 = v27;
  }
  if ( v16 < 0 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v28, a11);
    utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___(
      (char *)a1 + 160,
      &v28);
    if ( v28 )
    {
      v24 = *(void (**)(void))(*(_QWORD *)v28 + 16LL);
      if ( (char *)v24 == (char *)ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v28);
      }
      else if ( (char *)v24 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v28);
      }
      else
      {
        v24();
      }
    }
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a11 + 32LL))(a11, 0LL);
    v16 = v27;
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v33);
  return (unsigned int)v16;
}
