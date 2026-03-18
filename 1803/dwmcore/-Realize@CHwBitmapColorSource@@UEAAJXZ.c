/*
 * XREFs of ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x1801F0700
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1801EE128 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     ?CreateTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x1801EF2E4 (-CreateTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1801EF984 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1801F0104 (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
 */

__int64 __fastcall CHwBitmapColorSource::Realize(CHwBitmapColorSource *this)
{
  unsigned int v1; // edi
  _QWORD *v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  int Texture; // eax
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // rcx
  int v9; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Texture, 0xFA7u);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xFC2u);
  }
LABEL_18:
  ReleaseInterfaceNoNULL<IBitmapSource>(v13);
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
