/*
 * XREFs of ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000DF8C
 * Callers:
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000DE90 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIR.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000DF10 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Exec.c)
 * Callees:
 *     __security_check_cookie @ 0x180006FE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180007550 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x18000DBF4 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z @ 0x18000E39C (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18000E540 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@utl@@@Z @ 0x18000E9FC (-GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEA.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000F788 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
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
  struct ExecutionModel::_ResourceSetInfo *v13; // rdi
  ResourceSetClientProxy *v15; // rsi
  char v16; // r12
  CLIENT_CALL_RETURN v17; // rbx
  ResourceSetClientProxy *v18; // rax
  struct RmResourceSetInfo *v19; // r8
  __int64 v20; // rbx
  __int64 v21; // r13
  struct IUnknown *v22; // rdx
  char *v23; // rcx
  ULONG v25; // [rsp+84h] [rbp-694h]
  _DWORD v26[2]; // [rsp+88h] [rbp-690h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp-688h] BYREF
  __int64 v28; // [rsp+98h] [rbp-680h] BYREF
  struct IUnknown *v29; // [rsp+A0h] [rbp-678h]
  ResourceSetClientProxy *v30; // [rsp+A8h] [rbp-670h]
  struct ExecutionModel::IResourceSet **v31; // [rsp+B0h] [rbp-668h]
  const unsigned __int16 *Simple; // [rsp+B8h] [rbp-660h]
  ResourceManagerClientProxy *v33; // [rsp+C0h] [rbp-658h]
  struct ExecutionModel::_ResourceSetInfo *v34; // [rsp+C8h] [rbp-650h]
  struct IUnknown *v35; // [rsp+D0h] [rbp-648h]
  bool *v36; // [rsp+D8h] [rbp-640h]
  struct IUnknown *v37; // [rsp+E0h] [rbp-638h]
  _BYTE v38[1504]; // [rsp+F0h] [rbp-628h] BYREF

  v29 = a3;
  v13 = a2;
  v35 = a3;
  v33 = this;
  v34 = a2;
  v37 = a3;
  Simple = a5;
  v36 = a11;
  v31 = a13;
  v15 = 0LL;
  v26[0] = 0;
  v28 = 0LL;
  v16 = 0;
  v27 = -1LL;
  if ( Sid )
  {
    if ( !RtlValidSid(Sid) )
    {
      LODWORD(v17.Pointer) = -2147024809;
      goto LABEL_23;
    }
    v25 = RtlLengthSid(Sid);
  }
  else
  {
    v25 = 0;
  }
  *a13 = 0LL;
  v16 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 576));
  v18 = (ResourceSetClientProxy *)operator new(0x1E8uLL);
  if ( v18 )
    v15 = ResourceSetClientProxy::ResourceSetClientProxy(v18, *((void **)this + 2), this);
  v30 = v15;
  if ( !v15 )
  {
    LODWORD(v17.Pointer) = -2147024882;
    goto LABEL_23;
  }
  if ( a12 )
  {
    LODWORD(v17.Pointer) = ResourceManagerClientProxy::GetResourceSetMapIterator(this, a12, &v28);
    if ( SLODWORD(v17.Simple) < 0 )
      goto LABEL_23;
    v20 = *(_QWORD *)(*(_QWORD *)(v28 + 32) + 24LL);
  }
  else
  {
    v20 = -1LL;
  }
  ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(v13, (const struct ExecutionModel::_ResourceSetInfo *)v38, v19);
  v21 = 2LL;
  v17.Pointer = NdrClientCall3(
                  (MIDL_STUBLESS_PROXY_INFO *)&stru_180010BD8,
                  2u,
                  0LL,
                  *((_QWORD *)this + 3),
                  v38,
                  v29 != 0LL,
                  Simple,
                  Sid,
                  v25,
                  a7,
                  a8,
                  a9,
                  a10,
                  (unsigned __int64)v26 & -(__int64)(a11 != 0LL),
                  v20,
                  &v27,
                  1).Pointer;
  Simple = (const unsigned __int16 *)v17.Simple;
  v26[1] = v17.Pointer;
  v22 = v29;
  if ( SLODWORD(v17.Simple) >= 0 )
  {
    *((_QWORD *)v15 + 3) = v27;
    *((_QWORD *)v15 + 4) = a4;
    v23 = (char *)v15 + 40;
    do
    {
      *(_OWORD *)v23 = *(_OWORD *)v13;
      *((_OWORD *)v23 + 1) = *((_OWORD *)v13 + 1);
      *((_OWORD *)v23 + 2) = *((_OWORD *)v13 + 2);
      *((_OWORD *)v23 + 3) = *((_OWORD *)v13 + 3);
      *((_OWORD *)v23 + 4) = *((_OWORD *)v13 + 4);
      *((_OWORD *)v23 + 5) = *((_OWORD *)v13 + 5);
      *((_OWORD *)v23 + 6) = *((_OWORD *)v13 + 6);
      v23 += 128;
      *((_OWORD *)v23 - 1) = *((_OWORD *)v13 + 7);
      v13 = (struct ExecutionModel::_ResourceSetInfo *)((char *)v13 + 128);
      --v21;
    }
    while ( v21 );
    *(_OWORD *)v23 = *(_OWORD *)v13;
    *((_OWORD *)v23 + 1) = *((_OWORD *)v13 + 1);
    *((_OWORD *)v23 + 2) = *((_OWORD *)v13 + 2);
    *((_OWORD *)v23 + 3) = *((_OWORD *)v13 + 3);
    *((_OWORD *)v23 + 4) = *((_OWORD *)v13 + 4);
    *((_OWORD *)v23 + 5) = *((_OWORD *)v13 + 5);
    *((_OWORD *)v23 + 6) = *((_OWORD *)v13 + 6);
    *((_QWORD *)v23 + 14) = *((_QWORD *)v13 + 14);
    if ( *((struct IUnknown **)v15 + 53) != v22 )
      ATL::AtlComPtrAssign((struct IUnknown **)v15 + 53, v37);
    LODWORD(v17.Pointer) = ResourceManagerClientProxy::AddProxyResourceSet(this, v27, v15);
    if ( SLODWORD(v17.Simple) >= 0 )
    {
      if ( a11 )
        *a11 = v26[0] != 0;
      *v31 = v15;
    }
  }
LABEL_23:
  if ( v16 )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 576));
  if ( SLODWORD(v17.Simple) < 0 && v15 )
    (*(void (__fastcall **)(ResourceSetClientProxy *))(*(_QWORD *)v15 + 16LL))(v15);
  return LODWORD(v17.Pointer);
}
