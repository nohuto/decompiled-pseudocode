/*
 * XREFs of ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x180082274
 * Callers:
 *     ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x180085910 (-RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180010D58 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18006C270 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetCanvasClientTransformRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ @ 0x180081A18 (-GetCanvasClientTransformRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ.c)
 *     ?GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ @ 0x180081A34 (-GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ.c)
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
  unsigned int v11; // eax
  int CanvasRootCompositionNodeHandle; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // r9d
  struct CResource *v16; // rax
  int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF
  struct CResource *v21; // [rsp+68h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 2);
  v21 = 0LL;
  v9 = *(struct IDwmChannel **)(v4 + 16);
  v20 = 0;
  if ( *((_QWORD *)this + 97) )
  {
    v10 = -2147024891;
    v11 = 5524;
    goto LABEL_10;
  }
  if ( a3 )
    CanvasRootCompositionNodeHandle = CTopLevelWindow::GetCanvasRootCompositionNodeHandle(this);
  else
    CanvasRootCompositionNodeHandle = CTopLevelWindow::GetCanvasClientTransformRootCompositionNodeHandle(this);
  v13 = CanvasRootCompositionNodeHandle;
  if ( !CanvasRootCompositionNodeHandle )
  {
    v10 = -2147024890;
    v11 = 5541;
    goto LABEL_10;
  }
  v10 = (*(__int64 (__fastcall **)(struct IDwmChannel *, __int64, unsigned int *))(*(_QWORD *)v9 + 96LL))(
          v9,
          18LL,
          &v20);
  if ( v10 < 0 )
  {
    v11 = 5547;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v11);
    if ( hObject )
      CloseHandle(hObject);
    goto LABEL_22;
  }
  v14 = (*(__int64 (__fastcall **)(struct IDwmChannel *, _QWORD, HANDLE, struct _LUID, int))(*(_QWORD *)v9 + 824LL))(
          v9,
          v20,
          hObject,
          a4,
          v13);
  v10 = v14;
  if ( v14 < 0 )
  {
    v19 = 5562;
LABEL_14:
    v15 = v14;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v19);
    goto LABEL_22;
  }
  v14 = CResource::WrapExistingResource(v9, v20, &v21);
  v10 = v14;
  if ( v14 < 0 )
  {
    v19 = 5567;
    goto LABEL_14;
  }
  v16 = v21;
  *((_QWORD *)this + 97) = v21;
  *((_BYTE *)this + 768) = a3;
  _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
  v17 = CTopLevelWindow::SendBoundsToSwapchainTarget(this);
  v10 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x15F9u);
  if ( v10 < 0 )
  {
    v19 = 5568;
    v15 = v10;
    goto LABEL_21;
  }
LABEL_22:
  if ( v20 )
  {
    if ( v10 < 0 )
      (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v9 + 840LL))(v9);
    (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v9 + 128LL))(v9);
  }
  if ( v21 )
    CBaseObject::Release(v21);
  return (unsigned int)v10;
}
