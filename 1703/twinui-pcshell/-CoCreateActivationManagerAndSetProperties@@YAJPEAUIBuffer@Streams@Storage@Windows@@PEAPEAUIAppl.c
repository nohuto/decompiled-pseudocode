/*
 * XREFs of ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x18018ECC4
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_7bec014655fe4d535cb5642aa7e0e9b0___ @ 0x18018F5E8 (ActivateExperienceWithPropertySetCore__lambda_7bec014655fe4d535cb5642aa7e0e9b0___.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x18018EC04 (-SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CoCreateActivationManagerAndSetProperties(
        struct Windows::Storage::Streams::IBuffer *a1,
        struct IApplicationActivationManagerPriv **a2)
{
  int Instance; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct IApplicationActivationManagerPriv *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v10; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManagerShim,
               0LL,
               0x404u,
               &GUID_998d66a2_4a54_496c_9e18_268890860004,
               (LPVOID *)&v10);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v6 = 48LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)Instance);
    v7 = (struct IApplicationActivationManagerPriv *)v10;
    goto LABEL_10;
  }
  if ( a1 )
  {
    Instance = SetActivationPropertySet(v10, a1);
    v5 = Instance;
    if ( Instance < 0 )
    {
      v6 = 52LL;
      goto LABEL_6;
    }
  }
  v7 = (struct IApplicationActivationManagerPriv *)v10;
  if ( v10 )
  {
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->AddRef)(v10);
    v7 = (struct IApplicationActivationManagerPriv *)v10;
  }
  *a2 = v7;
  v5 = 0;
LABEL_10:
  if ( v7 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct IApplicationActivationManagerPriv *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
