/*
 * XREFs of ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1800AC718
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800AE7B8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1800AC6E4 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PopulateEffectTable(CD2DContext *this)
{
  int v1; // ebx
  _BYTE *v2; // rsi
  __int64 *v3; // r14
  __int64 v4; // rdi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = &unk_18023D8E4;
  v9 = 0LL;
  v3 = (__int64 *)((char *)this + 200);
  v4 = 0LL;
  while ( !*v2 )
  {
LABEL_5:
    v4 = (unsigned int)(v4 + 1);
    ++v3;
    v2 += 24;
    if ( (unsigned int)v4 >= 0xA )
      goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 22) + 504LL))(
         *((_QWORD *)this + 22),
         (char *)&unk_18023D8D4 + 24 * v4,
         &v9);
  v1 = v6;
  if ( v6 >= 0 )
  {
    v7 = v9;
    v9 = 0LL;
    *v3 = v7;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB05u);
LABEL_6:
  if ( v1 < 0 )
    CD2DContext::ReleaseEffectTable(this);
  ReleaseInterface<ID2D1Geometry>(&v9);
  return (unsigned int)v1;
}
