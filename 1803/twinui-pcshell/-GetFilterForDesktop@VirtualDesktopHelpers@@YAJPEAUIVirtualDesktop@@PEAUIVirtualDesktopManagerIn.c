/*
 * XREFs of ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x180273B58
 * Callers:
 *     ?GetFilterForDesktop@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIVirtualDesktop@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x180273C40 (-GetFilterForDesktop@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIVirtualDesktop@@AEAV-$CCoSim.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1802738D8 (-ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV-$CCoSimpleArray@PEAUHWND_.c)
 */

__int64 __fastcall VirtualDesktopHelpers::GetFilterForDesktop(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  void *v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v12[0] = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v14);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v12);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, void **, __int64 *))(*(_QWORD *)a2 + 104LL))(a2, a1, v12, &v14);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = VirtualDesktopHelpers::ConvertDesktopFilter((__int64)v12[0], a3);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v8 = VirtualDesktopHelpers::ConvertDesktopFilter(v14, a4);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v9 = 0;
        goto LABEL_9;
      }
      v10 = 43LL;
    }
    else
    {
      v10 = 42LL;
    }
  }
  else
  {
    v10 = 41LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"internal\\shell\\private\\inc\\VirtualDesktopHelpers.h",
    (const char *)(unsigned int)v8);
LABEL_9:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v14);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v12);
  return v9;
}
