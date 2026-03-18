/*
 * XREFs of HvInitializeHive @ 0x140470A40
 * Callers:
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmGetSystemControlValues @ 0x140836B78 (CmGetSystemControlValues.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SetFailureLocation @ 0x1401E2FD4 (SetFailureLocation.c)
 *     HvViewMapUnpinFile @ 0x1401E50B8 (HvViewMapUnpinFile.c)
 *     CmpTraceHiveMountStart @ 0x1404700D4 (CmpTraceHiveMountStart.c)
 *     CmpTraceHiveMountStop @ 0x14047012C (CmpTraceHiveMountStop.c)
 *     HvpFillFileName @ 0x1404710F0 (HvpFillFileName.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140471198 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     HvpSetRangeProtection @ 0x14047CF98 (HvpSetRangeProtection.c)
 *     HvWriteHivePrimaryFile @ 0x1404E4520 (HvWriteHivePrimaryFile.c)
 *     HvpHeaderCheckSum @ 0x1404E4CA4 (HvpHeaderCheckSum.c)
 *     HvLoadHive @ 0x1404E4CD0 (HvLoadHive.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1404E56F0 (HvpAdjustHiveFreeDisplay.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x1404E5ABC (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404E63B0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     HvResetLogFileStatusAll @ 0x14059D9E8 (HvResetLogFileStatusAll.c)
 *     HvpBuildMapForLoaderHive @ 0x1405CC7F8 (HvpBuildMapForLoaderHive.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1406948E8 (HvIsInPlaceBaseBlockValid.c)
 *     HvViewMapStart @ 0x1406A02F4 (HvViewMapStart.c)
 *     HvpBuildMap @ 0x1406A0C7C (HvpBuildMap.c)
 */

