/*
 * XREFs of WheapInsertTriageDataBlock @ 0x140723F2C
 * Callers:
 *     WheapCreateLiveTriageDump @ 0x140723E24 (WheapCreateLiveTriageDump.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall WheapInsertTriageDataBlock(_DWORD *a1, const void *a2, unsigned int a3)
{
  size_t v4; // rbp
  unsigned int v6; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // esi
  unsigned int v11; // r11d
  unsigned int *v12; // r10
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  char *i; // rax
  unsigned int v17; // esi

  v4 = a3;
  if ( (a1[1038] & 0x800) != 0 )
  {
    v6 = a1[2079];
    v7 = 0;
    if ( v6 )
    {
      v8 = (unsigned int)a1[2078];
      if ( v8 + 16 * (unsigned __int64)v6 <= 0x40000 )
      {
        v9 = 0x40000;
        v10 = 0;
        v11 = 0;
        v12 = (_DWORD *)((char *)a1 + v8 + 8);
        while ( 1 )
        {
          v13 = *v12;
          if ( *v12 != ((*v12 + 7) & 0xFFFFFFF8) )
            break;
          v14 = (v12[1] + v13 + 7) & 0xFFFFFFF8;
          if ( v13 < v9 )
            v9 = *v12;
          if ( v14 <= v10 )
            v14 = v10;
          v12 += 4;
          ++v11;
          v10 = v14;
          if ( v11 >= v6 )
          {
            if ( 262140 - v14 >= 0x40000 || (((_DWORD)v4 + 7) & 0xFFFFFFF8) + 16 > 262140 - v14 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              memmove((char *)a1 + v9 + 16, (char *)a1 + v9, v14 - v9);
              v15 = 0;
              for ( i = (char *)a1 + (unsigned int)a1[2078]; v15 < a1[2079]; i += 16 )
              {
                *((_DWORD *)i + 2) += 16;
                ++v15;
              }
              ++a1[2079];
              v17 = v10 + 16;
              *(_QWORD *)i = a2;
              *((_DWORD *)i + 2) = v17;
              *((_DWORD *)i + 3) = v4;
              memmove((char *)a1 + v17, a2, v4);
            }
            return v7;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
