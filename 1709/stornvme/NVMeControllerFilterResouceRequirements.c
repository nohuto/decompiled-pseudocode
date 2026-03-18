/*
 * XREFs of NVMeControllerFilterResouceRequirements @ 0x1C0004AC8
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C90 (NVMeHwAdapterControl.c)
 * Callees:
 *     GetProcessorGroupInformation @ 0x1C00035E4 (GetProcessorGroupInformation.c)
 *     memmove @ 0x1C00139C0 (memmove.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

char __fastcall NVMeControllerFilterResouceRequirements(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  int v6; // r14d
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // r9
  char v14; // dl
  int v15; // ecx
  int v16; // r10d
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // r9
  __int64 v20; // r8
  __int16 v21; // r11
  unsigned int v22; // ecx
  __int64 v23; // r11
  __int64 v24; // rax
  __int16 v25; // r9
  __int64 v26; // r8
  unsigned int v27; // r9d
  __int64 v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int i; // edx
  __int64 v34; // r8
  __int64 v35; // rax
  const void *v36; // rdx
  unsigned int *v37; // rdx
  __int64 v38; // r8

  v5 = 0;
  v6 = 0;
  LOBYTE(v8) = GetProcessorGroupInformation(a1, a2, a3, a4);
  if ( (_BYTE)v8 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v10 = *(_DWORD *)(v9 + 36);
    v11 = v10;
    if ( v10 )
    {
      v12 = v9 + 44;
      v13 = v10;
      do
      {
        v14 = *(_BYTE *)(v12 - 3);
        if ( v14 == 2 && (*(_BYTE *)v12 & 3) != 0 && *(_DWORD *)(v12 + 4) == -2 && *(_DWORD *)(v12 + 8) == -2 )
        {
          ++v5;
        }
        else if ( v14 == 1 && (*(_BYTE *)v12 & 1) != 0 )
        {
          ++v6;
        }
        v12 += 32LL;
        --v13;
      }
      while ( v13 );
    }
    v15 = *(unsigned __int16 *)(a1 + 162);
    if ( v5 > v15 + 1 )
    {
      v16 = 0;
      v11 = v15 - v5 + v10 + 1;
      v17 = 0;
      v18 = 0;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
      if ( v10 )
      {
        do
        {
          v20 = 32LL * v17;
          if ( *(_BYTE *)(v20 + v9 + 41) == 2 )
          {
            v21 = *(_WORD *)(v20 + v9 + 44);
            if ( (v21 & 3) != 0 && *(_DWORD *)(v20 + v9 + 48) == -2 && *(_DWORD *)(v20 + v9 + 52) == -2 )
            {
              if ( v19 )
              {
                while ( !_bittest64(&v19, v18) )
                  ++v18;
              }
              *(_WORD *)(v20 + v9 + 56) = 4;
              *(_WORD *)(v20 + v9 + 44) = v21 | 4;
              *(_QWORD *)(v20 + v9 + 64) = 1LL << v18;
              v19 &= ~(1LL << v18);
              *(_DWORD *)(v20 + v9 + 48) = -2;
              *(_DWORD *)(v20 + v9 + 52) = -2;
              *(_WORD *)(v20 + v9 + 58) = v16;
              *(_DWORD *)(v20 + v9 + 60) = 3;
              if ( !v19 )
              {
                if ( v16 == *(unsigned __int16 *)(a1 + 160) - 1 )
                {
                  ++v17;
                  break;
                }
                v19 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL * (unsigned int)++v16 + 8);
                v18 = 0;
              }
            }
          }
          ++v17;
        }
        while ( v17 < *(_DWORD *)(v9 + 36) );
      }
      v22 = 0;
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
      while ( v17 < *(_DWORD *)(v9 + 36) )
      {
        v24 = 32LL * v17;
        if ( *(_BYTE *)(v24 + v9 + 41) == 2 )
        {
          v25 = *(_WORD *)(v24 + v9 + 44);
          if ( (v25 & 3) != 0 && *(_DWORD *)(v24 + v9 + 48) == -2 && *(_DWORD *)(v24 + v9 + 52) == -2 )
          {
            if ( v23 )
            {
              while ( !_bittest64(&v23, v22) )
                ++v22;
            }
            v26 = 32LL * v17++;
            *(_WORD *)(v26 + v9 + 44) = v25 | 4;
            *(_DWORD *)(v26 + v9 + 48) = -2;
            *(_DWORD *)(v26 + v9 + 52) = -2;
            *(_DWORD *)(v26 + v9 + 56) = 4;
            *(_DWORD *)(v26 + v9 + 60) = 3;
            *(_QWORD *)(v26 + v9 + 64) = 1LL << v22;
            break;
          }
        }
        ++v17;
      }
      v27 = *(_DWORD *)(v9 + 36);
      while ( v17 < v27 )
      {
        v28 = 32LL * v17;
        if ( *(_BYTE *)(v28 + v9 + 41) == 2
          && (*(_BYTE *)(v28 + v9 + 44) & 3) != 0
          && *(_DWORD *)(v28 + v9 + 48) == -2
          && *(_DWORD *)(v28 + v9 + 52) == -2 )
        {
          v29 = v17;
          if ( v17 < v27 )
          {
            do
            {
              v30 = 32LL * v17;
              if ( *(_BYTE *)(v30 + v9 + 41) != 2
                || (*(_BYTE *)(v30 + v9 + 44) & 3) == 0
                || *(_DWORD *)(v30 + v9 + 48) != -2
                || *(_DWORD *)(v30 + v9 + 52) != -2 )
              {
                if ( v17 != v29 )
                {
                  v31 = 32LL * v29;
                  *(_OWORD *)(v31 + v9 + 40) = *(_OWORD *)(v30 + v9 + 40);
                  *(_OWORD *)(v31 + v9 + 56) = *(_OWORD *)(v30 + v9 + 56);
                }
                ++v29;
              }
              ++v17;
            }
            while ( v17 < *(_DWORD *)(v9 + 36) );
          }
          break;
        }
        ++v17;
      }
    }
    if ( v6 )
    {
      v32 = 0;
      for ( i = 0; i < *(_DWORD *)(v9 + 36); ++i )
      {
        v34 = 32LL * i;
        if ( *(_BYTE *)(v34 + v9 + 41) != 1 || (*(_BYTE *)(v34 + v9 + 44) & 1) == 0 )
        {
          if ( i != v32 )
          {
            v35 = 32LL * v32;
            *(_OWORD *)(v35 + v9 + 40) = *(_OWORD *)(v34 + v9 + 40);
            *(_OWORD *)(v35 + v9 + 56) = *(_OWORD *)(v34 + v9 + 56);
          }
          ++v32;
        }
      }
      v11 += v32 - i;
    }
    v36 = (const void *)(32LL * *(unsigned int *)(v9 + 36) + v9 + 40);
    memmove(
      (void *)(32LL * v11 + v9 + 40),
      v36,
      (unsigned int)*(_QWORD *)(a2 + 8) + **(_DWORD **)(a2 + 8) - (_DWORD)v36);
    v37 = *(unsigned int **)(a2 + 8);
    v8 = *v37 - 32LL * (*(_DWORD *)(v9 + 36) - v11);
    v38 = (32 * (*(_DWORD *)(v9 + 36) - v11)) >> 2;
    if ( (_DWORD)v38 )
      LOBYTE(v8) = (unsigned __int8)memset((char *)v37 + v8, 0, 4 * v38);
    *(_DWORD *)(v9 + 36) = v11;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 9;
  }
  return v8;
}
