/*
 * XREFs of ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00A25B4
 * Callers:
 *     VidSchiSubmitRenderCommand @ 0x1C00BC4E4 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     ?ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z @ 0x1C0065394 (-ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PrepareDmaBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_DMA_BUFFER *a3,
        unsigned int a4,
        unsigned int *a5,
        union _LARGE_INTEGER *a6)
{
  __int64 *v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  LONGLONG v11; // rcx
  unsigned int v12; // r11d
  struct VIDMM_ALLOC **v13; // r10
  __int64 i; // r9
  struct VIDMM_ALLOC *v15; // rbx
  __int64 v16; // rcx
  VIDMM_GLOBAL *v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rax

  v6 = (__int64 *)*((_QWORD *)a3 + 8);
  if ( v6 )
  {
    v8 = *v6;
    v9 = *(_QWORD *)(*(_QWORD *)v8 + 136LL);
    if ( (*(_DWORD *)(v9 + 80) & 0x1000) != 0 )
      v10 = 0LL;
    else
      v10 = (unsigned int)(*(_DWORD *)(v9 + 16) + 1);
    v11 = *(_QWORD *)(*(_QWORD *)v8 + 144LL) + *(_QWORD *)(v9 + 24);
  }
  else
  {
    v11 = *((_QWORD *)a3 + 11);
    v10 = 0LL;
  }
  v12 = 0;
  a6->QuadPart = v11;
  *a5 = v10;
  v13 = (struct VIDMM_ALLOC **)*((_QWORD *)a3 + 13);
  if ( !a4 )
    return 0LL;
  for ( i = *((_QWORD *)a3 + 14) + 8LL; ; i += 24LL )
  {
    v15 = *v13;
    if ( !*v13 )
      goto LABEL_17;
    v16 = **(_QWORD **)v15;
    if ( (*(_DWORD *)(v16 + 76) & 0x100000) != 0 )
      break;
    v17 = (VIDMM_GLOBAL *)*(unsigned __int16 *)(*(_QWORD *)(v16 + 504) + 4LL);
    LOWORD(v17) = (_WORD)v17 - 2;
    if ( (unsigned __int16)v17 <= 1u || (*((_BYTE *)v15 + 28) & 3) != 2 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v17, v10);
      *(_QWORD *)(v21 + 24) = v15;
      WdLogEvent5_WdAssertion(v21);
      return 3221225473LL;
    }
    VIDMM_GLOBAL::ReferenceAllocationForSubmission(v17, *v13, (*(_BYTE *)i & 1) == 0);
    v18 = *(_QWORD *)(**(_QWORD **)*v13 + 136LL);
    if ( (*(_DWORD *)(v18 + 80) & 0x1000) != 0 )
      v19 = 0;
    else
      v19 = *(_DWORD *)(v18 + 16) + 1;
    *(_DWORD *)i ^= (*(_DWORD *)i ^ (2 * v19)) & 0x3E;
    v10 = **(_QWORD **)*v13;
    *(_QWORD *)(i + 8) = *(_QWORD *)(v10 + 144) + *(_QWORD *)(*(_QWORD *)(v10 + 136) + 24LL);
LABEL_17:
    ++v12;
    ++v13;
    if ( v12 >= a4 )
      return 0LL;
  }
  v22 = WdLogNewEntry5_WdError(v16, v10, a3, i);
  *(_QWORD *)(v22 + 24) = v15;
  WdLogEvent5_WdError(v22);
  return 3221225473LL;
}
