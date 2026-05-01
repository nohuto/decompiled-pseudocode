/*
 * XREFs of ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18003208C
 * Callers:
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x180035DF0 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801D016C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18000C234 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x18003152C (-_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-$CRefCounte.c)
 *     ?_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x180031F34 (-_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-$CRefCoun.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800912CC (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@M.c)
 *     ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1801D0CF8 (-_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV-$CRefCountedObject@UPerApplicationData.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_AddValidView(ViewEventDispatcher *this, struct IViewWrapperInternal *a2)
{
  void *v4; // r8
  int v5; // ebx
  __int64 v6; // rdx
  __int64 *v7; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HSTRING *v11; // [rsp+70h] [rbp+30h] BYREF
  struct IViewWrapperInternal *v12; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::InternalRelease(&v11);
  if ( (int)ViewEventDispatcher::_FindPerApplicationData((__int64)this, a2, (__int64 *)&v11) >= 0
    || (Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::InternalRelease(&v11),
        v9 = ViewEventDispatcher::_CreatePerApplicationData((__int64)this, a2, &v11),
        v5 = v9,
        v9 >= 0) )
  {
    v12 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
    v5 = 0;
    v6 = *((_QWORD *)this + 47);
    if ( v6 != *((_QWORD *)this + 49)
      || (v5 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                 (__int64)this + 368,
                 v6 + 1,
                 v4),
          v5 >= 0) )
    {
      v7 = (__int64 *)(*((_QWORD *)this + 46) + 8 * (*((_QWORD *)this + 47))++);
      if ( v7 )
      {
        *v7 = 0LL;
        if ( v7 != (__int64 *)&v12 )
        {
          *v7 = (__int64)a2;
          v12 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v12);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC38,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v5,
        -2);
    }
    else
    {
      v11[2] = (HSTRING)((char *)v11[2] + 1);
      v5 = 0;
    }
    if ( !v11[2] )
      ViewEventDispatcher::_RemovePerApplicationData(this, v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v9,
      -2);
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::InternalRelease(&v11);
  return (unsigned int)v5;
}
