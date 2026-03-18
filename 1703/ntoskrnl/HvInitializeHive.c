/*
 * XREFs of HvInitializeHive @ 0x140439E6C
 * Callers:
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmGetSystemControlValues @ 0x14080E8DC (CmGetSystemControlValues.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     HvViewMapUnpinFile @ 0x1401E0F84 (HvViewMapUnpinFile.c)
 *     HvWriteHivePrimaryFile @ 0x1404391D8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404394A0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpFillFileName @ 0x14043A54C (HvpFillFileName.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14043A5F4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpTraceHiveMountStop @ 0x14043A6A0 (CmpTraceHiveMountStop.c)
 *     HvLoadHive @ 0x14043A6FC (HvLoadHive.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14043AFB4 (HvpAdjustHiveFreeDisplay.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x14043B388 (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     HvpHeaderCheckSum @ 0x14043B4E8 (HvpHeaderCheckSum.c)
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     HvResetLogFileStatusAll @ 0x14045DEE8 (HvResetLogFileStatusAll.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     HvpSetRangeProtection @ 0x1405151A8 (HvpSetRangeProtection.c)
 *     HvpBuildMapForLoaderHive @ 0x1405BD558 (HvpBuildMapForLoaderHive.c)
 *     HvIsInPlaceBaseBlockValid @ 0x14066A208 (HvIsInPlaceBaseBlockValid.c)
 *     HvViewMapStart @ 0x140675DBC (HvViewMapStart.c)
 *     HvpBuildMap @ 0x14067673C (HvpBuildMap.c)
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
  REGHANDLE v25; // rbx
  __int64 Hive; // r14
  _DWORD *v28; // r14
  __int64 v29; // rdx
  int v30; // r12d
  __int64 v31; // rax
  _OWORD *v32; // rax
  _OWORD *v33; // rcx
  __int128 v34; // xmm1
  int v35; // eax
  int v36; // ebx
  char v37; // al
  __int64 v38; // rdx
  int v39; // eax
  int v40; // r10d
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  bool v47; // zf
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rdx
  int UserData; // [rsp+20h] [rbp-58h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-48h] BYREF
  bool v54; // [rsp+88h] [rbp+10h]

  v12 = *(_QWORD *)(BugCheckParameter2 + 56);
  if ( a2 > 5 )
  {
    UserData = 0;
    goto LABEL_127;
  }
  if ( (a3 & 0xFFE17CEC) != 0 )
  {
    UserData = 16;
    goto LABEL_127;
  }
  if ( a4 > 2 )
  {
    UserData = 32;
    goto LABEL_127;
  }
  if ( (unsigned int)(a7 - 1) > 7 )
  {
    UserData = 48;
    goto LABEL_127;
  }
  if ( !a5 && ((a2 - 1) & 0xFFFFFFFC) == 0 && a2 != 2 )
  {
    UserData = 64;
LABEL_127:
    v36 = -1073741811;
    goto LABEL_128;
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
  v54 = (v20 & 1) == 0;
  *(_QWORD *)(BugCheckParameter2 + 176) = MEMORY[0xFFFFF78000000014];
  memset((void *)(BugCheckParameter2 + 200), 0, 0x4B0uLL);
  *(_QWORD *)(BugCheckParameter2 + 208) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 174) = 1;
  if ( !a2 )
  {
    LOBYTE(v22) = v54;
    v28 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                      *(unsigned int *)(BugCheckParameter2 + 116),
                      v22,
                      825314627LL);
    if ( v28 )
    {
      if ( (((a7 << 9) - 1) & (unsigned int)v28) == 0 )
      {
        if ( a12 )
          *a12 = 825314627;
        goto LABEL_43;
      }
      (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(
        v28,
        *(unsigned int *)(BugCheckParameter2 + 116));
      LOBYTE(v38) = 1;
      v28 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(
                        4096LL,
                        v38,
                        842091843LL);
      if ( v28 )
      {
        *(_DWORD *)(BugCheckParameter2 + 116) = 4096;
        if ( a12 )
          *a12 = 842091843;
LABEL_43:
        memset(v28, 0, 0x1000uLL);
        v28[9] = -1;
        *v28 = 1718052210;
        v28[1] = 1;
        v28[2] = 1;
        v28[7] = 0;
        v28[8] = 1;
        v28[10] = 0;
        v28[11] = 1;
        v28[127] = 0;
        HvpFillFileName(v28, a8);
        v28[36] = 0;
        v28[5] = 1;
        if ( (a3 & 0x80000) != 0 )
        {
          v28[36] = 2;
          v28[6] = 6;
          *(_DWORD *)(BugCheckParameter2 + 196) = 6;
        }
        else
        {
          v28[6] = 3;
          *(_DWORD *)(BugCheckParameter2 + 196) = 3;
        }
        v28[41] = 1836346738;
        *(_DWORD *)(BugCheckParameter2 + 152) = 1;
        *(_DWORD *)(BugCheckParameter2 + 164) = 1;
        *(_DWORD *)(BugCheckParameter2 + 156) = 1;
        *(_QWORD *)(v28 + 3) = v21;
        if ( a9 )
        {
          *((_OWORD *)v28 + 7) = *a9;
          *((_OWORD *)v28 + 8) = *a9;
        }
        if ( a10 )
          *(_OWORD *)(v28 + 37) = *a10;
        *(_QWORD *)(BugCheckParameter2 + 64) = v28;
        v28[1022] = 0;
        if ( !(unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
          return 0LL;
        v39 = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, 4096LL, 0LL);
        v36 = v39;
        if ( v39 >= 0 )
        {
          v36 = HvViewMapStart(
                  BugCheckParameter2 + 200,
                  BugCheckParameter2,
                  *(_QWORD *)(BugCheckParameter2 + 2664),
                  4096LL,
                  1);
          if ( v36 >= 0 )
          {
            *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
            return 0LL;
          }
          SetFailureLocation(v12, 0, 2, v36, 120);
        }
        else
        {
          SetFailureLocation(v12, 0, 2, v39, 116);
        }
        return (unsigned int)v36;
      }
      UserData = 112;
    }
    else
    {
      UserData = 96;
    }
LABEL_79:
    v36 = -1073741670;
LABEL_128:
    SetFailureLocation(v12, 0, 2, v36, UserData);
    return (unsigned int)v36;
  }
  v23 = 4LL;
  switch ( a2 )
  {
    case 4u:
      *(_QWORD *)(BugCheckParameter2 + 64) = a5;
      v37 = *(_BYTE *)(BugCheckParameter2 + 124) | 1;
      *(_DWORD *)(BugCheckParameter2 + 196) = a5[6] - 4096 + (a5[5] << 12);
      *(_BYTE *)(BugCheckParameter2 + 124) = v37 | 2;
      *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellFlat;
      *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellFlat;
      *(_DWORD *)(BugCheckParameter2 + 1400) = a5[10];
      *(_DWORD *)(BugCheckParameter2 + 192) = 1;
      goto LABEL_70;
    case 3u:
      if ( !(unsigned __int8)HvIsInPlaceBaseBlockValid(a5) )
      {
        UserData = 128;
        goto LABEL_94;
      }
      v41 = a5[5];
      v42 = a5[6];
      *(_BYTE *)(BugCheckParameter2 + 124) &= ~2u;
      *(_QWORD *)(BugCheckParameter2 + 64) = a5;
      *(_DWORD *)(BugCheckParameter2 + 192) = v40;
      *(_DWORD *)(BugCheckParameter2 + 196) = v42 - 4096 + (v41 << 12);
      a5[1022] = 0;
      v43 = a5[1];
      *(_DWORD *)(BugCheckParameter2 + 152) = v43;
      *(_DWORD *)(BugCheckParameter2 + 164) = v43;
      *(_DWORD *)(BugCheckParameter2 + 156) = v43;
      v36 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, (unsigned int)a5[10], 0LL);
      if ( v36 < 0 )
      {
        SetFailureLocation(v12, 0, 2, v36, 144);
        return (unsigned int)v36;
      }
      if ( (unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
      {
        v36 = HvViewMapStart(
                BugCheckParameter2 + 200,
                BugCheckParameter2,
                *(_QWORD *)(BugCheckParameter2 + 2664),
                (unsigned int)(a5[10] + 4096),
                1);
        if ( v36 < 0 )
        {
          SetFailureLocation(v12, 0, 2, v36, 152);
          return (unsigned int)v36;
        }
        *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
      }
      if ( (int)HvpBuildMap(BugCheckParameter2) < 0 )
      {
        UserData = 160;
        goto LABEL_94;
      }
LABEL_70:
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
        v30 = 858869059;
        LOBYTE(v29) = v54;
        v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                *(unsigned int *)(BugCheckParameter2 + 116),
                v29,
                858869059LL);
        *(_QWORD *)(BugCheckParameter2 + 64) = v31;
        if ( v31 )
        {
          if ( (((a7 << 9) - 1) & (unsigned int)v31) == 0 )
            goto LABEL_60;
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(
            v31,
            *(unsigned int *)(BugCheckParameter2 + 116));
          v30 = 875646275;
          LOBYTE(v44) = 1;
          v45 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(
                  4096LL,
                  v44,
                  875646275LL);
          *(_QWORD *)(BugCheckParameter2 + 64) = v45;
          if ( v45 )
          {
            *(_DWORD *)(BugCheckParameter2 + 116) = 4096;
LABEL_60:
            if ( a12 )
              *a12 = v30;
            v32 = *(_OWORD **)(BugCheckParameter2 + 64);
            v33 = a5;
            do
            {
              *v32 = *v33;
              v32[1] = v33[1];
              v32[2] = v33[2];
              v32[3] = v33[3];
              v32[4] = v33[4];
              v32[5] = v33[5];
              v32[6] = v33[6];
              v32 += 8;
              v34 = v33[7];
              v33 += 8;
              *(v32 - 1) = v34;
              --v23;
            }
            while ( v23 );
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = a5[1023];
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) = a5[1022];
            v35 = a5[1];
            *(_DWORD *)(BugCheckParameter2 + 152) = v35;
            *(_DWORD *)(BugCheckParameter2 + 164) = v35;
            *(_DWORD *)(BugCheckParameter2 + 156) = v35;
            *(_DWORD *)(BugCheckParameter2 + 196) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                                  - 4096
                                                  + (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) << 12);
            v36 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, (unsigned int)a5[10], 0LL);
            if ( v36 < 0 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
                *(_QWORD *)(BugCheckParameter2 + 64),
                *(unsigned int *)(BugCheckParameter2 + 116));
              *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
              SetFailureLocation(v12, 0, 2, v36, 224);
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
              v36 = -1073741492;
              SetFailureLocation(v12, 0, 2, -1073741492, 240);
              (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
                *(_QWORD *)(BugCheckParameter2 + 64),
                *(unsigned int *)(BugCheckParameter2 + 116));
              *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
            }
            return (unsigned int)v36;
          }
          UserData = 208;
        }
        else
        {
          UserData = 192;
        }
        goto LABEL_79;
      }
      UserData = 176;
LABEL_94:
      v36 = -1073741492;
      goto LABEL_128;
  }
  v24 = 2;
  if ( a2 != 5 )
    v24 = a2;
  if ( v24 != 2 )
    return 3221225485LL;
  v25 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_MOUNT_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v25, &EventDescriptor, 0LL, 0, 0LL);
  Hive = (unsigned int)HvLoadHive(BugCheckParameter2);
  CmpTraceHiveMountStop(Hive);
  if ( (_DWORD)Hive && (_DWORD)Hive != 1073741833 )
  {
    SetFailureLocation(v12, 0, 2, -1073741491, 256);
    return (unsigned int)Hive;
  }
  if ( a12 )
    *a12 = 825445699;
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0 && a11 )
    *a11 = 1;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) &= ~1u;
  if ( (_DWORD)Hive != 1073741833 )
    goto LABEL_33;
  *(_BYTE *)(BugCheckParameter2 + 174) = 0;
  LODWORD(Hive) = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
  if ( (int)Hive < 0 )
  {
    LOBYTE(v46) = 1;
    HvFreeHive(BugCheckParameter2, v46);
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
  v47 = (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) == 0;
  *(_DWORD *)(BugCheckParameter2 + 88) = 0;
  if ( !v47 )
  {
LABEL_124:
    *(_DWORD *)(BugCheckParameter2 + 88) = 0;
LABEL_33:
    HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
    HvpSetRangeProtection(BugCheckParameter2);
    if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
      HvViewMapUnpinFile((volatile signed __int64 *)(BugCheckParameter2 + 200));
    return 0LL;
  }
  v36 = CmpDoFileSetSizeEx(
          BugCheckParameter2,
          0LL,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) + 4096),
          1LL);
  if ( v36 < 0 )
  {
    LOBYTE(v48) = 1;
    HvFreeHive(BugCheckParameter2, v48);
    *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
    SetFailureLocation(v12, 0, 2, v36, 264);
    return (unsigned int)v36;
  }
  v36 = HvWriteHivePrimaryFile(BugCheckParameter2, 0LL, 0LL, v49);
  LOBYTE(v50) = 1;
  if ( v36 < 0 )
  {
    HvFreeHive(BugCheckParameter2, v50);
    *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
    SetFailureLocation(v12, 0, 2, v36, 272);
    return (unsigned int)v36;
  }
  *(_DWORD *)(BugCheckParameter2 + 164) = *(_DWORD *)(BugCheckParameter2 + 152);
  v36 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 1, 0, 0);
  if ( v36 >= 0 )
  {
    RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
    *(_DWORD *)(BugCheckParameter2 + 88) = 0;
    *(_DWORD *)(BugCheckParameter2 + 112) = 0;
    HvResetLogFileStatusAll(BugCheckParameter2);
    *(_DWORD *)(BugCheckParameter2 + 160) = 0;
    goto LABEL_124;
  }
  LOBYTE(v51) = 1;
  HvFreeHive(BugCheckParameter2, v51);
  *(_DWORD *)(BugCheckParameter2 + 144) |= 8u;
  SetFailureLocation(v12, 0, 2, v36, 288);
  return (unsigned int)v36;
}
