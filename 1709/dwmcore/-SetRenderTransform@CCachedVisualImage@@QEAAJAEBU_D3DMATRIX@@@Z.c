/*
 * XREFs of ?SetRenderTransform@CCachedVisualImage@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1801598A8
 * Callers:
 *     ?ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT_SETTRANSFORMMATRIX@@@Z @ 0x180176020 (-ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT_SETTRANSFORMM.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetRenderTransform(CCachedVisualImage *this, const struct _D3DMATRIX *a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm8
  D3DVALUE _11; // eax
  __int128 v9; // xmm4
  __int128 v10; // xmm0
  D3DVALUE _44; // xmm14_4
  D3DVALUE _43; // xmm13_4

  v2 = 0;
  if ( *((_QWORD *)this + 27)
    || ((v5 = operator new(0x44uLL)) == 0LL ? (v5 = 0LL) : (_DWORD *)(v5[16] = 0), (*((_QWORD *)this + 27) = v5) != 0LL) )
  {
    v6 = *((_QWORD *)this + 27);
    v7 = *(_OWORD *)&a2->_32;
    _11 = a2->_11;
    v9 = *(_OWORD *)&a2->_22;
    v10 = *(_OWORD *)&a2->_12;
    _44 = a2->_44;
    _43 = a2->_43;
    *(D3DVALUE *)(v6 + 52) = a2->_42;
    *(D3DVALUE *)(v6 + 56) = _43;
    *(D3DVALUE *)(v6 + 60) = _44;
    *(D3DVALUE *)v6 = _11;
    *(_OWORD *)(v6 + 4) = v10;
    *(_DWORD *)(v6 + 64) = 0;
    *(_OWORD *)(v6 + 20) = v9;
    *(_OWORD *)(v6 + 36) = v7;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x8E9u);
  }
  return v2;
}
