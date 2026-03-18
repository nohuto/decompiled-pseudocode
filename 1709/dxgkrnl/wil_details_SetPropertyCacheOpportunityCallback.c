/*
 * XREFs of wil_details_SetPropertyCacheOpportunityCallback @ 0x1C0036C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyCacheOpportunityCallback(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rax
  int v4; // edx
  int v6; // r11d
  int v7; // ecx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v2 = *(_DWORD **)a2;
  v4 = 0;
  v2[1] = 0;
  **(_DWORD **)a2 = ((*(_DWORD *)a1 >> 3) & 1) == 0;
  *(_DWORD *)a1 |= 8u;
  v6 = a2[2];
  if ( *(_DWORD *)a1 >> 31 != (v6 == 5) )
  {
    if ( (*(_DWORD *)a1 & 0x7F000000) != 0 )
    {
      v7 = 5;
      if ( v6 != 1 )
        v7 = 1;
      *(_DWORD *)(*(_QWORD *)a2 + 8LL) = v7;
      *(_DWORD *)(*(_QWORD *)a2 + 4LL) = *(_BYTE *)(a1 + 3) & 0x7F;
      *(_DWORD *)a1 &= 0x80FFFFFF;
    }
    LOBYTE(v4) = a2[2] == 5;
    *(_DWORD *)a1 = *(_DWORD *)a1 & 0x7FFFFFFF | (v4 << 31);
  }
  v8 = HIBYTE(*(_DWORD *)a1) & 0x7F;
  v9 = *((_QWORD *)a2 + 2) + v8;
  if ( v9 > 0x7F || v9 < v8 )
  {
    v9 = *((_QWORD *)a2 + 2);
    *(_DWORD *)(*(_QWORD *)a2 + 8LL) = a2[2];
    *(_DWORD *)(*(_QWORD *)a2 + 4LL) = *(_BYTE *)(a1 + 3) & 0x7F;
  }
  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ ((_DWORD)v9 << 24)) & 0x7F000000;
  return 1LL;
}
