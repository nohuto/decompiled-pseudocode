/*
 * XREFs of MiAddPagesToEnclave @ 0x1406BA74C
 * Callers:
 *     MiCommitEnclavePages @ 0x1406BAC74 (MiCommitEnclavePages.c)
 * Callees:
 *     MiCreatePteCopyList @ 0x14002A77C (MiCreatePteCopyList.c)
 *     MiGetPteFromCopyList @ 0x14002C478 (MiGetPteFromCopyList.c)
 *     MiReleasePteCopyList @ 0x14002EDD4 (MiReleasePteCopyList.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiInitializeEnclavePfn @ 0x14021CAB0 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x14021CB50 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x14021CC10 (MiReturnEnclavePage.c)
 *     KeAddEnclavePage @ 0x1406ACB18 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x1406BBA78 (MiGetPageForEnclave.c)
 */

__int64 __fastcall MiAddPagesToEnclave(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  _QWORD *v10; // rax
  unsigned __int64 v11; // rsi
  int v12; // edi
  char v13; // cl
  char v14; // r8
  __int64 v15; // rdi
  __int64 v16; // r15
  int v17; // eax
  unsigned __int64 v18; // rcx
  int v19; // [rsp+30h] [rbp-78h] BYREF
  __int64 PageForEnclave; // [rsp+38h] [rbp-70h]
  unsigned __int64 PteFromCopyList; // [rsp+40h] [rbp-68h]
  __int64 v22; // [rsp+48h] [rbp-60h]
  unsigned int v23[22]; // [rsp+50h] [rbp-58h] BYREF
  char v24; // [rsp+B0h] [rbp+8h]
  BOOL v26; // [rsp+C0h] [rbp+18h]

  v5 = *(_QWORD *)(a1 + 80);
  v6 = a3;
  v8 = ((__int64)(a4 - a3) >> 3) + 1;
  if ( v5 >= v8 || (result = MiReserveEnclavePages(a1, a2, v8 - v5), (int)result >= 0) )
  {
    v10 = (_QWORD *)MiReservePtes((__int64)&qword_14036D0A0, 1uLL, a3);
    v11 = (unsigned __int64)v10;
    if ( v10 )
    {
      *v10 = MiMakeValidPte((unsigned __int64)v10, qword_14036CEE0, 536870913);
      v26 = MiPteInShadowRange(v11);
      if ( v26 )
        MiWritePteShadow();
      if ( v8 > 0x14 )
        v8 = 20LL;
      MiCreatePteCopyList(v8 + 1, v8 + 1, (__int64)v23);
      if ( v23[1] )
      {
        v13 = (a5 >> 1) & 2 | 0x35;
        if ( (a5 & 2) == 0 )
          v13 = (a5 >> 1) & 2 | 0x31;
        v14 = v13 | 0x40;
        if ( (*(_DWORD *)(a1 + 88) & 1) == 0 )
          v14 = v13;
        v15 = (__int64)(*(_QWORD *)(a1 + 64) << 25) >> 16;
        v16 = (__int64)(v6 << 25) >> 16;
        v22 = v15;
        if ( v6 > a4 )
        {
LABEL_23:
          v12 = 0;
        }
        else
        {
          v24 = v14;
          while ( 1 )
          {
            PageForEnclave = MiGetPageForEnclave(a1, a2);
            PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v23, PageForEnclave, -1LL);
            v17 = KeAddEnclavePage(
                    v15,
                    (__int64)(v11 << 25) >> 16,
                    (__int64)(PteFromCopyList << 25) >> 16,
                    v16,
                    v24,
                    &v19);
            v18 = PteFromCopyList;
            v12 = v17;
            *(_QWORD *)PteFromCopyList = 0LL;
            if ( MiPteInShadowRange(v18) )
              MiWritePteShadow();
            if ( v12 < 0 )
              break;
            MiInitializeEnclavePfn(PageForEnclave, v6, a5);
            *(_QWORD *)v6 = MiMakeValidPte(v6, PageForEnclave, a5 | 0x80000000);
            if ( MiPteInShadowRange(v6) )
              MiWritePteShadow();
            v15 = v22;
            v16 += 4096LL;
            v6 += 8LL;
            if ( v6 > a4 )
              goto LABEL_23;
          }
          MiReturnEnclavePage(PageForEnclave);
          if ( v12 == -1073740657 )
            v12 = -1073741823;
        }
      }
      else
      {
        v12 = -1073741670;
      }
      MiReleasePteCopyList((__int64)v23);
      *(_QWORD *)v11 = 0LL;
      if ( v26 )
        MiWritePteShadow();
      MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v11, 1u);
      return (unsigned int)v12;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
