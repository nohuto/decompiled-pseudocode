/*
 * XREFs of MiObtainDynamicVa @ 0x1400F6200
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MiObtainSystemVa @ 0x1400F61D8 (MiObtainSystemVa.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x1400C2EE0 (RtlSetBitsEx.c)
 *     MiReclaimSystemVa @ 0x1400F74B0 (MiReclaimSystemVa.c)
 *     MiExtendDynamicBitMap @ 0x140157140 (MiExtendDynamicBitMap.c)
 */

unsigned __int64 __fastcall MiObtainDynamicVa(__int64 *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r14d
  __int64 *v4; // r13
  unsigned __int64 v5; // r15
  __int64 *v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 *v15; // r8
  signed __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // r12
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // r14
  unsigned __int64 *v29; // r8
  signed __int64 v30; // r9
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rdi
  int v35; // r14d
  __int64 v37; // rdx
  unsigned __int64 *v38; // rdi
  bool v39; // zf
  __int64 v40; // rax
  unsigned int v41; // r10d
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 *v47; // rsi
  __int64 v48; // rax
  unsigned int v49; // r10d
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // r10
  __int64 v58; // rax
  unsigned int v59; // ecx
  unsigned __int64 v60; // r10
  __int64 v61; // rax
  unsigned int v62; // ecx
  __int64 v63; // rdx
  unsigned __int64 *v64; // r9
  __int64 v65; // rdx
  unsigned __int64 *v66; // r9
  unsigned int v67; // r9d
  __int64 v68; // rcx
  unsigned int v69; // r9d
  __int64 v70; // rcx
  bool v71; // sf
  __int64 v72; // rcx
  unsigned int v73; // eax
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rax
  bool v76; // sf
  __int64 v77; // rcx
  unsigned int v78; // eax
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // r10
  __int64 v82; // [rsp+28h] [rbp-69h]
  __int64 v83; // [rsp+28h] [rbp-69h]
  unsigned __int64 v84; // [rsp+30h] [rbp-61h]
  unsigned __int64 v85; // [rsp+30h] [rbp-61h]
  __int64 *v86; // [rsp+60h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-11h] BYREF
  _QWORD v88[10]; // [rsp+98h] [rbp+7h] BYREF
  int v91; // [rsp+108h] [rbp+77h]

  v91 = a3;
  v3 = a2;
  v4 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = v4[3];
      v6 = v4;
      v86 = v4;
      if ( a3 == 14 )
      {
        v6 = v88;
        v86 = v88;
        v54 = v4[1] + 8 * ((unsigned __int64)v4[2] >> 6);
        v5 = v4[6];
        v88[0] = v4[5];
        v88[1] = v54 - 8LL * (v88[0] >> 6);
      }
      if ( *v6 )
      {
        v7 = *v6;
        v8 = v6[1];
        v9 = v3;
        LODWORD(v10) = v3;
        v11 = v5 & -(__int64)(v5 < *v6);
        v82 = *v6;
        v84 = v11;
        v12 = *v6 - 1;
        if ( v3 )
        {
          while ( v12 - v11 + 1 < v9 )
          {
            v18 = -1LL;
            v10 = v9;
LABEL_76:
            if ( !v84 )
            {
LABEL_15:
              v4 = a1;
              v19 = v18;
              v6 = v86;
              v3 = a2;
              v85 = v18;
              goto LABEL_16;
            }
            v56 = v10 + v5;
            if ( v10 + v5 > v7 )
              v56 = v7;
            v12 = v56 - 1;
            v11 = 0LL;
            v84 = 0LL;
          }
          v13 = v12 - v9 + 1;
          v14 = v8 + 8 * (v13 >> 6);
          v15 = (unsigned __int64 *)(v8 + 8 * (v11 >> 6));
          v16 = ((1LL << (v11 & 0x3F)) - 1) | *v15;
          if ( v9 <= 0x7F )
          {
            if ( v9 >= 0x40 )
            {
              do
              {
LABEL_137:
                v71 = v16 < 0;
                do
                {
                  if ( v71 )
                  {
                    if ( (unsigned __int64)++v15 > v14 )
                    {
LABEL_82:
                      v10 = v9;
                      goto LABEL_83;
                    }
                    v16 = *v15;
                    goto LABEL_137;
                  }
                  v39 = !_BitScanReverse64((unsigned __int64 *)&v72, v16);
                  if ( v39 )
                    v73 = 64;
                  else
                    v73 = 63 - v72;
                  v18 = (((((__int64)v15 - v8) >> 3) + 1) << 6) - v73;
                  if ( v18 > v13 )
                    goto LABEL_82;
                  v74 = v9 - v73;
                  if ( v9 == v73 )
                    goto LABEL_149;
                  v16 = *++v15;
                  if ( v74 < 0x40 )
                    goto LABEL_146;
                  v71 = v16 < 0;
                }
                while ( v16 );
                v74 -= 64LL;
                if ( !v74 )
                  break;
                v16 = *++v15;
LABEL_146:
                v39 = !_BitScanForward64(&v75, v16);
                if ( v39 )
                  v75 = 64LL;
              }
              while ( v75 < v74 );
LABEL_149:
              v10 = v9;
            }
            else
            {
              if ( v9 <= 1 )
              {
                while ( v16 == -1 )
                {
                  if ( (unsigned __int64)++v15 > v14 )
                    goto LABEL_82;
                  v16 = *v15;
                }
                v10 = v9;
                _BitScanForward64(&v17, ~v16);
                v18 = v17 + (((__int64)v15 - v8) >> 3 << 6);
                if ( v18 <= v13 )
                  goto LABEL_14;
LABEL_83:
                v18 = -1LL;
LABEL_75:
                v7 = v82;
                goto LABEL_76;
              }
              v37 = 0LL;
              v38 = (unsigned __int64 *)(v8 + 8 * (v12 >> 6));
              while ( 1 )
              {
                if ( v16 == -1 )
                {
                  while ( (unsigned __int64)++v15 <= v14 )
                  {
                    v16 = *v15;
                    if ( *v15 != -1LL )
                    {
                      v37 = 0LL;
                      goto LABEL_37;
                    }
                  }
LABEL_74:
                  v18 = -1LL;
                  v10 = v9;
                  goto LABEL_75;
                }
LABEL_37:
                v39 = !_BitScanForward64((unsigned __int64 *)&v40, v16);
                if ( v39 )
                  LODWORD(v40) = 64;
                if ( (unsigned int)(v37 + v40) >= v9 )
                  break;
                v41 = v10;
                v42 = ~v16;
                while ( 1 )
                {
                  v42 &= v42 >> (v41 >> 1);
                  if ( !v42 )
                    break;
                  v41 -= v41 >> 1;
                  if ( v41 <= 1 )
                  {
                    _BitScanForward64(&v43, v42);
                    v44 = (unsigned int)v43;
                    goto LABEL_44;
                  }
                }
                if ( v15 == v38 )
                  goto LABEL_74;
                v39 = !_BitScanReverse64((unsigned __int64 *)&v45, v16);
                if ( v39 )
                  v37 = 64LL;
                else
                  v37 = (unsigned int)(63 - v45);
                v16 = *++v15;
              }
              v44 = -v37;
LABEL_44:
              v10 = v9;
              v18 = (((__int64)v15 - v8) >> 3 << 6) + v44;
              if ( v18 > v13 )
              {
LABEL_45:
                v18 = -1LL;
                goto LABEL_75;
              }
            }
LABEL_14:
            if ( v18 != -1LL )
              goto LABEL_15;
            goto LABEL_75;
          }
          v57 = v14 + 8;
          v10 = v9;
          if ( (v13 & 0x3F) == 0 )
            v57 = v8 + 8 * (v13 >> 6);
          if ( v16 )
          {
            if ( *++v15 )
              goto LABEL_102;
            v39 = !_BitScanReverse64((unsigned __int64 *)&v58, v16);
            if ( v39 )
              v59 = 64;
            else
              v59 = 63 - v58;
          }
          else
          {
            v59 = 0;
          }
          while ( 1 )
          {
            v18 = (((__int64)v15 - v8) >> 3 << 6) - v59;
            if ( v18 > v13 )
              goto LABEL_45;
            v64 = &v15[(v9 - v59) >> 6];
            while ( ++v15 != v64 )
            {
              if ( *v15 )
                goto LABEL_102;
            }
            v67 = ((_BYTE)v9 - (_BYTE)v59) & 0x3F;
            if ( (((_BYTE)v9 - (_BYTE)v59) & 0x3F) == 0 )
              goto LABEL_14;
            v39 = !_BitScanForward64((unsigned __int64 *)&v68, *v15);
            if ( v39 )
              LODWORD(v68) = 64;
            if ( (unsigned int)v68 >= v67 )
              goto LABEL_14;
            do
            {
LABEL_102:
              if ( (unsigned __int64)v15 > v57 )
              {
                v18 = -1LL;
                goto LABEL_75;
              }
              ++v15;
            }
            while ( *v15 );
            v39 = !_BitScanReverse64((unsigned __int64 *)&v63, *(v15 - 1));
            if ( v39 )
              v59 = 64;
            else
              v59 = 63 - v63;
          }
        }
        v19 = v11 & 0xFFFFFFFFFFFFFFF8uLL;
        v85 = v19;
LABEL_16:
        if ( v19 != -1LL )
          break;
      }
      if ( !(unsigned int)MiExtendDynamicBitMap(v4, v6) )
        return 0LL;
      a3 = v91;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4 + 8, &LockHandle);
    v20 = *v6;
    v21 = v85;
    v22 = v6[1];
    v23 = v3;
    LODWORD(v24) = v3;
    v25 = v85 & -(__int64)(v85 < *v6);
    v83 = *v6;
    v26 = *v6 - 1;
    if ( v3 )
    {
      while ( v26 - v25 + 1 < v23 )
      {
        v32 = -1LL;
        v24 = v23;
LABEL_178:
        if ( !v25 )
        {
LABEL_27:
          v4 = a1;
          v33 = v32;
          v6 = v86;
          v3 = a2;
          goto LABEL_28;
        }
        v81 = v24 + v21;
        if ( v24 + v21 > v20 )
          v81 = v20;
        v26 = v81 - 1;
        v25 = 0LL;
      }
      v27 = v26 - v23 + 1;
      v28 = v22 + 8 * (v27 >> 6);
      v29 = (unsigned __int64 *)(v22 + 8 * (v25 >> 6));
      v30 = ((1LL << (v25 & 0x3F)) - 1) | *v29;
      if ( v23 <= 0x7F )
      {
        if ( v23 >= 0x40 )
        {
          do
          {
LABEL_153:
            v76 = v30 < 0;
            do
            {
              if ( v76 )
              {
                if ( (unsigned __int64)++v29 > v28 )
                {
LABEL_84:
                  v24 = v23;
                  goto LABEL_85;
                }
                v30 = *v29;
                goto LABEL_153;
              }
              v39 = !_BitScanReverse64((unsigned __int64 *)&v77, v30);
              if ( v39 )
                v78 = 64;
              else
                v78 = 63 - v77;
              v32 = (((((__int64)v29 - v22) >> 3) + 1) << 6) - v78;
              if ( v32 > v27 )
                goto LABEL_84;
              v79 = v23 - v78;
              if ( v23 == v78 )
                goto LABEL_165;
              v30 = *++v29;
              if ( v79 < 0x40 )
                goto LABEL_162;
              v76 = v30 < 0;
            }
            while ( v30 );
            v79 -= 64LL;
            if ( !v79 )
              break;
            v30 = *++v29;
LABEL_162:
            v39 = !_BitScanForward64(&v80, v30);
            if ( v39 )
              v80 = 64LL;
          }
          while ( v80 < v79 );
LABEL_165:
          v24 = v23;
        }
        else
        {
          if ( v23 <= 1 )
          {
            while ( v30 == -1 )
            {
              if ( (unsigned __int64)++v29 > v28 )
                goto LABEL_84;
              v30 = *v29;
            }
            v24 = v23;
            _BitScanForward64(&v31, ~v30);
            v32 = v31 + (((__int64)v29 - v22) >> 3 << 6);
            if ( v32 <= v27 )
              goto LABEL_26;
LABEL_85:
            v32 = -1LL;
LABEL_81:
            v21 = v85;
            v20 = v83;
            goto LABEL_178;
          }
          v46 = 0LL;
          v47 = (unsigned __int64 *)(v22 + 8 * (v26 >> 6));
          while ( 1 )
          {
            if ( v30 == -1 )
            {
              while ( (unsigned __int64)++v29 <= v28 )
              {
                v30 = *v29;
                if ( *v29 != -1LL )
                {
                  v46 = 0LL;
                  goto LABEL_52;
                }
              }
LABEL_80:
              v32 = -1LL;
              v24 = v23;
              goto LABEL_81;
            }
LABEL_52:
            v39 = !_BitScanForward64((unsigned __int64 *)&v48, v30);
            if ( v39 )
              LODWORD(v48) = 64;
            if ( (unsigned int)(v46 + v48) >= v23 )
              break;
            v49 = v24;
            v50 = ~v30;
            while ( 1 )
            {
              v50 &= v50 >> (v49 >> 1);
              if ( !v50 )
                break;
              v49 -= v49 >> 1;
              if ( v49 <= 1 )
              {
                _BitScanForward64(&v51, v50);
                v52 = (unsigned int)v51;
                goto LABEL_59;
              }
            }
            if ( v29 == v47 )
              goto LABEL_80;
            v39 = !_BitScanReverse64((unsigned __int64 *)&v53, v30);
            if ( v39 )
              v46 = 64LL;
            else
              v46 = (unsigned int)(63 - v53);
            v30 = *++v29;
          }
          v52 = -v46;
LABEL_59:
          v24 = v23;
          v32 = (((__int64)v29 - v22) >> 3 << 6) + v52;
          if ( v32 > v27 )
          {
LABEL_60:
            v32 = -1LL;
            goto LABEL_81;
          }
        }
LABEL_26:
        if ( v32 != -1LL )
          goto LABEL_27;
        goto LABEL_81;
      }
      v60 = v28 + 8;
      v24 = v23;
      if ( (v27 & 0x3F) == 0 )
        v60 = v22 + 8 * (v27 >> 6);
      if ( v30 )
      {
        if ( *++v29 )
          goto LABEL_112;
        v39 = !_BitScanReverse64((unsigned __int64 *)&v61, v30);
        if ( v39 )
          v62 = 64;
        else
          v62 = 63 - v61;
      }
      else
      {
        v62 = 0;
      }
      while ( 1 )
      {
        v32 = (((__int64)v29 - v22) >> 3 << 6) - v62;
        if ( v32 > v27 )
          goto LABEL_60;
        v66 = &v29[(v23 - v62) >> 6];
        while ( ++v29 != v66 )
        {
          if ( *v29 )
            goto LABEL_112;
        }
        v69 = ((_BYTE)v23 - (_BYTE)v62) & 0x3F;
        if ( (((_BYTE)v23 - (_BYTE)v62) & 0x3F) == 0 )
          goto LABEL_26;
        v39 = !_BitScanForward64((unsigned __int64 *)&v70, *v29);
        if ( v39 )
          LODWORD(v70) = 64;
        if ( (unsigned int)v70 >= v69 )
          goto LABEL_26;
        do
        {
LABEL_112:
          if ( (unsigned __int64)v29 > v60 )
          {
            v32 = -1LL;
            goto LABEL_81;
          }
          ++v29;
        }
        while ( *v29 );
        v39 = !_BitScanReverse64((unsigned __int64 *)&v65, *(v29 - 1));
        if ( v39 )
          v62 = 64;
        else
          v62 = 63 - v65;
      }
    }
    v33 = v25 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_28:
    if ( v33 != -1LL )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( !(unsigned int)MiExtendDynamicBitMap(v4, v6) )
      return 0LL;
    a3 = v91;
    v3 = a2;
  }
  v34 = v3;
  RtlSetBitsEx((__int64)v6, v33, v3);
  v35 = v91;
  if ( v91 == 14 )
  {
    v55 = 8 * (v6[1] - v4[1]);
    if ( a2 == 1 )
      v4[6] = v33 + 1;
    v33 += v55;
    v35 = 9;
  }
  else if ( a2 == 1 )
  {
    v4[3] = v33 + 1;
  }
  if ( v4 == &qword_140388808 )
  {
    qword_140388608 -= v34 << 21;
    MiReclaimSystemVa(0LL);
  }
  _InterlockedExchangeAdd64(&qword_140389950[v35], v34);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v4[4] + (v33 << 21);
}
