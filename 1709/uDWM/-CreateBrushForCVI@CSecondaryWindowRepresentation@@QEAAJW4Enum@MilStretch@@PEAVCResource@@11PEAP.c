/*
 * XREFs of ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x18000DCAC
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18000DE38 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001019C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000CFFC (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::CreateBrushForCVI(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        CBaseObject **a6)
{
  int v9; // r12d
  int v10; // eax
  unsigned int v11; // edi
  int v12; // r9d
  __int64 v13; // r8
  int v14; // edx
  volatile signed __int32 *v15; // rbx
  int v16; // eax
  CBaseObject *v18; // [rsp+90h] [rbp-19h] BYREF
  __int128 v19; // [rsp+98h] [rbp-11h] BYREF
  __int128 v20; // [rsp+A8h] [rbp-1h] BYREF

  v18 = 0LL;
  v19 = 0uLL;
  v9 = 0;
  v10 = CCachedVisualImageBrushResource::Create(a1, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v18);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x45Du);
LABEL_12:
    v15 = (volatile signed __int32 *)v18;
    goto LABEL_13;
  }
  if ( a4 )
  {
    v9 = *(_DWORD *)(a4 + 24);
    v12 = 0;
    v19 = 0uLL;
  }
  else
  {
    v12 = 1;
    v19 = _xmm;
  }
  v20 = _xmm;
  if ( a3 )
    v13 = *(unsigned int *)(a3 + 24);
  else
    v13 = 0LL;
  if ( a5 )
    v14 = *(_DWORD *)(a5 + 24);
  else
    v14 = 0;
  v15 = (volatile signed __int32 *)v18;
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, __int128 *, int, _DWORD, _DWORD, int, int, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v18 + 2) + 1192LL))(
          *((_QWORD *)v18 + 2),
          *((unsigned int *)v18 + 6),
          v13,
          &v19,
          &v20,
          v14,
          0,
          0,
          v12,
          1,
          v9,
          0,
          a2,
          0,
          0,
          0,
          v13);
  v11 = v16;
  if ( v16 >= 0 )
  {
    if ( *a6 )
      CBaseObject::Release(*a6);
    *a6 = (CBaseObject *)v15;
    _InterlockedIncrement(v15 + 2);
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x48Eu);
LABEL_13:
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
  return v11;
}
