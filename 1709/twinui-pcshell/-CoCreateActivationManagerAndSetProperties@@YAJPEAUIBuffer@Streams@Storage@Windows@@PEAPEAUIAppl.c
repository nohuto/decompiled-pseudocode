/*
 * XREFs of ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x1801DDAD0
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___ @ 0x1801DE044 (ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x1801DDA10 (-SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CoCreateActivationManagerAndSetProperties(
        struct Windows::Storage::Streams::IBuffer *a1,
        struct IApplicationActivationManagerPriv **a2)
{
  __int64 *ppv; // rax
  int Instance; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct IApplicationActivationManagerPriv *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v11; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v11);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManagerShim,
               0LL,
               0x404u,
               &GUID_998d66a2_4a54_496c_9e18_268890860004,
               (LPVOID *)ppv);
  v6 = Instance;
  if ( Instance < 0 )
  {
    v7 = 48LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)Instance);
    v8 = (struct IApplicationActivationManagerPriv *)v11;
    goto LABEL_10;
  }
  if ( a1 )
  {
    Instance = SetActivationPropertySet(v11, a1);
    v6 = Instance;
    if ( Instance < 0 )
    {
      v7 = 52LL;
      goto LABEL_6;
    }
  }
  v8 = (struct IApplicationActivationManagerPriv *)v11;
  if ( v11 )
  {
    ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->AddRef)(v11);
    v8 = (struct IApplicationActivationManagerPriv *)v11;
  }
  *a2 = v8;
  v6 = 0;
LABEL_10:
  if ( v8 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IApplicationActivationManagerPriv *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
