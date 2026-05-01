/*
 * XREFs of ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180110EA8
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___::operator() @ 0x180105090 (CDelayIAMOperations--CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18008CC0C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800F12F0 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x1800F13F4 (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800F887C (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18010FAA0 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CApplicationManager::_PerformDesktopActivationCallouts(
        CApplicationManager *a1,
        struct IObjectArray *a2,
        int a3)
{
  char v3; // bl
  int v6; // r15d
  __int64 *v7; // rsi
  __int64 v8; // rdi
  IMalloc *v9; // r8
  int v10; // eax
  struct IObjectArray **v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rbx
  __int64 v14; // rdx
  bool v15; // bl
  struct IUnknown *v16; // rbx
  IMalloc *v17; // r8
  int v18; // eax
  struct ISyncIAMEventHandler **v19; // rax
  int SingleMonitorObjectArray; // eax
  __int64 *v21; // rbx
  struct IUnknown *v22; // [rsp+40h] [rbp-40h] BYREF
  struct IUnknown *v23[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h] BYREF
  __int64 *v25; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+68h] [rbp-18h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+78h] [rbp-8h]
  struct IObjectArray *v29; // [rsp+C8h] [rbp+48h] BYREF
  int v30; // [rsp+D0h] [rbp+50h] BYREF
  struct ISyncIAMEventHandler *v31; // [rsp+D8h] [rbp+58h] BYREF

  v30 = a3;
  v23[1] = (struct IUnknown *)-2LL;
  v3 = a3;
  v6 = 0;
  LODWORD(v31) = 0;
  v7 = 0LL;
  v25 = 0LL;
  v8 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( a2 )
  {
    v29 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v29);
    v10 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
            (__int64)&v25,
            1uLL,
            v9);
    v7 = v25;
    v8 = v26;
    if ( v10 >= 0 )
    {
      v8 = v26 + 1;
      v26 = v8;
      v11 = (struct IObjectArray **)&v25[v8 - 1];
      if ( v11 )
      {
        *v11 = 0LL;
        if ( v11 != &v29 )
        {
          *v11 = a2;
          v29 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v29);
  }
  if ( (!a2 || (v3 & 0x12) != 0)
    && (*(int (__fastcall **)(_QWORD, struct IObjectArray **))(**((_QWORD **)a1 + 69) + 32LL))(
         *((_QWORD *)a1 + 69),
         &v29) >= 0 )
  {
    v12 = 0;
    if ( (_DWORD)v29 )
    {
      do
      {
        v22 = 0LL;
        v13 = *((_QWORD *)a1 + 69);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v22);
        v15 = 0;
        if ( (*(int (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)v13 + 40LL))(v13, v12, &v22) >= 0 )
        {
          v23[0] = v22;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v23);
          v6 |= 1u;
          LODWORD(v31) = v6;
          if ( (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                               &v25,
                               v14,
                               v23,
                               &v24) == -2147319765 )
            v15 = 1;
        }
        if ( (v6 & 1) != 0 )
        {
          v6 &= ~1u;
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v23);
        }
        if ( v15 )
        {
          v16 = v22;
          v31 = (struct ISyncIAMEventHandler *)v22;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v31);
          if ( v8 != v28
            || (v18 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                        (__int64)&v25,
                        v8 + 1,
                        v17),
                v8 = v26,
                v7 = v25,
                v18 >= 0) )
          {
            v26 = ++v8;
            v19 = (struct ISyncIAMEventHandler **)&v7[v8 - 1];
            if ( v19 )
            {
              *v19 = 0LL;
              if ( v19 != &v31 )
              {
                *v19 = (struct ISyncIAMEventHandler *)v16;
                v31 = 0LL;
              }
            }
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v31);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v22);
        ++v12;
      }
      while ( v12 < (unsigned int)v29 );
      v3 = v30;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
    if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &v31) >= 0 )
    {
      v29 = 0LL;
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v29);
      if ( a2 )
        SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(
                                     a1,
                                     (struct IImmersiveMonitor *)a2,
                                     &v29);
      else
        SingleMonitorObjectArray = CApplicationManager::_GetMonitorObjectArray(a1, &v25, &v29, &v30);
      if ( SingleMonitorObjectArray >= 0 )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, int, int, int))(*(_QWORD *)v31 + 24LL))(
          v31,
          v29,
          ((unsigned __int64)a1 + 248) & -(__int64)(a1 != 0LL),
          0LL,
          1,
          (v3 & 8) != 0 ? 4 : 1,
          0xFFFF);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v29);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  }
  if ( v7 )
  {
    if ( v8 )
    {
      v21 = v7;
      do
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v21++);
        --v8;
      }
      while ( v8 );
    }
    CoTaskMemFree(v7);
  }
}
