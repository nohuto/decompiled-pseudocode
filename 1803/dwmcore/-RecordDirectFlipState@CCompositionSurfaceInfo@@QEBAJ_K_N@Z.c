/*
 * XREFs of ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x1801ACE5C
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180171F60 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x1801724E0 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::RecordDirectFlipState(
        CCompositionSurfaceInfo *this,
        __int64 a2,
        unsigned __int8 a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v3 = 0;
  v4 = NtSetCompositionSurfaceDirectFlipState(*((_QWORD *)this + 4), &v6, a3);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4 | 0x10000000, 0xF4u);
  }
  return v3;
}
