/*
 * XREFs of _lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_::operator() @ 0x180088BAC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5b180c0ca92e82d68f6c8a12cad9fd8b___::Run @ 0x180088BA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5b180c0ca92e82d68f6c8a12cad9fd8b___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800192F8 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180071178 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x180136A60 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_::operator()(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // r8
  __int64 v4; // rdi
  unsigned __int64 CurrentThreadId; // r12
  unsigned __int64 v6; // r14
  signed __int64 i; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  signed __int64 v10; // rax
  int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  void *v14; // rcx
  __int128 **v15; // rcx
  __int128 *v16; // rax
  int v18; // eax
  __int64 v19; // rdx
  HANDLE v20; // rax
  int v21; // [rsp+28h] [rbp-39h]
  int v22; // [rsp+48h] [rbp-19h] BYREF
  __int64 v23; // [rsp+50h] [rbp-11h]
  LPVOID lpMem; // [rsp+58h] [rbp-9h]
  char v25; // [rsp+60h] [rbp-1h]
  __int128 v26; // [rsp+68h] [rbp+7h] BYREF
  __int128 *v27; // [rsp+78h] [rbp+17h]
  DWORD v28; // [rsp+80h] [rbp+1Fh]
  int *v29; // [rsp+88h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  void *v31; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v32; // [rsp+D0h] [rbp+6Fh] BYREF

  v2 = a1 + 40;
  v3 = *(_QWORD *)(a1 + 88);
  if ( *(_DWORD *)v3 == 1 )
  {
    v25 = 0;
    v22 = *(_DWORD *)(v3 + 40);
    v23 = *(_QWORD *)(v3 + 48);
    if ( *(_BYTE *)(v3 + 64) )
      wil::details::StoredCallContextInfo::AssignMessage(
        (wil::details::StoredCallContextInfo *)&v22,
        *(const unsigned __int16 **)(v3 + 56));
    else
      lpMem = *(LPVOID *)(v3 + 56);
    *(_QWORD *)&v26 = 0LL;
    *((_QWORD *)&v26 + 1) = v2;
    v27 = 0LL;
    v28 = 0;
    v29 = &v22;
    v4 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_35;
    CurrentThreadId = GetCurrentThreadId();
    v6 = CurrentThreadId % 0xA;
    for ( i = *(_QWORD *)(v4 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == (_DWORD)CurrentThreadId )
        goto LABEL_12;
    }
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    i = (signed __int64)v9;
    if ( v9 )
    {
      *(_QWORD *)v9 = 0LL;
      v9[2] = CurrentThreadId;
      *((_QWORD *)v9 + 2) = 0LL;
      _m_prefetchw((const void *)(v4 + 8 * v6));
      do
      {
        v10 = *(_QWORD *)(v4 + 8 * v6);
        *(_QWORD *)(i + 16) = v10;
      }
      while ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v6), i, v10) );
    }
    else
    {
LABEL_35:
      i = 0LL;
    }
LABEL_12:
    *(_QWORD *)&v26 = i;
    if ( i )
    {
      v27 = *(__int128 **)i;
      *(_QWORD *)i = &v26;
      v28 = GetCurrentThreadId();
    }
  }
  else
  {
    memset_0(&v22, 0, 0x20uLL);
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0;
    v29 = 0LL;
  }
  v11 = *(_DWORD *)(a1 + 16);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_23;
  }
  v31 = 0LL;
  if ( !*(_QWORD *)(a1 + 32)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31),
        v18 = CMarshaledInterface::_Unmarshal(
                (CMarshaledInterface *)(a1 + 32),
                &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
                &v31,
                1),
        v11 = v18,
        v18 >= 0) )
  {
    v32 = 0LL;
    v12 = CoreQueryWindowService(
            *(_QWORD *)a1,
            &GUID_db37659c_5741_4985_a443_dda995e92f5f,
            &GUID_c1635471_1417_4750_811f_a6122953c5a3,
            &v32);
    v11 = v12;
    if ( v12 < 0 )
    {
      v19 = 199LL;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))(*(_QWORD *)v32 + 48LL))(
              v32,
              *(_QWORD *)(a1 + 8),
              *(_QWORD *)(a1 + 24),
              v31);
      v11 = v12;
      if ( v12 >= 0 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
        v11 = 0;
        goto LABEL_19;
      }
      v19 = 200LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v12);
LABEL_19:
    v13 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC3,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)v18);
LABEL_21:
  v14 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
LABEL_23:
  if ( v28 )
  {
    if ( v28 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL,
        v21);
    v28 = 0;
    v15 = (__int128 **)v26;
    while ( 1 )
    {
      v16 = *v15;
      if ( !*v15 )
        break;
      if ( v16 == &v26 )
      {
        *v15 = v27;
        break;
      }
      v15 = (__int128 **)(v16 + 1);
      *(_QWORD *)&v26 = v16 + 1;
    }
    *(_QWORD *)&v26 = 0LL;
  }
  if ( v25 )
  {
    v20 = GetProcessHeap();
    HeapFree(v20, 0, lpMem);
  }
  return (unsigned int)v11;
}
