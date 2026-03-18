/*
 * XREFs of EtwpPreserveLogger @ 0x1407B99CC
 * Callers:
 *     EtwpKsrCallback @ 0x1407B9880 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1407BA2B0 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1400D3A60 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1400D3BF4 (EtwpInitializeBufferHeader.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpAddLogHeader @ 0x14058896C (EtwpAddLogHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407B96CC (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpPreserveMdlList @ 0x1407B9BFC (EtwpPreserveMdlList.c)
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
  LARGE_INTEGER *v12; // rax
  LARGE_INTEGER *v13; // r15
  __int128 v14; // xmm6
  __int64 v15; // r12
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rdi
  _QWORD *v19; // r13
  _QWORD *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+80h] [rbp+8h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(__m128i **)(a1 + 1104);
  if ( v1[2].m128i_i8[1] )
    return 0LL;
  v4 = 0LL;
  v5 = *(unsigned int *)(a1 + 4);
  v6 = v1[1];
  if ( ((v5 * (unsigned int)(*(_DWORD *)(a1 + 248) + 1)) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
    return 3221225659LL;
  v7 = _mm_cvtsi128_si32(v6);
  v8 = v7 + 2;
  v22 = v7 + 18;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x4B777445u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v22);
    v10[2] = *(_DWORD *)(a1 + 4);
    v10[3] = 16;
    memmove(v10 + 4, (const void *)_mm_srli_si128(v6, 8).m128i_i64[0], v8);
    v12 = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x4B777445u);
    v13 = v12;
    if ( !v12 )
    {
      v11 = -1073741801;
LABEL_23:
      ExFreePoolWithTag(v10, 0);
      return (unsigned int)v11;
    }
    EtwpInitializeBufferHeader((__int16 *)a1, v12);
    EtwpResetBufferHeader((__int64)v13, 4);
    v14 = *(_OWORD *)(a1 + 168);
    *(__m128i *)(a1 + 168) = v6;
    EtwpAddLogHeader(a1, v13);
    *(_OWORD *)(a1 + 168) = v14;
    v11 = EtwpBuildMdlForTraceBuffer(v13, (struct _MDL **)&P);
    if ( v11 >= 0 )
    {
      ++v10[1];
      v15 = a1 + 96;
      v16 = *(_QWORD *)(a1 + 96);
      v4 = P;
      v17 = v16 == a1 + 96;
      v18 = v16 - 56;
      if ( v17 )
        v18 = 0LL;
      if ( v18 )
      {
        v19 = P;
        while ( 1 )
        {
          v11 = EtwpBuildMdlForTraceBuffer((_DWORD *)v18, (struct _MDL **)&P);
          if ( v11 < 0 )
            break;
          v20 = P;
          *v19 = P;
          v19 = v20;
          ++v10[1];
          v21 = *(_QWORD *)(v18 + 56);
          v18 = v21 - 56;
          if ( v21 == v15 )
            v18 = 0LL;
          if ( !v18 )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        v11 = EtwpPreserveMdlList(v4, v10, v22, v1);
        if ( v11 >= 0 )
        {
          v1->m128i_i64[1] = (__int64)v13;
          v1[2].m128i_i8[1] = 1;
          goto LABEL_21;
        }
      }
    }
    ExFreePoolWithTag(v13, 0);
LABEL_21:
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    goto LABEL_23;
  }
  return (unsigned int)-1073741670;
}
