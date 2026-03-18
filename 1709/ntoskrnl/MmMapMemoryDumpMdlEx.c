/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x14021B38C
 * Callers:
 *     MmMapMemoryDumpMdl @ 0x14021B350 (MmMapMemoryDumpMdl.c)
 *     PopGetNextTable @ 0x140241D08 (PopGetNextTable.c)
 *     IopLiveDumpBufferDumpData @ 0x14042AB24 (IopLiveDumpBufferDumpData.c)
 *     PopCreateDumpMdl @ 0x140432A08 (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x140432B24 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x1404335B0 (PopHiberCheckResume.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

void __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  __int64 v5; // r14
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // r15d
  __int64 v9; // rbp
  int ProtectionPfnCompatible; // eax
  _KPROCESS *v11; // rdx
  unsigned __int64 ValidPte; // r9
  unsigned __int64 v13; // r10
  __int64 PteShadow; // rax
  int v16; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+34h] [rbp-F4h]
  int v18; // [rsp+38h] [rbp-F0h]
  int v19; // [rsp+3Ch] [rbp-ECh]
  __int64 v20; // [rsp+40h] [rbp-E8h]
  __int64 v21; // [rsp+48h] [rbp-E0h]

  v4 = *(unsigned int *)(a3 + 44);
  v5 = ((unsigned int)(v4 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v4 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v20 = 0LL;
  v6 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v21 = 0LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = a4 & 1;
  *(_QWORD *)(a3 + 24) = a1 + v4;
  v18 = 20;
  v9 = a3 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    ProtectionPfnCompatible = 4;
    if ( !v8 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(
                                  4,
                                  48 * *(__int64 *)((char *)v6 + v9 + 48) - 0x58000000000LL);
    ValidPte = MiMakeValidPte(
                 (unsigned __int64)v6,
                 *(__int64 *)((char *)v6 + v9 + 48),
                 ProtectionPfnCompatible | 0xA0000000);
    v13 = 0xFFFFF6FB7DBED000uLL;
    PteShadow = *v6;
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    if ( (PteShadow & 1) != 0 )
    {
      if ( PteShadow != ValidPte )
      {
        *v6 = ValidPte;
        if ( (unsigned __int64)v6 >= v13 && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
        MiInsertTbFlushEntry(&v16, v7, 1LL, 0);
      }
    }
    else
    {
      *v6 = ValidPte;
      if ( (unsigned __int64)v6 >= v13 && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
    }
    ++v6;
    v7 += 4096LL;
    --v5;
  }
  while ( v5 );
  *(_WORD *)(a3 + 10) |= 0x11u;
  if ( v19 )
  {
    LOBYTE(v17) = 3;
    MiFlushTbList((__int64)&v16, v11);
  }
}
