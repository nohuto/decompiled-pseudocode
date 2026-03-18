/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00684CC
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C006861C (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0048200 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691D0 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006E9F4 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *v1; // rsi
  __int64 v2; // rdx
  char *v4; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // rbp
  int v7; // ecx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // eax
  void *v16; // rbx
  void *v17; // rax
  _QWORD *v18; // rax
  __int64 CurrentProcess; // rax
  void *v20; // [rsp+60h] [rbp+8h] BYREF
  void *v21; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0LL;
  v1 = 0LL;
  v2 = *((_QWORD *)this + 10);
  v4 = (char *)*((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 5);
  v21 = 0LL;
  v6 = v5 - (_QWORD)v4;
  v7 = **(_DWORD **)(v2 + 32);
  if ( (unsigned int)(v7 - 3) <= 3 && (unsigned int)(v7 - 5) > 1 )
  {
    v11 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v2 + 56),
            (__int64)v4,
            v6,
            ((v7 - 4) & 0xFFFFFFFD) == 0,
            &v20,
            &v21,
            0,
            0LL);
    v14 = v11;
    if ( v11 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12);
      v18[3] = v6;
      v18[4] = *((_QWORD *)this + 4);
      v18[5] = *((_QWORD *)this + 10);
      v18[6] = v14;
      v18[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v18);
      return;
    }
    v4 = (char *)v20;
    v1 = v21;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( !*((_BYTE *)i + 84) )
    {
      memset(&v4[*((_QWORD *)i + 4) - *((_QWORD *)this + 4)], 0, *((_QWORD *)i + 5) - *((_QWORD *)i + 4));
      *((_BYTE *)i + 84) = 1;
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
  v9 = *((_QWORD *)this + 10);
  v10 = **(unsigned int **)(v9 + 32);
  if ( (unsigned int)(v10 - 3) <= 3 && (unsigned int)(v10 - 5) > 1 )
  {
    v15 = dword_1C003C33C;
    if ( (unsigned __int64)qword_1C003C128 > 0x53333333 )
      v15 = dword_1C003C32C;
    if ( v6 <= (unsigned int)(v15 << 20) )
    {
      CurrentProcess = PsGetCurrentProcess(v10);
      MmUnmapViewOfSection(CurrentProcess, v1);
    }
    else
    {
      v16 = *(void **)(v9 + 56);
      v17 = (void *)PsGetCurrentProcess(v10);
      VidMmUnmapViewAsync(v17, v16, v1);
    }
  }
}