__int64 __fastcall HvInitializeHive(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        int a3,
        unsigned int a4,
        _DWORD *a5,
        _QWORD *a6,
        int a7,
        __int64 a8,
        _OWORD *a9,
        _OWORD *a10,
        _BYTE *a11,
        int *a12)
{
  __int64 v12; // r15
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  char v20; // al
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rbx
  int v24; // eax
  int Hive; // r14d
  _DWORD *v27; // r14
  __int64 v28; // rdx
  int v29; // r12d
  __int64 v30; // rax
  _OWORD *v31; // rax
  _OWORD *v32; // rcx
  __int128 v33; // xmm1
  int v34; // eax
  int v35; // ebx
  char v36; // al
  __int64 v37; // rdx
  int v38; // eax
  int v39; // r10d
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  bool v46; // zf
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  int v50; // [rsp+20h] [rbp-48h]
  bool v51; // [rsp+78h] [rbp+10h]

  v12 = *(_QWORD *)(BugCheckParameter2 + 56);
  if ( a2 > 5 )
  {
    v50 = 0;
    goto LABEL_125;
  }
  if ( (a3 & 0xFFE17CEC) != 0 )
  {
    v50 = 16;
    goto LABEL_125;
  }
  if ( a4 > 2 )
  {
    v50 = 32;
    goto LABEL_125;
  }
  if ( (unsigned int)(a7 - 1) > 7 )
  {
    v50 = 48;
    goto LABEL_125;
  }
  if ( !a5 && ((a2 - 1) & 0xFFFFFFFC) == 0 && a2 != 2 )
  {
    v50 = 64;
LABEL_125:
    v35 = -1073741811;
    goto LABEL_126;
  }
  if ( a11 )
    *a11 = 0;
  *(_DWORD *)BugCheckParameter2 = -1092567328;
  if ( a6 )
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = *a6;
    *(_QWORD *)(BugCheckParameter2 + 32) = a6[1];
    *(_QWORD *)(BugCheckParameter2 + 40) = a6[3];
    *(_QWORD *)(BugCheckParameter2 + 48) = a6[4];
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
  }
  if ( a4 )
  {
    v15 = 4;
    if ( a4 == 1 )
      v15 = 1;
    *(_DWORD *)(BugCheckParameter2 + 148) = v15;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 148) = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 144) = a3;
  *(_DWORD *)(BugCheckParameter2 + 120) = a7;
  *(_DWORD *)(BugCheckParameter2 + 188) = 0;
  *(_DWORD *)(BugCheckParameter2 + 192) = 2;
  v16 = 24LL;
  *(_DWORD *)(BugCheckParameter2 + 2056) = -1;
  *(_DWORD *)(BugCheckParameter2 + 2032) = 0;
  *(_QWORD *)(BugCheckParameter2 + 2040) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 2048) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 2656) = 0;
  *(_QWORD *)(BugCheckParameter2 + 2648) = BugCheckParameter2 + 2640;
  *(_QWORD *)(BugCheckParameter2 + 2640) = BugCheckParameter2 + 2640;
  v17 = (_QWORD *)(BugCheckParameter2 + 2080);
  do
  {
    *((_DWORD *)v17 - 2) = 0;
    *v17 = 0LL;
    *((_DWORD *)v17 - 4) = 0;
    v17 += 3;
    --v16;
  }
  while ( v16 );
  *(_DWORD *)(BugCheckParameter2 + 1400) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1408) = 0LL;
  v18 = 24LL;
  *(_QWORD *)(BugCheckParameter2 + 1416) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 1424) = -1;
  *(_DWORD *)(BugCheckParameter2 + 2024) = 0;
  *(_QWORD *)(BugCheckParameter2 + 2016) = BugCheckParameter2 + 2008;
  *(_QWORD *)(BugCheckParameter2 + 2008) = BugCheckParameter2 + 2008;
  v19 = (_QWORD *)(BugCheckParameter2 + 1448);
  do
  {
    *((_DWORD *)v19 - 2) = 0;
    *v19 = 0LL;
    *((_DWORD *)v19 - 4) = 0;
    v19 += 3;
    --v18;
  }
  while ( v18 );
  *(_BYTE *)(BugCheckParameter2 + 124) &= 0xFCu;
  *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 72) = 0;
  *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellPaged;
  v20 = *(_BYTE *)(BugCheckParameter2 + 144);
  *(_QWORD *)(BugCheckParameter2 + 80) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 88) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 125) = 0;
  *(_DWORD *)(BugCheckParameter2 + 116) = 4096;
  *(_DWORD *)(BugCheckParameter2 + 96) = 0;
  *(_QWORD *)(BugCheckParameter2 + 104) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 128) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 136) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 160) = 0;
  *(_WORD *)(BugCheckParameter2 + 172) = 0;
  *(_BYTE *)(BugCheckParameter2 + 175) = 0;
  v21 = MEMORY[0xFFFFF78000000014];
  v51 = (v20 & 1) == 0;
  *(_QWORD *)(BugCheckParameter2 + 176) = MEMORY[0xFFFFF78000000014];
  memset((void *)(BugCheckParameter2 + 200), 0, 0x4B0uLL);
  *(_QWORD *)(BugCheckParameter2 + 208) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 174) = 1;
  if ( !a2 )
  {
    LOBYTE(v22) = v51;
    v27 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                      *(unsigned int *)(BugCheckParameter2 + 116),
                      v22,
                      825314627LL);
    if ( v27 )
    {
      if ( (((a7 << 9) - 1) & (unsigned int)v27) == 0 )
      {
        if ( a12 )
          *a12 = 825314627;
        goto LABEL_41;
      }
      (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(
        v27,
        *(unsigned int *)(BugCheckParameter2 + 116));
      LOBYTE(v37) = 1;
      v27 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(
                        4096LL,
                        v37,
                        842091843LL);
      if ( v27 )
      {
        *(_DWORD *)(BugCheckParameter2 + 116) = 4096;
        if ( a12 )
          *a12 = 842091843;
LABEL_41:
        memset(v27, 0, 0x1000uLL);
        v27[9] = -1;
        *v27 = 1718052210;
        v27[1] = 1;
        v27[2] = 1;
        v27[7] = 0;
        v27[8] = 1;
        v27[10] = 0;
        v27[11] = 1;
        v27[127] = 0;
        HvpFillFileName(v27, a8);
        v27[36] = 0;
        v27[5] = 1;
        if ( (a3 & 0x80000) != 0 )
        {
          v27[36] = 2;
          v27[6] = 6;
          *(_DWORD *)(BugCheckParameter2 + 196) = 6;
        }
        else
        {
          v27[6] = 3;
          *(_DWORD *)(BugCheckParameter2 + 196) = 3;
        }
        v27[41] = 1836346738;
        *(_DWORD *)(BugCheckParameter2 + 152) = 1;
        *(_DWORD *)(BugCheckParameter2 + 164) = 1;
        *(_DWORD *)(BugCheckParameter2 + 156) = 1;
        *(_QWORD *)(v27 + 3) = v21;
        if ( a9 )
        {
          *((_OWORD *)v27 + 7) = *a9;
          *((_OWORD *)v27 + 8) = *a9;
        }
        if ( a10 )
          *(_OWORD *)(v27 + 37) = *a10;
        *(_QWORD *)(BugCheckParameter2 + 64) = v27;
        v27[1022] = 0;
        if ( !(unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
          return 0LL;
        v38 = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, 4096LL, 0LL);
        v35 = v38;
        if ( v38 >= 0 )
        {
          v35 = HvViewMapStart(
                  BugCheckParameter2 + 200,
                  BugCheckParameter2,
                  *(_QWORD *)(BugCheckParameter2 + 2664),
                  4096LL,
                  1);
          if ( v35 >= 0 )
          {
            *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
            return 0LL;
          }
          SetFailureLocation(v12, 0, 2, v35, 120);
        }
        else
        {
          SetFailureLocation(v12, 0, 2, v38, 116);
        }
        return (unsigned int)v35;
      }
      v50 = 112;
    }
    else
    {
      v50 = 96;
    }
LABEL_77:
    v35 = -1073741670;
LABEL_126:
    SetFailureLocation(v12, 0, 2, v35, v50);
    return (unsigned int)v35;
  }
  v23 = 4LL;
  switch ( a2 )
  {
    case 4u:
      *(_QWORD *)(BugCheckParameter2 + 64) = a5;
      v36 = *(_BYTE *)(BugCheckParameter2 + 124) | 1;
      *(_DWORD *)(BugCheckParameter2 + 196) = a5[6] - 4096 + (a5[5] << 12);
      *(_BYTE *)(BugCheckParameter2 + 124) = v36 | 2;
      *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellFlat;
      *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellFlat;
      *(_DWORD *)(BugCheckParameter2 + 1400) = a5[10];
      *(_DWORD *)(BugCheckParameter2 + 192) = 1;
      goto LABEL_68;
    case 3u:
      if ( !(unsigned __int8)HvIsInPlaceBaseBlockValid(a5) )
      {
        v50 = 128;
        goto LABEL_92;
      }
      v40 = a5[5];
      v41 = a5[6];
      *(_BYTE *)(BugCheckParameter2 + 124) &= ~2u;
      *(_QWORD *)(BugCheckParameter2 + 64) = a5;
      *(_DWORD *)(BugCheckParameter2 + 192) = v39;
      *(_DWORD *)(BugCheckParameter2 + 196) = v41 - 4096 + (v40 << 12);
      a5[1022] = 0;
      v42 = a5[1];
      *(_DWORD *)(BugCheckParameter2 + 152) = v42;
      *(_DWORD *)(BugCheckParameter2 + 164) = v42;
      *(_DWORD *)(BugCheckParameter2 + 156) = v42;
      v35 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, (unsigned int)a5[10], 0LL);
      if ( v35 < 0 )
      {
        SetFailureLocation(v12, 0, 2, v35, 144);
        return (unsigned int)v35;
      }
      if ( (unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
      {
        v35 = HvViewMapStart(
                BugCheckParameter2 + 200,
                BugCheckParameter2,
                *(_QWORD *)(BugCheckParameter2 + 2664),
                (unsigned int)(a5[10] + 4096),
                1);
        if ( v35 < 0 )
        {
          SetFailureLocation(v12, 0, 2, v35, 152);
          return (unsigned int)v35;
        }
        *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
      }
      if ( (int)HvpBuildMap(BugCheckParameter2) < 0 )
      {
        v50 = 160;
        goto LABEL_92;
      }
LABEL_68:
      if ( a12 )
        *a12 = 0;
      return 0LL;
    case 1u:
      if ( *a5 == 1718052210
        && !a5[7]
        && a5[8] == 1
        && a5[5] <= 1u
        && (unsigned int)(a5[6] - 3) <= 3
        && a5[10] <= 0x7FFFE000u
        && (unsigned int)HvpHeaderCheckSum(a5) == a5[127] )
      {
        v29 = 858869059;
        LOBYTE(v28) = v51;
        v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                *(unsigned int *)(BugCheckParameter2 + 116),
                v28,
                858869059LL);
        *(_QWORD *)(BugCheckParameter2 + 64) = v30;
        if ( v30 )
        {
          if ( (((a7 << 9) - 1) & (unsigned int)v30) == 0 )
            goto LABEL_58;
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(
            v30,
            *(unsigned int *)(BugCheckParameter2 + 116));
          v29 = 875646275;
          LOBYTE(v43) = 1;
          v44 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(
                  4096LL,
                  v43,
                  875646275LL);
          *(_QWORD *)(BugCheckParameter2 + 64) = v44;
          if ( v44 )
          {
            *(_DWORD *)(BugCheckParameter2 + 116) = 4096;
LABEL_58:
            if ( a12 )
              *a12 = v29;
            v31 = *(_OWORD **)(BugCheckParameter2 + 64);
            v32 = a5;
            do
            {
              *v31 = *v32;
              v31[1] = v32[1];
              v31[2] = v32[2];
              v31[3] = v32[3];
              v31[4] = v32[4];
              v31[5] = v32[5];
              v31[6] = v32[6];
              v31 += 8;
              v33 = v32[7];
              v32 += 8;
              *(v31 - 1) = v33;
              --v23;
            }
            while ( v23 );
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = a5[1023];
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) = a5[1022];
            v34 = a5[1];
            *(_DWORD *)(BugCheckParameter2 + 152) = v34;
            *(_DWORD *)(BugCheckParameter2 + 164) = v34;
            *(_DWORD *)(BugCheckParameter2 + 156) = v34;
            *(_DWORD *)(BugCheckParameter2 + 196) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                                  - 4096
                                                  + (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) << 12);
            v35 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, (unsigned int)a5[10], 0LL);
            if ( v35 < 0 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
                *(_QWORD *)(BugCheckParameter2 + 64),
                *(unsigned int *)(BugCheckParameter2 + 116));
              *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
              SetFailureLocation(v12, 0, 2, v35, 224);
            }
            else
            {
              if ( (int)HvpBuildMapForLoaderHive(BugCheckParameter2) >= 0 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0 && a11 )
                  *a11 = 1;
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) &= ~1u;
                HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
                return 0LL;
              }
              v35 = -1073741492;
              SetFailureLocation(v12, 0, 2, -1073741492, 240);
              (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
                *(_QWORD *)(BugCheckParameter2 + 64),
                *(unsigned int *)(BugCheckParameter2 + 116));
              *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
            }
            return (unsigned int)v35;
          }
          v50 = 208;
        }
        else
        {
          v50 = 192;
        }
        goto LABEL_77;
      }
      v50 = 176;
