/*
 * XREFs of DpiSystemDisplayWrite @ 0x1C002E5F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiSystemDisplayWrite(__int64 a1, int *a2, char a3)
{
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // r11d
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // ecx

  if ( byte_1C0060B50 )
    return 0LL;
  if ( a3 )
    return 3221225659LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v5 = *(_DWORD *)(a1 + 8);
      if ( ((v5 - 1) & 0xFFFFFFFB) == 0 && (v5 != 1 || qword_1C0060B60 == *(_QWORD *)(qword_1C0060A88 + 64)) )
      {
        v6 = *a2;
        if ( *a2 < (unsigned int)dword_1C0060B70 )
        {
          v7 = a2[1];
          if ( v7 < dword_1C0060B74 )
          {
            v8 = *(_DWORD *)(a1 + 4);
            v9 = *(_DWORD *)a1;
            v10 = v8;
            if ( v8 > dword_1C0060B70 - v6 )
              v10 = dword_1C0060B70 - v6;
            if ( v9 > dword_1C0060B74 - v7 )
              v9 = dword_1C0060B74 - v7;
            if ( v5 == 1 )
              v11 = (v8 + 1) >> 1;
            else
              v11 = 4 * v8;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, int, unsigned int))(qword_1C0060B58 + 752))(
              *(_QWORD *)(qword_1C0060B60 + 48),
              *(_QWORD *)(a1 + 16),
              v10,
              v9,
              v11,
              v6,
              v7);
            return 0LL;
          }
        }
      }
    }
  }
  return 3221225485LL;
}
