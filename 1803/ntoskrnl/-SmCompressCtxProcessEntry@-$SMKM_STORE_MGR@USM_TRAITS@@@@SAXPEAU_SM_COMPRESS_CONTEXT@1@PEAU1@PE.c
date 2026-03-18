/*
 * XREFs of ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1400917BC
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14008E990 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14008EC0C (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlCompressBuffer @ 0x1400919B0 (RtlCompressBuffer.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400948D0 (MmBuildMdlForNonPagedPool.c)
 *     IoBuildPartialMdl @ 0x1400A58F0 (IoBuildPartialMdl.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1400AE6F0 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(
        __int64 a1,
        __int64 a2,
        void *WorkSpace,
        UCHAR *a4,
        __int64 FinalCompressedSize)
{
  __int64 v5; // rbx
  UCHAR *v8; // rax
  __int64 v10; // r14
  __int64 v11; // r9
  struct _MDL *v12; // rsi
  _OWORD *MappedSystemVa; // rbp
  _OWORD *v14; // r10
  __int128 v15; // xmm1
  const unsigned __int8 *v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  KIRQL v19; // al
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  v5 = FinalCompressedSize;
  v8 = a4;
  v10 = *(_QWORD *)(FinalCompressedSize + 80);
  v11 = 32LL;
  v12 = *(struct _MDL **)(v10 + 16);
  MappedSystemVa = v12->MappedSystemVa;
  v14 = MappedSystemVa;
  do
  {
    *(_OWORD *)v8 = *v14;
    *((_OWORD *)v8 + 1) = v14[1];
    *((_OWORD *)v8 + 2) = v14[2];
    *((_OWORD *)v8 + 3) = v14[3];
    *((_OWORD *)v8 + 4) = v14[4];
    *((_OWORD *)v8 + 5) = v14[5];
    *((_OWORD *)v8 + 6) = v14[6];
    v8 += 128;
    v15 = v14[7];
    v14 += 8;
    *((_OWORD *)v8 - 1) = v15;
    --v11;
  }
  while ( v11 );
  v16 = (const unsigned __int8 *)(v5 + 72);
  if ( RtlCompressBuffer(
         *(_WORD *)(*(_QWORD *)(v5 + 64) + 4032LL),
         a4,
         0x1000u,
         (PUCHAR)(v5 + 72),
         v10 - (v5 + 72) + 4096,
         0x1000u,
         (PULONG)&FinalCompressedSize,
         WorkSpace) < 0 )
  {
    LODWORD(FinalCompressedSize) = 4096;
    v16 = (const unsigned __int8 *)MappedSystemVa;
    IoBuildPartialMdl(v12, (PMDL)v5, (char *)v12->StartVa + v12->ByteOffset, 0);
  }
  else
  {
    v17 = (unsigned int)FinalCompressedSize;
    *(_QWORD *)v5 = 0LL;
    *(_WORD *)(v5 + 10) = 0;
    *(_DWORD *)(v5 + 40) = v17;
    *(_QWORD *)(v5 + 32) = (unsigned __int64)v16 & 0xFFFFFFFFFFFFF000uLL;
    *(_WORD *)(v5 + 8) = 8 * ((((unsigned __int64)((unsigned __int16)v16 & 0xFFF) + v17 + 4095) >> 12) + 6);
    *(_DWORD *)(v5 + 44) = (unsigned __int16)v16 & 0xFFF;
    MmBuildMdlForNonPagedPool((PMDL)v5);
  }
  MetroHash64::Hash(v16, (unsigned int)FinalCompressedSize, (unsigned __int8 *const)&v21, v18);
  *(_QWORD *)(v5 + 56) = v21;
  *(_QWORD *)v5 = v12;
  *(_DWORD *)(v10 + 8) |= 0x80000000;
  *(_QWORD *)(v10 + 16) = v5;
  v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  *(_QWORD *)v10 = *(_DWORD *)v10 & 7 | ((**(_QWORD **)(a1 + 104) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  **(_QWORD **)(a1 + 104) = v10 | **(_DWORD **)(a1 + 104) & 7;
  *(_QWORD *)(a1 + 104) = v10;
  return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(a1, a2, v19, 0);
}
