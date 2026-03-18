/*
 * XREFs of MiFindClearVadBitsAligned @ 0x140585048
 * Callers:
 *     MiFindEmptyAddressRange @ 0x1404D06B0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindClearVadBitsAligned(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  unsigned int v8; // r11d
  unsigned int v9; // r8d
  __int64 v10; // r9
  _DWORD *v11; // rcx
  unsigned int i; // eax

  v4 = *(_DWORD *)a1;
  v5 = -1;
  v6 = a2 >> 16;
  if ( a3 < *(_DWORD *)a1 )
  {
    v8 = v4 - a3;
    v9 = v6;
    if ( a4 > (unsigned int)v6 && a4 < v4 )
      v9 = ~(v6 - 1) & (v6 + a4 - 1);
    if ( v9 <= v8 )
    {
      v10 = *(_QWORD *)(a1 + 8);
      while ( 1 )
      {
        v11 = (_DWORD *)(v10 + 4 * ((unsigned __int64)v9 >> 5));
        for ( i = 0; i < a3; ++v11 )
        {
          if ( *v11 )
            break;
          i += 32;
        }
        if ( i == a3 )
          break;
        v9 = v6 + (~(v6 - 1) & (i + v9));
        if ( v9 > v8 )
          return v5;
      }
      return v9;
    }
  }
  return v5;
}
