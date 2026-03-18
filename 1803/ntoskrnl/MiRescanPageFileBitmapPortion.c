/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x14009C878
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x1400D7170 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPagefileBitmaps @ 0x14017DE34 (MiRescanPagefileBitmaps.c)
 * Callees:
 *     RtlFindNextClearRunUlong @ 0x14009CAD4 (RtlFindNextClearRunUlong.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

__int64 __fastcall MiRescanPageFileBitmapPortion(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v5; // rax
  __int64 *v6; // r13
  int v7; // r11d
  int v9; // r15d
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // ebp
  int v15; // r12d
  __int64 v16; // rax
  _QWORD *v17; // rcx
  unsigned int v18; // ecx
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 result; // rax
  unsigned int v32; // edi
  int v33; // [rsp+30h] [rbp-38h] BYREF
  __int64 v34; // [rsp+38h] [rbp-30h]
  int v35; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v6 = a5;
  v7 = a3 & 0x1F;
  v9 = a3 - v7;
  v10 = v7;
  v11 = *a5;
  v12 = v5 + 4 * ((unsigned __int64)(unsigned int)(a3 - v7) >> 5);
  v34 = v12;
  v33 = v7 + a4;
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong((unsigned int)&v33, v10, v12, -1, (__int64)&v35);
    v32 = result;
    if ( !(_DWORD)result )
      break;
    v13 = *(_DWORD *)(v11 + 52);
    v14 = v35 + v9;
    v15 = v35 + v32;
    if ( v32 <= v13 )
    {
      v30 = *(_DWORD *)(a1 + 140);
      if ( v30 <= v32 )
        v30 = v32;
      *(_DWORD *)(a1 + 140) = v30;
    }
    else
    {
      if ( v13 )
      {
        RtlRbRemoveNode(a1 + 144, v11);
        RtlRbRemoveNode(a1 + 160, v11 + 24);
        v18 = *(_DWORD *)(a1 + 140);
        if ( v18 <= *(_DWORD *)(v11 + 52) )
          v18 = *(_DWORD *)(v11 + 52);
        *(_DWORD *)(a1 + 140) = v18;
      }
      else
      {
        v16 = *(_QWORD *)v11;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || (v17 = *(_QWORD **)(v11 + 8), *v17 != v11) )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
      }
      v19 = a1 + 144;
      *(_DWORD *)(v11 + 52) = v32;
      *(_DWORD *)(v11 + 48) = v14;
      v20 = *(_QWORD *)(a1 + 152);
      v21 = *(_QWORD *)(a1 + 144);
      if ( (v20 & 1) != 0 && v21 )
        v21 ^= v19;
      LOBYTE(v12) = 0;
      v22 = v20 & 1;
      if ( v21 )
      {
        while ( 1 )
        {
          if ( __PAIR64__(v32, v14) < *(_QWORD *)(v21 + 48) )
          {
            v23 = *(_QWORD *)v21;
            if ( v22 )
            {
              if ( !v23 )
                goto LABEL_26;
              v23 ^= v21;
            }
            if ( !v23 )
            {
LABEL_26:
              LOBYTE(v12) = 0;
              break;
            }
          }
          else
          {
            v23 = *(_QWORD *)(v21 + 8);
            if ( v22 )
            {
              if ( !v23 )
                goto LABEL_20;
              v23 ^= v21;
            }
            if ( !v23 )
            {
LABEL_20:
              LOBYTE(v12) = 1;
              break;
            }
          }
          v21 = v23;
        }
      }
      RtlRbInsertNodeEx(a1 + 144, v21, v12, v11);
      v25 = *(_QWORD *)(a1 + 168);
      v26 = *(_QWORD *)(a1 + 160);
      if ( (v25 & 1) != 0 && v26 )
        v26 ^= a1 + 160;
      LOBYTE(v24) = 0;
      v27 = v25 & 1;
      if ( v26 )
      {
        v24 = *(unsigned int *)(v11 + 48);
        while ( 1 )
        {
          if ( (unsigned int)v24 < *(_DWORD *)(v26 + 24) )
          {
            v28 = *(_QWORD *)v26;
            if ( v27 )
            {
              if ( !v28 )
                goto LABEL_43;
              v28 ^= v26;
            }
            if ( !v28 )
            {
LABEL_43:
              LOBYTE(v24) = 0;
              break;
            }
          }
          else
          {
            v28 = *(_QWORD *)(v26 + 8);
            if ( v27 )
            {
              if ( !v28 )
                goto LABEL_37;
              v28 ^= v26;
            }
            if ( !v28 )
            {
LABEL_37:
              LOBYTE(v24) = 1;
              break;
            }
          }
          v26 = v28;
        }
      }
      RtlRbInsertNodeEx(a1 + 160, v26, v24, v11 + 24);
      ++*(_DWORD *)(a1 + 128);
      v11 = *(_QWORD *)(a1 + 176);
      if ( v11 == a1 + 176 )
      {
        v29 = *(_QWORD *)(a1 + 152);
        if ( (v29 & 1) != 0 )
        {
          if ( v29 == 1 )
            v11 = 0LL;
          else
            v11 = v29 ^ (v19 | 1);
        }
        else
        {
          v11 = *(_QWORD *)(a1 + 152);
        }
      }
    }
    v10 = v15;
  }
  *v6 = v11;
  return result;
}
