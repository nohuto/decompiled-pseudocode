/*
 * XREFs of MiImageRvaRawEnumNext @ 0x140514FC0
 * Callers:
 *     RtlpCompressRvaList @ 0x140514DC0 (RtlpCompressRvaList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiImageRvaRawEnumNext(_DWORD *a1, _DWORD *a2)
{
  int v3; // ebp
  unsigned int v4; // esi
  unsigned int v5; // r14d
  _DWORD *v6; // r15
  unsigned int *v7; // rbx
  __int64 (__fastcall *v8)(_DWORD *, unsigned int **, _DWORD *); // r9
  unsigned int v9; // ecx
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // r13
  unsigned int *v13; // rdx
  int v14; // r11d
  unsigned __int8 v15; // r10
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  char v18; // al
  bool v19; // r8
  unsigned int v20; // r8d
  int v21; // r10d
  __int64 v22; // rax
  unsigned int v23; // ecx
  _DWORD *v24; // r9
  __int64 result; // rax
  _DWORD *v26; // [rsp+58h] [rbp+10h]

  v26 = a2;
  if ( !a1[56] )
    return 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = a1 + 26;
  v7 = a1 + 26;
  if ( a1[25] )
  {
    while ( 1 )
    {
      v8 = (__int64 (__fastcall *)(_DWORD *, unsigned int **, _DWORD *))*((_QWORD *)v7 + 2);
      if ( v8 )
      {
        if ( *v7 == a1[56] )
        {
          if ( v8 == MiImageCfgRvaIteratorNext )
          {
            v9 = v7[8];
            v10 = 0;
            v11 = 0;
            if ( !v9 )
              goto LABEL_19;
            v12 = (unsigned int)a1[21];
            v13 = (unsigned int *)*((_QWORD *)v7 + 3);
            while ( 2 )
            {
              v14 = a1[9];
              v15 = 0;
              v16 = a1[8];
              v7[1] = 0;
              v17 = *v13;
              if ( *v13 <= v11 || v17 >= v16 )
              {
                dword_14036C018 = 14;
                goto LABEL_19;
              }
              v18 = 1;
              if ( v14 )
              {
                v18 = (v14 & 1) == 0;
                if ( (v14 & 2) != 0 )
                  v18 |= 2u;
              }
              if ( (unsigned int)v12 <= 4 )
              {
                v19 = 0;
LABEL_13:
                v7[1] = 1;
              }
              else
              {
                v15 = *((_BYTE *)v13 + 4);
                v19 = (v15 & (unsigned __int8)v18) != 0;
                if ( (v15 & (unsigned __int8)v18) == 0 )
                  goto LABEL_13;
              }
              if ( (v15 & 2) != 0 )
                v7[1] |= 0x10u;
              v13 = (unsigned int *)((char *)v13 + v12);
              --v9;
              if ( !v19 )
              {
                v10 = v17;
LABEL_18:
                v7[8] = v9;
                *((_QWORD *)v7 + 3) = v13;
                goto LABEL_19;
              }
              v11 = v17;
              if ( !v9 )
                goto LABEL_18;
              continue;
            }
          }
          v10 = (*((__int64 (__fastcall **)(_DWORD *, unsigned int *, unsigned int *))v7 + 2))(a1, v7 + 6, v7 + 1);
LABEL_19:
          *v7 = v10;
        }
        if ( *v7 )
        {
          if ( v5 )
          {
            if ( v5 >= *v7 )
              v5 = *v7;
          }
          else
          {
            v5 = *v7;
          }
        }
      }
      ++v4;
      v7 += 10;
      if ( v4 >= a1[25] )
      {
        a2 = v26;
        break;
      }
    }
  }
  if ( a2 && v5 )
  {
    v20 = a1[25];
    v21 = 0;
    if ( v20 )
    {
      v22 = v20;
      do
      {
        if ( *v6 == v5 )
          v21 |= v6[1];
        v6 += 10;
        --v22;
      }
      while ( v22 );
    }
    v23 = 0;
    if ( v20 )
    {
      v24 = a1 + 22;
      do
      {
        if ( (v21 & *v24) != 0 )
          v3 |= 1 << v23;
        ++v23;
        ++v24;
      }
      while ( v23 < v20 );
      a2 = v26;
    }
    *a2 = v3;
  }
  result = v5;
  a1[56] = v5;
  return result;
}
