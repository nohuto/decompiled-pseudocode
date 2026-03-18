/*
 * XREFs of AddProportion @ 0x1C02C8CB0
 * Callers:
 *     itrp_ALIGNRP @ 0x1C02C9D60 (itrp_ALIGNRP.c)
 *     itrp_IP @ 0x1C02CCA70 (itrp_IP.c)
 *     itrp_ISECT @ 0x1C02CD440 (itrp_ISECT.c)
 *     itrp_MDRP @ 0x1C02CF350 (itrp_MDRP.c)
 * Callees:
 *     IndirectlyDependsOn @ 0x1C02C9154 (IndirectlyDependsOn.c)
 */

void __fastcall AddProportion(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int16 v5; // bx
  int v7; // ecx
  __int64 v8; // r10
  unsigned int v9; // r11d
  __int16 v10; // r11
  __int64 v11; // rax

  if ( a3 >= 0 )
  {
    v5 = a3;
    v7 = *(__int16 *)(*(_QWORD *)(a2 + 64) + 2LL * (*(__int16 *)(a2 + 80) - 1)) + 5;
    if ( a3 < v7 && a5 >= 0 && a5 < v7 && a4 >= 0 && a4 < v7 && a3 != a4 && a5 != a4 && a3 != a5 )
    {
      if ( (unsigned int)IndirectlyDependsOn(a2, (unsigned int)a3, (unsigned int)a4, 100LL)
        || (unsigned int)IndirectlyDependsOn(a2, v9, (unsigned int)v8, 100LL) )
      {
        *(_WORD *)(*(_QWORD *)(a2 + 104) + 12 * v8 + 6) |= 1u;
      }
      else
      {
        v11 = *(_QWORD *)(a2 + 104);
        if ( *(_WORD *)(v11 + 12 * v8) == 0xFFFF && *(_WORD *)(v11 + 12 * v8 + 2) == 0xFFFF )
        {
          *(_WORD *)(v11 + 12 * v8) = v5;
          *(_WORD *)(*(_QWORD *)(a2 + 104) + 12 * v8 + 2) = v10;
        }
      }
    }
  }
}
