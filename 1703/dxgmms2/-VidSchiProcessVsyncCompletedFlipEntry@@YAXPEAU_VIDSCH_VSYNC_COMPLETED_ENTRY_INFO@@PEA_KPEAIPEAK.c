/*
 * XREFs of ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0023240
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0002E00 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003040 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00132FC (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 */

void __fastcall VidSchiProcessVsyncCompletedFlipEntry(
        struct _VIDSCH_VSYNC_COMPLETED_ENTRY_INFO *a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        unsigned int *a4,
        bool *a5,
        bool a6)
{
  __int64 v6; // r12
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned int *v10; // r15
  __int64 v11; // rdx
  int v12; // r13d
  __int64 v13; // rdi
  int v14; // esi
  unsigned int v15; // ebp
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // edx
  unsigned __int64 v19; // rcx
  int v20; // edx
  unsigned int v21; // r9d
  unsigned int v22; // eax
  __int64 v23; // rax
  int v24; // [rsp+40h] [rbp-68h]
  unsigned __int64 v25; // [rsp+48h] [rbp-60h]
  __int64 v26; // [rsp+50h] [rbp-58h]
  int v27; // [rsp+B0h] [rbp+8h]

  v6 = *(_QWORD *)a1;
  v8 = *((unsigned int *)a1 + 4);
  v9 = 0LL;
  v10 = a3;
  v27 = v8;
  v11 = *((unsigned int *)a1 + 5);
  v12 = *((_DWORD *)a1 + 6);
  v26 = *(_QWORD *)(v6 + 8 * v8 + 2992);
  v24 = *((_DWORD *)a1 + 5);
  v13 = *(_QWORD *)(v26 + 8 * v11 + 24);
  v14 = ((_BYTE)v12 + 1) & 0x3F;
  v15 = *(_DWORD *)(v13 + 44);
  if ( v15 != v14 )
  {
    do
    {
      v16 = v13 + 1224LL * v15;
      if ( !a6 )
        *(_DWORD *)(v16 + 1100) = 11;
      v17 = *(_QWORD *)(v16 + 1208);
      *(_QWORD *)(v16 + 1160) = *((_QWORD *)a1 + 4);
      *(_QWORD *)(v16 + 1144) = *((_QWORD *)a1 + 5);
      *(_QWORD *)(v16 + 1152) = *((_QWORD *)a1 + 6);
      if ( (*(_DWORD *)(v16 + 1168) & 0x10) != 0 )
      {
        v18 = *(unsigned __int8 *)(v17 + 1);
        v19 = (unsigned __int8)*(_DWORD *)v17;
        v20 = v19 | v18;
      }
      else
      {
        v19 = *(unsigned int *)(v6 + 128);
        v20 = (1 << v19) - 1;
      }
      LODWORD(v25) = v20;
      *(_DWORD *)(v26 + 2316) &= ~v20;
      HIDWORD(v25) = *(_DWORD *)(v16 + 1096);
      VidSchiUnreferenceDisplayingAllocationsForThisEntry((struct _VIDSCH_GLOBAL *)v19, v26, v16 + 56);
      VidSchiReferenceDisplayingAllocationsForThisEntry(v6, (_WORD *)v26, v16 + 56);
      v15 = ((_BYTE)v15 + 1) & 0x3F;
    }
    while ( v15 != v14 );
    v9 = v25;
    v10 = a3;
    LODWORD(v8) = v27;
    LODWORD(v11) = v24;
  }
  if ( !a6 )
  {
    v21 = *(_DWORD *)(v13 + 44);
    *(_DWORD *)(v13 + 44) = v14;
    if ( *(_DWORD *)(v13 + 48) == v12 )
      *(_DWORD *)(v13 + 48) = v14;
    v22 = VidSchiCompleteFlipEntry(v6, v8, v11, v21, v12, 0, 0LL);
    *a4 = v22;
    if ( v22 )
    {
      v23 = *v10;
      a2[v23] = v9;
      *v10 = v23 + 1;
      *a5 = 1;
    }
  }
}
