/*
 * XREFs of RtlpAllocateHeapInternal @ 0x1400AB5EC
 * Callers:
 *     RtlAllocateHeap @ 0x1400AB580 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x140287094 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlFreeHeap @ 0x1400AB340 (RtlFreeHeap.c)
 *     RtlpHpVsContextAllocate @ 0x1400ABD80 (RtlpHpVsContextAllocate.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x1400AC418 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 *     RtlpAllocateHeapRaiseException @ 0x140289E40 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x14028C248 (RtlpSetupExtendedBlock.c)
 */

void *__fastcall RtlpAllocateHeapInternal(__int64 a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  unsigned __int64 v4; // rbx
  void *v6; // rdi
  int v8; // r14d
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  int v11; // ebp
  int v12; // r12d
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // r15
  __int64 Heap; // rax
  int v17; // r9d
  __int64 v18; // r13
  char v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  LOWORD(v21) = a4;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 16) == -857879331 )
  {
    if ( a2 > 0x20000 )
      return 0LL;
    RtlpHpConvertFlagsToSegmentFlags(a3);
    return (void *)RtlpHpVsContextAllocate((PEX_SPIN_LOCK)(a1 + 64));
  }
  v8 = *(_DWORD *)(a1 + 116) | a3;
  v9 = 0LL;
  LODWORD(v21) = 0;
  v10 = 0LL;
  v20 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_23;
  v11 = *(_DWORD *)(a1 + 144);
  v12 = -1073741823;
  if ( v11 )
  {
    if ( (v8 & 0x3C000102) != 0 )
    {
      v11 = 0;
    }
    else
    {
      if ( (_WORD)v11 == 1 )
      {
        v13 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned __int64 *))RtlpInterceptorRoutines)(
                a1,
                0LL,
                1LL,
                &v20);
        v10 = v20;
      }
      else
      {
        v13 = -1073741823;
      }
      if ( v13 < 0 )
        goto LABEL_23;
      v14 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v4 += v14 + 16;
      v20 = v14 + 16;
    }
  }
  v15 = 1LL;
  if ( v4 )
    v15 = v4;
  v9 = (v15 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  Heap = RtlpAllocateHeap(a1, v19, (__int64)&v21);
  v6 = (void *)Heap;
  if ( !Heap )
    goto LABEL_24;
  if ( v11 )
  {
    v18 = Heap;
    v4 -= v20;
    v6 = (void *)RtlpSetupExtendedBlock(a1, v8, Heap, v17, v20, v11);
    if ( (_WORD)v11 == 1 )
      v12 = ((__int64 (__fastcall *)(__int64, void *, __int64, __int64))RtlpInterceptorRoutines)(a1, v6, 2LL, v18);
    if ( v12 < 0 )
    {
      RtlFreeHeap((PVOID)a1, 0, v6);
LABEL_23:
      v6 = 0LL;
LABEL_24:
      if ( (v8 & 4) != 0 )
      {
        if ( v9 )
          v4 = v9;
        RtlpAllocateHeapRaiseException(v4);
      }
    }
  }
  return v6;
}
