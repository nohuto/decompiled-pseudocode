/*
 * XREFs of ?CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecParam@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x18009E4D0
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180007C00 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z @ 0x18009E4C0 (-Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180008324 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAecAttributes::CreateInstance(const unsigned __int16 *a1, int a2, __int64 a3, _QWORD *a4)
{
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  LPVOID *v11; // rbx
  unsigned int v12; // esi
  unsigned __int64 v13; // r9
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v7;
  if ( v7 )
  {
    v7[2] = 0;
    *(_QWORD *)v7 = &CAecAttributes::`vftable';
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = (LPVOID *)v10;
  if ( v10 )
  {
    if ( !a1 )
      goto LABEL_11;
    v13 = -1LL;
    do
      ++v13;
    while ( a1[v13] );
    v14 = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, a1, v13, v16, (unsigned __int16 **)v10 + 2);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x17,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
        (const char *)(unsigned int)v14);
    }
    else
    {
LABEL_11:
      v10[6] = a2;
      v11 = 0LL;
      *a4 = v10;
      v12 = 0;
    }
  }
  else
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v11 )
  {
    CoTaskMemFree(v11[2]);
    v11[2] = 0LL;
    operator delete(v11, (const struct std::nothrow_t *)0x20);
  }
  return v12;
}
