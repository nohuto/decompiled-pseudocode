/*
 * XREFs of ?_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18030FFB4
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x180311258 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1PEBUtagRECT@@222HHW4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1803163A8 (-s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1.c)
 */

__int64 __fastcall CAppLayoutOperation::_AddAnimationOnlyOperationItem(_QWORD *a1, __int64 a2, int a3)
{
  int Instance; // esi
  __int64 v7; // rbx
  void *v8; // r8
  __int64 v9; // rdx
  __int64 *v10; // rdx
  __int64 v12; // [rsp+68h] [rbp-49h] BYREF
  __int64 v13; // [rsp+70h] [rbp-41h] BYREF
  _QWORD v14[2]; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v15[2]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v16[4]; // [rsp+98h] [rbp-19h] BYREF
  int v17; // [rsp+B8h] [rbp+7h]
  _QWORD v18[4]; // [rsp+C0h] [rbp+Fh] BYREF
  int v19; // [rsp+E0h] [rbp+2Fh]

  memset(v18, 0, sizeof(v18));
  v19 = 3;
  v17 = 3;
  memset(v16, 0, sizeof(v16));
  v15[0] = 0LL;
  v15[1] = 0LL;
  v14[0] = 0LL;
  v14[1] = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  Instance = CAppLayoutOperationItem::s_CreateInstance(a2, v18, v16, v15, v15, v14, v14, 0, 0, a3);
  if ( Instance >= 0 )
  {
    v7 = v13;
    v12 = v13;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v12);
    v9 = a1[16];
    Instance = 0;
    if ( v9 != a1[18]
      || (Instance = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                       (__int64)(a1 + 15),
                       v9 + 1,
                       v8),
          Instance >= 0) )
    {
      v10 = (__int64 *)(a1[15] + 8 * a1[16]++);
      if ( v10 )
      {
        *v10 = 0LL;
        if ( v10 != &v12 )
        {
          *v10 = v7;
          v12 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return (unsigned int)Instance;
}
