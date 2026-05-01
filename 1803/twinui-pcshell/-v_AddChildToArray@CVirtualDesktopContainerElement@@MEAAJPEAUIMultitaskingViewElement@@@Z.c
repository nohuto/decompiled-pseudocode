/*
 * XREFs of ?v_AddChildToArray@CVirtualDesktopContainerElement@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1802A82F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x180289C00 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 */

__int64 __fastcall CVirtualDesktopContainerElement::v_AddChildToArray(
        CVirtualDesktopContainerElement *this,
        struct IMultitaskingViewElement *a2)
{
  struct IMultitaskingViewElement *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v4);
  LODWORD(this) = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
                    (_QWORD *)this + 2,
                    &v4,
                    *((_QWORD *)this + 3));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
  return (unsigned int)this;
}
