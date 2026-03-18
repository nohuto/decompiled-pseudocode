/*
 * XREFs of ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0025718
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004B50 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0004850 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00151C0 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 */

void __fastcall VidSchiProcessVsyncCompletedFlipEntry(
        struct _VIDSCH_VSYNC_COMPLETED_ENTRY_INFO *a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        unsigned int *a4,
        bool *a5,
        bool a6)
{
  __int64 v6; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned int *v10; // r15
  __int64 v11; // rdx
  int v12; // r12d
  __int64 v13; // rdi
  int v14; // ebp
  unsigned int v15; // esi
  __int64 v16; // rbx
  unsigned int v17; // eax
  int v18; // ecx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  unsigned int v22; // r9d
  unsigned int v23; // eax
  __int64 v24; // rax
  int v25; // [rsp+40h] [rbp-68h]
  unsigned __int64 v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  int v28; // [rsp+B0h] [rbp+8h]

  v6 = *(_QWORD *)a1;
  v8 = *((unsigned int *)a1 + 4);
  v9 = 0LL;
  v10 = a3;
  v28 = v8;
  v26 = 0LL;
  v11 = *((unsigned int *)a1 + 5);
  v12 = *((_DWORD *)a1 + 6);
  v27 = *(_QWORD *)(v6 + 8 * v8 + 3008);
  v25 = *((_DWORD *)a1 + 5);
  v13 = *(_QWORD *)(v27 + 8 * v11 + 24);
  v14 = ((_BYTE)v12 + 1) & 0x3F;
  v15 = *(_DWORD *)(v13 + 44);
  if ( v15 != v14 )
  {
    do
    {
      v16 = v13 + 1232LL * v15;
      v17 = *(_DWORD *)(v16 + 1108);
      if ( v17 > 0xC || (v18 = 4673, !_bittest(&v18, v17)) )
      {
        if ( !a6 )
          *(_DWORD *)(v16 + 1108) = 11;
        *(_QWORD *)(v16 + 1168) = *((_QWORD *)a1 + 4);
        *(_QWORD *)(v16 + 1152) = *((_QWORD *)a1 + 5);
        *(_QWORD *)(v16 + 1160) = *((_QWORD *)a1 + 6);
        if ( (*(_DWORD *)(v16 + 1176) & 0x10) != 0 )
        {
          v19 = *(_DWORD **)(v16 + 1216);
          v20 = (unsigned int)*v19;
          v21 = ((unsigned __int16)v20 | (unsigned __int16)(*v19 >> 10)) & 0x3FF;
        }
        else
        {
          v20 = *(unsigned int *)(v6 + 128);
          v21 = (1 << v20) - 1;
        }
        LODWORD(v26) = v21;
        *(_DWORD *)(v27 + 2952) &= ~v21;
        HIDWORD(v26) = *(_DWORD *)(v16 + 1104);
        VidSchiUnreferenceDisplayingAllocationsForThisEntry(v20, v27, v16 + 56);
        VidSchiReferenceDisplayingAllocationsForThisEntry(v6, (_WORD *)v27, v16 + 56);
      }
      v15 = ((_BYTE)v15 + 1) & 0x3F;
    }
    while ( v15 != v14 );
    v9 = v26;
    v10 = a3;
    LODWORD(v8) = v28;
    LODWORD(v11) = v25;
  }
  if ( !a6 )
  {
    v22 = *(_DWORD *)(v13 + 44);
    *(_DWORD *)(v13 + 44) = v14;
    if ( *(_DWORD *)(v13 + 48) == v12 )
      *(_DWORD *)(v13 + 48) = v14;
    v23 = VidSchiCompleteFlipEntry(v6, v8, v11, v22, v12, 0, 0LL);
    *a4 = v23;
    if ( v23 )
    {
      v24 = *v10;
      a2[v24] = v9;
      *v10 = v24 + 1;
      *a5 = 1;
    }
  }
}
