/*
 * XREFs of MiGetPteFromCopyList @ 0x14002C478
 * Callers:
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiScrubPage @ 0x140226824 (MiScrubPage.c)
 *     MiCopyDirectMapHeader @ 0x1406B74BC (MiCopyDirectMapHeader.c)
 *     MiAddPagesToEnclave @ 0x1406BA74C (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

_QWORD *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  int ProtectionPfnCompatible; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+24h] [rbp-F4h]
  int v18; // [rsp+28h] [rbp-F0h]
  int v19; // [rsp+2Ch] [rbp-ECh]
  __int64 v20; // [rsp+30h] [rbp-E8h]
  __int64 v21; // [rsp+38h] [rbp-E0h]

  v4 = *a1;
  v7 = (a3 != -1) + 1;
  if ( v4 + v7 > a1[1] )
  {
    v8 = *((_QWORD *)a1 + 2);
    v19 = 0;
    v16 = 0;
    v17 = 0;
    v20 = 0LL;
    v21 = 0LL;
    v18 = 20;
    MiInsertTbFlushEntry(&v16, v8 << 25 >> 16, v4, 0LL);
    MiFlushTbList(&v16);
    *a1 = 0;
  }
  v9 = *a1;
  v10 = (_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v9);
  *a1 = v9 + v7;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, 48 * a2 - 0x58000000000LL);
  *v10 = MiMakeValidPte(v10, a2, ProtectionPfnCompatible | 0xA0000000);
  if ( (unsigned int)MiPteInShadowRange(v10) )
    MiWritePteShadow(v12);
  if ( a3 != -1 )
  {
    v13 = MiMakeProtectionPfnCompatible(1LL, 48 * a3 - 0x58000000000LL);
    v10[1] = MiMakeValidPte(v10, a3, v13 | 0x20000000u);
    if ( (unsigned int)MiPteInShadowRange(v10 + 1) )
      MiWritePteShadow(v14);
  }
  return v10;
}
