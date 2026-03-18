/*
 * XREFs of MiGetPteFromCopyList @ 0x140002458
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiCopyDirectMapHeader @ 0x14074E4AC (MiCopyDirectMapHeader.c)
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

_QWORD *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  int v7; // r14d
  _QWORD *v8; // rbx
  int ProtectionPfnCompatible; // eax
  int v10; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v15; // [rsp+24h] [rbp-F4h]
  int v16; // [rsp+28h] [rbp-F0h]
  int v17; // [rsp+2Ch] [rbp-ECh]
  __int64 v18; // [rsp+30h] [rbp-E8h]
  __int64 v19; // [rsp+38h] [rbp-E0h]

  v4 = *a1;
  v7 = (a3 != -1) + 1;
  if ( (int)v4 + v7 > a1[1] )
  {
    v17 = 0;
    v12 = v4;
    v13 = *((_QWORD *)a1 + 2);
    v14 = 0;
    v15 = 0;
    v18 = 0LL;
    v19 = 0LL;
    v16 = 20;
    MiInsertTbFlushEntry(&v14, v13 << 25 >> 16, v12, 0LL);
    MiFlushTbList(&v14);
    *a1 = 0;
    v4 = 0LL;
  }
  v8 = (_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v4);
  *a1 = v7 + v4;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, 48 * a2 - 0x58000000000LL);
  *v8 = MiMakeValidPte(v8, a2, ProtectionPfnCompatible | 0xA0000000);
  if ( (unsigned int)MiPteInShadowRange(v8) )
    MiWritePteShadow();
  if ( a3 != -1 )
  {
    v10 = MiMakeProtectionPfnCompatible(1LL, 48 * a3 - 0x58000000000LL);
    v8[1] = MiMakeValidPte(v8, a3, v10 | 0x20000000u);
    if ( (unsigned int)MiPteInShadowRange(v8 + 1) )
      MiWritePteShadow();
  }
  return v8;
}
