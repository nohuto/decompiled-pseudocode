/*
 * XREFs of MiCombinePte @ 0x14008AB80
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseArbitraryPage @ 0x140016B60 (MiReleaseArbitraryPage.c)
 *     MiCombineWorkingSetTail @ 0x140078A40 (MiCombineWorkingSetTail.c)
 *     MiAttemptCoalesce @ 0x1400849D0 (MiAttemptCoalesce.c)
 *     MiPerformCombineScan @ 0x14008B370 (MiPerformCombineScan.c)
 *     MiComputeHash64 @ 0x14008B400 (MiComputeHash64.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 *     MiCombineCandidate @ 0x1400A33A0 (MiCombineCandidate.c)
 *     MiMapArbitraryPage @ 0x1400A39B0 (MiMapArbitraryPage.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckPteRelease @ 0x140220610 (MiCheckPteRelease.c)
 *     MiHashIsCommon @ 0x140223CB0 (MiHashIsCommon.c)
 */

__int64 __fastcall MiCombinePte(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  bool v6; // zf
  __int64 v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 Address; // rax
  _QWORD *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 BugCheckParameter4; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r8
  volatile signed __int32 *v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // rcx
  int v34; // r13d
  __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r8
  volatile signed __int32 *v43; // rdx
  int v44; // eax
  unsigned __int64 v45; // rcx
  signed __int32 v46[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 updated; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v50; // [rsp+48h] [rbp-B8h]
  __int64 v51; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+70h] [rbp-90h] BYREF
  __int16 v55; // [rsp+74h] [rbp-8Ch]
  __int64 v56; // [rsp+78h] [rbp-88h]
  __int64 v57; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+130h] [rbp+30h] BYREF
  __int16 v60; // [rsp+134h] [rbp+34h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  __int64 v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]

  v53 = a1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 104) )
    return 3LL;
  v6 = (*(_BYTE *)(v3 + 192) & 7) == 0;
  v7 = *(_QWORD *)(a1 + 136);
  v8 = *(_QWORD **)(v7 + 24);
  v50 = v8;
  v51 = *v8;
  if ( v6 )
  {
    v9 = v3 - 1280;
    if ( (*(_DWORD *)(v3 - 508) & 0xC00u) < 0xC00 )
      return 3LL;
    v10 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v9 + 1452));
    if ( *(_DWORD *)(v10 + 1192) )
    {
      if ( *(_QWORD *)(v10 + 1296) == v9 )
        return 3LL;
    }
  }
  v11 = a2 << 25 >> 16;
  if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  v49 = MI_READ_PTE_LOCK_FREE(a2);
  v52 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v49) >> 12) & 0xFFFFFFFFFLL;
  v14 = 48 * v52 - 0x58000000000LL;
  if ( (*(_QWORD *)(v14 + 40) & 0x200000000000000LL) != 0 )
    return 0LL;
  v15 = v8[1];
  if ( v15 && *(_DWORD *)(v15 + 4) || (*(_DWORD *)(v13 + 1736) & 1) != 0 )
    return 2LL;
  if ( !(unsigned int)MiCombineCandidate(v12, 48 * v52 - 0x58000000000LL) )
    return 0LL;
  if ( (*(_DWORD *)v7 & 8) != 0 )
  {
    Address = MiLocateAddress(v11);
    if ( !Address || (*(_DWORD *)(Address + 48) & 7) != 2 )
      return 0LL;
  }
  ++*(_QWORD *)(v8[3] + 16LL);
  v17 = (_QWORD *)(*(_QWORD *)(v7 + 32) + 32LL * *(_QWORD *)(v7 + 8));
  if ( (v49 & 0x20) == 0 )
  {
    v19 = MiReservePtes(&qword_14036D0A0, 1LL);
    v20 = v19;
    if ( !v19 )
      return 0LL;
    v21 = v8[2];
    v22 = v51;
    *(_QWORD *)(v21 + 72) = v19;
    *(_QWORD *)(v21 + 64) = v14;
    if ( !(unsigned int)MiMapArbitraryPage(v22, v21, 0LL, 0LL) )
    {
      if ( (dword_1403E310C & 2) != 0 )
        MiCheckPteRelease(v20, 1LL);
      v23 = 1LL;
      BugCheckParameter4 = (v20 - qword_14036D0B0) >> 3;
      if ( (dword_14036D0B8 & 4) != 0 )
      {
        BugCheckParameter4 >>= 4;
        v23 = 0LL;
      }
      if ( v23 + BugCheckParameter4 - 1 >= qword_14036D0A0
        || v23 != 1
        || !_bittest64((const signed __int64 *)qword_14036D0A8, BugCheckParameter4) )
      {
        KeBugCheckEx(0xDAu, 0x302uLL, v20 << 25 >> 16, 1uLL, BugCheckParameter4);
      }
      *(_QWORD *)v20 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v20) )
        MiWritePteShadow(v25);
      if ( (dword_14036D0B8 & 1) != 0 && (unsigned int)MiInsertCachedPte(&qword_14036D0A0, v20, 1LL) == 1 )
        return 0LL;
      updated = 0LL;
      v26 = MI_READ_PTE_LOCK_FREE(&updated);
      _InterlockedOr(v46, 0);
      updated = MiUpdatePageFileHighInPte(v26, (unsigned int)KiTbFlushTimeStamp);
      if ( (unsigned int)MiPteInShadowRange(&updated) )
        MiWritePteShadow(&updated);
      *(_QWORD *)v20 = updated;
      if ( (unsigned int)MiPteInShadowRange(v20) )
        MiWritePteShadow(v28);
      if ( !MiGetPteTimeStamp(v27) )
      {
        v56 = 20LL;
        v55 = 0;
        v54 = ~(_BYTE)dword_14036D0B8 & 2;
        v57 = 0LL;
        v58 = 0LL;
        MiInsertTbFlushEntry(&v54, v20 << 25 >> 16, 1LL, 0LL);
        MiFlushTbList(&v54);
      }
      v29 = BugCheckParameter4 & 0x1F;
      LOBYTE(v30) = 1;
      v31 = (volatile signed __int32 *)(qword_14036D0A8 + 4 * (BugCheckParameter4 >> 5));
      if ( v29 + 1 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          _InterlockedAnd(v31++, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v29));
          v30 = 1LL - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
          if ( v30 >= 0x20 )
          {
            v33 = v30 >> 5;
            v30 += -32LL * (v30 >> 5);
            do
            {
              *v31++ = 0;
              --v33;
            }
            while ( v33 );
          }
          if ( !v30 )
            goto LABEL_53;
        }
        v32 = (1 << v30) - 1;
      }
      else
      {
        v32 = 1 << v29;
      }
      _InterlockedAnd(v31, ~v32);
