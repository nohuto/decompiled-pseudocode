/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x14011A238
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x1400C0700 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPagefileBitmaps @ 0x14014FFF4 (MiRescanPagefileBitmaps.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     RtlFindNextClearRunUlong @ 0x14011AAA0 (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiRescanPageFileBitmapPortion(__int64 a1, __int64 a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned __int64 *v5; // r12
  int v6; // r14d
  int v8; // r15d
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  __int64 result; // rax
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // ebp
  __int64 v15; // rax
  _QWORD *v16; // rcx
  bool v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  bool v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v6 = a3 & 0x1F;
  v8 = a3 - v6;
  v9 = *a5;
  v10 = *(_QWORD *)(a2 + 8) + 4 * ((unsigned __int64)(unsigned int)(a3 - v6) >> 5);
  v25 = v10;
  v24 = v6 + a4;
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong((unsigned int)&v24, v6, v10, -1, (__int64)&v26);
    v12 = result;
    if ( !(_DWORD)result )
      break;
    v6 = v26 + result;
    v13 = *(_DWORD *)(v9 + 52);
    v14 = v26 + v8;
    if ( v12 <= v13 )
    {
      if ( *(_DWORD *)(a1 + 140) > v12 )
        v12 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v12;
    }
    else
    {
      if ( v13 )
      {
        RtlRbRemoveNode(a1 + 144, v9);
        RtlRbRemoveNode(a1 + 160, v9 + 24);
        v23 = *(_DWORD *)(v9 + 52);
        if ( *(_DWORD *)(a1 + 140) > v23 )
          v23 = *(_DWORD *)(a1 + 140);
        *(_DWORD *)(a1 + 140) = v23;
      }
      else
      {
        v15 = *(_QWORD *)v9;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || (v16 = *(_QWORD **)(v9 + 8), *v16 != v9) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
      }
      *(_DWORD *)(v9 + 52) = v12;
      *(_DWORD *)(v9 + 48) = v14;
      v17 = 0;
      v18 = *(_QWORD *)(a1 + 144);
      if ( v18 )
      {
        while ( 1 )
        {
          if ( __PAIR64__(v12, v14) >= *(_QWORD *)(v18 + 48) )
          {
            v19 = *(_QWORD *)(v18 + 8);
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( !v19 )
              {
LABEL_12:
                v17 = 1;
                break;
              }
              v19 ^= v18;
            }
            if ( !v19 )
              goto LABEL_12;
          }
          else
          {
            v19 = *(_QWORD *)v18;
            if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
            {
              if ( !v19 )
              {
LABEL_18:
                v17 = 0;
                break;
              }
              v19 ^= v18;
            }
            if ( !v19 )
              goto LABEL_18;
          }
          v18 = v19;
        }
      }
      RtlRbInsertNodeEx(a1 + 144, v18, v17, v9);
      v20 = 0;
      v21 = *(_QWORD *)(a1 + 160);
      if ( v21 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v9 + 48) < *(_DWORD *)(v21 + 24) )
          {
            v22 = *(_QWORD *)v21;
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v22 )
              {
LABEL_29:
                v20 = 0;
                break;
              }
              v22 ^= v21;
            }
            if ( !v22 )
              goto LABEL_29;
          }
          else
          {
            v22 = *(_QWORD *)(v21 + 8);
            if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
            {
              if ( !v22 )
              {
LABEL_23:
                v20 = 1;
                break;
              }
              v22 ^= v21;
            }
            if ( !v22 )
              goto LABEL_23;
          }
          v21 = v22;
        }
      }
      RtlRbInsertNodeEx(a1 + 160, v21, v20, v9 + 24);
      ++*(_DWORD *)(a1 + 128);
      v9 = *(_QWORD *)(a1 + 176);
      if ( v9 == a1 + 176 )
        v9 = *(_QWORD *)(a1 + 152) & 0xFFFFFFFFFFFFFFFEuLL;
    }
  }
  *v5 = v9;
  return result;
}
