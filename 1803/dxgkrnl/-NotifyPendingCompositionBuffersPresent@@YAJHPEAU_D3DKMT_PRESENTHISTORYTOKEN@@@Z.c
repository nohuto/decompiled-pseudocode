/*
 * XREFs of ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0001724
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0014020 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0001AB8 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C000DD00 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000DFA4 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NotifyPendingCompositionBuffersPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  UINT64 FenceValue; // rsi
  int v3; // edi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v7; // rax
  int v8; // eax
  struct DXGGLOBAL *v9; // rax
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  struct DXGGLOBAL *v14; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  void *Handle; // [rsp+60h] [rbp+18h] BYREF

  FenceValue = a2->Token.Flip.FenceValue;
  v3 = 0;
  Handle = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  (*(void (**)(void))(*((_QWORD *)Global + 219) + 152LL))();
  v7 = DXGGLOBAL::GetGlobal();
  v8 = (*(__int64 (**)(void))(*((_QWORD *)v7 + 219) + 176LL))();
  if ( !a1
    || v8
    || !(unsigned int)IsTokenManagerReady()
    || (v9 = DXGGLOBAL::GetGlobal(), !(*(unsigned int (**)(void))(*((_QWORD *)v9 + 219) + 168LL))()) )
  {
    v3 = -1071775730;
  }
  v10 = DXGGLOBAL::GetGlobal();
  (*(void (**)(void))(*((_QWORD *)v10 + 219) + 192LL))();
  if ( v3 >= 0 )
  {
    Object = 0LL;
    LOBYTE(v11) = 1;
    v3 = DxgkCompositionObject::ResolveHandle(FenceValue, 2LL, v11, 2LL, &Object);
    if ( v3 >= 0 )
    {
      v12 = Object;
      v3 = CompositionTokenObject::MarkPending((CompositionTokenObject *)Object);
      if ( v3 >= 0 )
      {
        v3 = DxgkCompositionObject::OpenDwmHandle(v12, &Handle);
        if ( v3 >= 0 )
        {
          v13 = v12[14];
          v14 = DXGGLOBAL::GetGlobal();
          (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v14 + 219) + 24LL))(v13, 0LL);
          a2->Token.Flip.FenceValue = (UINT64)Handle;
        }
      }
      ObfDereferenceObject(v12);
    }
  }
  return (unsigned int)v3;
}
