/*
 * XREFs of bGetTablePointers @ 0x1C022881C
 * Callers:
 *     bVerifyTTF @ 0x1C022A460 (bVerifyTTF.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     bGetTagIndex @ 0x1C0228954 (bGetTagIndex.c)
 */

__int64 __fastcall bGetTablePointers(unsigned __int64 a1, unsigned __int32 a2, unsigned __int64 a3, void *a4)
{
  unsigned int *v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int32 v10; // r11d
  unsigned int v11; // r10d
  int v12; // r10d
  int v13; // r11d
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ecx
  __int64 result; // rax
  int v18; // [rsp+40h] [rbp+8h] BYREF
  int v19; // [rsp+50h] [rbp+18h] BYREF

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
            if ( (unsigned int)bGetTagIndex(_byteswap_ulong(*v7), &v18, &v19) )
            {
              if ( v19 )
              {
                v14 = v18;
                *((_DWORD *)a4 + 2 * v18) = v13;
                *((_DWORD *)a4 + 2 * v14 + 1) = v12;
              }
              else
              {
                v15 = v18;
                *((_DWORD *)a4 + 2 * v18 + 16) = v13;
                *((_DWORD *)a4 + 2 * v15 + 17) = v12;
                *((_DWORD *)a4 + 2 * v15 + 16) &= -(v12 != 0);
              }
            }
            v7 += 4;
          }
          v16 = 0;
          result = 1LL;
          while ( *((_DWORD *)a4 + 2 * v16) && *((_DWORD *)a4 + 2 * v16 + 1) )
          {
            if ( ++v16 >= 8 )
              return result;
          }
        }
      }
    }
  }
  return 0LL;
}
