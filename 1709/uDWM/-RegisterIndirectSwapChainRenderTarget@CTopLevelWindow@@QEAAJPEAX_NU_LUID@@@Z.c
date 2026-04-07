/*
 * XREFs of ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x180078EA4
 * Callers:
 *     ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x18007C290 (-RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18002C05C (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x180065800 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetCanvasClientTransformRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ @ 0x180078608 (-GetCanvasClientTransformRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ.c)
 *     ?GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ @ 0x180078624 (-GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ.c)
 */

__int64 __fastcall CTopLevelWindow::RegisterIndirectSwapChainRenderTarget(
        CTopLevelWindow *this,
        HANDLE hObject,
        char a3,
        struct _LUID a4)
{
  __int64 v4; // rax
  struct IDwmChannel *v9; // r14
  int v10; // edi
  int v11; // r9d
  int CanvasRootCompositionNodeHandle; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // r9d
  CBaseObject *v17; // rax
  int v18; // eax
  unsigned int v20; // [rsp+20h] [rbp-38h]
  unsigned int v21; // [rsp+20h] [rbp-38h]
  unsigned int v22; // [rsp+60h] [rbp+8h] BYREF
  CBaseObject *v23; // [rsp+68h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 2);
  v23 = 0LL;
  v9 = *(struct IDwmChannel **)(v4 + 16);
  v22 = 0;
  if ( *((_QWORD *)this + 97) )
  {
    v10 = -2147024891;
    v20 = 5440;
LABEL_3:
    v11 = v10;
    goto LABEL_11;
  }
  if ( a3 )
    CanvasRootCompositionNodeHandle = CTopLevelWindow::GetCanvasRootCompositionNodeHandle(this);
  else
    CanvasRootCompositionNodeHandle = CTopLevelWindow::GetCanvasClientTransformRootCompositionNodeHandle(this);
  v13 = CanvasRootCompositionNodeHandle;
  if ( !CanvasRootCompositionNodeHandle )
  {
    v10 = -2147024890;
    v20 = 5457;
    goto LABEL_3;
  }
  v14 = (*(__int64 (__fastcall **)(struct IDwmChannel *, __int64, unsigned int *))(*(_QWORD *)v9 + 96LL))(
          v9,
          18LL,
          &v22);
  v10 = v14;
  if ( v14 < 0 )
  {
    v20 = 5463;
    v11 = v14;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v20);
    if ( hObject )
      CloseHandle(hObject);
    goto LABEL_23;
  }
  v15 = (*(__int64 (__fastcall **)(struct IDwmChannel *, _QWORD, HANDLE, struct _LUID, int))(*(_QWORD *)v9 + 808LL))(
          v9,
          v22,
          hObject,
          a4,
          v13);
  v10 = v15;
  if ( v15 < 0 )
  {
    v21 = 5478;
LABEL_15:
    v16 = v15;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v21);
    goto LABEL_23;
  }
  v15 = CResource::WrapExistingResource(v9, v22, &v23);
  v10 = v15;
  if ( v15 < 0 )
  {
    v21 = 5483;
    goto LABEL_15;
  }
  v17 = v23;
  *((_QWORD *)this + 97) = v23;
  *((_BYTE *)this + 768) = a3;
  _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
  v18 = CTopLevelWindow::SendBoundsToSwapchainTarget(this);
  v10 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x15A5u);
  if ( v10 < 0 )
  {
    v21 = 5484;
    v16 = v10;
    goto LABEL_22;
  }
LABEL_23:
  if ( v22 )
  {
    if ( v10 < 0 )
      (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v9 + 824LL))(v9);
    (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v9 + 128LL))(v9);
  }
  if ( v23 )
    CBaseObject::Release(v23);
  return (unsigned int)v10;
}
