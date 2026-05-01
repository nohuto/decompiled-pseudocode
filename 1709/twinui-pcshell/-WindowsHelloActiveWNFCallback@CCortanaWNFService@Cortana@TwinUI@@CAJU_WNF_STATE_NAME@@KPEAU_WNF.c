/*
 * XREFs of ?WindowsHelloActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800DC9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008CBB0 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ?GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z @ 0x1800DC604 (-GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::WindowsHelloActiveWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        TwinUI::Cortana::CCortanaWNFService *a4,
        int *a5,
        unsigned int a6)
{
  int v6; // ebx
  struct TwinUI::Cortana::ICortanaWNFNotification *v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // r9
  struct TwinUI::Cortana::ICortanaWNFNotification *v11[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11[1] = (struct TwinUI::Cortana::ICortanaWNFNotification *)-2LL;
  if ( a5 && a6 == 4 )
  {
    v6 = *a5;
    v7 = 0LL;
    v11[0] = 0LL;
    if ( a4 )
    {
      if ( (int)TwinUI::Cortana::CCortanaWNFService::GetNotification(a4, v11) >= 0 )
      {
        if ( v6 )
        {
          LODWORD(a5) = 1;
          v8 = _RegSetKeyValue(
                 HKEY_CURRENT_USER,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
                 L"IsWindowsHelloActive",
                 4u,
                 (BYTE *)&a5,
                 4u);
          v9 = (unsigned __int16)v8 | 0x80070000;
          if ( v8 <= 0 )
            v9 = (unsigned int)v8;
          if ( (v9 & 0x80000000) != 0LL )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x96,
              (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
              (const char *)v9);
        }
        LOBYTE(a2) = v6 != 0;
        (*(void (__fastcall **)(struct TwinUI::Cortana::ICortanaWNFNotification *, __int64))(*(_QWORD *)v11[0] + 80LL))(
          v11[0],
          a2);
      }
      v7 = v11[0];
    }
    if ( v7 )
    {
      v11[0] = 0LL;
      (*(void (__fastcall **)(struct TwinUI::Cortana::ICortanaWNFNotification *, __int64, struct _WNF_TYPE_ID *))(*(_QWORD *)v7 + 16LL))(
        v7,
        a2,
        a3);
    }
  }
  return 0LL;
}
