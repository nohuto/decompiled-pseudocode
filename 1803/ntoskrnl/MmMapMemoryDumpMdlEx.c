/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x14014F088
 * Callers:
 *     MmMapMemoryDumpMdl @ 0x14014ECF0 (MmMapMemoryDumpMdl.c)
 *     PopGetNextTable @ 0x14014EE24 (PopGetNextTable.c)
 *     PopDecompressHiberBlocks @ 0x140473C3C (PopDecompressHiberBlocks.c)
 *     PopCreateDumpMdl @ 0x1404741C4 (PopCreateDumpMdl.c)
 *     PopHiberCheckResume @ 0x140475210 (PopHiberCheckResume.c)
 *     IopLiveDumpBufferDumpData @ 0x140481658 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdi
  int v9; // r15d
  __int64 v10; // r14
  __int64 v11; // r9
  int ProtectionPfnCompatible; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v23; // [rsp+24h] [rbp-F4h]
  int v24; // [rsp+28h] [rbp-F0h]
  int v25; // [rsp+2Ch] [rbp-ECh]
  __int64 v26; // [rsp+30h] [rbp-E8h]
  __int64 v27; // [rsp+38h] [rbp-E0h]

  v4 = *(unsigned int *)(a3 + 44);
  v6 = ((unsigned int)(v4 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v4 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  v25 = 0;
  v22 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v7 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(a3 + 24) = a1 + v4;
  v23 = 3;
  v24 = 20;
  v9 = a4 & 1;
  v10 = a3 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v11 = *(_QWORD *)((char *)v7 + v10 + 48);
    ProtectionPfnCompatible = 4;
    if ( !v9 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v11 - 0x58000000000LL);
    MiMakeValidPte((unsigned __int64)v7, v11, ProtectionPfnCompatible | 0xA0000000, v11);
    v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v7);
    if ( (v13 & 1) != 0 )
    {
      if ( v13 != v16 )
      {
        *v7 = v16;
        if ( MiPteInShadowRange((unsigned __int64)v7) )
          MiWritePteShadow(v17, v19, v18);
        MiInsertTbFlushEntry((__int64)&v22, v8, 1LL, 0);
      }
    }
    else
    {
      *v7 = v16;
      if ( MiPteInShadowRange((unsigned __int64)v7) )
        MiWritePteShadow(v20, v21, v15);
    }
    ++v7;
    v8 += 4096LL;
    --v6;
  }
  while ( v6 );
  *(_WORD *)(a3 + 10) |= 0x11u;
  if ( v25 )
    MiFlushTbList((__int64)&v22, v14, v15);
}
