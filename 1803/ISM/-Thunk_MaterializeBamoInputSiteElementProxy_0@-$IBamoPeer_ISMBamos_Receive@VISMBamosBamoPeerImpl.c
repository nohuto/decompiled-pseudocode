/*
 * XREFs of ?Thunk_MaterializeBamoInputSiteElementProxy_0@?$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IBamoPeer_ISMBamos_Receive<BamoImpl::ISMBamosBamoPeerImpl>::Thunk_MaterializeBamoInputSiteElementProxy_0(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rbx
  const char *v6; // r9
  void *v7; // rdi
  __int64 v8; // rbx
  void (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = **a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  v5 = 0LL;
  if ( !*(_DWORD *)(v4 + 140) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v6);
      __debugbreak();
    }
    *(_DWORD *)(v4 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
  }
  v7 = operator new(0x60uLL);
  memset_0(v7, 0, 0x60uLL);
  *((_DWORD *)v7 + 6) = 0;
  *((_QWORD *)v7 + 4) = 0LL;
  *((_DWORD *)v7 + 10) = 0;
  *((_WORD *)v7 + 22) = 0;
  *((_QWORD *)v7 + 2) = &BamoImpl::BamoInputSiteElementProxyImpl::`vftable';
  *((_QWORD *)v7 + 6) = 0LL;
  *((_QWORD *)v7 + 7) = 0LL;
  *((_QWORD *)v7 + 8) = 0LL;
  *((_QWORD *)v7 + 9) = 0LL;
  *((_QWORD *)v7 + 10) = 0LL;
  *(_QWORD *)v7 = &InputSiteElementProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v7 + 1) = &InputSiteElementProxy::`vftable'{for `IInputSiteElementProxy'};
  *((_QWORD *)v7 + 11) = 0LL;
  if ( v5 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
    *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
  }
  v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v7 + 48LL))(v7);
  v9 = *(void (__fastcall ****)(_QWORD))(v8 + 16);
  *(_QWORD *)(v8 + 16) = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( v9 )
    (**v9)(v9);
  *(_DWORD *)(v8 + 24) = v3;
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 40LL);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v10 + 40LL))(
          v10,
          *(unsigned int *)(a1 + 36),
          v3,
          v8);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2955,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x18001FA4ELL);
  }
  return 0LL;
}
