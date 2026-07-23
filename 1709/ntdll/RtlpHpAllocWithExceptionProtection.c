/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x180042900
 * Callers:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTagContextAllocateTag @ 0x18006EE4C (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagContextFindMapping @ 0x18006F01C (RtlpHpTagContextFindMapping.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 */

unsigned __int64 __fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, size_t a2, int a3)
{
  void *SubProcessTag; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int16 Tag; // r14
  unsigned __int64 HeapInternal; // r8
  unsigned __int8 *v12; // r9
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 Mapping; // rax
  signed __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v19; // [rsp+28h] [rbp-90h]
  _QWORD v20[2]; // [rsp+70h] [rbp-48h] BYREF

  if ( (RtlpHpHeapFeatures & 2) == 0 )
    return RtlpAllocateHeapInternal((__int64)a1, a2, a3, 0);
  if ( a1[4] != -571548178 || a1 == RtlpHpMetadataHeap )
    goto LABEL_23;
  v20[0] = 0LL;
  v20[1] = 0LL;
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  v20[0] = SubProcessTag;
  v7 = (__int64)SubProcessTag - RtlpHpNullGUID;
  if ( SubProcessTag == (void *)RtlpHpNullGUID )
    v7 = -qword_1801603D8;
  if ( !v7 )
  {
LABEL_23:
    Tag = 0;
    goto LABEL_14;
  }
  if ( !word_18015D924 )
    goto LABEL_16;
  v8 = *(_QWORD *)(qword_18015D918 + 8LL * (unsigned __int16)word_18015D924 - 8);
  v9 = *(_QWORD *)(v8 + 16) - (_QWORD)SubProcessTag;
  if ( !v9 )
    v9 = *(_QWORD *)(v8 + 24);
  if ( v9 )
  {
LABEL_16:
    v12 = (unsigned __int8 *)v20;
    v19 = (unsigned __int8 *)v20;
    v13 = 16LL;
    v14 = 314159LL;
    v18 = 314159LL;
    while ( v13 >= 8 )
    {
      v14 = 37
          * (37 * (37 * (37 * (37 * (37 * (37 * (*v12 + 37 * v14) + v12[1]) + v12[2]) + v12[3]) + v12[4]) + v12[5])
           + v12[6])
          + v12[7];
      v18 = v14;
      v12 += 8;
      v19 = v12;
      v13 -= 8LL;
    }
    if ( v13 >= 1 )
    {
      switch ( (int)v13 )
      {
        case 1:
          goto LABEL_33;
        case 2:
          goto LABEL_32;
        case 3:
          goto LABEL_31;
        case 4:
          goto LABEL_30;
        case 5:
          goto LABEL_29;
        case 6:
          goto LABEL_28;
        case 7:
          v14 = *v12++ + 37 * v14;
LABEL_28:
          v14 = *v12++ + 37 * v14;
LABEL_29:
          v14 = *v12++ + 37 * v14;
LABEL_30:
          v14 = *v12++ + 37 * v14;
LABEL_31:
          v14 = *v12++ + 37 * v14;
LABEL_32:
          v14 = *v12++ + 37 * v14;
LABEL_33:
          v14 = *v12 + 37 * v14;
          v18 = v14;
          v19 = v12 + 1;
          break;
        default:
          break;
      }
    }
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, v20, v14);
    if ( Mapping )
    {
      v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a2);
      Tag = *(_WORD *)(Mapping + 40);
      if ( Tag )
        goto LABEL_13;
    }
    Tag = RtlpHpTagContextAllocateTag(v16, v20, v14, a2, v18, v19);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), a2);
    Tag = *(_WORD *)(v8 + 40);
  }
  if ( Tag )
LABEL_13:
    word_18015D924 = Tag;
LABEL_14:
  HeapInternal = RtlpAllocateHeapInternal((__int64)a1, a2, a3, Tag);
  if ( !HeapInternal && Tag )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(qword_18015D918 + 8LL * Tag - 8) + 32LL),
      -(__int64)a2);
  return HeapInternal;
}
