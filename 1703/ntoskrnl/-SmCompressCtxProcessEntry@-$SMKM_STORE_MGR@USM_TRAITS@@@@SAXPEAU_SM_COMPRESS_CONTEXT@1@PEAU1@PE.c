/*
 * XREFs of ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140057744
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400574C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     IoBuildPartialMdl @ 0x14000D4F0 (IoBuildPartialMdl.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x14001C160 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140055574 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     RtlCompressBuffer @ 0x140057940 (RtlCompressBuffer.c)
 *     MmBuildMdlForNonPagedPool @ 0x14005A730 (MmBuildMdlForNonPagedPool.c)
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
  __int64 v9; // r14
  __int64 v10; // r11
  struct _MDL *v11; // rsi
  _OWORD *MappedSystemVa; // rbp
  _OWORD *v13; // r10
  __int128 v14; // xmm1
  const unsigned __int8 *v15; // rdi
  __int64 v16; // rdx
  KIRQL v17; // al
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v5 = FinalCompressedSize;
  v8 = a4;
  v9 = *(_QWORD *)(FinalCompressedSize + 80);
  v10 = 32LL;
  v11 = *(struct _MDL **)(v9 + 16);
  MappedSystemVa = v11->MappedSystemVa;
  v13 = MappedSystemVa;
  do
  {
    *(_OWORD *)v8 = *v13;
    *((_OWORD *)v8 + 1) = v13[1];
    *((_OWORD *)v8 + 2) = v13[2];
    *((_OWORD *)v8 + 3) = v13[3];
    *((_OWORD *)v8 + 4) = v13[4];
    *((_OWORD *)v8 + 5) = v13[5];
    *((_OWORD *)v8 + 6) = v13[6];
    v8 += 128;
    v14 = v13[7];
    v13 += 8;
    *((_OWORD *)v8 - 1) = v14;
    --v10;
  }
  while ( v10 );
  v15 = (const unsigned __int8 *)(v5 + 72);
  if ( RtlCompressBuffer(
         *(_WORD *)(*(_QWORD *)(v5 + 64) + 4000LL),
         a4,
         0x1000u,
         (PUCHAR)(v5 + 72),
         v9 - (v5 + 72) + 4096,
         0x1000u,
         (PULONG)&FinalCompressedSize,
         WorkSpace) < 0 )
  {
    LODWORD(FinalCompressedSize) = 4096;
    v15 = (const unsigned __int8 *)MappedSystemVa;
    IoBuildPartialMdl(v11, (PMDL)v5, (char *)v11->StartVa + v11->ByteOffset, 0);
  }
  else
  {
    v16 = (unsigned int)FinalCompressedSize;
    *(_QWORD *)v5 = 0LL;
    *(_WORD *)(v5 + 10) = 0;
    *(_DWORD *)(v5 + 40) = v16;
    *(_QWORD *)(v5 + 32) = (unsigned __int64)v15 & 0xFFFFFFFFFFFFF000uLL;
    *(_WORD *)(v5 + 8) = 8 * ((((unsigned __int64)((unsigned __int16)v15 & 0xFFF) + v16 + 4095) >> 12) + 6);
    *(_DWORD *)(v5 + 44) = (unsigned __int16)v15 & 0xFFF;
    MmBuildMdlForNonPagedPool((PMDL)v5);
  }
  MetroHash64::Hash(v15, (unsigned int)FinalCompressedSize, (unsigned __int8 *const)&v19);
  *(_QWORD *)(v5 + 56) = v19;
  *(_QWORD *)v5 = v11;
  *(_DWORD *)(v9 + 8) |= 0x80000000;
  *(_QWORD *)(v9 + 16) = v5;
  v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  *(_QWORD *)v9 = *(_DWORD *)v9 & 7 | ((**(_QWORD **)(a1 + 104) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  **(_QWORD **)(a1 + 104) = v9 | **(_DWORD **)(a1 + 104) & 7;
  *(_QWORD *)(a1 + 104) = v9;
  return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(a1, a2, v17, 0);
}
