/*
 * XREFs of sub_180020B90 @ 0x180020B90
 * Callers:
 *     sub_18001EB74 @ 0x18001EB74 (sub_18001EB74.c)
 *     sub_18001EFB4 @ 0x18001EFB4 (sub_18001EFB4.c)
 *     sub_180020B20 @ 0x180020B20 (sub_180020B20.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     sub_1800FFA00 @ 0x1800FFA00 (sub_1800FFA00.c)
 */

__int64 __fastcall sub_180020B90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // r10
  __int64 v8; // rdi
  int v9; // esi
  unsigned int v10; // edi
  char *v11; // rcx
  unsigned __int64 v12; // rdx
  char v13; // al
  char v14; // al
  _DWORD *HotpatchInformation; // rcx
  __int64 v16; // rcx
  unsigned __int64 v18[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+20h]

  v4 = 0LL;
  v6 = a3 + 32LL * a4;
  v8 = 0LL;
  v9 = 0;
  if ( a3 != v6 )
  {
    do
    {
      if ( (*(_BYTE *)(a3 + 24) & 2) != 0 )
      {
        v8 = a3;
        if ( !v4 )
          v4 = a3;
        ++v9;
      }
      a3 += 32LL;
    }
    while ( a3 != v6 );
    if ( v4 )
      v10 = ((__int64)(v8 - v4) >> 5) + 1;
    else
      v10 = v20;
    if ( v9 )
    {
      v19 = v10 << 12;
      v18[0] = (v4 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v4 - (v4 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
      ZwFreeVirtualMemory(-1LL, v18, &v19, 0x4000LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), -v9);
      if ( v4 < v4 + 32LL * v10 )
      {
        v11 = (char *)(v4 + 24);
        v12 = ((32 * (unsigned __int64)v10 - 1) >> 5) + 1;
        do
        {
          v13 = *v11;
          if ( v9 < 0 )
            v14 = v13 | 2;
          else
            v14 = v13 & 0xFD;
          *v11 = v14;
          v11 += 32;
          --v12;
        }
        while ( v12 );
      }
      *(_BYTE *)(a2 + 26) = ~(~*(_BYTE *)(a2 + 26) - v9);
      HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
      if ( HotpatchInformation && *HotpatchInformation )
        v16 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v16 = 2147353472LL;
      if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FFA00(a1, v18[0], v19, 13LL);
    }
  }
  return (unsigned int)v9;
}
