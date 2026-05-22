/*
 * XREFs of ?SendMaterializeProxy@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18008D860
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoDataProviderPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoDataProviderPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int16 v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  v12 = *((_DWORD *)this + 6);
  v14 = *(unsigned int *)(v3 + 36);
  v15 = *(unsigned int *)(v3 + 40);
  v10 = 1;
  v7 = CoreUICallSend(a2, &v14, 2LL, 6LL, v10, &unk_1800FE145, v12);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x143,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v13 = *((_DWORD *)this + 6);
  v14 = *(unsigned int *)(v3 + 36);
  v15 = *(unsigned int *)(v3 + 40);
  LOWORD(v11) = 4;
  v9 = CoreUICallSend(a2, &v14, 2LL, 6LL, v11, &unk_1800FE145, v13);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x14E,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x18008D987LL);
  }
}
