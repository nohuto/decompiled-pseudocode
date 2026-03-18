/*
 * XREFs of ?DrawRectangle@CRenderDataBuilder@@UEAAJAEBUMilRectF@@I@Z @ 0x1800C29A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawRectangle(CRenderDataBuilder *this, const struct MilRectF *a2, int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int128 v9; // xmm0

  v6 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 28, 0, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xBDu);
  }
  else
  {
    v8 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v8 = 28;
    *(_QWORD *)(v8 + 4) = 0LL;
    *(_QWORD *)(v8 + 12) = 0LL;
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_DWORD *)(v8 + 4) = 341;
    v9 = *(_OWORD *)a2;
    *(_DWORD *)(v8 + 8) = a3;
    *(_OWORD *)(v8 + 12) = v9;
    *((_DWORD *)this + 10) += 28;
  }
  return v7;
}
