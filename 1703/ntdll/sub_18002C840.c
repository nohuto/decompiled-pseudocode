/*
 * XREFs of sub_18002C840 @ 0x18002C840
 * Callers:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 * Callees:
 *     sub_18000894C @ 0x18000894C (sub_18000894C.c)
 *     sub_180008B20 @ 0x180008B20 (sub_180008B20.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

__int64 __fastcall sub_18002C840(_DWORD *BaseAddress, size_t a2, int a3)
{
  PVOID SubProcessTag; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int16 v10; // r14
  __int64 v11; // r8
  unsigned __int8 *v12; // r9
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v18; // [rsp+70h] [rbp-48h] BYREF

  if ( (byte_18015BFBC & 2) == 0 )
    return sub_180029FC0(BaseAddress, a2, a3, 0);
  if ( BaseAddress[4] != -571548178 || BaseAddress == qword_18015BFE0 )
    goto LABEL_23;
  v18 = 0uLL;
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  *(_QWORD *)&v18 = SubProcessTag;
  v7 = (__int64)SubProcessTag - qword_18015C308;
  if ( SubProcessTag == (PVOID)qword_18015C308 )
    v7 = -qword_18015C310;
  if ( !v7 )
  {
LABEL_23:
    v10 = 0;
    goto LABEL_14;
  }
  if ( !word_1801598E4 )
    goto LABEL_16;
  v8 = *(_QWORD *)(qword_1801598D8 + 8LL * ((unsigned __int16)word_1801598E4 - 1));
  v9 = *(_QWORD *)(v8 + 16) - (_QWORD)SubProcessTag;
  if ( !v9 )
    v9 = *(_QWORD *)(v8 + 24);
  if ( v9 )
  {
LABEL_16:
    v12 = (unsigned __int8 *)&v18;
    v13 = 16LL;
    v14 = 314159LL;
    while ( v13 >= 8 )
    {
      v14 = 37
          * (37 * (37 * (37 * (37 * (37 * (37 * (*v12 + 37 * v14) + v12[1]) + v12[2]) + v12[3]) + v12[4]) + v12[5])
           + v12[6])
          + v12[7];
      v12 += 8;
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
          break;
        default:
          break;
      }
    }
    v15 = sub_180008B20((__int64)&Parameter, (__int64)&v18, v14);
    if ( v15 )
    {
      v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 32), a2);
      v10 = *(_WORD *)(v15 + 40);
      if ( v10 )
        goto LABEL_13;
    }
    v10 = sub_18000894C(v16, &v18, v14, a2);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), a2);
    v10 = *(_WORD *)(v8 + 40);
  }
  if ( v10 )
LABEL_13:
    word_1801598E4 = v10;
LABEL_14:
  v11 = sub_180029FC0(BaseAddress, a2, a3, v10);
  if ( !v11 && v10 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(qword_1801598D8 + 8LL * (v10 - 1)) + 32LL),
      -(__int64)a2);
  return v11;
}
