/*
 * XREFs of ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180070E20
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18006C364 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800030E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?SpatialInputControllerCollection_Initialized_@RawInputProvidersTracing@@QEAAX_N@Z @ 0x18006E710 (-SpatialInputControllerCollection_Initialized_@RawInputProvidersTracing@@QEAAX_N@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180074E7C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??0SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800AAA98 (--0SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialRimDeviceCollection::Initialize(SpatialRimDeviceCollection *this, void **a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v6; // rax
  int v7; // ebx
  _QWORD *v8; // rdi
  const char *v9; // r9
  PTP_WORK ThreadpoolWork; // r14
  struct _TP_WORK *v11; // r15
  DWORD LastError; // ebx
  __int64 v13; // rdx
  unsigned int v15; // edx
  unsigned int v16; // r9d
  _DWORD *v17; // rcx
  RawInputProvidersTracing *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (_QWORD *)((char *)this + 2776);
  v5 = *((_QWORD *)this + 347);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *v4 = 0LL;
  v6 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)operator new(
                                                                                             0x240uLL,
                                                                                             (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_16:
    v13 = 269LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v8 = (_QWORD *)Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection(v6);
  ThreadpoolWork = CreateThreadpoolWork(
                     Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::StaticExecuteWorkItems,
                     v8,
                     0LL);
  v11 = (struct _TP_WORK *)v8[71];
  if ( v11 )
  {
    LastError = GetLastError();
    WaitForThreadpoolWorkCallbacks(v11, 0);
    CloseThreadpoolWork(v11);
    SetLastError(LastError);
  }
  v8[71] = ThreadpoolWork;
  if ( ThreadpoolWork )
    v7 = 0;
  else
    v7 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0xA5,
           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
           v9);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v8)(v8, &GUID_00759b61_908b_429d_b44f_bab28638e1a4, v4);
  }
  else if ( !v8 )
  {
    goto LABEL_15;
  }
  (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
LABEL_15:
  if ( v7 < 0 )
    goto LABEL_16;
  *((_DWORD *)this + 696) = GetCurrentThreadId();
  v7 = HIDDeviceCollection::Initialize(this, v15, (struct _RIM_USAGE_ANDPAGE *const)&unk_180135640, v16, 0x1Du, a2);
  if ( v7 < 0 )
  {
    v13 = 283LL;
    goto LABEL_17;
  }
  v17 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v17 )
  {
    if ( *v17 )
    {
      RawInputProvidersTracing::Instance();
      RawInputProvidersTracing::SpatialInputControllerCollection_Initialized_(v18, 0);
    }
  }
  return 0LL;
}
