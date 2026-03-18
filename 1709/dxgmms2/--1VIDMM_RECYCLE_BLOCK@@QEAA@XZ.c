/*
 * XREFs of ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C006D348
 * Callers:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0002560 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 * Callees:
 *     McTemplateK0pxqqt @ 0x1C0023360 (McTemplateK0pxqqt.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C007291C (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(VIDMM_RECYCLE_BLOCK *this, __int64 a2, __int64 a3)
{
  PVOID *v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  NTSTATUS v7; // eax
  __int64 v8; // rdi
  PVOID v9; // r9
  __int64 v10; // rax
  VIDMM_RECYCLE_BLOCK **v11; // rdx
  VIDMM_RECYCLE_BLOCK **v12; // rcx
  void *v13; // rcx
  _QWORD *v14; // rax
  ULONG_PTR v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = (PVOID *)((char *)this + 40);
  v5 = *((_QWORD *)this + 5);
  v15 = *((_QWORD *)this + 6) - v5;
  v6 = **((unsigned int **)this + 4);
  if ( (unsigned int)(v6 - 3) <= 3 )
  {
    if ( (unsigned int)(v6 - 5) <= 1 && v5 )
      MmUnmapViewInSystemSpace((PVOID)v5);
    v13 = (void *)*((_QWORD *)this + 7);
    if ( !v13 || *((_QWORD *)this + 8) )
    {
      v5 = *((_QWORD *)this + 8);
      if ( !v5 )
        goto LABEL_4;
      ObCloseHandle((HANDLE)v5, (v5 & 0xFFFFFFFF80000000uLL) == 0);
      v13 = (void *)*((_QWORD *)this + 7);
    }
    VidMmDereferenceObjectAsync(v13);
    goto LABEL_4;
  }
  if ( v5 )
  {
    v7 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4, &v15, 0x8000u);
    v8 = v7;
    v5 = v7 + 0x80000000;
    if ( (v5 & 0x80000000) == 0LL && v7 != -1073741558 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v5, v6);
      v14[3] = *v4;
      v14[4] = this;
      v14[5] = v8;
      v14[6] = **(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 8LL);
      WdLogEvent5_WdAssertion(v14);
    }
  }
LABEL_4:
  if ( bTracingEnabled )
  {
    v5 = *((_QWORD *)this + 4);
    v6 = *(unsigned int *)v5;
    v9 = (unsigned int)(v6 - 3) <= 3 ? (PVOID)*((_QWORD *)this + 7) : *v4;
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0pxqqt(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8LL),
        &EventDestroyProcessAllocation,
        a3,
        v9,
        v15,
        v6,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 8LL) + 8LL),
        1);
  }
  v10 = WdLogNewEntry5_WdEvent(v5, v6);
  *(_QWORD *)(v10 + 24) = this;
  WdLogEvent5_WdEvent(v10);
  v11 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 2);
  if ( v11[1] != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)
    || (v12 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 3), *v12 != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v12 = (VIDMM_RECYCLE_BLOCK *)v11;
  v11[1] = (VIDMM_RECYCLE_BLOCK *)v12;
  --*(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
}
