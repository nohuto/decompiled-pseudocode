/*
 * XREFs of ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180001EF4
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800018CC (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 * Callees:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180001E14 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180003178 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18000320C (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800032E0 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001EA30 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002145C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18002346C (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___ @ 0x1800234A0 (utl--list_ATL--CComPtr_ExecutionModel--BaseResourceSet__utl--allocator_ATL--CComPtr_ExecutionMod.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18005C920 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AcquireResources(
        ExecutionModel::BaseResourceSet *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned __int8 *a8,
        int a9,
        unsigned int *a10)
{
  __int64 v11; // r12
  int v13; // eax
  unsigned __int8 v14; // si
  int v15; // ebx
  __int64 v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  int v18; // r9d
  __int64 v20; // rdx
  void (*v21)(void); // rax
  unsigned __int8 v22; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  ExecutionModel::ExternalResourceSet *v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v28; // [rsp+68h] [rbp-98h] BYREF
  int v29; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v30[4]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  int *v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]
  int *v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DCh] [rbp-24h]
  unsigned int *v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  int *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  ExecutionModel::ExternalResourceSet **v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ch] [rbp+Ch]
  unsigned int v50[300]; // [rsp+110h] [rbp+10h] BYREF

  v11 = a3;
  `vector constructor iterator'(v50, 0x18uLL, 0x32uLL, (void *(*)(void *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  v30[2] = 0LL;
  v30[0] = (__int64)v30;
  v30[1] = (__int64)v30;
  v22 = 0;
  memcpy_0(v50, a4, 24 * v11);
  if ( a9 == 1 )
  {
    v14 = 1;
    goto LABEL_18;
  }
  v13 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
          a1,
          (unsigned int)v11,
          v50,
          a6,
          a5,
          a7,
          &v22,
          v23,
          (__int64)v30);
  v14 = v22;
  v15 = v13;
  v24 = v13;
  if ( v13 >= 0 )
  {
    if ( !v23[0] )
      goto LABEL_19;
    if ( !v22 )
      goto LABEL_5;
LABEL_18:
    if ( a8 )
    {
LABEL_5:
      a10[352] = a5;
      a10[2] = a6;
      v24 = ExecutionModel::BaseResourceSet::AddToListPrioritized((char *)a1 + 160, a10);
      if ( v24 < 0 )
      {
        v15 = -2147024882;
      }
      else
      {
        if ( v14 )
        {
          a10[350] = 1;
          if ( (_DWORD)v11 )
          {
            v20 = v11;
            do
            {
              if ( *(_DWORD *)a4 <= 0x31u )
              {
                v16 = 3 * (*(int *)a4 + 8LL);
                *(_OWORD *)&a10[2 * v16] = *(_OWORD *)a4;
                *(_QWORD *)&a10[2 * v16 + 4] = a4[2];
              }
              a4 += 3;
              --v20;
            }
            while ( v20 );
          }
          ExecutionModel::BaseResourceSet::RevokeResourceList(v16, v30);
        }
        else
        {
          ExecutionModel::BaseResourceSet::RecursiveVisit(
            a1,
            a10[2],
            1,
            (__int64)&v22,
            (ExecutionModel::ExternalResourceSet *)v23,
            0LL,
            (__int64)a10);
          a10[350] = 2;
        }
        if ( a8 )
          *a8 = v14;
        v15 = 0;
      }
      goto LABEL_11;
    }
LABEL_19:
    v15 = -2147220992;
LABEL_11:
    v24 = v15;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v32 = &v24;
    v35 = &v26;
    v27 = a5;
    v38 = &v27;
    v28 = a6;
    v41 = &v28;
    v29 = v14;
    v44 = &v29;
    LODWORD(v25) = a7;
    v47 = &v25;
    v33 = v18;
    v26 = v11;
    v36 = v18;
    v39 = v18;
    v42 = v18;
    v45 = v18;
    v48 = v18;
    TlgWrite(v17, &unk_18007F8A8, 0LL, 0LL, 8u, &pData);
    v15 = v24;
  }
  if ( v15 < 0 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v25, a10);
    utl::list_ATL::CComPtr_ExecutionModel::BaseResourceSet__utl::allocator_ATL::CComPtr_ExecutionModel::BaseResourceSet_____::remove_if__lambda_4a96282eb34af91833354b43e8ed5ac2___(
      (char *)a1 + 160,
      &v25);
    if ( v25 )
    {
      v21 = *(void (**)(void))(*(_QWORD *)v25 + 16LL);
      if ( (char *)v21 == (char *)ExecutionModel::ExternalResourceSet::Release )
        ExecutionModel::ExternalResourceSet::Release(v25);
      else
        v21();
    }
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a10 + 32LL))(a10, 0LL);
    v15 = v24;
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v30);
  return (unsigned int)v15;
}
