/*
 * XREFs of ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18013C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x18013A77C (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18013C3FC (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::RemoveApplicationView(RTL_SRWLOCK *a1, volatile signed __int64 *a2, int a3)
{
  RTL_SRWLOCK *v4; // rbx
  CWinRTApplicationView *v5; // rdi
  CWinRTApplicationView ***v6; // rcx
  char *v7; // rdx
  CWinRTApplicationView **v8; // rax
  int v9; // edi
  __int128 v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  RTL_SRWLOCK *v13; // [rsp+50h] [rbp-18h]
  char v14; // [rsp+58h] [rbp-10h]
  CWinRTApplicationView *v15; // [rsp+90h] [rbp+28h] BYREF
  CWinRTApplicationView *v16; // [rsp+98h] [rbp+30h] BYREF
  int v17; // [rsp+A0h] [rbp+38h] BYREF
  RTL_SRWLOCK *v18; // [rsp+A8h] [rbp+40h]

  v17 = a3;
  v16 = (CWinRTApplicationView *)a2;
  *(_QWORD *)&v11 = &v17;
  *((_QWORD *)&v11 + 1) = &v16;
  v12 = v11;
  v13 = a1 - 17;
  v14 = 1;
  v4 = a1 + 48;
  v18 = a1 + 48;
  AcquireSRWLockExclusive(a1 + 48);
  v5 = v16;
  v15 = v16;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v15);
  v6 = (CWinRTApplicationView ***)&a1[49];
  v7 = 0LL;
  if ( a1[50].Ptr )
  {
    v8 = *v6;
    while ( *v8 != v5 )
    {
      ++v7;
      ++v8;
      if ( v7 >= a1[50].Ptr )
        goto LABEL_5;
    }
    v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(v6);
  }
  else
  {
LABEL_5:
    v9 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
  if ( v9 >= 0 )
  {
    CApplicationViewManager::RaiseApplicationViewChanged(
      (CWinRTApplicationView *)a1,
      (volatile signed __int64 *)v16,
      1,
      0LL);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v9 = 0;
  }
  else if ( v4 )
  {
    ReleaseSRWLockExclusive(v4);
  }
  v14 = 0;
  lambda_3752109e28d6ea02fd1f915d996064c2_::operator()((__int64)&v12);
  return (unsigned int)v9;
}
