/*
 * XREFs of ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000CCD8
 * Callers:
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000C930 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIR.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x18000C9B0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_18000C9B0.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000CB50 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Exec.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x18000CBD0 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Ex.c)
 * Callees:
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180007C40 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x18000C740 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z @ 0x18000D100 (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18000D260 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@@Z @ 0x18000D97C (-GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEA.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000E5E4 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 */

__int64 __fastcall ResourceManagerClientProxy::AcquireResourceSetImpl(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct IUnknown *a3,
        void *a4,
        const unsigned __int16 *a5,
        PSID Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        bool *a11,
        struct ExecutionModel::IResourceSet *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  struct ExecutionModel::_ResourceSetInfo *v14; // rsi
  PSID v16; // rbx
  struct ExecutionModel::IResourceSet **v17; // rax
  ResourceSetClientProxy *v18; // rdi
  char v19; // r12
  CLIENT_CALL_RETURN v20; // rbx
  ResourceSetClientProxy *v21; // rax
  struct RmResourceSetInfo *v22; // r8
  __int64 v23; // rdx
  char *v24; // rcx
  ULONG v26; // [rsp+84h] [rbp-664h]
  _DWORD v27[2]; // [rsp+88h] [rbp-660h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp-658h] BYREF
  struct ExecutionModel::IResourceSet **v29; // [rsp+98h] [rbp-650h]
  __int64 v30; // [rsp+A0h] [rbp-648h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-640h]
  ResourceSetClientProxy *v32; // [rsp+B0h] [rbp-638h]
  const unsigned __int16 *Simple; // [rsp+B8h] [rbp-630h]
  PSID v34; // [rsp+C0h] [rbp-628h]
  ResourceManagerClientProxy *v35; // [rsp+C8h] [rbp-620h]
  struct IUnknown *v36; // [rsp+D0h] [rbp-618h]
  struct ExecutionModel::_ResourceSetInfo *v37; // [rsp+D8h] [rbp-610h]
  bool *v38; // [rsp+E0h] [rbp-608h]
  _BYTE v39[1456]; // [rsp+F0h] [rbp-5F8h] BYREF

  v14 = a2;
  v35 = this;
  v37 = a2;
  v36 = a3;
  Simple = a5;
  v16 = Sid;
  v34 = Sid;
  v38 = a11;
  v17 = a13;
  v29 = a13;
  v18 = 0LL;
  v27[0] = 0;
  v30 = 0LL;
  v19 = 0;
  v31 = -1LL;
  v28 = -1LL;
  if ( Sid )
  {
    if ( !RtlValidSid(Sid) )
    {
      LODWORD(v20.Pointer) = -2147024809;
      goto LABEL_22;
    }
    v26 = RtlLengthSid(Sid);
    v17 = v29;
  }
  else
  {
    v26 = 0;
  }
  *v17 = 0LL;
  v19 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 22008));
  v21 = (ResourceSetClientProxy *)operator new(0x1E8uLL);
  if ( v21 )
    v18 = ResourceSetClientProxy::ResourceSetClientProxy(v21, *((void **)this + 2681), this);
  v32 = v18;
  if ( !v18 )
  {
    LODWORD(v20.Pointer) = -2147024882;
    goto LABEL_22;
  }
  if ( a12 )
  {
    LODWORD(v20.Pointer) = ResourceManagerClientProxy::GetResourceSetMapIterator(this, a12, &v30);
    if ( SLODWORD(v20.Simple) < 0 )
      goto LABEL_22;
    v31 = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 24LL);
    v16 = v34;
  }
  ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(v14, (const struct ExecutionModel::_ResourceSetInfo *)v39, v22);
  v20.Pointer = NdrClientCall3(
                  (MIDL_STUBLESS_PROXY_INFO *)&stru_18000F910,
                  2u,
                  0LL,
                  *((_QWORD *)this + 2682),
                  v39,
                  a3 != 0LL,
                  Simple,
                  v16,
                  v26,
                  a7,
                  a8,
                  a9,
                  a10,
                  (unsigned __int64)v27 & -(__int64)(a11 != 0LL),
                  v31,
                  &v28,
                  1).Pointer;
  Simple = (const unsigned __int16 *)v20.Simple;
  v27[1] = v20.Pointer;
  v23 = 2LL;
  if ( SLODWORD(v20.Simple) >= 0 )
  {
    *((_QWORD *)v18 + 3) = v28;
    *((_QWORD *)v18 + 4) = a4;
    v24 = (char *)v18 + 40;
    do
    {
      *(_OWORD *)v24 = *(_OWORD *)v14;
      *((_OWORD *)v24 + 1) = *((_OWORD *)v14 + 1);
      *((_OWORD *)v24 + 2) = *((_OWORD *)v14 + 2);
      *((_OWORD *)v24 + 3) = *((_OWORD *)v14 + 3);
      *((_OWORD *)v24 + 4) = *((_OWORD *)v14 + 4);
      *((_OWORD *)v24 + 5) = *((_OWORD *)v14 + 5);
      *((_OWORD *)v24 + 6) = *((_OWORD *)v14 + 6);
      v24 += 128;
      *((_OWORD *)v24 - 1) = *((_OWORD *)v14 + 7);
      v14 = (struct ExecutionModel::_ResourceSetInfo *)((char *)v14 + 128);
      --v23;
    }
    while ( v23 );
    *(_OWORD *)v24 = *(_OWORD *)v14;
    *((_OWORD *)v24 + 1) = *((_OWORD *)v14 + 1);
    *((_OWORD *)v24 + 2) = *((_OWORD *)v14 + 2);
    *((_OWORD *)v24 + 3) = *((_OWORD *)v14 + 3);
    *((_OWORD *)v24 + 4) = *((_OWORD *)v14 + 4);
    *((_OWORD *)v24 + 5) = *((_OWORD *)v14 + 5);
    *((_OWORD *)v24 + 6) = *((_OWORD *)v14 + 6);
    *((_QWORD *)v24 + 14) = *((_QWORD *)v14 + 14);
    if ( *((struct IUnknown **)v18 + 53) != a3 )
      ATL::AtlComPtrAssign((struct IUnknown **)v18 + 53, a3);
    LODWORD(v20.Pointer) = ResourceManagerClientProxy::AddProxyResourceSet(this, v28, v18);
    if ( SLODWORD(v20.Simple) >= 0 )
    {
      if ( a11 )
        *a11 = v27[0] != 0;
      *v29 = v18;
    }
  }
LABEL_22:
  if ( v19 )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 22008));
  if ( SLODWORD(v20.Simple) < 0 && v18 )
    (*(void (__fastcall **)(ResourceSetClientProxy *))(*(_QWORD *)v18 + 16LL))(v18);
  return LODWORD(v20.Pointer);
}
