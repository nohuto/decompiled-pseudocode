/*
 * XREFs of ?Thunk_MaterializeBamoInputAttemptedDeliveryClientProxy_0@?$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IBamoPeer_ISMBamos_Receive<BamoImpl::ISMBamosBamoPeerImpl>::Thunk_MaterializeBamoInputAttemptedDeliveryClientProxy_0(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // r14d
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rsi
  _DWORD *v10; // rdi
  __int64 v11; // rbx
  void (__fastcall ***v12)(_QWORD); // rcx
  __int64 v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = **a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  v6 = 0LL;
  if ( !*(_DWORD *)(v5 + 140) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v7);
      __debugbreak();
    }
    *(_DWORD *)(v5 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
  }
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4)
                                                     + 24)
                                         + 24LL)
                             + 16LL)
                 + 152LL)
     + 8LL;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8);
  v10 = operator new(0x40uLL);
  if ( v9 )
    (**(void (__fastcall ***)(__int64))v9)(v9);
  v10[6] = 0;
  *((_QWORD *)v10 + 4) = 0LL;
  v10[10] = 0;
  *((_WORD *)v10 + 22) = 0;
  *((_QWORD *)v10 + 2) = &BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl::`vftable';
  v10[12] = 0;
  *(_QWORD *)v10 = &InputAttemptedDeliveryClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v10 + 1) = &InputAttemptedDeliveryClientProxy::`vftable'{for `IInputAttemptedDeliveryClientProxy'};
  *((_QWORD *)v10 + 7) = v9;
  if ( v9 )
  {
    (**(void (__fastcall ***)(__int64))v9)(v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  v11 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 48LL))(v10);
  v12 = *(void (__fastcall ****)(_QWORD))(v11 + 16);
  *(_QWORD *)(v11 + 16) = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( v12 )
    (**v12)(v12);
  *(_DWORD *)(v11 + 24) = v3;
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 40LL);
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v13 + 40LL))(
          v13,
          *(unsigned int *)(a1 + 36),
          v3,
          v11);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2929,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x18001F7B2LL);
  }
  return 0LL;
}
