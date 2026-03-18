/*
 * XREFs of MiImageRvaRawEnumNext @ 0x1404D4070
 * Callers:
 *     RtlpCompressRvaList @ 0x1404D3E70 (RtlpCompressRvaList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiImageRvaRawEnumNext(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // rax
  int v4; // ebp
  unsigned int v5; // esi
  unsigned int v6; // r14d
  _DWORD *v7; // r15
  unsigned int *v8; // rbx
  __int64 (__fastcall *v9)(); // r9
  unsigned int v10; // ecx
  unsigned int v11; // r11d
  unsigned int v12; // eax
  __int64 v13; // r13
  unsigned int *v14; // rdx
  int v15; // r10d
  char v16; // r12
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  char v19; // r8
  int v20; // eax
  bool v21; // r8
  unsigned int v22; // r8d
  int v23; // r10d
  __int64 v24; // rax
  unsigned int v25; // ecx
  _DWORD *v26; // r9
  __int64 result; // rax

  v2 = a2;
  if ( !a1[56] )
    return 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = a1 + 26;
  v8 = a1 + 26;
  if ( a1[25] )
  {
    while ( 1 )
    {
      v9 = (__int64 (__fastcall *)())*((_QWORD *)v8 + 2);
      if ( v9 )
      {
        if ( *v8 == a1[56] )
        {
          if ( v9 == MiImageCfgRvaIteratorNext )
          {
            v10 = v8[8];
            v11 = 0;
            v12 = 0;
            if ( !v10 )
              goto LABEL_19;
            v13 = (unsigned int)a1[21];
            v14 = (unsigned int *)*((_QWORD *)v8 + 3);
            while ( 2 )
            {
              v15 = a1[9];
              v16 = 0;
              v17 = a1[8];
              v8[1] = 0;
              v18 = *v14;
              if ( *v14 <= v12 || v18 >= v17 )
              {
                dword_140388338 = 14;
                goto LABEL_19;
              }
              v19 = 1;
              if ( v15 )
              {
                v19 = (v15 & 1) == 0;
                if ( (v15 & 2) != 0 )
                  v19 |= 2u;
              }
              if ( (unsigned int)v13 <= 4 )
              {
                v21 = 0;
LABEL_13:
                v8[1] = 1;
              }
              else
              {
                v16 = *((_BYTE *)v14 + 4);
                v20 = (unsigned __int8)(v19 & v16);
                v21 = v20 != 0;
                if ( !v20 )
                  goto LABEL_13;
              }
              if ( (v16 & 2) != 0 )
                v8[1] |= 4u;
              v14 = (unsigned int *)((char *)v14 + v13);
              --v10;
              if ( !v21 )
              {
                v11 = v18;
LABEL_18:
                v8[8] = v10;
                *((_QWORD *)v8 + 3) = v14;
                goto LABEL_19;
              }
              v12 = v18;
              if ( !v10 )
                goto LABEL_18;
              continue;
            }
          }
          v11 = (*((__int64 (__fastcall **)(_DWORD *, unsigned int *, unsigned int *))v8 + 2))(a1, v8 + 6, v8 + 1);
LABEL_19:
          *v8 = v11;
        }
        if ( *v8 )
        {
          if ( v6 )
          {
            if ( v6 >= *v8 )
              v6 = *v8;
          }
          else
          {
            v6 = *v8;
          }
        }
      }
      ++v5;
      v8 += 10;
      if ( v5 >= a1[25] )
      {
        v2 = a2;
        break;
      }
    }
  }
  if ( v2 && v6 )
  {
    v22 = a1[25];
    v23 = 0;
    if ( v22 )
    {
      v24 = v22;
      do
      {
        if ( *v7 == v6 )
          v23 |= v7[1];
        v7 += 10;
        --v24;
      }
      while ( v24 );
      v2 = a2;
    }
    v25 = 0;
    if ( v22 )
    {
      v26 = a1 + 22;
      do
      {
        if ( (v23 & *v26) != 0 )
          v4 |= 1 << v25;
        ++v25;
        ++v26;
      }
      while ( v25 < v22 );
    }
    *v2 = v4;
  }
  result = v6;
  a1[56] = v6;
  return result;
}
