/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@U_D3DCOLORVALUE@@$0A@@@QEAAJPEFBU_D3DCOLORVALUE@@I@Z @ 0x18020F954
 * Callers:
 *     ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18020F8E0 (-AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall DynArray<_D3DCOLORVALUE,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax

  v3 = *(_DWORD *)(a1 + 24);
  v5 = v3 + a3;
  v6 = v3 + a3 < v3 ? 0x80070216 : 0;
  if ( v3 + a3 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x10u, a3, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 16LL * v3), a2, 16LL * a3);
    *(_DWORD *)(a1 + 24) = v5;
  }
  return v6;
}
