/*
 * XREFs of ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180031A20
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800047E0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180031840 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180030B6C (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureBrushForCVI(CTransitionWindowSnapshot *this)
{
  unsigned int v1; // edi
  int v3; // eax
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  CBaseObject *v7; // rcx
  CBaseObject *v9; // [rsp+90h] [rbp-38h] BYREF
  __int128 v10; // [rsp+98h] [rbp-30h] BYREF
  __int128 v11; // [rsp+A8h] [rbp-20h] BYREF

  v1 = 0;
  v9 = 0LL;
  if ( *((_QWORD *)this + 37) )
    return v1;
  v3 = CCachedVisualImageBrushResource::Create((__int64)this, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (__int64 *)&v9);
  v1 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xCCu);
LABEL_7:
    v5 = (volatile signed __int32 *)v9;
    goto LABEL_8;
  }
  v4 = *((_QWORD *)this + 36);
  v5 = (volatile signed __int32 *)v9;
  v11 = _xmm;
  v10 = _xmm;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v9 + 2) + 1208LL))(
         *((_QWORD *)v9 + 2),
         *((unsigned int *)v9 + 6),
         *((_QWORD *)v9 + 2),
         &v11,
         &v10,
         0,
         0,
         0,
         1,
         1,
         0,
         0,
         1,
         0,
         0,
         0,
         *(_DWORD *)(v4 + 24));
  v1 = v6;
  if ( v6 >= 0 )
  {
    v7 = (CBaseObject *)*((_QWORD *)this + 37);
    if ( v7 )
      CBaseObject::Release(v7);
    *((_QWORD *)this + 37) = v5;
    _InterlockedIncrement(v5 + 2);
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xEAu);
LABEL_8:
  if ( v5 )
    CBaseObject::Release((CBaseObject *)v5);
  return v1;
}
