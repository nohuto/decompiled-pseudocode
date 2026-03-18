/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x1404AF230
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 * Callees:
 *     RtlAreBitsClear @ 0x140006FE0 (RtlAreBitsClear.c)
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiIsVadLarge @ 0x14000BFC0 (MiIsVadLarge.c)
 *     MiVadPureReserve @ 0x14000BFF0 (MiVadPureReserve.c)
 *     MiBitmapRangeZero @ 0x14003C6C0 (MiBitmapRangeZero.c)
 *     MiReturnFullProcessCharges @ 0x14003E5A0 (MiReturnFullProcessCharges.c)
 *     MiCreateSystemWsles @ 0x14006A794 (MiCreateSystemWsles.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiUpdateChargedWsles @ 0x14026BA14 (MiUpdateChargedWsles.c)
 */

__int64 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *i,
        __int64 a6,
        _BYTE *a7)
{
  __int64 v9; // rax
  unsigned __int64 v10; // r10
  __int64 result; // rax
  int IsVadLarge; // ebx
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // r11
  __int64 v16; // r8
  _BYTE *v17; // rbp
  __int64 v18; // r9
  int v19; // r12d
  unsigned __int64 v20; // rdi
  int v21; // r13d
  unsigned __int64 v22; // rsi
  unsigned int v23; // r10d
  int v24; // r14d
  char v25; // al
  int v26; // ebx
  __int64 v27; // r15
  int v28; // edi
  int v29; // eax
  char v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 v34; // r11
  char v35; // r8
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  _QWORD **v39; // rax
  unsigned __int64 v40; // rcx
  __int64 ProcessPartition; // rax
  int v42; // eax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  _QWORD *v46; // rcx
  unsigned int v47; // ebp
  int v48; // edx
  int v49; // ecx
  int v50; // [rsp+20h] [rbp-68h] BYREF
  int v51; // [rsp+24h] [rbp-64h]
  unsigned int v52; // [rsp+28h] [rbp-60h]
  int v53; // [rsp+2Ch] [rbp-5Ch]
  int v54; // [rsp+30h] [rbp-58h]
  int v55; // [rsp+34h] [rbp-54h]
  __int64 v56; // [rsp+38h] [rbp-50h]
  __int64 v57; // [rsp+40h] [rbp-48h]
  unsigned int v60; // [rsp+B8h] [rbp+30h]

  v9 = *(unsigned int *)(a6 + 52);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  v10 = v9 | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 31);
  result = 0x7FFFFFFFELL;
  if ( v10 >= 0x7FFFFFFFDLL && v10 != 0x7FFFFFFFELL )
    return result;
  IsVadLarge = MiIsVadLarge(a6);
  v55 = IsVadLarge;
  v14 = MiVadPureReserve(v13);
  v17 = a7;
  v18 = *(_QWORD *)(v16 + 1296) + 48LL;
  v19 = 0;
  v20 = a1 >> 21;
  v21 = 0;
  v22 = a2 >> 21;
  v23 = 0;
  v57 = v18;
  v24 = v14;
  v52 = 0;
  v25 = *a7;
  v51 = 1023;
  v60 = -1;
  v56 = 0LL;
  do
  {
    v53 = v20;
    v54 = v22;
    if ( v25 )
    {
      if ( v15 )
      {
        v30 = 9 * v23;
        while ( ((*(_DWORD *)(v15 + 28) >> 9) | (*(unsigned __int8 *)(v15 + 33) << 23)) >> v30 == (_DWORD)v20 )
        {
          v31 = *(unsigned int *)(v15 + 52);
          LODWORD(v31) = v31 & 0x7FFFFFFF;
          v32 = v31 | ((unsigned __int64)*(unsigned __int8 *)(v15 + 34) << 31);
          if ( (v32 < 0x7FFFFFFFDLL || v32 == 0x7FFFFFFFELL)
            && ((unsigned int)MiVadDeleted(v15) == 1 || !(unsigned int)MiVadPureReserve(v33)) )
          {
            *v17 = 0;
            goto LABEL_4;
          }
          v43 = *(_QWORD *)v15;
          v44 = v15;
          if ( *(_QWORD *)v15 )
          {
            v15 = *(_QWORD *)v15;
            a4 = v43;
            v45 = *(_QWORD *)(v43 + 8);
            if ( v45 )
            {
              do
              {
                a4 = v45;
                v45 = *(_QWORD *)(v45 + 8);
              }
              while ( v45 );
              v18 = v57;
              v15 = a4;
            }
          }
          else
          {
            v15 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            a4 = v15;
            if ( v15 )
            {
              do
              {
                if ( *(_QWORD *)(v15 + 8) == v44 )
                  break;
                v44 = v15;
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
    }
    else
    {
LABEL_4:
      LODWORD(v20) = v20 + 1;
    }
    if ( v17[1] )
    {
      v34 = (unsigned __int64)i;
      if ( i )
      {
        v35 = 9 * v23;
        while ( ((*(_DWORD *)(v34 + 24) >> 9) | (*(unsigned __int8 *)(v34 + 32) << 23)) >> v35 == (_DWORD)v22 )
        {
          v36 = *(unsigned int *)(v34 + 52);
          LODWORD(v36) = v36 & 0x7FFFFFFF;
          v37 = v36 | ((unsigned __int64)*(unsigned __int8 *)(v34 + 34) << 31);
          if ( (v37 < 0x7FFFFFFFDLL || v37 == 0x7FFFFFFFELL)
            && ((unsigned int)MiVadDeleted(v34) == 1 || !(unsigned int)MiVadPureReserve(v38)) )
          {
            v17[1] = 0;
            goto LABEL_6;
          }
          v39 = *(_QWORD ***)(v34 + 8);
          v40 = v34;
          if ( v39 )
          {
            v46 = *v39;
            v34 = *(_QWORD *)(v34 + 8);
            for ( i = v39; v46; v46 = (_QWORD *)*v46 )
            {
              v34 = (unsigned __int64)v46;
              i = v46;
            }
          }
          else
          {
            v34 = *(_QWORD *)(v34 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            i = (_QWORD *)v34;
            if ( v34 )
            {
              do
              {
                if ( *(_QWORD *)v34 == v40 )
                  break;
                v40 = v34;
                v34 = *(_QWORD *)(v34 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v34 );
              i = (_QWORD *)v34;
            }
          }
          if ( !v34 )
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
      v19 += v22 - v20 + 1;
    v50 = v20;
    v26 = v20;
    v27 = v18 + 16LL * (2 - v23);
    do
    {
      if ( v24 )
      {
        if ( v26 == (_DWORD)v20 )
        {
          v42 = MiBitmapRangeZero(v27 + 408, v26, &v50);
          LODWORD(v20) = v50;
          if ( v42 == 1 )
          {
            v26 = v50 - 1;
            goto LABEL_22;
          }
        }
        if ( !_bittest(*(const signed __int32 **)(v27 + 416), v26) )
          goto LABEL_22;
        ++v19;
      }
      _bittestandreset(*(signed __int32 **)(v27 + 416), v26);
      if ( !(unsigned int)MiCreateSystemWsles() && (v26 == (_DWORD)v22 || (v26 & 7) == 7 || v24) )
      {
        v47 = v26 & 0xFFFFFFF8;
        if ( RtlAreBitsClear((PRTL_BITMAP)(v27 + 408), v26 & 0xFFFFFFF8, 8u) == 1
          && ((*(_DWORD *)(a3 + 1740) & 1) != 0 || v47 != (v51 & 0xFFFFFFF8)) )
        {
          if ( v52 )
          {
            ++v21;
            goto LABEL_22;
          }
          if ( v60 != -1 )
          {
            if ( v60 + 8 * v56 == v47 )
            {
              ++v56;
              goto LABEL_22;
            }
            PsGetHostSilo();
            v21 += v48;
          }
          v60 = v26 & 0xFFFFFFF8;
          v56 = 1LL;
        }
      }
LABEL_22:
      ++v26;
    }
    while ( v26 <= (int)v22 );
    if ( v56 )
    {
      PsGetHostSilo();
      v21 += v49;
      v60 = -1;
      v56 = 0LL;
    }
    v17 = a7;
    v28 = v53;
    v23 = v52 + 1;
    v29 = v54;
    *a7 >>= 1;
    a7[1] >>= 1;
    v51 >>= 9;
    v18 = v57;
    v15 = a4;
    IsVadLarge = v55;
    LODWORD(v20) = v28 >> 9;
    LODWORD(v22) = v29 >> 9;
    v25 = *a7;
    v52 = v23;
  }
  while ( v23 < 3 );
  if ( v21 )
    MiUpdateChargedWsles(a3 + 1280);
  if ( v19 )
    *(_DWORD *)(v18 + 180) -= v19;
  result = (unsigned int)(v19 + v21);
  if ( (_DWORD)result )
  {
    ProcessPartition = MiGetProcessPartition(a3);
    MiReturnCommit(ProcessPartition, (unsigned int)(v19 + v21));
    return MiReturnFullProcessCharges(a3, (unsigned int)(v19 + v21));
  }
  return result;
}
