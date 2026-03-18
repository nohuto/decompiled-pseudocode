/*
 * XREFs of ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001330 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0001534 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001638 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001B34 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00A353C (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00A3600 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _MDL *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r14d
  __int64 v9; // rax
  VIDMM_MEMORY_SEGMENT *v10; // rax
  VIDMM_MEMORY_SEGMENT **v11; // rdx
  unsigned int v12; // ecx
  int v13; // ecx
  VIDMM_GLOBAL *v14; // rax
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v16; // rcx
  VIDMM_CPU_HOST_APERTURE *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  PMDL v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  signed __int32 v28[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v4 = 0LL;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v5 = *((_QWORD *)a2 + 13);
  if ( (*((_DWORD *)a2 + 21) & 0x20) == 0 )
  {
LABEL_4:
    v8 = VIDMM_MEMORY_SEGMENT::TransferToSegment((VIDMM_MEMORY_SEGMENT *)this, a2, v4, 0);
    goto LABEL_5;
  }
  v18 = this[61];
  if ( !v18 )
  {
    v25 = *((_QWORD *)a2 + 27);
    if ( (*(_DWORD *)(*((_QWORD *)this[1] + 3) + 300LL) & 8) != 0 )
      v21 = VidMmiBuildMdlFromMdl(
              *(PVOID *)(v5 + 16),
              *((_QWORD *)a2 + 2),
              *(struct _MDL **)(*((_QWORD *)a2 + 28) + 32LL),
              v25 / 4096);
    else
      v21 = VidMmiBuildMdlForContiguousMmIo(
              *(PVOID *)(v5 + 16),
              *((_QWORD *)a2 + 2),
              (union _LARGE_INTEGER)(*(_QWORD *)(*((_QWORD *)a2 + 28) + 32LL) + v25));
LABEL_22:
    v4 = v21;
    if ( !v21 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v26 + 24) = 1466LL;
      WdLogEvent5_WdAssertion(v26);
      v8 = -1073741801;
      goto LABEL_28;
    }
    goto LABEL_4;
  }
  v8 = VIDMM_CPU_HOST_APERTURE::MapRange(v18, a2);
  if ( v8 >= 0 )
  {
    v21 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
            this[61],
            *(void **)(v5 + 16),
            (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 472),
            *((_QWORD *)a2 + 27),
            *((_QWORD *)a2 + 2));
    goto LABEL_22;
  }
  v24 = WdLogNewEntry5_WdAssertion(v20, v19);
  *(_QWORD *)(v24 + 24) = 1409LL;
  WdLogEvent5_WdAssertion(v24);
LABEL_5:
  if ( v8 >= 0 )
  {
    v9 = *((_QWORD *)a2 + 26);
    *((_QWORD *)a2 + 26) = 0LL;
    *((_QWORD *)a2 + 19) = v9;
    v10 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
    *((_DWORD *)a2 + 32) = 2;
    *((_BYTE *)a2 + 97) = 1;
    v11 = (VIDMM_MEMORY_SEGMENT **)this[21];
    if ( *v11 != (VIDMM_MEMORY_SEGMENT *)(this + 20) )
      __fastfail(3u);
    *(_QWORD *)v10 = this + 20;
    *((_QWORD *)a2 + 49) = v11;
    *v11 = v10;
    this[21] = v10;
    v12 = *((_DWORD *)a2 + 18);
    if ( !v12
      || (((*((_DWORD *)this + 20) >> 12) & 1) != 0 ? (v7 = 0LL) : (v7 = (unsigned int)(*((_DWORD *)this + 4) + 1)),
          (*((_DWORD *)a2 + 18) & 0x1F) == (_DWORD)v7
       || (((*((_DWORD *)this + 20) >> 12) & 1) == 0 ? (v27 = *((_DWORD *)this + 4) + 1) : (v27 = 0),
           ((v12 >> 6) & 0x1F) == v27)) )
    {
      v13 = 0x800000;
    }
    else
    {
      v13 = 0;
    }
    *((_DWORD *)a2 + 19) = v13 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
    if ( v5 && *(_QWORD *)(v5 + 8) )
      VidMmRecordAlloc(this[1], (__int64)a2, v5, (__int64)this, *((_QWORD *)a2 + 2), 0);
    *((_QWORD *)this[1] + 5020) += *((_QWORD *)a2 + 2) >> 12;
    v14 = this[1];
    _InterlockedOr(v28, 0);
    ++*((_QWORD *)v14 + 5);
    v6 = 1552LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v6 + *((_QWORD *)this[1] + 5021) + 1528) += *((_QWORD *)a2 + 2);
    for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
          i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
          i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      v6 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 200LL);
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL) + 8 * v6);
      v16 = *(_QWORD *)(v7 + 48) + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
      *(_QWORD *)(v16 + 232) += *((_QWORD *)a2 + 2);
    }
    goto LABEL_18;
  }
LABEL_28:
  if ( *((_QWORD *)a2 + 56) )
    VIDMM_CPU_HOST_APERTURE::UnmapRange(this[61], a2);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_18:
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v6, v7);
  return (unsigned int)v8;
}
