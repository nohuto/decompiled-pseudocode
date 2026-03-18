/*
 * XREFs of MiObtainDynamicVa @ 0x140128308
 * Callers:
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MiObtainSystemVa @ 0x1401282A4 (MiObtainSystemVa.c)
 *     MiGetLargePageWorkMapping @ 0x140158B08 (MiGetLargePageWorkMapping.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x1400AECC0 (RtlSetBitsEx.c)
 *     MiReclaimSystemVa @ 0x140128B70 (MiReclaimSystemVa.c)
 *     MiExtendDynamicBitMap @ 0x14016522C (MiExtendDynamicBitMap.c)
 *     MiFindClearBitsAlignedEx @ 0x140167238 (MiFindClearBitsAlignedEx.c)
 */

__int64 __fastcall MiObtainDynamicVa(__int64 *a1, unsigned int a2, int a3, int a4)
{
  int v4; // ebx
  unsigned int v5; // r13d
  __int64 *v6; // r12
  unsigned __int64 v7; // r15
  __int64 *v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned __int64 *v16; // r8
  signed __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rcx
  __int64 v22; // r15
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdi
  unsigned __int64 *v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 ClearBitsAligned; // rbx
  int v32; // r14d
  __int64 v34; // rdx
  unsigned __int64 *v35; // r11
  bool v36; // zf
  __int64 v37; // rax
  unsigned int v38; // r10d
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 *v44; // r11
  __int64 v45; // rax
  unsigned int v46; // r10d
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // r10
  bool v54; // sf
  __int64 v55; // rcx
  unsigned int v56; // eax
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  bool v59; // sf
  __int64 v60; // rcx
  unsigned int v61; // eax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r10
  __int64 v65; // rax
  unsigned int v66; // ecx
  unsigned __int64 v67; // r10
  __int64 v68; // rax
  unsigned int v69; // ecx
  __int64 v70; // rdx
  unsigned __int64 *v71; // r9
  unsigned int v72; // r9d
  __int64 v73; // rcx
  __int64 v74; // rdx
  unsigned __int64 *v75; // r9
  unsigned int v76; // r9d
  __int64 v77; // rcx
  unsigned __int64 v78; // r10
  unsigned __int64 v79; // [rsp+28h] [rbp-69h]
  unsigned __int64 v80; // [rsp+28h] [rbp-69h]
  __int64 *v81; // [rsp+30h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v83[11]; // [rsp+90h] [rbp-1h] BYREF
  int v86; // [rsp+108h] [rbp+77h]

  v86 = a3;
  v4 = a4;
  v5 = a2;
  v6 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = v6[3];
      v8 = v6;
      v81 = v6;
      if ( a3 == 15 )
      {
        v8 = v83;
        v81 = v83;
        v51 = v6[1] + 8 * ((unsigned __int64)v6[2] >> 6);
        v7 = v6[6];
        v83[0] = v6[5];
        v83[1] = v51 - 8LL * (v83[0] >> 6);
      }
      if ( *v8 )
        break;
LABEL_81:
      if ( !(unsigned int)MiExtendDynamicBitMap(v6, v8) )
        return 0LL;
      a3 = v86;
    }
    v9 = v5;
    v10 = *v8;
    v11 = v8[1];
    v12 = v7 & -(__int64)(v7 < *v8);
    v13 = *v8 - 1;
    v79 = v12;
    if ( v9 )
    {
      while ( 1 )
      {
        if ( v13 - v12 + 1 < v9 )
          goto LABEL_73;
        v14 = v13 - v9 + 1;
        v15 = v11 + 8 * (v14 >> 6);
        v16 = (unsigned __int64 *)(v11 + 8 * (v12 >> 6));
        v17 = ((1LL << (v12 & 0x3F)) - 1) | *v16;
        if ( v9 > 0x7F )
          break;
        if ( v9 >= 0x40 )
        {
          do
          {
LABEL_93:
            v54 = v17 < 0;
            do
            {
              if ( v54 )
              {
                if ( (unsigned __int64)++v16 > v15 )
                {
LABEL_83:
                  v19 = -1LL;
                  goto LABEL_84;
                }
                v17 = *v16;
                goto LABEL_93;
              }
              v36 = !_BitScanReverse64((unsigned __int64 *)&v55, v17);
              if ( v36 )
                v56 = 64;
              else
                v56 = 63 - v55;
              v19 = (((((__int64)v16 - v11) >> 3) + 1) << 6) - v56;
              if ( v19 > v14 )
                goto LABEL_83;
              v57 = v9 - v56;
              if ( v9 == v56 )
                goto LABEL_15;
              v17 = *++v16;
              if ( v57 < 0x40 )
                goto LABEL_102;
              v54 = v17 < 0;
            }
            while ( v17 );
            v57 -= 64LL;
            if ( !v57 )
              break;
            v17 = *++v16;
LABEL_102:
            v36 = !_BitScanForward64(&v58, v17);
            if ( v36 )
              v58 = 64LL;
          }
          while ( v58 < v57 );
        }
        else
        {
          if ( v9 > 1 )
          {
            v34 = 0LL;
            v35 = (unsigned __int64 *)(v11 + 8 * (v13 >> 6));
            while ( v17 != -1 )
            {
LABEL_41:
              v36 = !_BitScanForward64((unsigned __int64 *)&v37, v17);
              if ( v36 )
                LODWORD(v37) = 64;
              if ( (unsigned int)(v34 + v37) >= v9 )
              {
                v42 = -v34;
LABEL_52:
                v19 = (((__int64)v16 - v11) >> 3 << 6) + v42;
                goto LABEL_14;
              }
              v38 = v9;
              v39 = ~v17;
              while ( 1 )
              {
                v39 &= v39 >> (v38 >> 1);
                if ( !v39 )
                  break;
                v38 -= v38 >> 1;
                if ( v38 <= 1 )
                {
                  _BitScanForward64(&v41, v39);
                  v42 = (unsigned int)v41;
                  goto LABEL_52;
                }
              }
              if ( v16 == v35 )
                goto LABEL_73;
              v36 = !_BitScanReverse64((unsigned __int64 *)&v40, v17);
              if ( v36 )
                v34 = 64LL;
              else
                v34 = (unsigned int)(63 - v40);
              v17 = *++v16;
            }
            while ( (unsigned __int64)++v16 <= v15 )
            {
              v17 = *v16;
              if ( *v16 != -1LL )
              {
                v34 = 0LL;
                goto LABEL_41;
              }
            }
LABEL_73:
            v19 = -1LL;
            goto LABEL_84;
          }
          while ( v17 == -1 )
          {
            if ( (unsigned __int64)++v16 > v15 )
              goto LABEL_83;
            v17 = *v16;
          }
          _BitScanForward64(&v18, ~v17);
          v19 = v18 + (((__int64)v16 - v11) >> 3 << 6);
LABEL_14:
          if ( v19 > v14 )
            goto LABEL_73;
        }
LABEL_15:
        if ( v19 != -1LL )
          goto LABEL_16;
LABEL_84:
        if ( !v79 )
        {
LABEL_16:
          v6 = a1;
          v20 = v19;
          v8 = v81;
          v4 = a4;
          v80 = v19;
          goto LABEL_17;
        }
        v53 = v9 + v7;
        if ( v9 + v7 > v10 )
          v53 = v10;
        v13 = v53 - 1;
        v12 = 0LL;
        v79 = 0LL;
      }
      v64 = v15 + 8;
      if ( (v14 & 0x3F) == 0 )
        v64 = v11 + 8 * (v14 >> 6);
      if ( v17 )
      {
        if ( *++v16 )
          goto LABEL_134;
        v36 = !_BitScanReverse64((unsigned __int64 *)&v65, v17);
        if ( v36 )
          v66 = 64;
        else
          v66 = 63 - v65;
      }
      else
      {
        v66 = 0;
      }
      while ( 1 )
      {
        v19 = (((__int64)v16 - v11) >> 3 << 6) - v66;
        if ( v19 > v14 )
          goto LABEL_73;
        v71 = &v16[(v9 - v66) >> 6];
        while ( ++v16 != v71 )
        {
          if ( *v16 )
            goto LABEL_134;
        }
        v72 = ((_BYTE)v9 - (_BYTE)v66) & 0x3F;
        if ( (((_BYTE)v9 - (_BYTE)v66) & 0x3F) == 0 )
          goto LABEL_15;
        v36 = !_BitScanForward64((unsigned __int64 *)&v73, *v16);
        if ( v36 )
          LODWORD(v73) = 64;
        if ( (unsigned int)v73 >= v72 )
          goto LABEL_15;
        do
        {
LABEL_134:
          if ( (unsigned __int64)v16 > v64 )
          {
            v19 = -1LL;
            goto LABEL_84;
          }
          ++v16;
        }
        while ( *v16 );
        v36 = !_BitScanReverse64((unsigned __int64 *)&v70, *(v16 - 1));
        if ( v36 )
          v66 = 64;
        else
          v66 = 63 - v70;
      }
    }
    v20 = v12 & 0xFFFFFFFFFFFFFFF8uLL;
    v80 = v20;
