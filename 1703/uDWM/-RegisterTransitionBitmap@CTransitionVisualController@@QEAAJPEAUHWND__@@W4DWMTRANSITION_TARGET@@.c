/*
 * XREFs of ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800930E0
 * Callers:
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180085804 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180077888 (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x180091DF8 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 */

__int64 __fastcall CTransitionVisualController::RegisterTransitionBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        __int128 *a5,
        __int128 *a6,
        void *a7,
        unsigned __int64 a8)
{
  volatile signed __int32 *v12; // rdi
  signed int v13; // r10d
  __int64 v14; // rax
  signed int v15; // edx
  __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r8d
  int v21; // ebx
  CBaseObject *v22; // rcx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // eax
  CBaseObject *v26; // rcx
  CBaseObject *v28; // [rsp+40h] [rbp-51h] BYREF
  void *v29; // [rsp+48h] [rbp-49h]
  __int64 v30; // [rsp+50h] [rbp-41h] BYREF
  int v31; // [rsp+58h] [rbp-39h]
  __int128 v32; // [rsp+5Ch] [rbp-35h]
  __int128 v33; // [rsp+6Ch] [rbp-25h]
  CBaseObject *v34; // [rsp+80h] [rbp-11h]

  v29 = a7;
  v28 = 0LL;
  v12 = 0LL;
  memset_0(&v30, 0, 0x38uLL);
  v13 = a4[2] - *a4;
  v14 = (unsigned int)v13;
  if ( v13 < 0 )
    v14 = 0LL;
  v15 = a4[3] - a4[1];
  v16 = (unsigned int)v15;
  if ( v15 < 0 )
    v16 = 0LL;
  v17 = v14 * v16;
  if ( v17 > 0xFFFFFFFF || (v18 = 4LL * (unsigned int)v17, v18 > 0xFFFFFFFF) || a8 < (unsigned int)v18 )
  {
    v21 = -2147024809;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024809,
      0xCA8u);
LABEL_26:
    if ( a3 == 22 )
    {
      v26 = *(CBaseObject **)(a1 + 184);
      if ( v26 )
      {
        CBaseObject::Release(v26);
        *(_QWORD *)(a1 + 184) = 0LL;
      }
    }
    else if ( v34 )
    {
      CBaseObject::Release(v34);
    }
    goto LABEL_31;
  }
  if ( v13 < 0 )
    v13 = 0;
  if ( v15 < 0 )
    v15 = 0;
  v19 = CBitmapSource::Create(
          v13,
          v15,
          v13,
          v15,
          v29,
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          &v28);
  v21 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v19, 0xC95u);
    v12 = (volatile signed __int32 *)v28;
    goto LABEL_23;
  }
  if ( a3 == 22 )
  {
    v22 = *(CBaseObject **)(a1 + 184);
    if ( v22 )
      CBaseObject::Release(v22);
    v12 = (volatile signed __int32 *)v28;
    *(_QWORD *)(a1 + 184) = v28;
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v12 = (volatile signed __int32 *)v28;
    }
LABEL_23:
    if ( v21 >= 0 )
      goto LABEL_31;
    goto LABEL_26;
  }
  v12 = (volatile signed __int32 *)v28;
  v23 = *a5;
  v30 = a2;
  v31 = a3;
  v34 = v28;
  v24 = *a6;
  v32 = v23;
  v33 = v24;
  if ( v28 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v28 + 2);
    v12 = (volatile signed __int32 *)v28;
  }
  v25 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet(a1 + 152, (__int64)&v30, v20);
  v21 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v25, 0xCA3u);
    goto LABEL_23;
  }
LABEL_31:
  if ( v12 )
    CBaseObject::Release((CBaseObject *)v12);
  return (unsigned int)v21;
}
