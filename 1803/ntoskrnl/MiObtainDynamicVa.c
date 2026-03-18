/*
 * XREFs of MiObtainDynamicVa @ 0x1400499C0
 * Callers:
 *     MmAllocatePoolMemory @ 0x140025B30 (MmAllocatePoolMemory.c)
 *     MiObtainSystemVa @ 0x140049998 (MiObtainSystemVa.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReclaimSystemVa @ 0x1400CEC0C (MiReclaimSystemVa.c)
 *     RtlSetBitsEx @ 0x1400DA370 (RtlSetBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiExtendDynamicBitMap @ 0x1401832A4 (MiExtendDynamicBitMap.c)
 */

unsigned __int64 __fastcall MiObtainDynamicVa(__int64 *a1, unsigned int a2, int a3)
{
  unsigned int v3; // eax
  __int64 *v4; // rsi
  unsigned __int64 v5; // r15
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 *v15; // r8
  signed __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r14
  unsigned __int64 *v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  int v33; // r15d
  unsigned int v34; // r14d
  unsigned int v36; // r11d
  unsigned __int64 *v37; // rdi
  bool v38; // zf
  __int64 v39; // rax
  unsigned int v40; // r11d
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // r11d
  unsigned __int64 *v46; // rsi
  __int64 v47; // rax
  unsigned int v48; // r11d
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // eax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // eax
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r11
  __int64 v66; // rdx
  unsigned int v67; // ecx
  unsigned __int64 *v68; // r9
  unsigned __int64 v69; // r11
  __int64 v70; // rdx
  unsigned int v71; // ecx
  unsigned __int64 *v72; // r9
  unsigned int v73; // r9d
  __int64 v74; // rcx
  unsigned int v75; // r9d
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // [rsp+28h] [rbp-69h]
  unsigned __int64 v81; // [rsp+28h] [rbp-69h]
  __int64 *v82; // [rsp+38h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v84[11]; // [rsp+90h] [rbp-1h] BYREF
  int v87; // [rsp+108h] [rbp+77h]

  v87 = a3;
  v3 = a2;
  v4 = a1;
  while ( 1 )
  {
    v5 = v4[3];
    v82 = v4;
    v6 = (unsigned __int64 *)v4;
    if ( a3 == 14 )
    {
      v6 = v84;
      v82 = v84;
      v53 = v4[1] + 8 * ((unsigned __int64)v4[2] >> 6);
      v5 = v4[6];
      v84[0] = v4[5];
      v3 = a2;
      v84[1] = v53 - 8LL * (v84[0] >> 6);
    }
    if ( *v6 )
      break;
LABEL_142:
    if ( !(unsigned int)MiExtendDynamicBitMap(v4, v6) )
      return 0LL;
    a3 = v87;
    v3 = a2;
  }
  v7 = *v6;
  v8 = v6[1];
  v9 = v3;
  LODWORD(v10) = v3;
  v11 = v5 & -(__int64)(v5 < *v6);
  v12 = *v6 - 1;
  v80 = v11;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( v12 - v11 + 1 < v9 )
        goto LABEL_74;
      v13 = v12 - v9 + 1;
      v14 = v8 + 8 * (v13 >> 6);
      v15 = (unsigned __int64 *)(v8 + 8 * (v11 >> 6));
      v16 = *v15 | ((1LL << (v11 & 0x3F)) - 1);
      if ( v9 <= 0x7F )
      {
        if ( v9 < 0x40 )
        {
          if ( v9 > 1 )
          {
            v36 = 0;
            v37 = (unsigned __int64 *)(v8 + 8 * (v12 >> 6));
            while ( v16 != -1 )
            {
LABEL_39:
              v38 = !_BitScanForward64((unsigned __int64 *)&v39, v16);
              if ( v38 )
                LODWORD(v39) = 64;
              if ( v36 + (unsigned int)v39 >= v9 )
              {
                v43 = -(__int64)v36;
LABEL_46:
                v18 = ((__int64)((__int64)v15 - v8) >> 3 << 6) + v43;
                goto LABEL_14;
              }
              v40 = v10;
              v41 = ~v16;
              while ( 1 )
              {
                v41 &= v41 >> (v40 >> 1);
                if ( !v41 )
                  break;
                v40 -= v40 >> 1;
                if ( v40 <= 1 )
                {
                  _BitScanForward64(&v42, v41);
                  v43 = (unsigned int)v42;
                  goto LABEL_46;
                }
              }
              if ( v15 == v37 )
                goto LABEL_74;
              v38 = !_BitScanReverse64((unsigned __int64 *)&v44, v16);
              if ( v38 )
                v36 = 64;
              else
                v36 = 63 - v44;
              v16 = *++v15;
            }
            while ( (unsigned __int64)++v15 <= v14 )
            {
              v16 = *v15;
              if ( *v15 != -1LL )
              {
                v36 = 0;
                goto LABEL_39;
              }
            }
LABEL_74:
            v18 = -1LL;
            v10 = v9;
            goto LABEL_75;
          }
          while ( v16 == -1 )
          {
            if ( (unsigned __int64)++v15 > v14 )
              goto LABEL_74;
            v16 = *v15;
          }
          _BitScanForward64(&v17, ~v16);
          v18 = v17 + ((__int64)((__int64)v15 - v8) >> 3 << 6);
LABEL_14:
          v10 = v9;
          if ( v18 <= v13 )
            goto LABEL_15;
LABEL_139:
          v18 = -1LL;
          goto LABEL_75;
        }
        while ( 1 )
        {
          while ( v16 < 0 )
          {
            if ( (unsigned __int64)++v15 > v14 )
              goto LABEL_74;
            v16 = *v15;
          }
          v38 = !_BitScanReverse64((unsigned __int64 *)&v57, v16);
          if ( v38 )
            v58 = 64;
          else
            v58 = 63 - v57;
          v18 = ((((__int64)((__int64)v15 - v8) >> 3) + 1) << 6) - v58;
          if ( v18 > v13 )
            goto LABEL_74;
          v59 = v9 - v58;
          if ( v9 == v58 )
            goto LABEL_94;
          v16 = *++v15;
          if ( v59 >= 0x40 )
          {
            if ( *v15 )
              continue;
            v59 -= 64LL;
            if ( !v59 )
              goto LABEL_94;
            v16 = *++v15;
          }
          v38 = !_BitScanForward64(&v60, v16);
          if ( v38 )
            v60 = 64LL;
          if ( v60 >= v59 )
          {
LABEL_94:
            v10 = v9;
            goto LABEL_15;
          }
        }
      }
      v65 = v14 + 8;
      v10 = v9;
      if ( (v13 & 0x3F) == 0 )
        v65 = v8 + 8 * ((v12 - v9 + 1) >> 6);
      if ( !v16 )
      {
        v67 = 0;
        goto LABEL_115;
      }
      if ( !*++v15 )
        break;
      do
      {
        do
        {
LABEL_111:
          if ( (unsigned __int64)v15 > v65 )
            goto LABEL_139;
          ++v15;
        }
        while ( *v15 );
        v38 = !_BitScanReverse64((unsigned __int64 *)&v66, *(v15 - 1));
        if ( v38 )
          v67 = 64;
        else
          v67 = 63 - v66;
LABEL_115:
        v18 = ((__int64)((__int64)v15 - v8) >> 3 << 6) - v67;
        if ( v18 > v13 )
          goto LABEL_139;
        v68 = &v15[(v9 - v67) >> 6];
        while ( ++v15 != v68 )
        {
          if ( *v15 )
            goto LABEL_111;
        }
        v73 = ((_BYTE)v9 - (_BYTE)v67) & 0x3F;
        if ( (((_BYTE)v9 - (_BYTE)v67) & 0x3F) == 0 )
          break;
        v38 = !_BitScanForward64((unsigned __int64 *)&v74, *v15);
        if ( v38 )
          LODWORD(v74) = 64;
      }
      while ( (unsigned int)v74 < v73 );
LABEL_15:
      if ( v18 != -1LL )
      {
LABEL_16:
        v4 = a1;
        v19 = v18;
        v6 = (unsigned __int64 *)v82;
        v81 = v18;
        goto LABEL_17;
      }
LABEL_75:
      if ( !v80 )
        goto LABEL_16;
      v56 = v10 + v5;
      if ( v10 + v5 > v7 )
        v56 = v7;
      v12 = v56 - 1;
      v11 = 0LL;
      v80 = 0LL;
    }
    v38 = !_BitScanReverse64((unsigned __int64 *)&v77, v16);
    if ( v38 )
      v67 = 64;
    else
      v67 = 63 - v77;
    goto LABEL_115;
  }
  v19 = v11 & 0xFFFFFFFFFFFFFFF8uLL;
  v81 = v19;