LABEL_92:
      v35 = -1073741492;
      goto LABEL_126;
  }
  v24 = 2;
  if ( a2 != 5 )
    v24 = a2;
  if ( v24 != 2 )
    return 3221225485LL;
  CmpTraceHiveMountStart();
  Hive = HvLoadHive(BugCheckParameter2);
  CmpTraceHiveMountStop(Hive);
  if ( Hive && Hive != 1073741833 )
  {
    SetFailureLocation(v12, 0, 2, -1073741491, 256);
    return (unsigned int)Hive;
  }
  if ( a12 )
    *a12 = 825445699;
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0 && a11 )
    *a11 = 1;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) &= ~1u;
  if ( Hive != 1073741833 )
    goto LABEL_31;
  *(_BYTE *)(BugCheckParameter2 + 174) = 0;
  Hive = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
  if ( Hive < 0 )
  {
    LOBYTE(v45) = 1;
    HvFreeHive(BugCheckParameter2, v45);
    *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
    SetFailureLocation(v12, 0, 2, Hive, 260);
    return (unsigned int)Hive;
  }
  if ( a11 )
    *a11 = 1;
  memmove(
    *(void **)(BugCheckParameter2 + 104),
    *(const void **)(BugCheckParameter2 + 80),
    *(unsigned int *)(BugCheckParameter2 + 92));
  *(_DWORD *)(BugCheckParameter2 + 112) = *(_DWORD *)(BugCheckParameter2 + 88);
  RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 72));
  *(_DWORD *)(BugCheckParameter2 + 144) |= 0x100u;
  v46 = (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) == 0;
  *(_DWORD *)(BugCheckParameter2 + 88) = 0;
  if ( !v46 )
  {
LABEL_122:
    *(_DWORD *)(BugCheckParameter2 + 88) = 0;
LABEL_31:
    HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
    HvpSetRangeProtection(BugCheckParameter2);
    if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
      HvViewMapUnpinFile((volatile signed __int64 *)(BugCheckParameter2 + 200));
    return 0LL;
  }
  v35 = CmpDoFileSetSizeEx(
          BugCheckParameter2,
          0LL,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) + 4096),
          1LL);
  if ( v35 < 0 )
  {
    LOBYTE(v47) = 1;
    HvFreeHive(BugCheckParameter2, v47);
    *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
    SetFailureLocation(v12, 0, 2, v35, 264);
    return (unsigned int)v35;
  }
  v35 = HvWriteHivePrimaryFile(BugCheckParameter2);
  LOBYTE(v48) = 1;
  if ( v35 < 0 )
  {
    HvFreeHive(BugCheckParameter2, v48);
    *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
    SetFailureLocation(v12, 0, 2, v35, 272);
    return (unsigned int)v35;
  }
  *(_DWORD *)(BugCheckParameter2 + 164) = *(_DWORD *)(BugCheckParameter2 + 152);
  v35 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v48, 0LL, 0LL);
  if ( v35 >= 0 )
  {
    RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
    *(_DWORD *)(BugCheckParameter2 + 88) = 0;
    *(_DWORD *)(BugCheckParameter2 + 112) = 0;
    HvResetLogFileStatusAll(BugCheckParameter2);
    *(_DWORD *)(BugCheckParameter2 + 160) = 0;
    goto LABEL_122;
  }
  LOBYTE(v49) = 1;
  HvFreeHive(BugCheckParameter2, v49);
  *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
  SetFailureLocation(v12, 0, 2, v35, 288);
  return (unsigned int)v35;
}
