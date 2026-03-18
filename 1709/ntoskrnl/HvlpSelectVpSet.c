/*
 * XREFs of HvlpSelectVpSet @ 0x1401EB098
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139988 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvlpComputeLpComparisonMetrics @ 0x1401EA340 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1401EAA80 (HvlpLpComparison.c)
 *     HviGetImplementationLimits @ 0x14028B5D0 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectVpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  _WORD *v4; // rcx
  __int64 v5; // rdx
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // r8d
  _WORD *v10; // rdx
  __int64 v11; // r9
  _DWORD *v12; // rdx
  int v13; // r8d
  __int64 v14; // r10
  int v15; // r9d
  unsigned int v16; // eax
  _BYTE *v17; // rcx
  unsigned int v18; // esi
  _BYTE *v19; // rbp
  unsigned int v20; // r9d
  unsigned int v21; // eax
  _BYTE *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rcx
  _BYTE *v25; // rbp
  __int64 v26; // rcx
  int v27; // r8d
  _WORD *i; // rdx
  unsigned int v29; // ecx
  _DWORD v31[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1;
  HviGetImplementationLimits(v31);
  if ( (_DWORD)v2 )
  {
    v4 = (_WORD *)(a2 + 8);
    v5 = (unsigned int)v2;
    do
    {
      v4[2] = *v4;
      *(v4 - 4) = 1;
      if ( (HvlpRootFlags & 0x800) != 0 )
        *((_BYTE *)v4 - 5) = 0;
      else
        *((_BYTE *)v4 - 5) = *((_BYTE *)v4 - 6);
      v4 += 18;
      --v5;
    }
    while ( v5 );
  }
  *(_BYTE *)(a2 + 1) = 1;
  v6 = 1;
  *(_BYTE *)(a2 + 3) = 1;
  while ( 1 )
  {
    if ( (_DWORD)v2 )
    {
      v7 = a2;
      v8 = v2;
      do
      {
        if ( *(_BYTE *)v7 )
        {
          if ( *(_BYTE *)(v7 + 1) || !*(_BYTE *)(v7 + 2) || v6 == v31[0] )
            goto LABEL_30;
          if ( KeRootProcPerNodeSpecified )
          {
            v9 = 0;
            v10 = (_WORD *)(a2 + 8);
            v11 = v2;
            do
            {
              if ( *((_BYTE *)v10 - 7) && *v10 == *(_WORD *)(v7 + 8) )
                ++v9;
              v10 += 18;
              --v11;
            }
            while ( v11 );
            if ( v9 == KeRootProcPerNodeSpecified )
              goto LABEL_30;
          }
          if ( KeRootProcPerCoreSpecified )
          {
            v12 = (_DWORD *)(a2 + 4);
            v13 = 0;
            v14 = v2;
            v15 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
            do
            {
              if ( *((_BYTE *)v12 - 3) && (v15 & *v12) == (v15 & *(_DWORD *)(v7 + 4)) )
                ++v13;
              v12 += 9;
              --v14;
            }
            while ( v14 );
            if ( v13 == KeRootProcPerCoreSpecified )
              goto LABEL_30;
          }
          if ( KeRootProcSpecified && v6 == KeRootProcSpecified )
LABEL_30:
            *(_BYTE *)v7 = 0;
        }
        v7 += 36LL;
        --v8;
      }
      while ( v8 );
    }
    v16 = 0;
    if ( (_DWORD)v2 )
    {
      v17 = (_BYTE *)a2;
      do
      {
        if ( *v17 )
          break;
        ++v16;
        v17 += 36;
      }
      while ( v16 < (unsigned int)v2 );
    }
    if ( v16 == (_DWORD)v2 )
      break;
    v18 = 0;
    if ( (_DWORD)v2 )
    {
      v19 = (_BYTE *)a2;
      do
      {
        if ( *v19 )
          HvlpComputeLpComparisonMetrics(v2, a2, v18);
        ++v18;
        v19 += 36;
      }
      while ( v18 < (unsigned int)v2 );
    }
    v20 = -1;
    v21 = 0;
    if ( (_DWORD)v2 )
    {
      v22 = (_BYTE *)a2;
      while ( !*v22 )
      {
        ++v21;
        v22 += 36;
        if ( v21 >= (unsigned int)v2 )
          goto LABEL_48;
      }
      v20 = v21;
    }
LABEL_48:
    v23 = v20 + 1;
    if ( (unsigned int)v23 < (unsigned int)v2 )
    {
      v24 = 9 * v23;
      v25 = (_BYTE *)(a2 + 36 * v23);
      do
      {
        if ( *v25 )
        {
          if ( (unsigned int)HvlpLpComparison(v24, a2, v23, v20) == -1 )
            v20 = v23;
        }
        LODWORD(v23) = v23 + 1;
        v25 += 36;
      }
      while ( (unsigned int)v23 < (unsigned int)v2 );
    }
    ++v6;
    v26 = 9LL * v20;
    *(_BYTE *)(a2 + 4 * v26 + 1) = 1;
    *(_BYTE *)(a2 + 4 * v26 + 3) = 1;
  }
  v27 = 0;
  if ( !(_DWORD)v2 )
    return 0LL;
  for ( i = (_WORD *)(a2 + 8); ; i += 18 )
  {
    if ( *((_BYTE *)i - 6) )
    {
      v29 = 0;
      do
      {
        if ( *(_WORD *)(a2 + 36LL * v29 + 8) == *i && *(_BYTE *)(a2 + 36LL * v29 + 1) )
          break;
        ++v29;
      }
      while ( v29 < (unsigned int)v2 );
      if ( v29 == (_DWORD)v2 )
        break;
    }
    if ( ++v27 >= (unsigned int)v2 )
      return 0LL;
  }
  return 3221225473LL;
}
