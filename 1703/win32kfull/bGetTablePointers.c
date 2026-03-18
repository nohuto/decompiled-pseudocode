/*
 * XREFs of bGetTablePointers @ 0x1C0227298
 * Callers:
 *     bVerifyTTF @ 0x1C0228EE8 (bVerifyTTF.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     bGetTagIndex @ 0x1C02273C8 (bGetTagIndex.c)
 */

__int64 __fastcall bGetTablePointers(unsigned __int64 a1, unsigned __int32 a2, unsigned __int64 a3, void *a4)
{
  unsigned int *v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int32 v10; // r10d
  unsigned int v11; // r11d
  int v12; // r10d
  int v13; // r11d
  __int64 v14; // rax
  int v15; // ecx
  __int64 result; // rax
  int v17; // [rsp+40h] [rbp+8h] BYREF
  int v18; // [rsp+50h] [rbp+18h] BYREF

  if ( a1 <= a3 )
  {
    v7 = (unsigned int *)(a3 + 12);
    if ( a3 < a3 + 12 )
    {
      v8 = a1 + a2;
      if ( (unsigned __int64)v7 <= v8 && ((_byteswap_ulong(*(_DWORD *)a3) - 0x10000) & 0xFFFEFFFF) == 0 )
      {
        memset(a4, 0, 0xA0uLL);
        v9 = 16LL * (__int16)__ROR2__(*(_WORD *)(a3 + 4), 8) + a3 + 12;
        if ( (unsigned __int64)v7 <= v9 && v9 <= v8 )
        {
          while ( (unsigned __int64)v7 < v9 )
          {
            v10 = _byteswap_ulong(v7[2]);
            v11 = _byteswap_ulong(v7[3]);
            if ( v10 > a2 || a2 - v10 < v11 )
              return 0LL;
            if ( (unsigned int)bGetTagIndex(_byteswap_ulong(*v7), &v17, &v18) )
            {
              v14 = v17;
              if ( v18 )
              {
                *((_DWORD *)a4 + 2 * v17) = v12;
                *((_DWORD *)a4 + 2 * v14 + 1) = v13;
              }
              else
              {
                *((_DWORD *)a4 + 2 * v17 + 16) = v12;
                *((_DWORD *)a4 + 2 * v14 + 17) = v13;
                if ( !v13 )
                  *((_DWORD *)a4 + 2 * v14 + 16) = 0;
              }
            }
            v7 += 4;
          }
          v15 = 0;
          result = 1LL;
          while ( *((_DWORD *)a4 + 2 * v15) && *((_DWORD *)a4 + 2 * v15 + 1) )
          {
            if ( ++v15 >= 8 )
              return result;
          }
        }
      }
    }
  }
  return 0LL;
}
