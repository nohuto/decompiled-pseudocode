/*
 * XREFs of MiGetPteFromCopyList @ 0x1400CEEDC
 * Callers:
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiCopyDirectMapHeader @ 0x1406E40C0 (MiCopyDirectMapHeader.c)
 *     MiAddPagesToEnclave @ 0x1406E74B8 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1406EB4D0 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

unsigned __int64 *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  int v7; // ebp
  __int64 v8; // rdx
  _KPROCESS *v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 *v11; // rbx
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  int v18; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v19; // [rsp+24h] [rbp-F4h]
  __int64 v20; // [rsp+28h] [rbp-F0h]
  __int64 v21; // [rsp+30h] [rbp-E8h]
  __int64 v22; // [rsp+38h] [rbp-E0h]

  v4 = *a1;
  v7 = (a3 != -1) + 1;
  if ( v4 + v7 > a1[1] )
  {
    v8 = *((_QWORD *)a1 + 2) << 25;
    v20 = 20LL;
    v18 = 0;
    v19 = 0;
    v21 = 0LL;
    v22 = 0LL;
    MiInsertTbFlushEntry(&v18, v8 >> 16, v4, 0);
    MiFlushTbList((__int64)&v18, v9);
    *a1 = 0;
  }
  v10 = *a1;
  v11 = (unsigned __int64 *)(*((_QWORD *)a1 + 2) + 8 * v10);
  *a1 = v10 + v7;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a2 - 0x58000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v11, a2, ProtectionPfnCompatible | 0xA0000000);
  *v11 = ValidPte;
  if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v11, ValidPte);
  if ( a3 != -1 )
  {
    v14 = MiMakeProtectionPfnCompatible(1, 48 * a3 - 0x58000000000LL);
    v15 = MiMakeValidPte((unsigned __int64)v11, a3, v14 | 0x20000000u);
    v16 = (unsigned __int64)(v11 + 1);
    v11[1] = v15;
    if ( (unsigned __int64)(v11 + 1) >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v16, v15);
  }
  return v11;
}
