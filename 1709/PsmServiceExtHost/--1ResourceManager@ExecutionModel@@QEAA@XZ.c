/*
 * XREFs of ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180031878
 * Callers:
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x1800321A0 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002FCB8 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 */

void __fastcall ExecutionModel::ResourceManager::~ResourceManager(ExecutionModel::ResourceManager *this)
{
  __int64 v2; // rcx
  wchar_t *v3; // r8
  __int64 **v4; // rdi
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rax
  void *v8; // rcx
  __int64 **v9; // rdi
  __int64 *v10; // rsi
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // rdi
  ExecutionModel::BaseResourceSet **v16; // rbx

  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IExternalResourceRegister'};
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  v2 = *((_QWORD *)this + 27);
  if ( v2 )
  {
    TpReleaseCleanupGroupMembers(v2, 1LL, 0LL);
    TpReleaseCleanupGroup(*((_QWORD *)this + 27));
  }
  v3 = (wchar_t *)*((_QWORD *)this + 2);
  if ( v3 && v3 != L"System\\ResourceManager\\MemoryHistory" )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  v4 = (__int64 **)((char *)this + 248);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (__int64 *)v4 )
      break;
    v6 = (__int64 *)v5[1];
    v7 = *v5;
    *v6 = *v5;
    *(_QWORD *)(v7 + 8) = v6;
    operator delete(v5);
  }
  *((_QWORD *)this + 34) = 0LL;
  v8 = (void *)*((_QWORD *)this + 33);
  if ( v8 )
    operator delete(v8);
  v9 = (__int64 **)((char *)this + 168);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == (__int64 *)v9 )
      break;
    v11 = (__int64 *)v10[1];
    v12 = *v10;
    *v11 = *v10;
    *(_QWORD *)(v12 + 8) = v11;
    v13 = v10[4];
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    operator delete(v10);
  }
  *((_QWORD *)this + 24) = 0LL;
  v14 = (void *)*((_QWORD *)this + 23);
  if ( v14 )
    operator delete(v14);
  v15 = 2LL;
  v16 = (ExecutionModel::BaseResourceSet **)((char *)this + 112);
  do
  {
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(--v16);
    --v15;
  }
  while ( v15 );
}