LABEL_53:
      _InterlockedExchangeAdd64(&qword_14036D100, 1uLL);
      MiAttemptCoalesce((__int64)&qword_14036D0A0, BugCheckParameter4, 1LL);
      return 0LL;
    }
    v34 = MiPerformCombineScan(v50, v21, v17);
    MiReleaseArbitraryPage(v21);
    if ( (dword_1403E310C & 2) != 0 )
      MiCheckPteRelease(v20, 1LL);
    v35 = 1LL;
    v36 = (v20 - qword_14036D0B0) >> 3;
    if ( (dword_14036D0B8 & 4) != 0 )
    {
      v36 >>= 4;
      v35 = 0LL;
    }
    if ( v35 + v36 - 1 >= qword_14036D0A0 || v35 != 1 || !_bittest64((const signed __int64 *)qword_14036D0A8, v36) )
      KeBugCheckEx(0xDAu, 0x302uLL, v20 << 25 >> 16, 1uLL, v36);
    *(_QWORD *)v20 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v20) )
      MiWritePteShadow(v37);
    if ( (dword_14036D0B8 & 1) != 0 && (unsigned int)MiInsertCachedPte(&qword_14036D0A0, v20, 1LL) == 1 )
    {
LABEL_83:
      if ( v34 != 1 )
        return 0LL;
      v8 = v50;
      goto LABEL_85;
    }
    v48 = 0LL;
    v38 = MI_READ_PTE_LOCK_FREE(&v48);
    _InterlockedOr(v46, 0);
    v48 = MiUpdatePageFileHighInPte(v38, (unsigned int)KiTbFlushTimeStamp);
    if ( (unsigned int)MiPteInShadowRange(&v48) )
      MiWritePteShadow(&v48);
    *(_QWORD *)v20 = v48;
    if ( (unsigned int)MiPteInShadowRange(v20) )
      MiWritePteShadow(v40);
    if ( !MiGetPteTimeStamp(v39) )
    {
      v61 = 20LL;
      v60 = 0;
      v59 = ~(_BYTE)dword_14036D0B8 & 2;
      v62 = 0LL;
      v63 = 0LL;
      MiInsertTbFlushEntry(&v59, v20 << 25 >> 16, 1LL, 0LL);
      MiFlushTbList(&v59);
    }
    v41 = v36 & 0x1F;
    LOBYTE(v42) = 1;
    v43 = (volatile signed __int32 *)(qword_14036D0A8 + 4 * (v36 >> 5));
    if ( v41 + 1 > 0x20 )
    {
      if ( (v36 & 0x1F) != 0 )
      {
        _InterlockedAnd(v43++, ~(((1 << (32 - (v36 & 0x1F))) - 1) << v41));
        v42 = 1LL - (32 - (unsigned int)(v36 & 0x1F));
        if ( v42 >= 0x20 )
        {
          v45 = v42 >> 5;
          v42 += -32LL * (v42 >> 5);
          do
          {
            *v43++ = 0;
            --v45;
          }
          while ( v45 );
        }
        if ( !v42 )
          goto LABEL_82;
      }
      v44 = (1 << v42) - 1;
    }
    else
    {
      v44 = 1 << v41;
    }
    _InterlockedAnd(v43, ~v44);
LABEL_82:
    _InterlockedExchangeAdd64(&qword_14036D100, 1uLL);
    MiAttemptCoalesce((__int64)&qword_14036D0A0, v36, 1LL);
    goto LABEL_83;
  }
  if ( (*(_DWORD *)v7 & 4) != 0
    && (unsigned __int64)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFF000uLL) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    return 0LL;
  }
  *v17 = MiComputeHash64(v11 & 0xFFFFFFFFFFFFF000uLL);
LABEL_85:
  if ( (*(_DWORD *)v7 & 4) == 0 || (unsigned int)MiHashIsCommon(v8, *v17) )
  {
    v17[1] = v52;
    v17[2] = 0LL;
    v17[3] = 0LL;
    if ( ++*(_QWORD *)(v7 + 8) == *(_QWORD *)(v7 + 16) )
    {
      MiCombineWorkingSetTail(v53, v18);
      return 1LL;
    }
  }
  return 0LL;
}