LABEL_17:
    if ( v20 == -1LL )
    {
      v5 = a2;
      goto LABEL_81;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v6 + 8, &LockHandle);
    if ( v4 )
    {
      v5 = a2;
      ClearBitsAligned = MiFindClearBitsAlignedEx(v8, a2, v80);
    }
    else
    {
      v21 = v80;
      v22 = v81[1];
      v23 = v80 & -(__int64)(v80 < *v81);
      v24 = *v81 - 1;
      if ( a2 )
      {
        while ( v24 - v23 + 1 < a2 )
        {
          v30 = -1LL;
LABEL_176:
          if ( !v23 )
          {
LABEL_30:
            v6 = a1;
            ClearBitsAligned = v30;
            goto LABEL_31;
          }
          v78 = a2 + v21;
          if ( v78 > *v81 )
            v78 = *v81;
          v24 = v78 - 1;
          v23 = 0LL;
        }
        v25 = v24 - a2 + 1;
        v26 = v22 + 8 * (v25 >> 6);
        v27 = (unsigned __int64 *)(v22 + 8 * (v23 >> 6));
        v28 = ((1LL << (v23 & 0x3F)) - 1) | *v27;
        if ( a2 > 0x7FuLL )
        {
          v67 = v26 + 8;
          if ( (v25 & 0x3F) == 0 )
            v67 = v22 + 8 * (v25 >> 6);
          if ( v28 )
          {
            if ( *++v27 )
              goto LABEL_150;
            v36 = !_BitScanReverse64((unsigned __int64 *)&v68, v28);
            if ( v36 )
              v69 = 64;
            else
              v69 = 63 - v68;
          }
          else
          {
            v69 = 0;
          }
          while ( 1 )
          {
            v30 = (((__int64)v27 - v22) >> 3 << 6) - v69;
            if ( v30 > v25 )
              break;
            v75 = &v27[(a2 - (unsigned __int64)v69) >> 6];
            while ( ++v27 != v75 )
            {
              if ( *v27 )
                goto LABEL_150;
            }
            v76 = ((_BYTE)a2 - (_BYTE)v69) & 0x3F;
            if ( (((_BYTE)a2 - (_BYTE)v69) & 0x3F) == 0 )
              goto LABEL_29;
            v36 = !_BitScanForward64((unsigned __int64 *)&v77, *v27);
            if ( v36 )
              LODWORD(v77) = 64;
            if ( (unsigned int)v77 >= v76 )
              goto LABEL_29;
            do
            {
LABEL_150:
              if ( (unsigned __int64)v27 > v67 )
              {
                v30 = -1LL;
                goto LABEL_75;
              }
              ++v27;
            }
            while ( *v27 );
            v36 = !_BitScanReverse64((unsigned __int64 *)&v74, *(v27 - 1));
            if ( v36 )
              v69 = 64;
            else
              v69 = 63 - v74;
          }
        }
        else
        {
          if ( a2 >= 0x40uLL )
          {
            do
            {
LABEL_109:
              v59 = v28 < 0;
              do
              {
                if ( v59 )
                {
                  if ( (unsigned __int64)++v27 > v26 )
                  {
LABEL_88:
                    v30 = -1LL;
                    goto LABEL_75;
                  }
                  v28 = *v27;
                  goto LABEL_109;
                }
                v36 = !_BitScanReverse64((unsigned __int64 *)&v60, v28);
                if ( v36 )
                  v61 = 64;
                else
                  v61 = 63 - v60;
                v30 = (((((__int64)v27 - v22) >> 3) + 1) << 6) - v61;
                if ( v30 > v25 )
                  goto LABEL_88;
                v62 = a2 - (unsigned __int64)v61;
                if ( a2 == (unsigned __int64)v61 )
                  goto LABEL_29;
                v28 = *++v27;
                if ( v62 < 0x40 )
                  goto LABEL_118;
                v59 = v28 < 0;
              }
              while ( v28 );
              v62 -= 64LL;
              if ( !v62 )
                break;
              v28 = *++v27;
LABEL_118:
              v36 = !_BitScanForward64(&v63, v28);
              if ( v36 )
                v63 = 64LL;
            }
            while ( v63 < v62 );
LABEL_29:
            if ( v30 != -1LL )
              goto LABEL_30;
            goto LABEL_75;
          }
          if ( a2 > 1uLL )
          {
            v43 = 0LL;
            v44 = (unsigned __int64 *)(v22 + 8 * (v24 >> 6));
            while ( v28 != -1 )
            {
LABEL_55:
              v36 = !_BitScanForward64((unsigned __int64 *)&v45, v28);
              if ( v36 )
                LODWORD(v45) = 64;
              if ( (unsigned int)(v43 + v45) >= (unsigned __int64)a2 )
              {
                v50 = -v43;
LABEL_66:
                v30 = (((__int64)v27 - v22) >> 3 << 6) + v50;
                goto LABEL_28;
              }
              v46 = a2;
              v47 = ~v28;
              while ( 1 )
              {
                v47 &= v47 >> (v46 >> 1);
                if ( !v47 )
                  break;
                v46 -= v46 >> 1;
                if ( v46 <= 1 )
                {
                  _BitScanForward64(&v49, v47);
                  v50 = (unsigned int)v49;
                  goto LABEL_66;
                }
              }
              if ( v27 == v44 )
                goto LABEL_74;
              v36 = !_BitScanReverse64((unsigned __int64 *)&v48, v28);
              if ( v36 )
                v43 = 64LL;
              else
                v43 = (unsigned int)(63 - v48);
              v28 = *++v27;
            }
            while ( (unsigned __int64)++v27 <= v26 )
            {
              v28 = *v27;
              if ( *v27 != -1LL )
              {
                v43 = 0LL;
                goto LABEL_55;
              }
            }
          }
          else
          {
            while ( v28 == -1 )
            {
              if ( (unsigned __int64)++v27 > v26 )
                goto LABEL_88;
              v28 = *v27;
            }
            _BitScanForward64(&v29, ~v28);
            v30 = v29 + (((__int64)v27 - v22) >> 3 << 6);
LABEL_28:
            if ( v30 <= v25 )
              goto LABEL_29;
          }
        }
LABEL_74:
        v30 = -1LL;
LABEL_75:
        v21 = v80;
        goto LABEL_176;
      }
      ClearBitsAligned = v23 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_31:
      v8 = v81;
      v5 = a2;
    }
    if ( ClearBitsAligned != -1 )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( !(unsigned int)MiExtendDynamicBitMap(v6, v8) )
      return 0LL;
    a3 = v86;
    v4 = a4;
  }
  RtlSetBitsEx((__int64)v8, ClearBitsAligned, v5);
  v32 = v86;
  if ( v86 == 15 )
  {
    v52 = 8 * (v8[1] - v6[1]);
    if ( v5 == 1 )
      v6[6] = ClearBitsAligned + 1;
    ClearBitsAligned += v52;
    v32 = 9;
  }
  else if ( v5 == 1 )
  {
    v6[3] = ClearBitsAligned + 1;
  }
  if ( v6 == &qword_14036C480 )
  {
    qword_14036C2C8 -= (unsigned __int64)v5 << 21;
    MiReclaimSystemVa(0LL);
  }
  _InterlockedExchangeAdd64(&qword_14036D690[v32], v5);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v6[4] + (ClearBitsAligned << 21);
}
