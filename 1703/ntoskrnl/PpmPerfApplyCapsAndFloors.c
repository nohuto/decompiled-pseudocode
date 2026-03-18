/*
 * XREFs of PpmPerfApplyCapsAndFloors @ 0x14000E710
 * Callers:
 *     PpmPerfApplyDomainState @ 0x14000E170 (PpmPerfApplyDomainState.c)
 *     PpmPerfRecomputeBackgroundPolicy @ 0x1405819C0 (PpmPerfRecomputeBackgroundPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfApplyCapsAndFloors(unsigned int *a1, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int8 v5; // di
  char v7; // r11
  unsigned int *v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx

  v4 = *(unsigned int *)(a4 + 200);
  v5 = 0;
  if ( (_DWORD)v4 )
  {
    v7 = *(_BYTE *)(a4 + 354);
    v8 = (unsigned int *)(*(_QWORD *)(a4 + 208) + 72LL);
    do
    {
      if ( v7 )
      {
        v9 = *(v8 - 12);
        if ( *a1 > v9 )
        {
          v5 = 1;
          *a1 = v9;
        }
      }
      v10 = *(v8 - 11);
      if ( *a1 > v10 )
      {
        v5 = 1;
        *a1 = v10;
      }
      if ( *a1 > *v8 )
      {
        v5 = 1;
        *a1 = *v8;
      }
      v11 = v8[1];
      if ( *a2 < v11 )
        *a2 = v11;
      v12 = *(v8 - 12);
      if ( *a3 > v12 )
        *a3 = v12;
      v8 += 38;
      --v4;
    }
    while ( v4 );
  }
  return v5;
}
