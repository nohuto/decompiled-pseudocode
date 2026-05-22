/*
 * XREFs of ?Create@DragNDropProcessor@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x180063E10
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180019168 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??0DragNDropProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x180063A88 (--0DragNDropProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragNDropProcessor::Create(__int64 *a1, LARGE_INTEGER **a2)
{
  unsigned int v4; // ebx
  void *v5; // rax
  __int64 v6; // rdi
  LARGE_INTEGER *v7; // rdi
  LARGE_INTEGER *v8; // rsi
  LARGE_INTEGER v9; // rcx
  int v10; // eax
  const char *v11; // r9
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  if ( a2 )
  {
    v5 = malloc(0x150uLL);
    v6 = (__int64)v5;
    if ( v5 )
      memset_0(v5, 0, 0x150uLL);
    if ( v6 )
      v7 = (LARGE_INTEGER *)DragNDropProcessor::DragNDropProcessor(v6, a1);
    else
      v7 = 0LL;
    if ( v7 )
    {
      v8 = v7 + 4;
      v9 = v7[4];
      if ( v9.QuadPart )
      {
        v8->QuadPart = 0LL;
        (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)v9.QuadPart + 16LL))(v9);
      }
      v10 = CoreUICreate(&v7[4]);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x65,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\d"
                   "ragndropprocessor.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
      if ( !v8->QuadPart )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x66,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\d"
                   "ragndropprocessor.cpp",
          v11);
        JUMPOUT(0x180063F71LL);
      }
      BamoServerConnection = ISMStatics::GetBamoServerConnection();
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19) + 8LL) + 24LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
      if ( *(LARGE_INTEGER **)(v13 + 56) != v7 )
      {
        (*(void (__fastcall **)(LARGE_INTEGER *))(v7->QuadPart + 8))(v7);
        v14 = *(_QWORD *)(v13 + 56);
        *(_QWORD *)(v13 + 56) = v7;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      QueryPerformanceFrequency(v7 + 22);
      *a2 = v7;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
