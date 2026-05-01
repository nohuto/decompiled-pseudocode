/*
 * XREFs of ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800216A0
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001EBC0 (-OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView.c)
 * Callees:
 *     ?IsEqualByAppUserModelId@CWinRTApplicationView@@UEAAJPEBGPEAH@Z @ 0x18001C280 (-IsEqualByAppUserModelId@CWinRTApplicationView@@UEAAJPEBGPEAH@Z.c)
 *     ?IsEqualByAppUserModelId@CWin32ApplicationView@@UEAAJPEBGPEAH@Z @ 0x18002AA30 (-IsEqualByAppUserModelId@CWin32ApplicationView@@UEAAJPEBGPEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C1208 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1801C1EA8 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C44C0 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::OnApplicationViewChanged(__int64 a1, CWinRTApplicationView *a2, int a3)
{
  int v3; // eax
  const unsigned __int16 *v7; // rdx
  __int64 (__fastcall *v8)(CWinRTApplicationView *, const unsigned __int16 *, int *); // rax
  __int64 result; // rax
  LSTATUS ValueW; // eax
  bool v11; // zf
  int v12; // ebx
  __int64 v13; // rdx
  int pdwType; // [rsp+20h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-10h] BYREF
  DWORD v16; // [rsp+44h] [rbp-Ch] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int pvData; // [rsp+78h] [rbp+28h] BYREF

  v3 = dword_180438044;
  if ( !dword_180438044 )
  {
    v16 = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
               L"PrereleaseExperience",
               0x10000012u,
               &v16,
               &pvData,
               &pcbData);
    if ( !ValueW )
    {
      if ( v16 == 4 )
      {
        if ( pvData <= 1 )
        {
          v11 = pvData == 1;
          goto LABEL_21;
        }
      }
      else if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
      {
        ValueW = 0;
        v11 = (_WORD)pvData == 49;
LABEL_21:
        LOBYTE(ValueW) = v11;
        if ( ValueW )
        {
          dword_180438044 = 1;
          goto LABEL_12;
        }
      }
    }
    v3 = 2;
    dword_180438044 = 2;
  }
  if ( v3 != 1 )
  {
    v7 = L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App";
    goto LABEL_4;
  }
LABEL_12:
  v7 = L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App";
LABEL_4:
  v8 = *(__int64 (__fastcall **)(CWinRTApplicationView *, const unsigned __int16 *, int *))(*(_QWORD *)a2 + 152LL);
  if ( v8 == CWinRTApplicationView::IsEqualByAppUserModelId )
  {
    result = CWinRTApplicationView::IsEqualByAppUserModelId(a2, v7, &v15);
  }
  else if ( v8 == CWin32ApplicationView::IsEqualByAppUserModelId )
  {
    result = CWin32ApplicationView::IsEqualByAppUserModelId(a2, v7, &v15);
  }
  else
  {
    result = v8(a2, v7, &v15);
  }
  if ( (int)result >= 0 )
  {
    if ( !v15 )
      return 0LL;
    if ( !a3 )
    {
      v12 = PeoplePaneViewManager::AddedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
      if ( v12 >= 0 )
        return 0LL;
      v13 = 545LL;
      goto LABEL_38;
    }
    if ( a3 <= 0 )
      return 0LL;
    if ( a3 > 2 )
    {
      if ( a3 == 7 )
      {
        v12 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 1);
        if ( v12 >= 0 )
          return 0LL;
        v13 = 553LL;
        goto LABEL_38;
      }
      if ( a3 == 9 )
      {
        v12 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 0);
        if ( v12 >= 0 )
          return 0LL;
        v13 = 556LL;
        goto LABEL_38;
      }
      if ( a3 != 11 )
        return 0LL;
    }
    v12 = PeoplePaneViewManager::RemovedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
    if ( v12 >= 0 )
      return 0LL;
    v13 = 550LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v12,
      pdwType);
    return (unsigned int)v12;
  }
  return result;
}
