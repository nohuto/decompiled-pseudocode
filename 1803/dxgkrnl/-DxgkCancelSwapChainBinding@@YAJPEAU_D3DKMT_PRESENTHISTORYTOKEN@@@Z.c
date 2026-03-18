/*
 * XREFs of ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004BA98
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00DFA9C (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x1C01B5100 (DxgkPresentRedirected.c)
 * Callees:
 *     DxgkReferenceCurrentSessionDwmProcess @ 0x1C0001B70 (DxgkReferenceCurrentSessionDwmProcess.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000DFA4 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCancelSwapChainBinding(struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  int v1; // ebx
  void *FenceValue; // rbp
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  struct DXGGLOBAL *v6; // rax
  __int64 v7; // rcx
  struct DXGGLOBAL *v8; // rax
  struct DXGGLOBAL *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r14
  __int64 v12; // rbx
  struct DXGGLOBAL *v13; // rax
  PRKPROCESS PROCESS; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  PROCESS = 0LL;
  if ( a1->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
  {
    FenceValue = (void *)a1->Token.Flip.FenceValue;
    if ( FenceValue )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)a1);
      (*(void (**)(void))(*((_QWORD *)Global + 219) + 152LL))();
      v6 = DXGGLOBAL::GetGlobal(v5);
      if ( (*(unsigned int (**)(void))(*((_QWORD *)v6 + 219) + 176LL))()
        || !(unsigned int)IsTokenManagerReady()
        || (v8 = DXGGLOBAL::GetGlobal(v7), !(*(unsigned int (**)(void))(*((_QWORD *)v8 + 219) + 168LL))()) )
      {
        v1 = -1071775730;
      }
      v9 = DXGGLOBAL::GetGlobal(v7);
      (*(void (**)(void))(*((_QWORD *)v9 + 219) + 192LL))();
      if ( v1 >= 0 )
      {
        v1 = DxgkReferenceCurrentSessionDwmProcess(&PROCESS);
        if ( v1 >= 0 )
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          Object = 0LL;
          v1 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 2, &Object);
          if ( v1 >= 0 )
          {
            v11 = Object;
            v12 = *((_QWORD *)Object + 14);
            v13 = DXGGLOBAL::GetGlobal(v10);
            (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v13 + 219) + 24LL))(v12, 1LL);
            (*(void (__fastcall **)(_QWORD *))(v11[4] + 56LL))(v11 + 4);
            ObfDereferenceObject(v11);
            v1 = ObCloseHandle(FenceValue, 1);
            if ( v1 >= 0 )
              a1->Token.Flip.FenceValue = 0LL;
          }
          KeUnstackDetachProcess(&ApcState);
        }
        if ( PROCESS )
          ObfDereferenceObject(PROCESS);
      }
    }
  }
  return (unsigned int)v1;
}
