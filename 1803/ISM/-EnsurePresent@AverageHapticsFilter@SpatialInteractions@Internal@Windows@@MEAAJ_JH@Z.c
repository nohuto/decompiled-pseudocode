/*
 * XREFs of ?EnsurePresent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JH@Z @ 0x1800D4B90
 * Callers:
 *     ?OnAddPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J0N@Z @ 0x1800D4820 (-OnAddPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J0N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?push_back@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAX$$QEAUSubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@Z @ 0x1800D9C10 (-push_back@-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V-$al.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::EnsurePresent(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2,
        int a3)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // r15
  const char *v11; // rdx
  int i; // esi
  __int64 v14; // rax
  const char *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD v19[3]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v4 = *((_QWORD *)this + 2);
    if ( a2 >= v4 )
    {
      v7 = *((int *)this + 9);
      v5 = (const char *)*((_QWORD *)this + 1);
      v8 = v7 * (a2 - v4) / (__int64)v5;
      if ( a3 == -1 )
        v9 = v8 - *((_DWORD *)this + 9) + 1;
      else
        v9 = v8 - a3;
      if ( v9 > 0 )
      {
        v10 = (__int64)v5 / v7;
        v11 = &v5[v4];
        for ( i = 0; i < v9; ++i )
        {
          if ( (*((_QWORD *)this + 14))-- == 1LL )
            v14 = 0LL;
          else
            v14 = *((_QWORD *)this + 13) + 1LL;
          *((_QWORD *)this + 13) = v14;
          v15 = &v11[v10];
          v19[0] = v11;
          v19[1] = &v11[v10];
          v19[2] = 0LL;
          std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::push_back(
            (char *)this + 80,
            v19);
          v11 = v15;
        }
        *((_QWORD *)this + 2) += v10 * v9;
        v4 = *((_QWORD *)this + 2);
      }
      if ( *((_BYTE *)this + 48) )
      {
        v16 = *((_QWORD *)this + 7);
        if ( v16 < v4 )
        {
          v17 = *((_QWORD *)this + 8);
          if ( v17 )
          {
            v18 = v17 + v16;
            if ( v18 <= v4 )
            {
              *((_BYTE *)this + 48) = 0;
            }
            else
            {
              *((_QWORD *)this + 7) = v4;
              *((_QWORD *)this + 8) = v18 - v4;
            }
          }
          else
          {
            *((_QWORD *)this + 7) = v4;
          }
        }
      }
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x146,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
        (const char *)0x8000FFFFLL);
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x167,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
                           v5);
  }
  return result;
}
