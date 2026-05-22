/*
 * XREFs of ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800B8F50
 * Callers:
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x1800780D8 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x1800B4A94 (-RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING_.c)
 *     ??0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800BC7E4 (--0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateSpatialGraphDriverClient(
        RegistryHelpers *a1,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient **a2)
{
  int v3; // ebp
  bool v4; // bl
  Windows::Internal::Holographic::SpatialGraphDriverClient *v5; // rax
  int v6; // ebx
  Windows::Internal::Holographic::SpatialGraphDriverClient *v7; // rdi
  int v8; // r8d
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (int)a1;
  v4 = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                       a1,
                       (const WCHAR *)&stru_1800E4F10,
                       L"SpatialGraphComputeMissingVelocities",
                       0LL) != 0;
  *a2 = 0LL;
  v5 = (Windows::Internal::Holographic::SpatialGraphDriverClient *)operator new(
                                                                     0xA0uLL,
                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    v6 = -2147024882;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5E2,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v7 = (Windows::Internal::Holographic::SpatialGraphDriverClient *)Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient(v5);
  LOBYTE(v8) = v4;
  v6 = Windows::Internal::Holographic::SpatialGraphDriverClient::RuntimeClassInitialize(v7, v3, v8);
  if ( v6 >= 0 )
  {
    v6 = (**(__int64 (__fastcall ***)(Windows::Internal::Holographic::SpatialGraphDriverClient *, GUID *, struct Windows::Internal::Holographic::ISpatialGraphDriverClient **))v7)(
           v7,
           &GUID_c862201f_7347_42dc_ada1_a2e05c0f2e54,
           a2);
  }
  else if ( !v7 )
  {
    goto LABEL_8;
  }
  (*(void (__fastcall **)(Windows::Internal::Holographic::SpatialGraphDriverClient *))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_8:
  if ( v6 < 0 )
    goto LABEL_9;
  return 0LL;
}
