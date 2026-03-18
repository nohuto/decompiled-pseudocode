/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x140499780
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1400365E0 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiVadDeleted @ 0x14003D4D0 (MiVadDeleted.c)
 *     MiIsVadLarge @ 0x14003D7C0 (MiIsVadLarge.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 *     MiCreateSystemWsles @ 0x14005C00C (MiCreateSystemWsles.c)
 *     RtlAreBitsClear @ 0x1400AFA40 (RtlAreBitsClear.c)
 *     MiBitmapRangeZero @ 0x140114300 (MiBitmapRangeZero.c)
 *     MiUpdateChargedWsles @ 0x1402159CC (MiUpdateChargedWsles.c)
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
  __int64 v8; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // r11
  __int64 v16; // r8
  _BYTE *v17; // r12
  __int64 v18; // r9
  int v19; // r14d
  unsigned __int64 v20; // rdi
  int v21; // r13d
  unsigned __int64 v22; // rsi
  unsigned int v23; // r10d
  int v24; // ebp
  bool v25; // zf
  char v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // r11
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // r15
  int v32; // ebx
  int v33; // edi
  int v34; // esi
  unsigned __int64 v35; // r11
  char v36; // r8
  __int64 v37; // rcx
  unsigned __int64 v38; // r11
  __int64 v39; // rax
  __int64 ProcessPartition; // rax
  int v41; // eax
  _QWORD **v42; // rax
  unsigned __int64 v43; // rcx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned int v48; // r14d
  unsigned int v49; // [rsp+20h] [rbp-68h]
  int v50; // [rsp+24h] [rbp-64h] BYREF
  int v51; // [rsp+28h] [rbp-60h]
  unsigned int v52; // [rsp+2Ch] [rbp-5Ch]
  __int64 v53; // [rsp+30h] [rbp-58h]
  int IsVadLarge; // [rsp+38h] [rbp-50h]
  int v55; // [rsp+3Ch] [rbp-4Ch]
  int v56; // [rsp+40h] [rbp-48h]
  __int64 v57; // [rsp+48h] [rbp-40h]
  int v60; // [rsp+B8h] [rbp+30h]

  v8 = a3;
  v10 = *(unsigned int *)(a6 + 52);
  LODWORD(v10) = v10 & 0x7FFFFFFF;
  v11 = v10 | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 31);
  result = 0x7FFFFFFFELL;
  if ( v11 > 0x7FFFFFFFELL )
    return result;
  IsVadLarge = MiIsVadLarge(a6);
  v14 = MiVadPureReserve(v13);
  v17 = a7;
  v18 = *(_QWORD *)(v16 + 1296) + 40LL;
  v19 = 0;
  v20 = a1 >> 21;
  v21 = 0;
  v22 = a2 >> 21;
  v23 = 0;
  v53 = 0LL;
  v52 = 0;
  v24 = v14;
  v60 = 0;
  v51 = 1023;
  v49 = -1;
  v57 = v18;
  do
  {
    v25 = *v17 == 0;
    v55 = v20;
    v56 = v22;
    if ( v25 )
    {
LABEL_4:
      LODWORD(v20) = v20 + 1;
    }
    else if ( v15 )
    {
      v26 = 9 * v23;
      while ( ((*(_DWORD *)(v15 + 28) >> 9) | (*(unsigned __int8 *)(v15 + 33) << 23)) >> v26 == (_DWORD)v20 )
      {
        if ( (unsigned int)MiVadDeleted(v15) == 1
          || !(unsigned int)MiVadPureReserve(v27)
          || (v29 = *(unsigned int *)(v28 + 52),
              LODWORD(v29) = v29 & 0x7FFFFFFF,
              (v29 | ((unsigned __int64)*(unsigned __int8 *)(v28 + 34) << 31)) < 0x7FFFFFFFFLL) )
        {
          *v17 = 0;
          goto LABEL_4;
        }
        v45 = *(_QWORD *)v28;
        v46 = v28;
        if ( *(_QWORD *)v28 )
        {
          v15 = *(_QWORD *)v28;
          a4 = v45;
          v47 = *(_QWORD *)(v45 + 8);
          if ( v47 )
          {
            do
            {
              a4 = v47;
              v47 = *(_QWORD *)(v47 + 8);
            }
            while ( v47 );
            v19 = v60;
            v15 = a4;
          }
        }
        else
        {
          v15 = *(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          a4 = v15;
          if ( v15 )
          {
            do
            {
              if ( *(_QWORD *)(v15 + 8) == v46 )
                break;
              v46 = v15;
              v15 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            }
            while ( v15 );
            a4 = v15;
          }
        }
        if ( !v15 )
          break;
      }
    }
    if ( v17[1] )
    {
      v35 = (unsigned __int64)a5;
      if ( a5 )
      {
        v36 = 9 * v23;
        while ( ((*(_DWORD *)(v35 + 24) >> 9) | (*(unsigned __int8 *)(v35 + 32) << 23)) >> v36 == (_DWORD)v22 )
        {
          if ( (unsigned int)MiVadDeleted(v35) == 1
            || !(unsigned int)MiVadPureReserve(v37)
            || (v39 = *(unsigned int *)(v38 + 52),
                LODWORD(v39) = v39 & 0x7FFFFFFF,
                (v39 | ((unsigned __int64)*(unsigned __int8 *)(v38 + 34) << 31)) < 0x7FFFFFFFFLL) )
          {
            v17[1] = 0;
            goto LABEL_6;
          }
          v42 = *(_QWORD ***)(v38 + 8);
          v43 = v38;
          if ( v42 )
          {
            v35 = *(_QWORD *)(v38 + 8);
            a5 = v42;
            v44 = *v42;
            if ( v44 )
            {
              do
              {
                a5 = v44;
                v44 = (_QWORD *)*v44;
              }
              while ( v44 );
              v18 = v57;
              v35 = (unsigned __int64)a5;
            }
          }
          else
          {
            v35 = *(_QWORD *)(v38 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            a5 = (_QWORD *)v35;
            if ( v35 )
            {
              do
              {
                if ( *(_QWORD *)v35 == v43 )
                  break;
                v43 = v35;
                v35 = *(_QWORD *)(v35 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v35 );
              a5 = (_QWORD *)v35;
            }
          }
          if ( !v35 )
            break;
        }
      }
    }
    else
    {
LABEL_6:
      LODWORD(v22) = v22 - 1;
    }
    if ( (int)v20 > (int)v22 )
      break;
    if ( (!IsVadLarge || v23) && !v24 )
      v21 += v22 - v20 + 1;
    v50 = v20;
    v30 = v20;
    v31 = v18 + 16LL * (2 - v23);
    do
    {
      if ( v24 )
      {
        if ( v30 == (_DWORD)v20 )
        {
          v41 = MiBitmapRangeZero(v31 + 312, v30, &v50);
          LODWORD(v20) = v50;
          if ( v41 == 1 )
          {
            v30 = v50 - 1;
            goto LABEL_29;
          }
        }
        if ( !_bittest(*(const signed __int32 **)(v31 + 320), v30) )
          goto LABEL_29;
        ++v21;
      }
      _bittestandreset(*(signed __int32 **)(v31 + 320), v30);
      if ( !(unsigned int)MiCreateSystemWsles() && (v30 == (_DWORD)v22 || (v30 & 7) == 7 || v24) )
      {
        v48 = v30 & 0xFFFFFFF8;
        if ( RtlAreBitsClear((PRTL_BITMAP)(v31 + 312), v30 & 0xFFFFFFF8, 8u) != 1
          || (*(_DWORD *)(a3 + 1740) & 1) == 0 && v48 == (v51 & 0xFFFFFFF8) )
        {
          goto LABEL_80;
        }
        if ( v52 )
        {
          v19 = ++v60;
          goto LABEL_29;
        }
        if ( v49 == -1 )
        {
          v49 = v30 & 0xFFFFFFF8;
          v53 = 1LL;
LABEL_80:
          v19 = v60;
          goto LABEL_29;
        }
        if ( v49 + 8 * v53 == v48 )
        {
          ++v53;
          goto LABEL_80;
        }
        PsGetHostSilo();
        v49 = v30 & 0xFFFFFFF8;
        v19 = v53 + v60;
        v53 = 1LL;
        v60 = v19;
      }
LABEL_29:
      ++v30;
    }
    while ( v30 <= (int)v22 );
    v32 = v53;
    v17 = a7;
    v8 = a3;
    if ( v53 )
    {
      PsGetHostSilo();
      v19 += v32;
      v49 = -1;
      v60 = v19;
      v53 = 0LL;
    }
    v33 = v55;
    v23 = v52 + 1;
    v34 = v56;
    *a7 >>= 1;
    a7[1] >>= 1;
    v51 >>= 9;
    v18 = v57;
    v15 = a4;
    LODWORD(v20) = v33 >> 9;
    LODWORD(v22) = v34 >> 9;
    v52 = v23;
  }
  while ( v23 < 3 );
  if ( v19 )
    MiUpdateChargedWsles(v8 + 1280);
  if ( v21 )
    *(_DWORD *)(v18 + 100) -= v21;
  result = (unsigned int)(v19 + v21);
  if ( (_DWORD)result )
  {
    ProcessPartition = MiGetProcessPartition(v8);
    MiReturnCommit(ProcessPartition, (unsigned int)(v19 + v21));
    return MiReturnFullProcessCharges(v8, (unsigned int)(v19 + v21));
  }
  return result;
}