LABEL_17:
  if ( v19 == -1LL )
    goto LABEL_142;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4 + 8, &LockHandle);
  v20 = *v6;
  LODWORD(v21) = v9;
  v22 = v81;
  v23 = v6[1];
  v24 = v81 & -(__int64)(v19 < *v6);
  v25 = *v6 - 1;
  if ( v9 )
  {
    while ( v25 - v24 + 1 < v9 )
    {
      v31 = -1LL;
      v21 = v9;
LABEL_167:
      if ( !v24 )
        goto LABEL_29;
      v79 = v21 + v22;
      if ( v21 + v22 > v20 )
        v79 = v20;
      v25 = v79 - 1;
      v24 = 0LL;
    }
    v26 = v25 - v9 + 1;
    v27 = v23 + 8 * (v26 >> 6);
    v28 = (unsigned __int64 *)(v23 + 8 * (v24 >> 6));
    v29 = *v28 | ((1LL << (v24 & 0x3F)) - 1);
    if ( v9 > 0x7F )
    {
      v69 = v27 + 8;
      v21 = v9;
      if ( (v26 & 0x3F) == 0 )
        v69 = v23 + 8 * ((v25 - v9 + 1) >> 6);
      if ( !v29 )
      {
        v71 = 0;
        goto LABEL_128;
      }
      if ( !*++v28 )
      {
        v38 = !_BitScanReverse64((unsigned __int64 *)&v78, v29);
        if ( v38 )
          v71 = 64;
        else
          v71 = 63 - v78;
        goto LABEL_128;
      }
LABEL_124:
      while ( (unsigned __int64)v28 <= v69 )
      {
        if ( !*++v28 )
        {
          v38 = !_BitScanReverse64((unsigned __int64 *)&v70, *(v28 - 1));
          if ( v38 )
            v71 = 64;
          else
            v71 = 63 - v70;
LABEL_128:
          v31 = ((__int64)((__int64)v28 - v23) >> 3 << 6) - v71;
          if ( v31 > v26 )
            goto LABEL_144;
          v72 = &v28[(v9 - v71) >> 6];
          while ( ++v28 != v72 )
          {
            if ( *v28 )
              goto LABEL_124;
          }
          v75 = (v9 - v71) & 0x3F;
          if ( !v75 )
            goto LABEL_28;
          v38 = !_BitScanForward64((unsigned __int64 *)&v76, *v28);
          if ( v38 )
            LODWORD(v76) = 64;
          if ( (unsigned int)v76 >= v75 )
            goto LABEL_28;
        }
      }
      goto LABEL_144;
    }
    if ( v9 < 0x40 )
    {
      if ( v9 > 1 )
      {
        v45 = 0;
        v46 = (unsigned __int64 *)(v23 + 8 * (v25 >> 6));
        while ( v29 != -1 )
        {
LABEL_53:
          v38 = !_BitScanForward64((unsigned __int64 *)&v47, v29);
          if ( v38 )
            LODWORD(v47) = 64;
          if ( v45 + (unsigned int)v47 >= v9 )
          {
            v51 = -(__int64)v45;
LABEL_60:
            v31 = ((__int64)((__int64)v28 - v23) >> 3 << 6) + v51;
            goto LABEL_27;
          }
          v48 = v21;
          v49 = ~v29;
          while ( 1 )
          {
            v49 &= v49 >> (v48 >> 1);
            if ( !v49 )
              break;
            v48 -= v48 >> 1;
            if ( v48 <= 1 )
            {
              _BitScanForward64(&v50, v49);
              v51 = (unsigned int)v50;
              goto LABEL_60;
            }
          }
          if ( v28 == v46 )
            goto LABEL_79;
          v38 = !_BitScanReverse64((unsigned __int64 *)&v52, v29);
          if ( v38 )
            v45 = 64;
          else
            v45 = 63 - v52;
          v29 = *++v28;
        }
        while ( (unsigned __int64)++v28 <= v27 )
        {
          v29 = *v28;
          if ( *v28 != -1LL )
          {
            v45 = 0;
            goto LABEL_53;
          }
        }
LABEL_79:
        v31 = -1LL;
        v21 = v9;
        goto LABEL_80;
      }
      while ( v29 == -1 )
      {
        if ( (unsigned __int64)++v28 > v27 )
          goto LABEL_79;
        v29 = *v28;
      }
      _BitScanForward64(&v30, ~v29);
      v31 = v30 + ((__int64)((__int64)v28 - v23) >> 3 << 6);
LABEL_27:
      v21 = v9;
      if ( v31 <= v26 )
      {
LABEL_28:
        if ( v31 != -1LL )
        {
LABEL_29:
          v4 = a1;
          v32 = v31;
          v6 = (unsigned __int64 *)v82;
          goto LABEL_30;
        }
        goto LABEL_80;
      }
LABEL_144:
      v31 = -1LL;
LABEL_80:
      v22 = v81;
      goto LABEL_167;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v29 < 0 )
        {
          if ( (unsigned __int64)++v28 > v27 )
            goto LABEL_79;
          v29 = *v28;
        }
        v38 = !_BitScanReverse64((unsigned __int64 *)&v61, v29);
        if ( v38 )
          v62 = 64;
        else
          v62 = 63 - v61;
        v31 = ((((__int64)((__int64)v28 - v23) >> 3) + 1) << 6) - v62;
        if ( v31 > v26 )
          goto LABEL_79;
        v63 = v9 - v62;
        if ( v9 == v62 )
          goto LABEL_106;
        v29 = *++v28;
        if ( v63 >= 0x40 )
          break;
LABEL_103:
        v38 = !_BitScanForward64(&v64, v29);
        if ( v38 )
          v64 = 64LL;
        if ( v64 >= v63 )
        {
LABEL_106:
          v21 = v9;
          goto LABEL_28;
        }
      }
      if ( !*v28 )
      {
        v63 -= 64LL;
        if ( !v63 )
          goto LABEL_106;
        v29 = *++v28;
        goto LABEL_103;
      }
    }
  }
  v32 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_30:
  if ( v32 == -1LL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    goto LABEL_142;
  }
  RtlSetBitsEx(v6, v32, v9);
  v33 = v87;
  if ( v87 == 14 )
  {
    v54 = v6[1] - v4[1];
    v34 = a2;
    v55 = 8 * v54;
    if ( a2 == 1 )
      v4[6] = v32 + 1;
    v32 += v55;
    v33 = 9;
  }
  else
  {
    v34 = a2;
    if ( a2 == 1 )
      v4[3] = v32 + 1;
  }
  if ( v4 == &qword_1403CBA08 )
  {
    qword_1403CB808 -= v9 << 21;
    MiReclaimSystemVa(0LL);
  }
  _InterlockedExchangeAdd64(&qword_1403CCF10[v33], v34);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v4[4] + (v32 << 21);
}
