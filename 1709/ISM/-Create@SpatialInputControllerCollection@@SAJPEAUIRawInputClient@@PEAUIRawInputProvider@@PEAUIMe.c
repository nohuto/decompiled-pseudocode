/*
 * XREFs of ?Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180092294
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180087C18 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003350 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?SpatialInputControllerCollection_Initialized_@RawInputProvidersTracing@@QEAAX_N@Z @ 0x18008CDD0 (-SpatialInputControllerCollection_Initialized_@RawInputProvidersTracing@@QEAAX_N@Z.c)
 *     ??0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x18009254C (--0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessa.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18009C844 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SpatialInputControllerCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        struct IMessageSession *a3,
        void **a4,
        struct SpatialInputControllerCollection **a5)
{
  SpatialInputControllerCollection *v8; // rbx
  __int64 v9; // rdx
  SpatialInputControllerCollection *v10; // rax
  SpatialInputControllerCollection *v11; // rbx
  SpatialInputControllerCollection *v12; // rsi
  unsigned int v13; // edi
  unsigned int v14; // r13d
  bool v15; // r14
  PTP_WORK ThreadpoolWork; // rax
  unsigned int v17; // edx
  const char *v18; // r9
  struct _TP_WORK *v19; // r15
  DWORD LastError; // edi
  int v21; // eax
  char v22; // r14
  _DWORD *v23; // rcx
  RawInputProvidersTracing *v24; // rcx
  int pvData; // [rsp+48h] [rbp-31h] BYREF
  struct _TP_WORK *v27; // [rsp+50h] [rbp-29h]
  DWORD pcbData[2]; // [rsp+58h] [rbp-21h] BYREF
  SpatialInputControllerCollection *v29; // [rsp+60h] [rbp-19h]
  void **v30; // [rsp+68h] [rbp-11h]
  __int64 v31; // [rsp+70h] [rbp-9h]
  _DWORD v32[4]; // [rsp+78h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  v31 = -2LL;
  v30 = a4;
  v8 = 0LL;
  v29 = 0LL;
  if ( !a5 )
  {
    v9 = 824LL;
LABEL_29:
    v13 = -2147024809;
    goto LABEL_30;
  }
  *a5 = 0LL;
  if ( !a1 || !a4 )
  {
    v9 = 826LL;
    goto LABEL_29;
  }
  v10 = (SpatialInputControllerCollection *)malloc(0xCF0uLL);
  v11 = v10;
  if ( v10 )
    memset(v10, 0, 0xCF0uLL);
  *(_QWORD *)pcbData = v11;
  if ( v11 )
    v12 = SpatialInputControllerCollection::SpatialInputControllerCollection(v11, a1, a2, a3);
  else
    v12 = 0LL;
  v8 = v12;
  v29 = v12;
  if ( !v12 )
  {
    v13 = -2147024882;
    v9 = 829LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)v13);
    goto LABEL_31;
  }
  v32[0] = 65551;
  v14 = 1;
  v15 = 1;
  pvData = 0;
  pcbData[0] = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
          L"SpatialInteraction_3GlassesMappingDisabled",
          0x18u,
          0LL,
          &pvData,
          pcbData) )
  {
    v15 = pvData != 0;
    if ( !pvData )
    {
      LODWORD(v27) = -16121855;
      v32[1] = -16121855;
      v14 = 2;
    }
  }
  ThreadpoolWork = CreateThreadpoolWork(SpatialInputControllerCollection::StaticExecuteWorkItems, v12, 0LL);
  v27 = ThreadpoolWork;
  v19 = (struct _TP_WORK *)*((_QWORD *)v12 + 413);
  if ( v19 )
  {
    LastError = GetLastError();
    WaitForThreadpoolWorkCallbacks(v19, 0);
    CloseThreadpoolWork(v19);
    SetLastError(LastError);
    ThreadpoolWork = v27;
  }
  *((_QWORD *)v12 + 413) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    v21 = HIDDeviceCollection::Initialize(v12, v17, (struct _RIM_USAGE_ANDPAGE *const)v32, v14, 0x1Du, v30);
    v13 = v21;
    if ( v21 >= 0 )
    {
      v22 = !v15;
      v23 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
      if ( v23 && *v23 )
      {
        RawInputProvidersTracing::Instance();
        RawInputProvidersTracing::SpatialInputControllerCollection_Initialized_(v24, v22);
      }
      v13 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x36B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v21);
    }
  }
  else
  {
    v13 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x361,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
            v18);
  }
  if ( (v13 & 0x80000000) == 0 )
  {
    v8 = 0LL;
    *a5 = v12;
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x33F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)v13);
  }
LABEL_31:
  if ( v8 )
    (*(void (__fastcall **)(SpatialInputControllerCollection *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  return v13;
}
