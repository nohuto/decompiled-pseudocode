/*
 * XREFs of RaspCreateSegmentList @ 0x14017550C
 * Callers:
 *     RaspScanConvert @ 0x140174560 (RaspScanConvert.c)
 * Callees:
 *     RaspDestroySegmentList @ 0x140174398 (RaspDestroySegmentList.c)
 *     RaspInterpolatePoint @ 0x140175870 (RaspInterpolatePoint.c)
 *     RaspAllocateMemory @ 0x1401758F4 (RaspAllocateMemory.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall RaspCreateSegmentList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned __int16 *v8; // r13
  unsigned int v9; // esi
  unsigned int v10; // edi
  int v11; // edx
  unsigned int v12; // r12d
  int v13; // r9d
  _BYTE *v14; // r10
  unsigned int v15; // r11d
  unsigned int v16; // r8d
  char *Memory; // rax
  char *v18; // rsi
  char *v19; // rsi
  int v20; // r14d
  unsigned int v21; // ebp
  unsigned int v22; // r11d
  unsigned int v23; // ebx
  unsigned int v24; // r9d
  unsigned int v25; // edx
  int v26; // r8d
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r13
  char v30; // bl
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 result; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  char v37; // al
  __int64 v38; // rax
  char v39; // al
  int v40; // eax
  unsigned int v41; // [rsp+20h] [rbp-58h]
  unsigned __int16 *v42; // [rsp+28h] [rbp-50h]
  __int64 v43; // [rsp+30h] [rbp-48h]

  if ( a3 < 2 )
    return 3221225485LL;
  v8 = *(unsigned __int16 **)(a1 + 26);
  v9 = a3 - 2;
  v10 = 0;
  v42 = v8;
  v41 = a3 - 2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( a3 == 2 )
    goto LABEL_54;
  v14 = (_BYTE *)(a2 + 16);
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
    if ( (*v14 & 1) != 0 || (*(_BYTE *)(17LL * v16 + a2 + 16) & 1) == 0 )
      ++v12;
    v14 += 17;
    ++v13;
  }
  while ( v15 < v9 );
  if ( !v12 )
  {
LABEL_54:
    *a4 = 0LL;
    result = 0LL;
LABEL_55:
    *a5 = 0;
    return result;
  }
  Memory = (char *)RaspAllocateMemory(25LL * v12);
  v43 = (__int64)Memory;
  v18 = Memory;
  if ( !Memory )
  {
    result = 3221225626LL;
    goto LABEL_55;
  }
  memset(Memory, 0, 25LL * v12);
  v19 = v18 + 16;
  v20 = 0;
  v21 = 0;
  while ( 1 )
  {
    v22 = v21 + 1;
    v23 = v21 + 1;
    v24 = v21 - 1;
    v25 = v21 + 2;
    if ( v21 )
    {
      if ( v20 && v21 == v8[v20 - 1] + 1 )
        v24 = v8[v20];
    }
    else
    {
      v24 = *v8;
    }
    v26 = v8[v20];
    if ( v21 == v26 - 1 )
    {
      if ( v20 )
        v25 = v8[v20 - 1] + 1;
      else
        v25 = 0;
    }
    if ( v21 == v26 )
    {
      if ( v20 )
      {
        v40 = v8[v20 - 1];
        v23 = v40 + 1;
        v25 = v40 + 2;
      }
      else
      {
        v23 = 0;
        v25 = 1;
      }
      ++v20;
    }
    v27 = a2 + 17LL * v21;
    if ( (*(_BYTE *)(v27 + 16) & 1) != 0 )
    {
      v35 = a2 + 17LL * v23;
      if ( (*(_BYTE *)(v35 + 16) & 1) != 0 )
      {
        *((_QWORD *)v19 - 2) = v27;
        *((_QWORD *)v19 - 1) = v35;
        *(_QWORD *)v19 = v35;
        v19[8] = 1;
      }
      else
      {
        v36 = a2 + 17LL * v25;
        v37 = *(_BYTE *)(v36 + 16);
        *((_QWORD *)v19 - 2) = v27;
        *((_QWORD *)v19 - 1) = v35;
        if ( (v37 & 1) != 0 )
        {
          *(_QWORD *)v19 = v36;
          v39 = 2;
        }
        else
        {
          v38 = RaspInterpolatePoint(a2 + 17LL * v23, v36, a6);
          *(_QWORD *)v19 = v38;
          if ( !v38 )
            break;
          v22 = v21 + 1;
          v39 = 4;
        }
        v19[8] = v39;
        if ( v23 > v21 )
        {
          v21 = v22;
          if ( v22 == v8[v20] )
            ++v20;
        }
      }
      goto LABEL_25;
    }
    v28 = 17LL * v24;
    if ( !v21 && (*(_BYTE *)(v28 + a2 + 16) & 1) != 0 )
      goto LABEL_26;
    if ( v20 )
    {
      if ( v21 == v8[v20 - 1] + 1 )
      {
        v28 = 17LL * v24;
        if ( (*(_BYTE *)(v28 + a2 + 16) & 1) != 0 )
          goto LABEL_26;
      }
    }
    v29 = a2 + 17LL * v23;
    v30 = *(_BYTE *)(v29 + 16);
    v31 = RaspInterpolatePoint(v28 + a2, a2 + 17LL * v21, a6);
    *((_QWORD *)v19 - 2) = v31;
    if ( (v30 & 1) != 0 )
    {
      if ( !v31 )
        break;
      *((_QWORD *)v19 - 1) = v27;
      *(_QWORD *)v19 = v29;
      v19[8] = 3;
      goto LABEL_24;
    }
    if ( !v31 )
      break;
    *((_QWORD *)v19 - 1) = v27;
    v32 = RaspInterpolatePoint(v27, v29, a6);
    *(_QWORD *)v19 = v32;
    if ( !v32 )
      break;
    v19[8] = 5;
LABEL_24:
    v8 = v42;
LABEL_25:
    v19 += 25;
LABEL_26:
    if ( ++v21 >= v41 )
    {
      v33 = v43;
      goto LABEL_28;
    }
  }
  RaspDestroySegmentList(v43, v12, a6);
  v33 = 0LL;
  v12 = 0;
  v10 = -1073741670;
LABEL_28:
  *a5 = v12;
  *a4 = v33;
  return v10;
}
