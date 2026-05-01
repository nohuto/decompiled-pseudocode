/*
 * XREFs of ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800819B8
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1800730E0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18007B464 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800759F0 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x1800816B8 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::RuntimeClassInitialize(CApplicationViewBase *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  int PersistedData; // eax
  __int128 v7; // xmm0
  __int64 v8; // rdx
  LPVOID pv[4]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v11[24]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  pv[3] = (LPVOID)-2LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v2 = (*(__int64 (__fastcall **)(char *, LPVOID *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8, pv);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_18;
  }
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)v11);
  v5 = *(volatile signed __int32 **)v11;
  if ( *(_QWORD *)v11 )
  {
    PersistedData = ApplicationViewManagement::CPersistence::_ReadPersistedData(
                      (HKEY *)(*(_QWORD *)v11 + 32LL),
                      (const unsigned __int16 *)pv[0],
                      L"VirtualDesktop",
                      v11,
                      0x18u);
    if ( PersistedData < 0 )
    {
      v7 = *(_OWORD *)v11;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v11 == 16 )
    {
      if ( *(_DWORD *)&v11[4] == 1447309360 )
      {
        v7 = *(_OWORD *)&v11[8];
        PersistedData = 0;
LABEL_12:
        if ( PersistedData >= 0 )
          *((_OWORD *)this + 6) = v7;
        goto LABEL_14;
      }
      v8 = 62LL;
    }
    else
    {
      v8 = 61LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
      (const char *)0x8007000DLL);
LABEL_14:
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  if ( (unsigned int)EdpGetIsManaged(v4) )
    *((_BYTE *)this + 40) = 1;
  v3 = 0;
LABEL_18:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v3;
}
