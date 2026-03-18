/*
 * XREFs of ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180044150
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18004D470 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1800445FC (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?CreateTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x180044A7C (-CreateTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x180044C88 (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800C7650 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapColorSource::Realize(CHwBitmapColorSource *this)
{
  unsigned int v1; // edi
  _QWORD *v2; // rsi
  __int64 v4; // rax
  CMILRefCountBase *v5; // rcx
  int Texture; // eax
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  int v9; // eax
  __int64 v10; // rcx
  CMILRefCountBase *v11; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 160);
  v12 = 0LL;
  v4 = *((_QWORD *)this + 20);
  if ( v4 && !*(_BYTE *)(v4 + 77) )
    ReleaseInterface<CD3DVidMemOnlyTexture>((char *)this + 160);
  if ( *v2 )
  {
    if ( CHwBitmapColorSource::IsRealizationValid(this) )
      goto LABEL_6;
  }
  else
  {
    Texture = CHwBitmapColorSource::CreateTexture(this);
    v1 = Texture;
    if ( Texture < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, 0xFB8u);
      goto LABEL_6;
    }
    *((_DWORD *)this + 46) = 0;
    *((_DWORD *)this + 45) = 0;
    *((_DWORD *)this + 44) = 0;
    *((_DWORD *)this + 43) = 0;
  }
  v8 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 26);
  if ( v8 )
    (**v8)(v8, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v12);
  if ( v12 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 72LL))(v12) == 1 )
  {
    v10 = *((_QWORD *)this + 26);
    *(_OWORD *)((char *)this + 172) = *(_OWORD *)((char *)this + 188);
    if ( v10 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 40LL))(v10, (char *)this + 168);
  }
  else
  {
    v9 = CHwBitmapColorSource::FillTexture(this);
    v1 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xFD3u);
  }
LABEL_6:
  ReleaseInterfaceNoNULL<ID2D1Ink>(v12);
  v5 = (CMILRefCountBase *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v5 )
  {
    do
    {
      v11 = (CMILRefCountBase *)*((_QWORD *)v5 + 33);
      *((_QWORD *)v5 + 33) = 0LL;
      CMILRefCountBase::Release(v5);
      v5 = v11;
    }
    while ( v11 );
  }
  return v1;
}
