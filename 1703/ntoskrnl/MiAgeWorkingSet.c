/*
 * XREFs of MiAgeWorkingSet @ 0x1400D81E0
 * Callers:
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiMakeHyperRangeAccessible @ 0x1400D1310 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     MiForceAgeWorkingSet @ 0x140214F58 (MiForceAgeWorkingSet.c)
 * Callees:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     MiIsStoreProcess @ 0x140073C0C (MiIsStoreProcess.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 *     KeFlushMultipleRangeTb @ 0x1400D9210 (KeFlushMultipleRangeTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x14017BB28 (KeFlushCurrentTbOnly.c)
 *     memset @ 0x140192D80 (memset.c)
 *     _TlgCreateSz @ 0x1401F8C50 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAgeWorkingSet(__int64 a1, char a2, int a3, unsigned int a4)
{
  int v4; // r14d
  __int64 v7; // r13
  unsigned int v8; // edi
  unsigned __int64 v9; // rcx
  int v10; // r12d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // r10
  unsigned __int64 v15; // r11
  __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  unsigned __int128 v18; // rax
  unsigned int *PoolWithTag; // rbx
  __int64 v20; // rcx
  _QWORD *v21; // r9
  __int64 v22; // r14
  _QWORD *v23; // rax
  unsigned __int64 v24; // r8
  _QWORD *v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // r9
  int v29; // r12d
  unsigned __int8 v30; // al
  int v31; // eax
  char v32; // al
  unsigned __int8 v33; // al
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // r10d
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  _KPROCESS *Process; // rcx
  __int64 v41; // rcx
  unsigned int v42; // eax
  bool v43; // zf
  unsigned int *v44; // rdx
  unsigned __int8 v45; // dl
  int v46; // r8d
  const CHAR *v47; // r15
  ULONG64 v48; // r8
  TraceLoggingHProvider v49; // r9
  const GUID *v51; // [rsp+28h] [rbp-E0h]
  const GUID *v52; // [rsp+30h] [rbp-D8h]
  char v53; // [rsp+48h] [rbp-C0h]
  unsigned __int8 v54; // [rsp+49h] [rbp-BFh] BYREF
  int v55; // [rsp+4Ch] [rbp-BCh]
  int v56; // [rsp+50h] [rbp-B8h]
  int v57; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v58; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+70h] [rbp-98h] BYREF
  __int64 v62; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v63[32]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v64[18]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v65[192]; // [rsp+218h] [rbp+110h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2D8h] [rbp+1D0h] BYREF
  char *v67; // [rsp+2F8h] [rbp+1F0h]
  __int64 v68; // [rsp+300h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+308h] [rbp+200h] BYREF
  int *v70; // [rsp+318h] [rbp+210h]
  __int64 v71; // [rsp+320h] [rbp+218h]
  __int64 *v72; // [rsp+328h] [rbp+220h]
  __int64 v73; // [rsp+330h] [rbp+228h]
  __int64 *v74; // [rsp+338h] [rbp+230h]
  __int64 v75; // [rsp+340h] [rbp+238h]
  __int64 *v76; // [rsp+348h] [rbp+240h]
  __int64 v77; // [rsp+350h] [rbp+248h]
  __int64 *v78; // [rsp+358h] [rbp+250h]
  __int64 v79; // [rsp+360h] [rbp+258h]
  __int64 *v80; // [rsp+368h] [rbp+260h]
  __int64 v81; // [rsp+370h] [rbp+268h]

  v4 = a3;
  v55 = a3;
  v53 = a2;
  LODWORD(v63[0]) = 9;
  memset((char *)v63 + 4, 0, 0xFCuLL);
  memset(v64, 0, sizeof(v64));
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 136);
  v10 = 3;
  v11 = *(_QWORD *)(v7 + 32);
  if ( v9 <= v11 )
    goto LABEL_72;
  v12 = v9 - v11;
  v13 = 10;
  if ( a4 )
    v13 = a4;
  v56 = v4 & 2;
  if ( (v4 & 2) != 0 )
  {
    v14 = *(unsigned int *)(v7 + 24);
    v15 = v14 + v12;
    *(_DWORD *)(v7 + 24) = (v14 + v12) % v13;
  }
  else
  {
    v14 = *(unsigned int *)(v7 + 28);
    v15 = v14 + v12;
    *(_DWORD *)(v7 + 28) = (v14 + v12) % v13;
  }
  v16 = 0LL;
  if ( v15 >= v12 )
    v16 = v14;
  v17 = v13 * (v12 + v16) / 0x3E8;
  if ( v17 > v12 )
  {
    v18 = v12 * v13 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v17 = (*((_QWORD *)&v18 + 1) + ((v12 * v13 - *((_QWORD *)&v18 + 1)) >> 1)) >> 9;
  }
  PoolWithTag = 0LL;
  v20 = *(unsigned __int16 *)(a1 + 172);
  HIDWORD(v63[1]) = v13;
  LODWORD(v63[2]) = v4;
  v21 = *(_QWORD **)(qword_14036C8F8 + 8 * v20);
  v22 = v21[693];
  if ( (v55 & 3) != 0 )
  {
    v23 = v21 + 272;
    v24 = v21[248] + v21[256];
    v25 = v21 + 297;
    v26 = 0LL;
    v27 = 0LL;
    if ( v21 + 272 < v21 + 297 )
    {
      v28 = v21 + 292;
      do
      {
        v26 += *v23;
        v27 += v23[5];
        v23 += 10;
      }
      while ( v23 < v28 );
      if ( v23 < v25 )
        v24 += *v23;
      v24 += v26 + v27;
    }
    if ( v24 + *v25 < *(_QWORD *)(v22 + 80) )
    {
      if ( *(_BYTE *)(a1 + 194) != 2 )
      {
        if ( v24 >= *(_QWORD *)(v22 + 72) )
          v10 = 5;
        LODWORD(v63[1]) = v10;
      }
      if ( (*(_BYTE *)(a1 + 192) & 7) != 0 || !(unsigned int)MiIsStoreProcess(a1 - 1280) )
        WORD2(v63[0]) = *(_WORD *)(v22 + 2358);
    }
    if ( v17 <= 0x100 )
      goto LABEL_85;
    v29 = 509;
    if ( v17 < 0x1FD )
      v29 = v17;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                    NonPagedPoolNx,
                                    8LL * (unsigned int)(v29 - 256) + 2072,
                                    0x73576D4Du);
    if ( !PoolWithTag )
    {
LABEL_85:
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 132), 1, 0) )
      {
        PoolWithTag = (unsigned int *)v65;
        v29 = 20;
      }
      else
      {
        PoolWithTag = (unsigned int *)(v22 + 136);
        v29 = 256;
      }
    }
    v30 = *(_BYTE *)(a1 + 192) & 7;
    if ( v30 )
      v31 = v30 < 2u ? 2 : 0;
    else
      v31 = 1;
    PoolWithTag[3] = 0;
    *PoolWithTag = v31;
    *((_WORD *)PoolWithTag + 2) = 0;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    PoolWithTag[2] = v29;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
  }
  BYTE4(v64[0]) = v53;
  LODWORD(v63[0]) = v55;
  v32 = *(_BYTE *)(a1 + 192);
  v64[1] = a1;
  v63[7] = v17;
  v63[8] = PoolWithTag;
  v33 = v32 & 7;
  if ( v33 )
    v34 = v33 < 2u ? 2 : 0;
  else
    v34 = 1;
  LODWORD(v63[9]) = v34;
  v64[17] = v63;
  v64[15] = MiAgePte;
  v64[16] = MiAgeWorkingSetTail;
  v63[10] = 20LL;
  WORD2(v63[9]) = 4;
  v63[11] = 0LL;
  v63[12] = 0LL;
  LODWORD(v64[0]) = 10;
  if ( v56 )
    v35 = *(_QWORD *)(v7 + 16);
  else
    v35 = *(_QWORD *)(v7 + 8);
  v36 = v64[3];
  v64[4] = v35;
  if ( !v35 )
    v36 = -1LL;
  v64[3] = v36;
  v10 = MiWalkPageTables((__int64)v64);
  if ( PoolWithTag )
  {
    v37 = PoolWithTag[3];
    if ( !v37 )
      goto LABEL_65;
    v38 = *((unsigned __int8 *)PoolWithTag + 4);
    v39 = qword_14036C218;
    if ( (v38 & 2) == 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[2].ActiveProcessors.Bitmap[13] )
      {
        if ( !Process->SecurePid )
          goto LABEL_52;
        v41 = *PoolWithTag;
        if ( (_DWORD)v41 != 1 )
          goto LABEL_54;
      }
      v39 = -1LL;
    }
LABEL_52:
    v41 = *PoolWithTag;
    if ( (_DWORD)v41 == 1 )
    {
      v42 = 0;
      goto LABEL_55;
    }
LABEL_54:
    v42 = ((v38 & 8) != 0) + 1;
LABEL_55:
    if ( *((_BYTE *)PoolWithTag + 5) || *((_QWORD *)PoolWithTag + 2) > v39 )
    {
      if ( (v38 & 1) != 0 )
        KeFlushCurrentTbOnly(v41, v38, v39);
      else
        KeFlushTb(v41, v42);
      *((_BYTE *)PoolWithTag + 5) = 0;
    }
    else
    {
      v43 = (v38 & 1) == 0;
      v44 = PoolWithTag + 6;
      if ( v43 )
        KeFlushMultipleRangeTb(v37, v44, (unsigned int)v41, v42);
      else
        KeFlushMultipleRangeCurrentTb(v37, v44, (unsigned int)v41);
    }
    *((_BYTE *)PoolWithTag + 4) &= ~8u;
    PoolWithTag[3] = 0;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
LABEL_65:
    if ( PoolWithTag == (unsigned int *)(v22 + 136) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v22 + 132), 0);
    }
    else if ( PoolWithTag != (unsigned int *)v65 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  if ( v10 == 2 )
    ++*(_DWORD *)(v22 + 2572);
  v4 = v55;
LABEL_72:
  if ( qword_14036CFD8 )
  {
    v45 = *(_BYTE *)(a1 + 192) & 7;
    if ( v45 )
    {
      v46 = 0;
      if ( v45 < 2u )
        v46 = *(_DWORD *)(a1 - 3000);
      v47 = 0LL;
    }
    else
    {
      v46 = *(_DWORD *)(a1 - 544);
      v47 = (const CHAR *)(a1 - 176);
    }
    if ( qword_14036CFD8->LevelPlus1 > 5
      && (qword_14036CFD8->KeywordAny & 1) != 0
      && (qword_14036CFD8->KeywordAll & 1) == qword_14036CFD8->KeywordAll )
    {
      v59 = v63[6];
      v60 = v63[3];
      v61 = v63[5];
      v62 = v63[4];
      v54 = v45;
      v67 = (char *)&v54;
      v57 = v46;
      LODWORD(v58) = v4;
      v68 = 1LL;
      TlgCreateSz(&pDesc, v47);
      v71 = 4LL;
      v72 = &v59;
      v70 = &v57;
      v74 = &v60;
      v76 = &v61;
      v78 = &v62;
      v80 = &v58;
      v73 = 8LL;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 8LL;
      v81 = 4LL;
      TlgWriteEx(v49, &unk_1402AC87A, v48, (ULONG)v49, v51, v52, 0xAu, &pData);
    }
  }
  LOBYTE(v8) = v10 == 2;
  return v8;
}
