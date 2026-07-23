/*
 * XREFs of sub_18001A8A0 @ 0x18001A8A0
 * Callers:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 * Callees:
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_180061B10 @ 0x180061B10 (sub_180061B10.c)
 *     sub_180061D14 @ 0x180061D14 (sub_180061D14.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall sub_18001A8A0(char *HeapHandle, unsigned __int64 a2, int a3)
{
  __int64 v6; // r8
  unsigned int v7; // ecx
  PVOID SubProcessTag; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int16 v12; // r14
  unsigned __int8 *v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rax
  signed __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v20; // [rsp+28h] [rbp-A0h]
  _QWORD v21[2]; // [rsp+80h] [rbp-48h] BYREF

  if ( (byte_18015D028 & 2) == 0 )
    return sub_180019140(HeapHandle, a2, a3, 0);
  if ( BYTE1(xmmword_18015A790) >= 2u )
    v7 = 2;
  else
    v7 = BYTE1(xmmword_18015A790);
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 || HeapHandle == *((char **)&unk_1801608C0 + 2 * v7) )
    goto LABEL_26;
  v21[0] = 0LL;
  v21[1] = 0LL;
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  v21[0] = SubProcessTag;
  v9 = (__int64)SubProcessTag - qword_18015D338;
  if ( SubProcessTag == (PVOID)qword_18015D338 )
    v9 = -qword_18015D340;
  if ( !v9 )
  {
LABEL_26:
    v12 = 0;
    goto LABEL_17;
  }
  if ( !word_18015AA44 )
    goto LABEL_19;
  v10 = *(_QWORD *)(qword_18015AA38 + 8LL * (unsigned __int16)word_18015AA44 - 8);
  v11 = *(_QWORD *)(v10 + 16) - (_QWORD)SubProcessTag;
  if ( !v11 )
    v11 = *(_QWORD *)(v10 + 24);
  if ( v11 )
  {
LABEL_19:
    v13 = (unsigned __int8 *)v21;
    v20 = (unsigned __int8 *)v21;
    v14 = 16LL;
    v15 = 314159LL;
    v19 = 314159LL;
    while ( v14 >= 8 )
    {
      v15 = 37
          * (37 * (37 * (37 * (37 * (37 * (37 * (*v13 + 37 * v15) + v13[1]) + v13[2]) + v13[3]) + v13[4]) + v13[5])
           + v13[6])
          + v13[7];
      v19 = v15;
      v13 += 8;
      v20 = v13;
      v14 -= 8LL;
    }
    if ( v14 >= 1 )
    {
      switch ( (int)v14 )
      {
        case 1:
          goto LABEL_35;
        case 2:
          goto LABEL_34;
        case 3:
          goto LABEL_33;
        case 4:
          goto LABEL_32;
        case 5:
          goto LABEL_31;
        case 6:
          goto LABEL_30;
        case 7:
          v15 = *v13++ + 37 * v15;
LABEL_30:
          v15 = *v13++ + 37 * v15;
LABEL_31:
          v15 = *v13++ + 37 * v15;
LABEL_32:
          v15 = *v13++ + 37 * v15;
LABEL_33:
          v15 = *v13++ + 37 * v15;
LABEL_34:
          v15 = *v13++ + 37 * v15;
LABEL_35:
          v15 = *v13 + 37 * v15;
          v19 = v15;
          v20 = v13 + 1;
          break;
        default:
          break;
      }
    }
    v16 = sub_180061D14(&Parameter, v21, v15);
    if ( v16 )
    {
      v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 32), a2);
      v12 = *(_WORD *)(v16 + 40);
      if ( v12 )
        goto LABEL_16;
    }
    v12 = sub_180061B10(v17, v21, v15, a2, v19, v20);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 32), a2);
    v12 = *(_WORD *)(v10 + 40);
  }
  if ( v12 )
LABEL_16:
    word_18015AA44 = v12;
LABEL_17:
  v6 = sub_180019140(HeapHandle, a2, a3, v12);
  if ( !v6 && v12 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(qword_18015AA38 + 8LL * v12 - 8) + 32LL),
      -(__int64)a2);
  return v6;
}
