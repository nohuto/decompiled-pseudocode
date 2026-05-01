/*
 * XREFs of ?ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1802738D8
 * Callers:
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x180273B58 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18000C234 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F8490 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??0?$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z @ 0x18014F470 (--0-$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x18015033C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 */

__int64 __fastcall VirtualDesktopHelpers::ConvertDesktopFilter(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi
  CWinRTApplicationView **v4; // rcx
  CWinRTApplicationView *v5; // rbx
  int v6; // eax
  void *v7; // r8
  int v8; // r14d
  __int64 v9; // rdx
  _QWORD *v10; // r12
  int v11; // ebx
  _QWORD *v12; // rdx
  void *v13; // rcx
  int v14; // eax
  void *v15; // r8
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  void *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-60h] BYREF
  CWinRTApplicationView *v21; // [rsp+28h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  void *v23; // [rsp+38h] [rbp-48h] BYREF
  int v24; // [rsp+40h] [rbp-40h]
  CWinRTApplicationView *v25; // [rsp+48h] [rbp-38h] BYREF
  CWinRTApplicationView *v26; // [rsp+50h] [rbp-30h] BYREF
  void **v27; // [rsp+58h] [rbp-28h]
  int v28; // [rsp+60h] [rbp-20h] BYREF
  CWinRTApplicationView *v29; // [rsp+68h] [rbp-18h] BYREF
  void **v30; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v32; // [rsp+C0h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp+48h] BYREF

  ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>::ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>(
    (__int64)&v23,
    a1);
  v3 = 0;
  v27 = &v23;
  LODWORD(v25) = 0;
  v26 = 0LL;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v25);
  v4 = (CWinRTApplicationView **)&v28;
  v28 = v24;
  v30 = &v23;
  v29 = 0LL;
  while ( 1 )
  {
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(v4);
    if ( (_DWORD)v25 == v28 && v27 == v30 )
      break;
    v5 = v26;
    v21 = v26;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v21);
    v20 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v21, &v20) < 0 )
    {
      v14 = (*(__int64 (__fastcall **)(CWinRTApplicationView *, __int64 *))(*(_QWORD *)v5 + 72LL))(v5, &v22);
      if ( v14 >= 0 )
      {
        v16 = a2[1];
        if ( v16 == a2[3] )
        {
          v11 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  (__int64)a2,
                  v16 + 1,
                  v15);
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1B,
              (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
              (const char *)(unsigned int)v11);
LABEL_23:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
            v3 = v11;
            break;
          }
        }
        v17 = (_QWORD *)(*a2 + 8 * a2[1]++);
        if ( v17 )
          *v17 = v22;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          25LL,
          (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
          (const char *)(unsigned int)v14);
      }
    }
    else
    {
      v32 = 0;
      pv = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v20 + 32LL))(v20, &v32, &pv);
      if ( v6 >= 0 )
      {
        v8 = 0;
        if ( v32 )
        {
          while ( 1 )
          {
            v9 = a2[1];
            v10 = pv;
            if ( v9 == a2[3] )
            {
              v11 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                      (__int64)a2,
                      v9 + 1,
                      v7);
              if ( v11 < 0 )
                break;
            }
            v12 = (_QWORD *)(*a2 + 8 * a2[1]++);
            if ( v12 )
              *v12 = v10[v8];
            if ( ++v8 >= v32 )
              goto LABEL_13;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x12,
            (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
            (const char *)(unsigned int)v11);
          v18 = pv;
          pv = 0LL;
          CoTaskMemFree(v18);
          goto LABEL_23;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          14LL,
          (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
          (const char *)(unsigned int)v6);
      }
LABEL_13:
      v13 = pv;
      pv = 0LL;
      CoTaskMemFree(v13);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
    LODWORD(v25) = (_DWORD)v25 + 1;
    v4 = &v25;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v23);
  return v3;
}
