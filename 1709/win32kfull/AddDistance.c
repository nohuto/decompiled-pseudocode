/*
 * XREFs of AddDistance @ 0x1C02C8B60
 * Callers:
 *     itrp_ALIGNRP @ 0x1C02C9D60 (itrp_ALIGNRP.c)
 *     itrp_MDRP @ 0x1C02CF350 (itrp_MDRP.c)
 *     itrp_MIRP @ 0x1C02CFC80 (itrp_MIRP.c)
 *     itrp_MSIRP @ 0x1C02D05B0 (itrp_MSIRP.c)
 *     itrp_SHP_Common @ 0x1C02D3484 (itrp_SHP_Common.c)
 * Callees:
 *     IndirectlyDependsOn @ 0x1C02C9154 (IndirectlyDependsOn.c)
 */

void __fastcall AddDistance(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v6; // ecx
  int v7; // eax
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r8
  __int64 v11; // rdx
  int i; // r9d
  __int64 v13; // rdx
  __int64 v14; // rax

  if ( a3 >= 0 )
  {
    v6 = *(__int16 *)(*(_QWORD *)(a2 + 64) + 2LL * (*(__int16 *)(a2 + 80) - 1)) + 5;
    if ( a3 < v6 && a4 >= 0 && a4 < v6 && a3 != a4 )
    {
      v7 = IndirectlyDependsOn(a2, (unsigned int)a3, (unsigned int)a4, 100LL);
      v10 = 12 * v9;
      if ( v7 )
      {
        *(_WORD *)(v10 + *(_QWORD *)(a2 + 104) + 6) |= 1u;
      }
      else
      {
        v11 = *(_QWORD *)(a2 + 104);
        if ( *(_WORD *)(v10 + v11) == 0xFFFF )
        {
          for ( i = *(__int16 *)(v11 + 12 * v8); i != -1; i = *(__int16 *)(v11 + 12LL * i) )
          {
            if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * (int)v8) != *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * i) )
              break;
            LODWORD(v8) = i;
          }
          *(_WORD *)(v10 + v11) = v8;
          *(_WORD *)(v10 + *(_QWORD *)(a2 + 104) + 2) = -1;
        }
      }
      if ( a5 == 1 )
      {
        v13 = *(_QWORD *)(a2 + 104);
        if ( *(_WORD *)(v13 + 12LL * (int)v8 + 4) == 0xFFFF && *(__int16 *)(v10 + v13 + 4) != (_DWORD)v8 )
        {
          v14 = *(__int16 *)(v13 + 12LL * (int)v8);
          if ( (_DWORD)v14 == -1 || *(__int16 *)(v13 + 12 * v14 + 4) != (_DWORD)v8 )
            *(_WORD *)(v13 + 12LL * (int)v8 + 4) = v9;
          else
            *(_WORD *)(v10 + v13 + 6) |= 1u;
        }
      }
    }
  }
}
