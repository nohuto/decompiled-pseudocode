/*
 * XREFs of MxCreatePfns @ 0x140801D90
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x140800028 (MiInitializePfnsForValidMappings.c)
 *     MxCreatePfns @ 0x140801D90 (MxCreatePfns.c)
 * Callees:
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400B7220 (MiPageToChannel.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MxCreatePfns @ 0x140801D90 (MxCreatePfns.c)
 *     MiIsRegularMemory @ 0x140802150 (MiIsRegularMemory.c)
 *     MxCreatePfn @ 0x1408021CC (MxCreatePfn.c)
 */

void __fastcall MxCreatePfns(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r11
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-38h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]
  unsigned __int64 v23; // [rsp+70h] [rbp+8h]

  if ( a1 <= a2 )
  {
    v23 = a1;
    v4 = a3;
    v5 = a1;
    do
    {
      v19 = MI_READ_PTE_LOCK_FREE(v5);
      if ( (v19 & 1) != 0 )
      {
        v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL;
        v20 = MI_READ_PTE_LOCK_FREE(v7 + ((v5 >> 9) & 0x7FFFFFFFF8LL));
        v8 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v20);
        v22 = v8;
        *(_QWORD *)(48 * v8 - 0x58000000000LL + 24) ^= (*(_QWORD *)(48 * v8 - 0x58000000000LL + 24) ^ (*(_QWORD *)(48 * v8 - 0x58000000000LL + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v4 )
        {
          if ( (v9 & 0x80u) == 0LL )
          {
            MxCreatePfn(v6, v5, v8, 0LL, v19);
            if ( v5 != 0xFFFFF6FB7DBEDF68uLL )
              MxCreatePfns((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, (unsigned int)(v4 - 1), a4);
          }
          else
          {
            v11 = v9 & 0xFFFFFFFFFFFFFFFBuLL;
            if ( (v11 & 0x42) != 0 )
              v11 |= 0x800uLL;
            v19 = ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int8)word_14036C2A8 << 8)) & 0x100 ^ v11;
            MiWriteValidPteNewProtection(v5);
            v13 = (__int64)(v5 << 25) >> 16;
            v21 = v13 + 4096;
            if ( v13 >= v13 + 4096 )
            {
              v4 = a3;
            }
            else
            {
              v14 = v21;
              v15 = 48 * v6 - 0x57FFFFFFFDELL;
              do
              {
                if ( (unsigned int)MiIsRegularMemory(v12, v6) )
                {
                  *(_QWORD *)(v15 - 34) = 0LL;
                  *(_QWORD *)(v15 - 26) = 0LL;
                  *(_QWORD *)(v15 - 18) = 0LL;
                  *(_QWORD *)(v15 - 10) = 0LL;
                  *(_QWORD *)(v15 - 2) = 0LL;
                  *(_QWORD *)(v15 + 6) = 0LL;
                  v16 = v22 & 0xFFFFFFFFFLL;
                  *(_QWORD *)(v15 - 26) = v13;
                  *(_QWORD *)(v15 + 6) ^= v16;
                  v17 = *(_QWORD *)(v15 - 10) ^ (*(_QWORD *)(v15 - 10) ^ (*(_QWORD *)(v15 - 10) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
                  *(_WORD *)(v15 - 2) = 1;
                  LOBYTE(v16) = *(_BYTE *)v15 & 0xFE;
                  *(_QWORD *)(v15 - 10) = v17;
                  *(_BYTE *)v15 = v16 | 6;
                  *(_BYTE *)v15 = *(_BYTE *)v15 & 0x3F | 0x40;
                  *(_QWORD *)(v15 - 18) = MiMakeDemandZeroPte(4);
                  *(_BYTE *)v15 |= 0x10u;
                  *(_QWORD *)(v15 + 6) = ((unsigned __int64)(unsigned int)MiPageToNode(v6, 0LL) << 58) | *(_QWORD *)(v15 + 6) & 0x3FFFFFFFFFFFFFFLL;
                  v18 = MiPageToChannel(v6);
                  v12 = a4;
                  *(_QWORD *)(v15 + 6) = *(_QWORD *)(v15 + 6) & 0xFFFFFFCFFFFFFFFFuLL | ((unsigned __int64)(v18 & 3) << 36) | 0x20000000000000LL;
                }
                ++v6;
                v15 += 48LL;
                v13 += 8LL;
              }
              while ( v13 < v14 );
              v5 = v23;
              v4 = a3;
            }
          }
        }
        else
        {
          MiWriteValidPteNewProtection(v5);
          if ( (unsigned int)MiIsRegularMemory(v10, v6) )
            MxCreatePfn(v6, v5, v8, 1LL, v19);
        }
      }
      v5 += 8LL;
      v23 = v5;
    }
    while ( v5 <= a2 );
  }
}
