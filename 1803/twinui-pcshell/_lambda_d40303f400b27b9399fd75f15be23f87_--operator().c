/*
 * XREFs of _lambda_d40303f400b27b9399fd75f15be23f87_::operator() @ 0x1802BEC1C
 * Callers:
 *     wil::ResultFromException__lambda_d40303f400b27b9399fd75f15be23f87___ @ 0x1802BE548 (wil--ResultFromException__lambda_d40303f400b27b9399fd75f15be23f87___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180023088 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUVie.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F7588 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1802BEB70 (--$_Try_emplace@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@-$map@V-$ComPtr@UIApplicationVi.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1802C0C80 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1802C0D60 (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1802C0FAC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_d40303f400b27b9399fd75f15be23f87_::operator()(_QWORD *a1)
{
  CWinRTApplicationView *v2; // rsi
  __int64 v3; // r8
  CWinRTApplicationView *v4; // rbx
  CDesktopPositioner *v5; // rcx
  int fixed; // eax
  char v7; // si
  CDesktopPositioner *v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rdi
  CWinRTApplicationView *v13; // [rsp+38h] [rbp-19h] BYREF
  struct IApplicationViewPosition *v14; // [rsp+40h] [rbp-11h] BYREF
  struct IApplicationViewPosition *v15[2]; // [rsp+48h] [rbp-9h] BYREF
  int v16; // [rsp+58h] [rbp+7h] BYREF
  __int64 v17; // [rsp+60h] [rbp+Fh]
  struct tagRECT v18; // [rsp+68h] [rbp+17h] BYREF
  struct tagRECT v19; // [rsp+78h] [rbp+27h] BYREF
  __int128 v20; // [rsp+88h] [rbp+37h]

  v17 = -2LL;
  v13 = *(CWinRTApplicationView **)a1[1];
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v13);
  std::map<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>::_Try_emplace<Microsoft::WRL::ComPtr<IApplicationView>,>(
    (__int64 *)(*a1 + 256LL),
    (unsigned __int64)v15,
    (char *)&v13);
  v14 = (struct IApplicationViewPosition *)*((_QWORD *)v15[0] + 5);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
  v2 = v14;
  if ( !v14 )
  {
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v14);
    if ( (int)CDesktopPositioner::_GetRestorePosition(
                (CDesktopPositioner *)*a1,
                *(struct IApplicationView **)a1[1],
                v3,
                0LL,
                &v14) < 0 )
      return Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v14);
    v2 = v14;
  }
  v4 = 0LL;
  v15[0] = 0LL;
  if ( !*(_QWORD *)a1[2] )
    goto LABEL_7;
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)v15);
  fixed = CDesktopPositioner::_FixPositionForLayout(
            v5,
            *(struct IApplicationView **)a1[1],
            *(struct IAppLayout **)a1[2],
            v14,
            v15);
  v4 = v15[0];
  if ( fixed < 0 )
  {
    v2 = v14;
LABEL_7:
    if ( v4 != v2 )
    {
      v13 = v2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
      v13 = v4;
      v4 = v2;
      v15[0] = v2;
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v13);
    }
  }
  v7 = 0;
  if ( *(_DWORD *)a1[3] != 3 )
    goto LABEL_16;
  v13 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
              v15,
              (__int64 *)&v13) >= 0
    && (*(int (__fastcall **)(CWinRTApplicationView *, int *))(*(_QWORD *)v13 + 32LL))(v13, &v16) >= 0
    && v16 == 3
    && (*(int (__fastcall **)(CWinRTApplicationView *, struct tagRECT *))(*(_QWORD *)v13 + 56LL))(v13, &v18) >= 0 )
  {
    CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v8, &v18, &v19);
    v7 = 1;
    CDesktopPositioner::_FixRectForWorkArea(*a1, 1LL, &v19, 0LL);
    *(_DWORD *)(*(_QWORD *)a1[4] + 80LL) = 3;
    v9 = *(_QWORD *)a1[4];
    *(_OWORD *)(v9 + 96) = v20;
    *(_BYTE *)(v9 + 92) = 1;
    *(_DWORD *)(*(_QWORD *)a1[4] + 88LL) = 1;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( !v7 )
  {
LABEL_16:
    v10 = (__int64 *)a1[4];
    v11 = *v10;
    if ( *(CWinRTApplicationView **)(*v10 + 72) != v4 )
    {
      v13 = v4;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
      v13 = *(CWinRTApplicationView **)(v11 + 72);
      *(_QWORD *)(v11 + 72) = v4;
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v13);
    }
  }
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)v15);
  return Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v14);
}
