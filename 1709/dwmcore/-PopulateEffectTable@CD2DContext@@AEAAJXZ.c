/*
 * XREFs of ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x180043DF0
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800457B4 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x180043E9C (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PopulateEffectTable(CD2DContext *this)
{
  int v1; // ebx
  _BYTE *v2; // rsi
  _QWORD *v3; // r14
  __int64 v4; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = &unk_18026DEC4;
  v9 = 0LL;
  v3 = (_QWORD *)((char *)this + 192);
  v4 = 0LL;
  while ( !*v2 )
  {
LABEL_3:
    v4 = (unsigned int)(v4 + 1);
    ++v3;
    v2 += 24;
    if ( (unsigned int)v4 >= 8 )
      goto LABEL_4;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 22) + 504LL))(
         *((_QWORD *)this + 22),
         (char *)&unk_18026DEB4 + 24 * v4,
         &v9);
  v1 = v7;
  if ( v7 >= 0 )
  {
    v8 = v9;
    v9 = 0LL;
    *v3 = v8;
    goto LABEL_3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x873u);
LABEL_4:
  if ( v1 < 0 )
    CD2DContext::ReleaseEffectTable(this);
  ReleaseInterface<ID2D1Geometry>(&v9);
  return (unsigned int)v1;
}
