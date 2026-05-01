/*
 * XREFs of ?XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1800EFA88
 * Callers:
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800EF148 (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1800EF924 (-LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsof.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PWSLayoutPolicyManager::XMLDocFromStream(
        struct Windows::Storage::Streams::IRandomAccessStream *a1,
        struct IXMLDOMDocument2 **a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  LPVOID v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  struct IXMLDOMDocument2 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  LPVOID ppv; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  v16 = 0LL;
  v3 = CreateStreamOverRandomAccessStream(a1, &GUID_0000000c_0000_0000_c000_000000000046, &v16);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 270LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_20;
  }
  v6 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v3 = CoCreateInstance(
         &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60,
         &ppv);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 271LL;
    goto LABEL_9;
  }
  v3 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 272LL;
    goto LABEL_9;
  }
  v15 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))ppv)(
         ppv,
         &GUID_00000109_0000_0000_c000_000000000046,
         &v15);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 40LL))(v15, v16);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v9 = (struct IXMLDOMDocument2 *)ppv;
      if ( ppv )
      {
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
        v9 = (struct IXMLDOMDocument2 *)ppv;
      }
      *a2 = v9;
      v4 = 0;
      goto LABEL_18;
    }
    v8 = 276LL;
  }
  else
  {
    v8 = 275LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)(unsigned int)v7);
  v9 = (struct IXMLDOMDocument2 *)ppv;
LABEL_18:
  v10 = v15;
  if ( !v15 )
    goto LABEL_21;
  v15 = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_20:
  v9 = (struct IXMLDOMDocument2 *)ppv;
LABEL_21:
  v11 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v9 = (struct IXMLDOMDocument2 *)ppv;
  }
  if ( v9 )
  {
    ppv = 0LL;
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v9->lpVtbl->Release)(v9);
  }
  return v4;
}
