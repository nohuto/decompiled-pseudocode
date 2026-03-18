/*
 * XREFs of ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x1801B6160
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1801B4444 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     ?CreateTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x1801B5028 (-CreateTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1801B53F0 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1801B5B60 (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
 */

__int64 __fastcall CHwBitmapColorSource::Realize(CHwBitmapColorSource *this)
{
  unsigned int v1; // edi
  _QWORD *v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  signed int Texture; // eax
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // rcx
  signed int v9; // eax
  CMILRefCountBase *v10; // rcx
  CMILRefCountBase *v11; // rbx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 168);
  v13 = 0LL;
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
  {
    if ( !*(_BYTE *)(v4 + 69) )
    {
      ReleaseInterface<CD3DVidMemOnlyTexture>((CMILPoolResource **)this + 21);
      v5 = *((_QWORD *)this + 13);
      if ( v5 )
      {
        *((_QWORD *)this + 13) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  if ( *v2 )
  {
    if ( CHwBitmapColorSource::IsRealizationValid(this) )
      goto LABEL_18;
  }
  else
  {
    Texture = CHwBitmapColorSource::CreateTexture(this);
    v1 = Texture;
    if ( Texture < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Texture, 0xFA7u);
      goto LABEL_18;
    }
    *((_DWORD *)this + 48) = 0;
    *((_DWORD *)this + 47) = 0;
    *((_DWORD *)this + 46) = 0;
    *((_DWORD *)this + 45) = 0;
  }
  v7 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 27);
  if ( v7 )
    (**v7)(v7, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v13);
  if ( v13 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13) == 1 )
  {
    v8 = *((_QWORD *)this + 27);
    *(_OWORD *)((char *)this + 180) = *(_OWORD *)((char *)this + 196);
    if ( v8 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 40LL))(v8, (char *)this + 176);
  }
  else
  {
    v9 = CHwBitmapColorSource::FillTexture(this);
    v1 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xFC2u);
  }
LABEL_18:
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v13);
  v10 = (CMILRefCountBase *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = (CMILRefCountBase *)*((_QWORD *)v10 + 34);
      *((_QWORD *)v10 + 34) = 0LL;
      CMILRefCountBase::Release(v10);
      v10 = v11;
    }
    while ( v11 );
  }
  return v1;
}
