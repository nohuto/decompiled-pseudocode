/*
 * XREFs of NVMeControllerFilterResouceRequirements @ 0x1C0004AEC
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 * Callees:
 *     GetProcessorGroupInformation @ 0x1C00035F4 (GetProcessorGroupInformation.c)
 *     memmove @ 0x1C0014040 (memmove.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

char __fastcall NVMeControllerFilterResouceRequirements(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  int v6; // r14d
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // r9
  char v14; // r8
  int v15; // edx
  unsigned int v16; // r9d
  unsigned int v17; // r11d
  unsigned int v18; // edx
  unsigned int v19; // r8d
  __int64 v20; // r10
  __int64 v21; // r8
  __int16 v22; // cx
  unsigned int v23; // r9d
  bool v24; // cf
  __int64 v25; // r10
  __int64 v26; // rax
  __int16 v27; // cx
  __int64 v28; // r8
  __int64 v29; // r8
  unsigned int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // edx
  unsigned int i; // r8d
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int *v37; // rdx
  __int64 v38; // r8

  v5 = 0;
  v6 = 0;
  LOBYTE(v8) = GetProcessorGroupInformation(a1, a2, a3, a4);
  if ( !(_BYTE)v8 )
  {
    *(_DWORD *)(a1 + 24) = 9;
    return v8;
  }
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
  v15 = *(unsigned __int16 *)(a1 + 170);
  if ( v5 <= v15 + 1 )
    goto LABEL_56;
  v16 = 0;
  v11 = v15 - v5 + v10 + 1;
  v17 = 0;
  v18 = 0;
  v19 = *(_DWORD *)(v9 + 36);
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  if ( !v10 )
    goto LABEL_29;
  while ( 1 )
  {
    v21 = 32LL * v18;
    if ( *(_BYTE *)(v21 + v9 + 41) != 2 )
      goto LABEL_26;
    v22 = *(_WORD *)(v21 + v9 + 44);
    if ( (v22 & 3) == 0 || *(_DWORD *)(v21 + v9 + 48) != -2 || *(_DWORD *)(v21 + v9 + 52) != -2 )
      goto LABEL_26;
    if ( v20 )
    {
      while ( !_bittest64(&v20, v16) )
        ++v16;
    }
    *(_WORD *)(v21 + v9 + 56) = 4;
    *(_WORD *)(v21 + v9 + 44) = v22 | 4;
    *(_DWORD *)(v21 + v9 + 48) = -2;
    *(_QWORD *)(v21 + v9 + 64) = 1LL << v16;
    v20 &= ~(1LL << v16);
    *(_DWORD *)(v21 + v9 + 52) = -2;
    *(_WORD *)(v21 + v9 + 58) = v17;
    *(_DWORD *)(v21 + v9 + 60) = 3;
    if ( v20 )
      goto LABEL_26;
    if ( v17 == *(unsigned __int16 *)(a1 + 168) - 1 )
      break;
    ++v17;
    v16 = 0;
    v20 = *(_QWORD *)(16LL * v17 + *(_QWORD *)(a1 + 184) + 8);
LABEL_26:
    v19 = *(_DWORD *)(v9 + 36);
    if ( ++v18 >= v19 )
      goto LABEL_29;
  }
  v19 = *(_DWORD *)(v9 + 36);
  ++v18;
LABEL_29:
  v23 = 0;
  v10 = v19;
  v24 = v18 < v19;
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  while ( 1 )
  {
    if ( !v24 )
      goto LABEL_40;
    v26 = 32LL * v18;
    if ( *(_BYTE *)(v26 + v9 + 41) == 2 )
    {
      v27 = *(_WORD *)(v26 + v9 + 44);
      if ( (v27 & 3) != 0 && *(_DWORD *)(v26 + v9 + 48) == -2 && *(_DWORD *)(v26 + v9 + 52) == -2 )
        break;
    }
    v10 = *(_DWORD *)(v9 + 36);
    v24 = ++v18 < v10;
  }
  if ( v25 )
  {
    while ( !_bittest64(&v25, v23) )
      ++v23;
  }
  v28 = 32LL * v18;
  *(_DWORD *)(v28 + v9 + 56) = 4;
  *(_WORD *)(v28 + v9 + 44) = v27 | 4;
  *(_QWORD *)(v28 + v9 + 64) = 1LL << v23;
  ++v18;
  *(_DWORD *)(v28 + v9 + 48) = -2;
  *(_DWORD *)(v28 + v9 + 52) = -2;
  *(_DWORD *)(v28 + v9 + 60) = 3;
  v10 = *(_DWORD *)(v9 + 36);
LABEL_40:
  while ( v18 < v10 )
  {
    v29 = 32LL * v18;
    if ( *(_BYTE *)(v29 + v9 + 41) == 2
      && (*(_BYTE *)(v29 + v9 + 44) & 3) != 0
      && *(_DWORD *)(v29 + v9 + 48) == -2
      && *(_DWORD *)(v29 + v9 + 52) == -2 )
    {
      v30 = v18;
      while ( v18 < v10 )
      {
        v31 = 32LL * v18;
        if ( *(_BYTE *)(v31 + v9 + 41) != 2
          || (*(_BYTE *)(v31 + v9 + 44) & 3) == 0
          || *(_DWORD *)(v31 + v9 + 48) != -2
          || *(_DWORD *)(v31 + v9 + 52) != -2 )
        {
          if ( v18 != v30 )
          {
            v32 = 32LL * v30;
            *(_OWORD *)(v32 + v9 + 40) = *(_OWORD *)(v31 + v9 + 40);
            *(_OWORD *)(v32 + v9 + 56) = *(_OWORD *)(v31 + v9 + 56);
          }
          ++v30;
        }
        v10 = *(_DWORD *)(v9 + 36);
        ++v18;
      }
      break;
    }
    v10 = *(_DWORD *)(v9 + 36);
    ++v18;
  }
LABEL_56:
  if ( v6 )
  {
    v33 = 0;
    for ( i = 0; i < v10; ++i )
    {
      v35 = 32LL * i;
      if ( *(_BYTE *)(v35 + v9 + 41) != 1 || (*(_BYTE *)(v35 + v9 + 44) & 1) == 0 )
      {
        if ( i != v33 )
        {
          v36 = 32LL * v33;
          *(_OWORD *)(v36 + v9 + 40) = *(_OWORD *)(v35 + v9 + 40);
          *(_OWORD *)(v36 + v9 + 56) = *(_OWORD *)(v35 + v9 + 56);
        }
        ++v33;
      }
      v10 = *(_DWORD *)(v9 + 36);
    }
    v11 += v33 - i;
  }
  memmove(
    (void *)(32LL * v11 + v9 + 40),
    (const void *)(32LL * v10 + v9 + 40),
    **(_DWORD **)(a2 + 8) + (unsigned int)*(_QWORD *)(a2 + 8) - (32 * v10 + (_DWORD)v9 + 40));
  v37 = *(unsigned int **)(a2 + 8);
  v8 = *v37 - 32LL * (*(_DWORD *)(v9 + 36) - v11);
  v38 = (32 * (*(_DWORD *)(v9 + 36) - v11)) >> 2;
  if ( (_DWORD)v38 )
    LOBYTE(v8) = (unsigned __int8)memset((char *)v37 + v8, 0, 4 * v38);
  *(_DWORD *)(v9 + 36) = v11;
  return v8;
}
