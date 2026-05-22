/*
 * XREFs of ?MaterializeBamoEdgyControllerClientProxy@ISMBamosBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x18001E274
 * Callers:
 *     ?Thunk_MaterializeBamoEdgyControllerClientProxy_0@?$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001F4B0 (-Thunk_MaterializeBamoEdgyControllerClientProxy_0@-$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeer.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x1800663B0 (--0EdgyControllerClientProxy@@QEAA@AEBV-$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::ISMBamosBamoPeerImpl::MaterializeBamoEdgyControllerClientProxy(
        BamoImpl::ISMBamosBamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdi
  void *v10; // rax
  const char *v11; // r9
  __int64 v12; // r14
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rbx
  void (__fastcall ***v15)(_QWORD); // rcx
  __int64 v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h]
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 2);
  v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v6 = 0LL;
  v20 = 0LL;
  if ( !*(_DWORD *)(v5 + 140) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
    v20 = v6;
    if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v7);
LABEL_20:
      wil::details::in1diag3::FailFast_Hr(
        v13,
        (void *)0x9C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
        (const char *)(unsigned int)v5);
      goto LABEL_21;
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
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
  v10 = operator new(0x80uLL);
  v21 = v9;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 24));
    v6 = v20;
  }
  v12 = EdgyControllerClientProxy::EdgyControllerClientProxy(v10, &v21);
  if ( v9 )
    (**(void (__fastcall ***)(__int64))(v9 + 16))(v9 + 16);
  if ( v12 )
  {
    LODWORD(v5) = 0;
  }
  else
  {
    LODWORD(v5) = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\server\\edgycontrollerclientproxy.cpp",
      (const char *)0x8007000ELL);
  }
  v13 = retaddr;
  if ( (int)v5 < 0 )
    goto LABEL_20;
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  if ( !v12 )
  {
LABEL_21:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      v11);
    __debugbreak();
  }
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
  v15 = *(void (__fastcall ****)(_QWORD))(v14 + 16);
  *(_QWORD *)(v14 + 16) = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  if ( v15 )
    (**v15)(v15);
  *(_DWORD *)(v14 + 24) = a2;
  v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL);
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v16 + 40LL))(
          v16,
          *((unsigned int *)this + 9),
          a2,
          v14);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x28E7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  return 0LL;
}
