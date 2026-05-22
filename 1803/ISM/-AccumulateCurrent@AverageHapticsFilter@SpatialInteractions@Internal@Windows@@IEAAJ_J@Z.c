/*
 * XREFs of ?AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z @ 0x1800D4A78
 * Callers:
 *     ?OnAddPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J0N@Z @ 0x1800D4820 (-OnAddPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J0N@Z.c)
 *     ?OnStopPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z @ 0x1800D48C0 (-OnStopPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z.c)
 *     ?OnGetIntensity@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JPEAN@Z @ 0x1800D4910 (-OnGetIntensity@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JPEAN@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::AccumulateCurrent(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r11
  double v10; // rbx
  double *v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 48) )
  {
    v3 = *((_QWORD *)this + 7);
    v4 = a2 - v3;
    if ( a2 - v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v6 = *((_QWORD *)this + 8);
    if ( v6 && v6 < v4 )
      v4 = v6;
    v7 = v3 + v4;
    v8 = *((_QWORD *)this + 13);
    v9 = v8 + *((_QWORD *)this + 14);
    while ( v8 != v9 )
    {
      v10 = *((double *)this + 7);
      v11 = *(double **)(*((_QWORD *)this + 11) + 8 * (v8 & (*((_QWORD *)this + 12) - 1LL)));
      v12 = *((_QWORD *)v11 + 1);
      if ( *(__int64 *)&v10 <= v12 )
      {
        if ( v7 <= *(_QWORD *)v11 )
          break;
        LODWORD(v13) = v7;
        if ( *(__int64 *)&v10 < *(_QWORD *)v11 )
          v10 = *v11;
        if ( v12 < v7 )
          v13 = *((_QWORD *)v11 + 1);
        v11[2] = (double)((int)v13 - LODWORD(v10)) * *((double *)this + 9) / (double)((int)v12 - *(_DWORD *)v11)
               + v11[2];
      }
      ++v8;
    }
    if ( *((_BYTE *)this + 48) )
    {
      v14 = *((_QWORD *)this + 7);
      if ( v14 < a2 )
      {
        v15 = *((_QWORD *)this + 8);
        if ( v15 )
        {
          v16 = v15 + v14;
          if ( v16 <= a2 )
          {
            *((_BYTE *)this + 48) = 0;
          }
          else
          {
            *((_QWORD *)this + 7) = a2;
            *((_QWORD *)this + 8) = v16 - a2;
          }
        }
        else
        {
          *((_QWORD *)this + 7) = a2;
        }
      }
    }
  }
  return 0LL;
}
