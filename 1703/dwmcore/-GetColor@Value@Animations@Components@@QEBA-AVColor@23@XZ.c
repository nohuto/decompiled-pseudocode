/*
 * XREFs of ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x180028CDC
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x18002CAD0 (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?QueryColor@Animation@Animations@Components@@UEAAJIPEAVColor@23@@Z @ 0x1801B97C0 (-QueryColor@Animation@Animations@Components@@UEAAJIPEAVColor@23@@Z.c)
 *     ?QueryVector4@Animation@Animations@Components@@UEAAJIPEAVVector4@23@@Z @ 0x1801B9940 (-QueryVector4@Animation@Animations@Components@@UEAAJIPEAVVector4@23@@Z.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B9C80 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Value::GetColor(__int64 a1, __int64 a2)
{
  __int64 i; // rax

  for ( i = 0LL; i < 4; ++i )
    *(float *)(a2 + 4 * i) = *(double *)(a1 + 8 * i);
  return a2;
}
