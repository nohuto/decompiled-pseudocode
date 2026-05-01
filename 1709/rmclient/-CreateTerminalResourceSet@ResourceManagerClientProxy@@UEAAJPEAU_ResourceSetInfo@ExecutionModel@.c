/*
 * XREFs of ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x18000E6B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180007780 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180008070 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x18000DB94 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z @ 0x18000E4F8 (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18000E650 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000F904 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 */

__int64 __fastcall ResourceManagerClientProxy::CreateTerminalResourceSet(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSet **a3)
{
  struct ExecutionModel::_ResourceSetInfo *v4; // r14
  ResourceSetClientProxy *v6; // rax
  struct RmResourceSetInfo *v7; // r8
  ResourceSetClientProxy *v8; // rdi
  CLIENT_CALL_RETURN v9; // rbx
  _OWORD *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+38h] [rbp-650h] BYREF
  ResourceSetClientProxy *v14; // [rsp+40h] [rbp-648h]
  ResourceManagerClientProxy *v15; // [rsp+48h] [rbp-640h]
  struct ExecutionModel::_ResourceSetInfo *v16; // [rsp+50h] [rbp-638h]
  struct ExecutionModel::IResourceSet **v17; // [rsp+58h] [rbp-630h]
  CLIENT_CALL_RETURN v18; // [rsp+60h] [rbp-628h]
  _BYTE v19[1504]; // [rsp+70h] [rbp-618h] BYREF

  v4 = a2;
  v15 = this;
  v16 = a2;
  v17 = a3;
  *a3 = 0LL;
  v13 = -1LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 22464));
  v6 = (ResourceSetClientProxy *)operator new(0x1F0uLL);
  if ( v6 )
  {
    v8 = ResourceSetClientProxy::ResourceSetClientProxy(v6, *((void **)this + 2738), this);
    v14 = v8;
  }
  else
  {
    v8 = 0LL;
    v14 = 0LL;
  }
  if ( v8 )
  {
    ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(v4, (const struct ExecutionModel::_ResourceSetInfo *)v19, v7);
    v9.Pointer = NdrClientCall3(
                   (MIDL_STUBLESS_PROXY_INFO *)&stru_180010C20,
                   4u,
                   0LL,
                   *((_QWORD *)this + 2738),
                   v19,
                   &v13).Pointer;
    v18.Pointer = v9.Pointer;
    if ( SLODWORD(v9.Simple) >= 0 )
    {
      *((_QWORD *)v8 + 3) = v13;
      *((_QWORD *)v8 + 4) = 0LL;
      v10 = (_OWORD *)((char *)v8 + 40);
      v11 = 3LL;
      do
      {
        *v10 = *(_OWORD *)v4;
        v10[1] = *((_OWORD *)v4 + 1);
        v10[2] = *((_OWORD *)v4 + 2);
        v10[3] = *((_OWORD *)v4 + 3);
        v10[4] = *((_OWORD *)v4 + 4);
        v10[5] = *((_OWORD *)v4 + 5);
        v10[6] = *((_OWORD *)v4 + 6);
        v10 += 8;
        *(v10 - 1) = *((_OWORD *)v4 + 7);
        v4 = (struct ExecutionModel::_ResourceSetInfo *)((char *)v4 + 128);
        --v11;
      }
      while ( v11 );
      if ( *((_QWORD *)v8 + 54) )
        ATL::AtlComPtrAssign((struct IUnknown **)v8 + 54, 0LL);
      LODWORD(v9.Pointer) = ResourceManagerClientProxy::AddProxyResourceSet(this, v13, v8);
      if ( SLODWORD(v9.Simple) >= 0 )
        *a3 = v8;
    }
  }
  else
  {
    LODWORD(v9.Pointer) = -2147024882;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 22464));
  if ( SLODWORD(v9.Simple) < 0 && v8 )
    (*(void (__fastcall **)(ResourceSetClientProxy *))(*(_QWORD *)v8 + 16LL))(v8);
  return LODWORD(v9.Pointer);
}
