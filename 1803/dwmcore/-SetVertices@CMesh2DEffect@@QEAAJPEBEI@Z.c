/*
 * XREFs of ?SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z @ 0x1802224E0
 * Callers:
 *     ??$BlobSetter@P8CMesh2DEffect@@EAAJPEBEI@Z$H?SetVertices@1@QEAAJ0I@ZA@UID2D1EffectImpl@@@@YAJPEAUIUnknown@@PEBEI@Z @ 0x180221AA0 (--$BlobSetter@P8CMesh2DEffect@@EAAJPEBEI@Z$H-SetVertices@1@QEAAJ0I@ZA@UID2D1EffectImpl@@@@YAJPEA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     ?EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z @ 0x180221E3C (-EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z.c)
 */

__int64 __fastcall CMesh2DEffect::SetVertices(CMesh2DEffect *this, const unsigned __int8 *Src, size_t Size)
{
  size_t v3; // rdi
  int v6; // edi
  unsigned int v7; // eax
  void *v8; // rcx
  void *v9; // rax

  v3 = (unsigned int)Size;
  if ( (Size & 0x1F) != 0 )
  {
    v6 = -2147024809;
    v7 = 384;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v7);
    operator delete(*((void **)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    *((_DWORD *)this + 41) = 0;
    return (unsigned int)v6;
  }
  v8 = (void *)*((_QWORD *)this + 21);
  if ( v8 )
  {
    operator delete(v8);
    *((_QWORD *)this + 21) = 0LL;
  }
  *((_DWORD *)this + 41) = (unsigned int)v3 >> 5;
  v9 = operator new(saturated_mul((unsigned int)v3 >> 5, 0x20uLL));
  *((_QWORD *)this + 21) = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    v7 = 396;
    goto LABEL_9;
  }
  memcpy_0(v9, Src, v3);
  v6 = CMesh2DEffect::EnsureVertexBuffer(this, *((const struct CD3DVertexXYZDUV2 **)this + 21), *((_DWORD *)this + 41));
  if ( v6 < 0 )
  {
    v7 = 407;
    goto LABEL_9;
  }
  return (unsigned int)v6;
}
