/*
 * XREFs of ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18007D878
 * Callers:
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18007BB90 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x18007D480 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18007DB84 (-Finalize@SingleShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@A.c)
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18007DCC0 (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        __int64 a1,
        HWND a2)
{
  void *v4; // rcx
  DWORD WindowThreadProcessId; // r14d
  const char *v7; // r9
  int v8; // eax
  unsigned int v9; // edi
  void *v10; // rcx
  _BYTE *v11; // rax
  _BYTE *v12; // rdi
  __int64 v13; // rsi
  const char *v14; // r9
  int v15; // eax
  _QWORD *v16; // rdx
  int v17[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h]
  __int64 v19; // [rsp+38h] [rbp-D0h]
  __int64 v20; // [rsp+40h] [rbp-C8h]
  LPARAM lParam[4]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+88h] [rbp-80h]
  struct tagRECT Rect; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v26[8]; // [rsp+A8h] [rbp-60h] BYREF
  HWND v27; // [rsp+B0h] [rbp-58h]
  struct tagRECT v28; // [rsp+B8h] [rbp-50h]
  _QWORD v29[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v30; // [rsp+E8h] [rbp-20h]
  char v31; // [rsp+F8h] [rbp-10h] BYREF
  int v32; // [rsp+FCh] [rbp-Ch]
  HWND v33; // [rsp+100h] [rbp-8h]
  struct tagRECT v34; // [rsp+108h] [rbp+0h]
  _BYTE v35[552]; // [rsp+118h] [rbp+10h] BYREF
  int v36; // [rsp+340h] [rbp+238h]
  wil::details::in1diag3 *retaddr; // [rsp+390h] [rbp+288h]

  lParam[3] = -2LL;
  v4 = *(void **)a1;
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  WindowThreadProcessId = GetWindowThreadProcessId(a2, 0LL);
  if ( WindowThreadProcessId )
  {
    if ( GetWindowRect(a2, &Rect) )
    {
      *(_QWORD *)v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      v8 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
             (__int64)v17,
             4uLL);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v31 = 0;
        v32 = -1;
        v33 = a2;
        v34 = Rect;
        memset(v35, 0, sizeof(v35));
        v36 = 0;
        v26[0] = 0;
        v27 = a2;
        v28 = Rect;
        memset(v29, 0, sizeof(v29));
        v30 = 0;
        LOBYTE(v22[0]) = 0;
        v22[1] = a2;
        v23 = Rect;
        v24 = 0LL;
        lParam[0] = (LPARAM)&v31;
        lParam[1] = (LPARAM)v26;
        lParam[2] = (LPARAM)v22;
        EnumThreadWindows(
          WindowThreadProcessId,
          EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_df7356024bf744f3615be68a3ea90a6d_>,
          (LPARAM)lParam);
        if ( !v31 && v36 == 15 )
        {
          v11 = v35;
          while ( *(_QWORD *)v11 )
          {
            v11 += 8;
            if ( v11 == &v35[32] )
            {
              v12 = v35;
              while ( 1 )
              {
                v13 = *(_QWORD *)v12;
                v14 = 0LL;
                if ( v18 == v20 )
                {
                  v15 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                          (__int64)v17,
                          v18 + 1);
                  v14 = (const char *)(unsigned int)v15;
                  if ( v15 < 0 )
                    break;
                }
                ++v18;
                v16 = (_QWORD *)(*(_QWORD *)v17 - 8LL + 8 * v18);
                if ( v16 )
                  *v16 = v13;
                if ( (int)v14 < 0 )
                  break;
                v12 += 8;
                if ( v12 == &v35[32] )
                  goto LABEL_23;
              }
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0xC5,
                (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
                v14);
              break;
            }
          }
        }
LABEL_23:
        if ( v29[0] )
          ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ChromeWindowGatherer::Finalize(
            v26,
            v17);
        if ( v24 )
          ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::SingleShadowWindowGatherer::Finalize(
            v22,
            v17);
        *(_QWORD *)a1 = *(_QWORD *)v17;
        *(_QWORD *)(a1 + 16) = v19;
        *(_QWORD *)(a1 + 8) = v18;
        *(_QWORD *)(a1 + 24) = v20;
        v10 = 0LL;
        v9 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x18E,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
          (const char *)(unsigned int)v8);
        v10 = *(void **)v17;
      }
      if ( v10 )
        CoTaskMemFree(v10);
      return v9;
    }
    else
    {
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x18A,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
               v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x187,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)0x80070578LL);
    return 2147943800LL;
  }
}
