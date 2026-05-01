/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x18000E940
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008070 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x18000DB94 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z @ 0x18000E4F8 (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18000E650 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::CreateTerminalResourceSet(
        ResourceSetClientProxy *this,
        struct ExecutionModel::IResourceSet **a2)
{
  ResourceSetClientProxy *v4; // rax
  ResourceSetClientProxy *v5; // rdi
  int Pointer; // ebx
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  ResourceSetClientProxy *v12; // [rsp+88h] [rbp+20h]

  *a2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 55) + 22464LL));
  v4 = (ResourceSetClientProxy *)operator new(0x1F0uLL);
  if ( v4 )
  {
    v5 = ResourceSetClientProxy::ResourceSetClientProxy(
           v4,
           *((void **)this + 2),
           *((struct ResourceManagerClientProxy **)this + 55));
    v12 = v5;
  }
  else
  {
    v5 = 0LL;
    v12 = 0LL;
  }
  if ( v5 )
  {
    v11 = -1LL;
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_180010C20,
                              8u,
                              0LL,
                              *((_QWORD *)this + 2),
                              *((_QWORD *)this + 3),
                              &v11).Pointer;
    if ( Pointer >= 0 )
    {
      *((_QWORD *)v5 + 3) = v11;
      *((_QWORD *)v5 + 4) = 0LL;
      v7 = (_OWORD *)((char *)v5 + 40);
      v8 = (_OWORD *)((char *)this + 40);
      v9 = 3LL;
      do
      {
        *v7 = *v8;
        v7[1] = v8[1];
        v7[2] = v8[2];
        v7[3] = v8[3];
        v7[4] = v8[4];
        v7[5] = v8[5];
        v7[6] = v8[6];
        v7 += 8;
        *(v7 - 1) = v8[7];
        v8 += 8;
        --v9;
      }
      while ( v9 );
      if ( *((_QWORD *)v5 + 54) )
        ATL::AtlComPtrAssign((struct IUnknown **)v5 + 54, 0LL);
      Pointer = ResourceManagerClientProxy::AddProxyResourceSet(*((ResourceManagerClientProxy **)this + 55), v11, v5);
      if ( Pointer >= 0 )
        *a2 = v5;
    }
  }
  else
  {
    Pointer = -2147024882;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 55) + 22464LL));
  if ( Pointer < 0 && v5 )
    (*(void (__fastcall **)(ResourceSetClientProxy *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)Pointer;
}
