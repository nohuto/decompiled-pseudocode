/*
 * XREFs of ?DrawBitmap@CRenderDataBuilder@@UEAAJI@Z @ 0x18000BB60
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawBitmap(CRenderDataBuilder *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx

  v4 = DynArrayImpl<0>::Grow((int)this + 16, 1, 16, 0, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x66u);
  }
  else
  {
    v6 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v6 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 4) = 373;
    *(_DWORD *)(v6 + 8) = a2;
    *((_DWORD *)this + 10) += 16;
  }
  return v5;
}
