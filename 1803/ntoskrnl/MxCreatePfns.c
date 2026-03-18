/*
 * XREFs of MxCreatePfns @ 0x14089B320
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x1408997A0 (MiInitializePfnsForValidMappings.c)
 *     MxCreatePfns @ 0x14089B320 (MxCreatePfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MxCreatePfns @ 0x14089B320 (MxCreatePfns.c)
 *     MxCreatePfn @ 0x14089B5E0 (MxCreatePfn.c)
 *     MiIsRegularMemory @ 0x14089B71C (MiIsRegularMemory.c)
 */

void __fastcall MxCreatePfns(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // r11
  unsigned __int64 v8; // rbp
  __int64 v9; // r9
  int v10; // r10d
  unsigned __int64 v11; // r9
  unsigned __int16 v12; // dx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int16 v16; // dx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  _QWORD v20[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp+8h]

  if ( a1 <= a2 )
  {
    v21 = a1;
    v4 = a4;
    v5 = a1;
    do
    {
      v20[0] = MI_READ_PTE_LOCK_FREE(v5);
      if ( (v20[0] & 1) != 0 )
      {
        v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v20) >> 12) & 0xFFFFFFFFFLL;
        v20[0] = MI_READ_PTE_LOCK_FREE(v7 + ((v5 >> 9) & 0x7FFFFFFFF8LL));
        v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v20) >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(48 * v8 - 0x58000000000LL + 24) ^= (*(_QWORD *)(48 * v8 - 0x58000000000LL + 24) ^ (*(_QWORD *)(48 * v8 - 0x58000000000LL + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v10 )
        {
          if ( (v9 & 0x80u) != 0LL )
          {
            v15 = v9 & 0xFFFFFFFFFFFFFFFBuLL;
            v16 = v15 | 0x800;
            if ( (v15 & 0x42) == 0 )
              v16 = v15;
            v17 = v15 | 0x800;
            v18 = ((unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8) ^ v16) & 0x100;
            if ( (v15 & 0x42) == 0 )
              v17 = v15;
            MiWriteValidPteNewProtection(v5, v17 ^ v18);
            v19 = (__int64)(v5 << 25) >> 16;
            v20[0] = v19 + 4096;
            if ( v19 >= v19 + 4096 )
            {
              v4 = a4;
            }
            else
            {
              do
              {
                if ( (unsigned int)MiIsRegularMemory(a4, v6) )
                  MxCreatePfn(v6, v19, v8, 1LL);
                ++v6;
                v19 += 8LL;
              }
              while ( v19 < v20[0] );
              v5 = v21;
              v4 = a4;
            }
          }
          else
          {
            MxCreatePfn(v6, v5, v8, 0LL);
            if ( v5 != 0xFFFFF6FB7DBEDF68uLL )
              MxCreatePfns((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, (unsigned int)(a3 - 1), v4);
          }
        }
        else
        {
          v11 = v9 & 0xFFFFFFFFFFFFFFFBuLL;
          v12 = v11 | 0x800;
          if ( (v11 & 0x42) == 0 )
            v12 = v11;
          v13 = v11 | 0x800;
          v14 = ((unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8) ^ v12) & 0x100;
          if ( (v11 & 0x42) == 0 )
            v13 = v11;
          MiWriteValidPteNewProtection(v5, v13 ^ v14);
          if ( (unsigned int)MiIsRegularMemory(v4, v6) )
            MxCreatePfn(v6, v5, v8, 1LL);
        }
      }
      v5 += 8LL;
      v21 = v5;
    }
    while ( v5 <= a2 );
  }
}
