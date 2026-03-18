/*
 * XREFs of ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01CDB50
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01CD318 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     McTemplateK0pqppqq @ 0x1C002B4B4 (McTemplateK0pqppqq.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00FC108 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4654 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_RGNS *a5)
{
  UINT v5; // edi
  __int64 v6; // r13
  UINT MoveRectCount; // edx
  UINT v11; // r12d
  struct tagRECT *pDirtyRects; // rbp
  UINT v13; // esi
  struct tagRECT *Buffer; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  RECT *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // ebx
  struct DXGCONTEXT **v23; // [rsp+20h] [rbp-58h]

  v5 = 0;
  v6 = a4;
  if ( !a5 )
    return 0LL;
  MoveRectCount = a5->MoveRectCount;
  v11 = a5->DirtyRectCount + MoveRectCount;
  if ( MoveRectCount )
  {
    v13 = 16 * a5->DirtyRectCount;
    Buffer = (struct tagRECT *)AUTOEXPANDALLOCATION::GetBuffer(*((PVOID **)a2 + 4), v13 + 16 * MoveRectCount, 0);
    pDirtyRects = Buffer;
    if ( !Buffer )
    {
      v16 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v16 + 24) = 1870LL;
      WdLogEvent5_WdLowResource(v16);
      return 3221225495LL;
    }
    memmove(Buffer, a5->pDirtyRects, v13);
    v17 = &pDirtyRects[a5->DirtyRectCount];
    if ( a5->MoveRectCount )
    {
      do
      {
        v18 = v5++;
        *v17++ = a5->pMoveRects[v18].DestRect;
      }
      while ( v5 < a5->MoveRectCount );
    }
  }
  else
  {
    pDirtyRects = (struct tagRECT *)a5->pDirtyRects;
  }
  v19 = DXGCONTEXT::Blt(
          *((DXGCONTEXT **)a2 + 1),
          a3,
          v6,
          *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL),
          *((struct DXGCONTEXT ***)a2 + 5),
          v11,
          pDirtyRects);
  v22 = v19;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v23) = *((_DWORD *)this + 11);
    McTemplateK0pqppqq((unsigned int)v23, v20, v21, this, v23, a3, v6, v11, v19);
  }
  return v22;
}
