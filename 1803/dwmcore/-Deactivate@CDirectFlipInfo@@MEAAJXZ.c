/*
 * XREFs of ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x1801724E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x1801725EC (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x1801ACE5C (-RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Deactivate(CDirectFlipInfo *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  char v8; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = CDirectFlipInfo::EnsureIndependentFlipState(this, 0, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 367;
  }
  else
  {
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v7);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x172u);
      goto LABEL_8;
    }
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, void *))(*(_QWORD *)v7 + 392LL))(
           v7,
           0LL,
           0LL,
           0LL,
           0LL,
           &unk_1802AD280);
    v3 = v2;
    if ( v2 >= 0 )
      goto LABEL_8;
    v6 = 376;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v6);
LABEL_8:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 2) + 136LL))(*((_QWORD *)this + 2), &v8, 0LL);
  *((_DWORD *)this + 14) = (*(_BYTE *)(*((_QWORD *)this + 4) + 220LL) != 0) + 2;
  CCompositionSurfaceInfo::RecordDirectFlipState(*((CCompositionSurfaceInfo **)this + 4), *((_QWORD *)this + 8), 0);
  return v3;
}
