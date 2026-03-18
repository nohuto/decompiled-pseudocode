/*
 * XREFs of EtwpPreserveLogger @ 0x140713AB0
 * Callers:
 *     EtwpKsrCallback @ 0x140713990 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140714364 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x140122008 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x140122198 (EtwpInitializeBufferHeader.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpAddLogHeader @ 0x140557C2C (EtwpAddLogHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407137E0 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpPreserveMdlList @ 0x140713CDC (EtwpPreserveMdlList.c)
 */

__int64 __fastcall EtwpPreserveLogger(__int64 a1)
{
  __m128i *v1; // rbp
  PVOID v4; // r14
  SIZE_T v5; // r15
  __m128i v6; // xmm7
  unsigned __int16 v7; // ax
  unsigned int v8; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rsi
  int v11; // ebx
  unsigned int *v12; // rax
  unsigned int *v13; // r15
  __int128 v14; // xmm6
  __int64 v15; // r12
  __int64 v16; // rdi
  _QWORD *v17; // r13
  __int64 v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // [rsp+80h] [rbp+8h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(__m128i **)(a1 + 936);
  if ( v1[2].m128i_i8[1] )
    return 0LL;
  v4 = 0LL;
  v5 = *(unsigned int *)(a1 + 4);
  v6 = v1[1];
  if ( ((v5 * (unsigned int)(*(_DWORD *)(a1 + 232) + 1)) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
    return 3221225659LL;
  v7 = _mm_cvtsi128_si32(v6);
  v8 = v7 + 2;
  v21 = v7 + 18;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x4B777445u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v21);
    v10[2] = *(_DWORD *)(a1 + 4);
    v10[3] = 16;
    memmove(v10 + 4, (const void *)_mm_srli_si128(v6, 8).m128i_i64[0], v8);
    v12 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x4B777445u);
    v13 = v12;
    if ( v12 )
    {
      EtwpInitializeBufferHeader((__int16 *)a1, v12);
      EtwpResetBufferHeader((__int64)v13, 4);
      v14 = *(_OWORD *)(a1 + 152);
      *(__m128i *)(a1 + 152) = v6;
      EtwpAddLogHeader(a1, v13);
      *(_OWORD *)(a1 + 152) = v14;
      v11 = EtwpBuildMdlForTraceBuffer(v13, (struct _MDL **)&P);
      if ( v11 < 0 )
        goto LABEL_19;
      ++v10[1];
      v15 = a1 + 96;
      v16 = *(_QWORD *)(a1 + 96);
      v4 = P;
      v17 = P;
      v18 = v16 == v15 ? 0LL : v16 - 56;
      while ( v18 )
      {
        v11 = EtwpBuildMdlForTraceBuffer((_DWORD *)v18, (struct _MDL **)&P);
        if ( v11 < 0 )
          goto LABEL_19;
        v19 = P;
        *v17 = P;
        v17 = v19;
        ++v10[1];
        v20 = *(_QWORD *)(v18 + 56);
        v18 = v20 - 56;
        if ( v20 == v15 )
          v18 = 0LL;
      }
      v11 = EtwpPreserveMdlList(v4, v10, v21, v1);
      if ( v11 < 0 )
      {
LABEL_19:
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        v1->m128i_i64[1] = (__int64)v13;
        v1[2].m128i_i8[1] = 1;
      }
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
    else
    {
      v11 = -1073741801;
    }
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v11;
}
