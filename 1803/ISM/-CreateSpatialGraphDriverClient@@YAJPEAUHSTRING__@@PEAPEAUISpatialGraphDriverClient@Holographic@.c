/*
 * XREFs of ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800C88D0
 * Callers:
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800A7080 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18009D864 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x1800C25C8 (-RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING_.c)
 *     ??0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800CD5E4 (--0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreateSpatialGraphDriverClient(
        RegistryHelpers *a1,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient **a2)
{
  char v4; // bl
  Windows::Internal::Holographic::SpatialGraphDriverClient *v5; // rax
  int v6; // ebx
  Windows::Internal::Holographic::SpatialGraphDriverClient *v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                       a1,
                       (const WCHAR *)&stru_180101040,
                       L"SpatialGraphComputeMissingVelocities",
                       0LL) != 0;
  *a2 = 0LL;
  v5 = (Windows::Internal::Holographic::SpatialGraphDriverClient *)operator new(
                                                                     0x180uLL,
                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    v6 = -2147024882;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C5,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v7 = (Windows::Internal::Holographic::SpatialGraphDriverClient *)Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient(v5);
  v6 = Windows::Internal::Holographic::SpatialGraphDriverClient::RuntimeClassInitialize(v7, (__int64)a1, v4, 0LL);
  if ( v6 >= 0 )
  {
    v6 = (**(__int64 (__fastcall ***)(Windows::Internal::Holographic::SpatialGraphDriverClient *, GUID *, struct Windows::Internal::Holographic::ISpatialGraphDriverClient **))v7)(
           v7,
           &GUID_219efa25_266f_4e4a_a29a_e5969237f318,
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
