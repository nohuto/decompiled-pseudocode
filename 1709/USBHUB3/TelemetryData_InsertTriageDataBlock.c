/*
 * XREFs of TelemetryData_InsertTriageDataBlock @ 0x1C0035F4C
 * Callers:
 *     WER_StoreDeviceContext @ 0x1C00349CC (WER_StoreDeviceContext.c)
 *     WER_CreateReport @ 0x1C0034CB0 (WER_CreateReport.c)
 * Callees:
 *     memmove @ 0x1C0038E80 (memmove.c)
 */

__int64 __fastcall TelemetryData_InsertTriageDataBlock(__int64 *a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rbp
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // r9d
  unsigned int v10; // esi
  int v11; // r11d
  _DWORD *i; // r10
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  __int64 j; // rax
  unsigned int v16; // esi

  v3 = 0;
  v4 = a3;
  if ( !a2 || !a3 )
    return 3221225485LL;
  v6 = *a1;
  if ( (*(_DWORD *)(*a1 + 4152) & 0x800) != 0 )
  {
    v7 = *(_DWORD *)(v6 + 8316);
    if ( v7 )
    {
      v8 = *(unsigned int *)(v6 + 8312);
      if ( v8 + 16 * (unsigned __int64)v7 <= 0x40000 )
      {
        v9 = 0x40000;
        v10 = 0;
        v11 = 0;
        for ( i = (_DWORD *)(v8 + v6 + 12); ; i += 4 )
        {
          v13 = *(i - 1);
          if ( v13 != ((v13 + 7) & 0xFFFFFFF8) )
            break;
          if ( v13 < v9 )
            v9 = *(i - 1);
          if ( ((*i + v13 + 7) & 0xFFFFFFF8) > v10 )
            v10 = (*i + v13 + 7) & 0xFFFFFFF8;
          if ( ++v11 >= v7 )
          {
            if ( 262140 - v10 >= 0x40000 || (((_DWORD)v4 + 7) & 0xFFFFFFF8) + 16 > 262140 - v10 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              memmove((void *)(v6 + v9 + 16), (const void *)(v6 + v9), v10 - v9);
              v14 = 0;
              for ( j = v6 + *(unsigned int *)(v6 + 8312); v14 < *(_DWORD *)(v6 + 8316); j += 16LL )
              {
                *(_DWORD *)(j + 8) += 16;
                ++v14;
              }
              ++*(_DWORD *)(v6 + 8316);
              v16 = v10 + 16;
              *(_QWORD *)j = a2;
              *(_DWORD *)(j + 8) = v16;
              *(_DWORD *)(j + 12) = v4;
              memmove((void *)(v6 + v16), a2, v4);
            }
            return v3;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
