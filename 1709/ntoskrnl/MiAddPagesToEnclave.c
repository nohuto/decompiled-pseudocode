/*
 * XREFs of MiAddPagesToEnclave @ 0x1406E74B8
 * Callers:
 *     MiCommitEnclavePages @ 0x1406E7A90 (MiCommitEnclavePages.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiGetPteFromCopyList @ 0x1400CEEDC (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x140123E80 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140125EF4 (MiReleasePteCopyList.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiInitializeEnclavePfn @ 0x1402298F0 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x140229A18 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x140229AD8 (MiReturnEnclavePage.c)
 *     KeAddEnclavePage @ 0x1406D7E00 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x1406E8908 (MiGetPageForEnclave.c)
 */

__int64 __fastcall MiAddPagesToEnclave(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v8; // rsi
  __int64 result; // rax
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v15; // esi
  unsigned __int8 v16; // cl
  __int64 v17; // rsi
  __int64 v18; // r15
  __int64 PageForEnclave; // r12
  unsigned __int64 v20; // r9
  unsigned __int64 PteFromCopyList; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  unsigned int v23[20]; // [rsp+48h] [rbp-50h] BYREF
  char v24; // [rsp+A0h] [rbp+8h]
  int v26; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v5 = *(_QWORD *)(a1 + 88);
  v6 = a3;
  v8 = ((__int64)(a4 - a3) >> 3) + 1;
  if ( v5 >= v8 || (result = MiReserveEnclavePages(a1, a2, v8 - v5), (int)result >= 0) )
  {
    v10 = (_QWORD *)MiReservePtes((__int64)&qword_140389360, 1uLL, a3);
    v11 = (unsigned __int64)v10;
    if ( v10 )
    {
      *v10 = MiMakeValidPte((unsigned __int64)v10, qword_1403891A0, 536870913);
      if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      if ( v8 > 0x14 )
        v8 = 20LL;
      MiCreatePteCopyList(v8 + 1, v8 + 1, (__int64)v23);
      if ( v23[1] )
      {
        LOBYTE(v14) = 2;
        v16 = (a5 >> 1) & 2 | 0x35;
        if ( (a5 & 2) == 0 )
          v16 = (a5 >> 1) & 2 | 0x31;
        v12 = v16;
        v13 = v16 | 0x40u;
        if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
          v13 = v16;
        v17 = (__int64)(*(_QWORD *)(a1 + 72) << 25) >> 16;
        v18 = (__int64)(v6 << 25) >> 16;
        v22 = v17;
        if ( v6 > v27 )
        {
LABEL_26:
          v15 = 0;
        }
        else
        {
          v24 = v13;
          while ( 1 )
          {
            PageForEnclave = MiGetPageForEnclave(a1, a2);
            PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v23, PageForEnclave, -1LL);
            v15 = KeAddEnclavePage(
                    v17,
                    (__int64)(v11 << 25) >> 16,
                    (__int64)(PteFromCopyList << 25) >> 16,
                    v18,
                    v24,
                    &v26);
            *(_QWORD *)PteFromCopyList = 0LL;
            if ( PteFromCopyList >= 0xFFFFF6FB7DBED000uLL && PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow();
            if ( v15 < 0 )
              break;
            MiInitializeEnclavePfn(PageForEnclave, v6, a5);
            *(_QWORD *)v6 = MiMakeValidPte(v6, PageForEnclave, a5 | 0x80000000);
            if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow();
            v17 = v22;
            v18 += 4096LL;
            v6 += 8LL;
            if ( v6 > v27 )
              goto LABEL_26;
          }
          MiReturnEnclavePage(PageForEnclave);
          if ( v15 == -1073740657 )
            v15 = -1073741823;
        }
      }
      else
      {
        v15 = -1073741670;
      }
      MiReleasePteCopyList((__int64)v23, v12, v13, v14);
      *(_QWORD *)v11 = 0LL;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      MiReleasePtes((__int64)&qword_140389360, v11, 1u, v20);
      return (unsigned int)v15;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
