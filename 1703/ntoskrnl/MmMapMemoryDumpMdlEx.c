/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x140137880
 * Callers:
 *     MmMapMemoryDumpMdl @ 0x140136F70 (MmMapMemoryDumpMdl.c)
 *     PopGetNextTable @ 0x140137B10 (PopGetNextTable.c)
 *     PopCreateDumpMdl @ 0x14040572C (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x14040749C (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140409FA0 (PopHiberCheckResume.c)
 *     IopLiveDumpBufferDumpData @ 0x140415AE4 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdi
  int v9; // r15d
  __int64 v10; // r14
  int ProtectionPfnCompatible; // eax
  __int64 v12; // rax
  _KPROCESS *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v18; // [rsp+24h] [rbp-F4h]
  int v19; // [rsp+28h] [rbp-F0h]
  int v20; // [rsp+2Ch] [rbp-ECh]
  __int64 v21; // [rsp+30h] [rbp-E8h]
  __int64 v22; // [rsp+38h] [rbp-E0h]

  v4 = *(unsigned int *)(a3 + 44);
  v6 = ((unsigned int)(v4 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v4 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  v20 = 0;
  v17 = 0;
  v18 = 0;
  v21 = 0LL;
  v7 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v22 = 0LL;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9 = a4 & 1;
  *(_QWORD *)(a3 + 24) = a1 + v4;
  v19 = 20;
  v10 = a3 + 48 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    ProtectionPfnCompatible = 4;
    if ( !v9 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48LL * *(_QWORD *)((char *)v7 + v10) - 0x58000000000LL);
    MiMakeValidPte((unsigned __int64)v7, *(_QWORD *)((char *)v7 + v10), ProtectionPfnCompatible | 0xA0000000);
    v12 = MI_READ_PTE_LOCK_FREE(v7);
    if ( (v12 & 1) != 0 )
    {
      if ( v12 != v14 )
      {
        *v7 = v14;
        if ( (unsigned int)MiPteInShadowRange(v7) )
          MiWritePteShadow(v15);
        MiInsertTbFlushEntry((__int64)&v17, v8, 1LL, 0);
      }
    }
    else
    {
      *v7 = v14;
      if ( (unsigned int)MiPteInShadowRange(v7) )
        MiWritePteShadow(v16);
    }
    ++v7;
    v8 += 4096LL;
    --v6;
  }
  while ( v6 );
  *(_WORD *)(a3 + 10) |= 0x2002u;
  if ( v20 )
  {
    LOBYTE(v18) = 3;
    MiFlushTbList((__int64)&v17, v13);
  }
}
