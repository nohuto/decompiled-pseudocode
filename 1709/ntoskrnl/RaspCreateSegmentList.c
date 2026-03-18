/*
 * XREFs of RaspCreateSegmentList @ 0x14013DEDC
 * Callers:
 *     RaspScanConvert @ 0x14013CED0 (RaspScanConvert.c)
 * Callees:
 *     RaspDestroySegmentList @ 0x14013CC54 (RaspDestroySegmentList.c)
 *     RaspInterpolatePoint @ 0x14013E23C (RaspInterpolatePoint.c)
 *     RaspAllocateMemory @ 0x14013E2C0 (RaspAllocateMemory.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall RaspCreateSegmentList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6)
{
  __int64 v7; // r15
  unsigned __int16 *v8; // r12
  unsigned int v9; // esi
  unsigned int v10; // ebx
  int v11; // edx
  unsigned int v12; // r13d
  int v13; // r9d
  _BYTE *v14; // r10
  unsigned int v15; // r11d
  unsigned int v16; // r8d
  char *Memory; // rax
  char *v18; // r14
  int v19; // ebp
  char *v20; // rdi
  unsigned int v21; // esi
  unsigned int v22; // r11d
  unsigned int v23; // r10d
  unsigned int v24; // r8d
  unsigned int v25; // edx
  int v26; // r9d
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // [rsp+24h] [rbp-44h]
  __int64 v41; // [rsp+28h] [rbp-40h]
  unsigned int v43; // [rsp+80h] [rbp+18h]

  v7 = a2;
  if ( a3 < 2 )
    return 3221225485LL;
  v8 = *(unsigned __int16 **)(a1 + 26);
  v9 = a3 - 2;
  v10 = 0;
  v40 = a3 - 2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( a3 == 2 )
    goto LABEL_54;
  v14 = (_BYTE *)(v7 + 16);
  do
  {
    v15 = v13 + 1;
    v16 = v13 + 1;
    if ( v13 == v8[v11] )
    {
      if ( v11 )
        v16 = v8[v11 - 1] + 1;
      else
        v16 = 0;
      ++v11;
    }
    if ( (*v14 & 1) != 0 || (*(_BYTE *)(17LL * v16 + v7 + 16) & 1) == 0 )
      ++v12;
    v14 += 17;
    ++v13;
  }
  while ( v15 < v9 );
  if ( !v12 )
  {
LABEL_54:
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  Memory = (char *)RaspAllocateMemory(25LL * v12);
  v41 = (__int64)Memory;
  v18 = Memory;
  if ( !Memory )
  {
    *a5 = 0;
    return 3221225626LL;
  }
  memset(Memory, 0, 25LL * v12);
  v19 = 0;
  v20 = v18 + 16;
  v21 = 0;
  while ( 1 )
  {
    v22 = v21 + 1;
    v23 = v21 + 1;
    v43 = v21 + 1;
    v24 = v21 - 1;
    v25 = v21 + 2;
    if ( v21 )
    {
      if ( v19 && v21 == v8[v19 - 1] + 1 )
        v24 = v8[v19];
    }
    else
    {
      v24 = *v8;
    }
    v26 = v8[v19];
    if ( v21 == v26 - 1 )
    {
      if ( v19 )
        v25 = v8[v19 - 1] + 1;
      else
        v25 = 0;
    }
    if ( v21 == v26 )
    {
      if ( v19 )
      {
        v39 = v8[v19 - 1];
        v23 = v39 + 1;
        v43 = v39 + 1;
        v25 = v39 + 2;
      }
      else
      {
        v23 = 0;
        v43 = 0;
        v25 = 1;
      }
      ++v19;
    }
    v27 = v7 + 17LL * v21;
    if ( (*(_BYTE *)(v27 + 16) & 1) != 0 )
    {
      v34 = v7 + 17LL * v23;
      if ( (*(_BYTE *)(v34 + 16) & 1) != 0 )
      {
        *((_QWORD *)v20 - 2) = v27;
        *((_QWORD *)v20 - 1) = v34;
        *(_QWORD *)v20 = v34;
        v20[8] = 1;
      }
      else
      {
        v35 = v7 + 17LL * v25;
        v36 = (*(_BYTE *)(v35 + 16) & 1) == 0;
        *((_QWORD *)v20 - 2) = v27;
        *((_QWORD *)v20 - 1) = v34;
        if ( v36 )
        {
          v37 = RaspInterpolatePoint(v7 + 17LL * v23, v35, a6);
          *(_QWORD *)v20 = v37;
          if ( !v37 )
            break;
          v23 = v43;
          v22 = v21 + 1;
          v20[8] = 4;
        }
        else
        {
          *(_QWORD *)v20 = v35;
          v20[8] = 2;
        }
        if ( v23 > v21 )
        {
          v21 = v22;
          if ( v22 == v8[v19] )
            ++v19;
        }
      }
      goto LABEL_25;
    }
    if ( !v21 && (*(_BYTE *)(17LL * v24 + v7 + 16) & 1) != 0
      || v19 && v21 == v8[v19 - 1] + 1 && (*(_BYTE *)(17LL * v24 + v7 + 16) & 1) != 0 )
    {
      goto LABEL_26;
    }
    v28 = v7 + 17LL * v21;
    v29 = 17LL * v23 + v7;
    v30 = a2 + 17LL * v24;
    if ( (*(_BYTE *)(v29 + 16) & 1) != 0 )
    {
      v38 = RaspInterpolatePoint(v30, v28, a6);
      *((_QWORD *)v20 - 2) = v38;
      if ( !v38 )
        break;
      *((_QWORD *)v20 - 1) = v27;
      *(_QWORD *)v20 = v29;
      v20[8] = 3;
      goto LABEL_24;
    }
    v31 = RaspInterpolatePoint(v30, v28, a6);
    *((_QWORD *)v20 - 2) = v31;
    if ( !v31 )
      break;
    *((_QWORD *)v20 - 1) = v27;
    v32 = RaspInterpolatePoint(v27, v29, a6);
    *(_QWORD *)v20 = v32;
    if ( !v32 )
      break;
    v20[8] = 5;
LABEL_24:
    v7 = a2;
LABEL_25:
    v20 += 25;
LABEL_26:
    if ( ++v21 >= v40 )
    {
      *a5 = v12;
      *a4 = v41;
      return v10;
    }
  }
  RaspDestroySegmentList(v41, v12, a6);
  *a5 = 0;
  *a4 = 0LL;
  return (unsigned int)-1073741670;
}
