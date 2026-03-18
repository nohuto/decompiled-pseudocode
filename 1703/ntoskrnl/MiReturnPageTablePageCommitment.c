/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x14051DC80
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 * Callees:
 *     MiBitmapRangeZero @ 0x14001B3F0 (MiBitmapRangeZero.c)
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     MiReturnFullProcessCharges @ 0x140062CC0 (MiReturnFullProcessCharges.c)
 *     RtlAreBitsClear @ 0x14006DCF0 (RtlAreBitsClear.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiVadDeleted @ 0x1400CE370 (MiVadDeleted.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiVadPureReserve @ 0x1400D2C90 (MiVadPureReserve.c)
 *     MiIsVadLarge @ 0x1400D2CF0 (MiIsVadLarge.c)
 *     MiCreateSystemWsles @ 0x14014358C (MiCreateSystemWsles.c)
 *     MiUpdateChargedWsles @ 0x14020E2AC (MiUpdateChargedWsles.c)
 */

__int64 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int64 a6,
        _BYTE *a7)
{
  __int64 v9; // rax
  unsigned __int64 v10; // r10
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // r11
  __int64 v15; // r8
  _BYTE *v16; // r14
  __int64 v17; // r9
  int v18; // r12d
  unsigned __int64 v19; // rdi
  int v20; // r13d
  unsigned __int64 v21; // rsi
  unsigned int v22; // r10d
  int v23; // ebp
  bool v24; // zf
  char v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // r11
  int v28; // ebx
  __int64 v29; // r15
  int v30; // ebx
  int v31; // edi
  int v32; // esi
  unsigned __int64 v33; // r11
  char v34; // r8
  __int64 v35; // rcx
  unsigned __int64 v36; // r11
  __int64 v37; // rax
  __int64 ProcessPartition; // rax
  int v39; // eax
  __int64 v40; // rax
  _QWORD **v41; // rax
  unsigned __int64 v42; // rcx
  _QWORD *v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned int v47; // r14d
  int v48; // [rsp+20h] [rbp-68h] BYREF
  int v49; // [rsp+24h] [rbp-64h]
  unsigned int v50; // [rsp+28h] [rbp-60h]
  int IsVadLarge; // [rsp+2Ch] [rbp-5Ch]
  int v52; // [rsp+30h] [rbp-58h]
  int v53; // [rsp+34h] [rbp-54h]
  __int64 v54; // [rsp+38h] [rbp-50h]
  __int64 v55; // [rsp+40h] [rbp-48h]
  unsigned int v58; // [rsp+B8h] [rbp+30h]

  v9 = *(unsigned int *)(a6 + 52);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  v10 = v9 | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 31);
  result = 0x7FFFFFFFELL;
  if ( v10 > 0x7FFFFFFFELL )
    return result;
  IsVadLarge = MiIsVadLarge(a6);
  v13 = MiVadPureReserve(v12);
  v16 = a7;
  v17 = *(_QWORD *)(v15 + 1296) + 40LL;
  v18 = 0;
  v19 = a1 >> 21;
  v20 = 0;
  v21 = a2 >> 21;
  v22 = 0;
  v54 = 0LL;
  v50 = 0;
  v23 = v13;
  v49 = 1023;
  v58 = -1;
  v55 = v17;
  do
  {
    v24 = *v16 == 0;
    v52 = v19;
    v53 = v21;
    if ( v24 )
    {
LABEL_4:
      LODWORD(v19) = v19 + 1;
    }
    else if ( v14 )
    {
      v25 = 9 * v22;
      while ( ((*(_DWORD *)(v14 + 28) >> 9) | (*(unsigned __int8 *)(v14 + 33) << 23)) >> v25 == (_DWORD)v19 )
      {
        if ( (unsigned int)MiVadDeleted(v14) == 1
          || !(unsigned int)MiVadPureReserve(v26)
          || (v40 = *(unsigned int *)(v27 + 52),
              LODWORD(v40) = v40 & 0x7FFFFFFF,
              (v40 | ((unsigned __int64)*(unsigned __int8 *)(v27 + 34) << 31)) < 0x7FFFFFFFFLL) )
        {
          *v16 = 0;
          goto LABEL_4;
        }
        v44 = *(_QWORD *)v27;
        v45 = v27;
        if ( *(_QWORD *)v27 )
        {
          v14 = *(_QWORD *)v27;
          a4 = v44;
          v46 = *(_QWORD *)(v44 + 8);
          if ( v46 )
          {
            do
            {
              a4 = v46;
              v46 = *(_QWORD *)(v46 + 8);
            }
            while ( v46 );
            v17 = v55;
            v14 = a4;
          }
        }
        else
        {
          v14 = *(_QWORD *)(v27 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          a4 = v14;
          if ( v14 )
          {
            do
            {
              if ( *(_QWORD *)(v14 + 8) == v45 )
                break;
              v45 = v14;
              v14 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            }
            while ( v14 );
            a4 = v14;
          }
        }
        if ( !v14 )
          break;
      }
    }
    if ( v16[1] )
    {
      v33 = (unsigned __int64)a5;
      if ( a5 )
      {
        v34 = 9 * v22;
        while ( ((*(_DWORD *)(v33 + 24) >> 9) | (*(unsigned __int8 *)(v33 + 32) << 23)) >> v34 == (_DWORD)v21 )
        {
          if ( (unsigned int)MiVadDeleted(v33) == 1
            || !(unsigned int)MiVadPureReserve(v35)
            || (v37 = *(unsigned int *)(v36 + 52),
                LODWORD(v37) = v37 & 0x7FFFFFFF,
                (v37 | ((unsigned __int64)*(unsigned __int8 *)(v36 + 34) << 31)) < 0x7FFFFFFFFLL) )
          {
            v16[1] = 0;
            goto LABEL_6;
          }
          v41 = *(_QWORD ***)(v36 + 8);
          v42 = v36;
          if ( v41 )
          {
            v33 = *(_QWORD *)(v36 + 8);
            a5 = v41;
            v43 = *v41;
            if ( v43 )
            {
              do
              {
                a5 = v43;
                v43 = (_QWORD *)*v43;
              }
              while ( v43 );
              v17 = v55;
              v33 = (unsigned __int64)a5;
            }
          }
          else
          {
            v33 = *(_QWORD *)(v36 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            a5 = (_QWORD *)v33;
            if ( v33 )
            {
              do
              {
                if ( *(_QWORD *)v33 == v42 )
                  break;
                v42 = v33;
                v33 = *(_QWORD *)(v33 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v33 );
              a5 = (_QWORD *)v33;
            }
          }
          if ( !v33 )
            break;
        }
      }
    }
    else
    {
LABEL_6:
      LODWORD(v21) = v21 - 1;
    }
    if ( (int)v19 > (int)v21 )
      break;
    if ( (!IsVadLarge || v22) && !v23 )
      v18 += v21 - v19 + 1;
    v48 = v19;
    v28 = v19;
    v29 = v17 + 16LL * (2 - v22);
    do
    {
      if ( v23 )
      {
        if ( v28 == (_DWORD)v19 )
        {
          v39 = MiBitmapRangeZero(v29 + 312, v28, &v48);
          LODWORD(v19) = v48;
          if ( v39 == 1 )
          {
            v28 = v48 - 1;
            goto LABEL_28;
          }
        }
        if ( !_bittest(*(const signed __int32 **)(v29 + 320), v28) )
          goto LABEL_28;
        ++v18;
      }
      _bittestandreset(*(signed __int32 **)(v29 + 320), v28);
      if ( !(unsigned int)MiCreateSystemWsles() && (v28 == (_DWORD)v21 || (v28 & 7) == 7 || v23) )
      {
        v47 = v28 & 0xFFFFFFF8;
        if ( RtlAreBitsClear((PRTL_BITMAP)(v29 + 312), v28 & 0xFFFFFFF8, 8u) == 1
          && ((*(_DWORD *)(a3 + 1740) & 1) != 0 || v47 != (v49 & 0xFFFFFFF8)) )
        {
          if ( v50 )
          {
            ++v20;
            goto LABEL_28;
          }
          if ( v58 != -1 )
          {
            if ( v58 + 8 * v54 == v47 )
            {
              ++v54;
              goto LABEL_28;
            }
            PsGetHostSilo();
            v20 += v54;
          }
          v58 = v28 & 0xFFFFFFF8;
          v54 = 1LL;
        }
      }
LABEL_28:
      ++v28;
    }
    while ( v28 <= (int)v21 );
    v30 = v54;
    if ( v54 )
    {
      PsGetHostSilo();
      v20 += v30;
      v58 = -1;
      v54 = 0LL;
    }
    v16 = a7;
    v31 = v52;
    v22 = v50 + 1;
    v32 = v53;
    *a7 >>= 1;
    a7[1] >>= 1;
    v49 >>= 9;
    v17 = v55;
    v14 = a4;
    LODWORD(v19) = v31 >> 9;
    LODWORD(v21) = v32 >> 9;
    v50 = v22;
  }
  while ( v22 < 3 );
  if ( v20 )
    MiUpdateChargedWsles(a3 + 1280);
  if ( v18 )
    *(_DWORD *)(v17 + 100) -= v18;
  result = (unsigned int)(v18 + v20);
  if ( (_DWORD)result )
  {
    ProcessPartition = MiGetProcessPartition(a3);
    MiReturnCommit(ProcessPartition, (unsigned int)(v18 + v20));
    return MiReturnFullProcessCharges(a3, (unsigned int)(v18 + v20));
  }
  return result;
}
