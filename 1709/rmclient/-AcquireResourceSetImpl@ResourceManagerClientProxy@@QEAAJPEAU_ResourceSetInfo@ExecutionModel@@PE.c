/*
 * XREFs of ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000E128
 * Callers:
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000DD80 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIR.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x18000DE00 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_18000DE00.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000DFA0 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Exec.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x18000E020 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Ex.c)
 * Callees:
 *     __security_check_cookie @ 0x180007780 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180008070 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x18000DB94 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z @ 0x18000E4F8 (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18000E650 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@@Z @ 0x18000EC9C (-GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEA.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000F904 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
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
  ResourceSetClientProxy *v16; // rdi
  char v17; // r12
  CLIENT_CALL_RETURN v18; // rbx
  ResourceSetClientProxy *v19; // rax
  struct RmResourceSetInfo *v20; // r8
  __int64 v21; // rbx
  _OWORD *v22; // rax
  __int64 v23; // rcx
  ULONG v25; // [rsp+84h] [rbp-694h]
  _DWORD v26[2]; // [rsp+88h] [rbp-690h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp-688h] BYREF
  __int64 v28; // [rsp+98h] [rbp-680h] BYREF
  PSID v29; // [rsp+A0h] [rbp-678h]
  ResourceSetClientProxy *v30; // [rsp+A8h] [rbp-670h]
  struct ExecutionModel::IResourceSet **v31; // [rsp+B0h] [rbp-668h]
  const unsigned __int16 *Simple; // [rsp+B8h] [rbp-660h]
  ResourceManagerClientProxy *v33; // [rsp+C0h] [rbp-658h]
  struct ExecutionModel::_ResourceSetInfo *v34; // [rsp+C8h] [rbp-650h]
  bool *v35; // [rsp+D0h] [rbp-648h]
  struct IUnknown *v36; // [rsp+D8h] [rbp-640h]
  struct IUnknown *v37; // [rsp+E0h] [rbp-638h]
  _BYTE v38[1504]; // [rsp+F0h] [rbp-628h] BYREF

  v14 = a2;
  v36 = a3;
  v33 = this;
  v34 = a2;
  v37 = a3;
  Simple = a5;
  v29 = Sid;
  v35 = a11;
  v31 = a13;
  v16 = 0LL;
  v26[0] = 0;
  v28 = 0LL;
  v17 = 0;
  v27 = -1LL;
  if ( Sid )
  {
    if ( !RtlValidSid(Sid) )
    {
      LODWORD(v18.Pointer) = -2147024809;
      goto LABEL_23;
    }
    v25 = RtlLengthSid(v29);
  }
  else
  {
    v25 = 0;
  }
  *a13 = 0LL;
  v17 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 22464));
  v19 = (ResourceSetClientProxy *)operator new(0x1F0uLL);
  if ( v19 )
    v16 = ResourceSetClientProxy::ResourceSetClientProxy(v19, *((void **)this + 2738), this);
  v30 = v16;
  if ( !v16 )
  {
    LODWORD(v18.Pointer) = -2147024882;
    goto LABEL_23;
  }
  if ( a12 )
  {
    LODWORD(v18.Pointer) = ResourceManagerClientProxy::GetResourceSetMapIterator(this, a12, &v28);
    if ( SLODWORD(v18.Simple) < 0 )
      goto LABEL_23;
    v21 = *(_QWORD *)(*(_QWORD *)(v28 + 32) + 24LL);
  }
  else
  {
    v21 = -1LL;
  }
  ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(v14, (const struct ExecutionModel::_ResourceSetInfo *)v38, v20);
  v18.Pointer = NdrClientCall3(
                  (MIDL_STUBLESS_PROXY_INFO *)&stru_180010C20,
                  2u,
                  0LL,
                  *((_QWORD *)this + 2739),
                  v38,
                  a3 != 0LL,
                  Simple,
                  v29,
                  v25,
                  a7,
                  a8,
                  a9,
                  a10,
                  (unsigned __int64)v26 & -(__int64)(a11 != 0LL),
                  v21,
                  &v27,
                  1).Pointer;
  Simple = (const unsigned __int16 *)v18.Simple;
  v26[1] = v18.Pointer;
  if ( SLODWORD(v18.Simple) >= 0 )
  {
    *((_QWORD *)v16 + 3) = v27;
    *((_QWORD *)v16 + 4) = a4;
    v22 = (_OWORD *)((char *)v16 + 40);
    v23 = 3LL;
    do
    {
      *v22 = *(_OWORD *)v14;
      v22[1] = *((_OWORD *)v14 + 1);
      v22[2] = *((_OWORD *)v14 + 2);
      v22[3] = *((_OWORD *)v14 + 3);
      v22[4] = *((_OWORD *)v14 + 4);
      v22[5] = *((_OWORD *)v14 + 5);
      v22[6] = *((_OWORD *)v14 + 6);
      v22 += 8;
      *(v22 - 1) = *((_OWORD *)v14 + 7);
      v14 = (struct ExecutionModel::_ResourceSetInfo *)((char *)v14 + 128);
      --v23;
    }
    while ( v23 );
    if ( *((struct IUnknown **)v16 + 54) != a3 )
      ATL::AtlComPtrAssign((struct IUnknown **)v16 + 54, v37);
    LODWORD(v18.Pointer) = ResourceManagerClientProxy::AddProxyResourceSet(this, v27, v16);
    if ( SLODWORD(v18.Simple) >= 0 )
    {
      if ( a11 )
        *a11 = v26[0] != 0;
      *v31 = v16;
    }
  }
LABEL_23:
  if ( v17 )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 22464));
  if ( SLODWORD(v18.Simple) < 0 && v16 )
    (*(void (__fastcall **)(ResourceSetClientProxy *))(*(_QWORD *)v16 + 16LL))(v16);
  return LODWORD(v18.Pointer);
}
