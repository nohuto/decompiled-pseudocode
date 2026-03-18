/*
 * XREFs of ?DrawVisual@CRenderDataBuilder@@UEAAJI@Z @ 0x1800C27D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawVisual(CRenderDataBuilder *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx

  v4 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 12, 0, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x100u);
  }
  else
  {
    v6 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v6 = 12;
    *(_QWORD *)(v6 + 4) = 0LL;
    *(_DWORD *)(v6 + 4) = 338;
    *(_DWORD *)(v6 + 8) = a2;
    *((_DWORD *)this + 10) += 12;
  }
  return v5;
}
