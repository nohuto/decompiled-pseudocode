/*
 * XREFs of HvpGetLogHeader @ 0x1406A11C8
 * Callers:
 *     HvLoadHive @ 0x1404E4CD0 (HvLoadHive.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14017DAE0 (ZwQueryInformationFile.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvpLogIneligibleLogHeader @ 0x1401E5930 (HvpLogIneligibleLogHeader.c)
 *     HvpLogInvalidLogHeader @ 0x1401E59D8 (HvpLogInvalidLogHeader.c)
 *     HvpLogUnreadableLog @ 0x1401E5B48 (HvpLogUnreadableLog.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x1404E4CA4 (HvpHeaderCheckSum.c)
 *     HvpDetermineLatestLogFile @ 0x1406A3014 (HvpDetermineLatestLogFile.c)
 */

__int64 __fastcall HvpGetLogHeader(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned int *a5,
        char *a6,
        _OWORD *a7)
{
  EVENT_DATA_DESCRIPTOR *v7; // rbx
  _OWORD *v8; // rsi
  int v9; // eax
  bool v10; // zf
  ULONGLONG v11; // r14
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  unsigned int v14; // edi
  SIZE_T v15; // r13
  PVOID PoolWithTag; // rax
  unsigned int v17; // ebx
  ULONGLONG Ptr; // rdi
  int v19; // eax
  int v20; // r13d
  __int64 (__fastcall *v21)(__int64, __int64, int *, ULONGLONG, unsigned int); // rax
  char v22; // al
  __int64 v23; // rcx
  __int64 *v24; // r11
  int v25; // r10d
  unsigned int v26; // r9d
  int v27; // r10d
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdx
  _OWORD *v31; // rax
  __int128 v32; // xmm1
  __int64 (__fastcall *v33)(__int64, __int64, int *, ULONGLONG, unsigned int); // rax
  char v34; // al
  __int64 v35; // rcx
  __int64 *v36; // r11
  int v37; // r10d
  unsigned int v38; // r9d
  int v39; // r10d
  __int64 v40; // r13
  char v41; // al
  __int64 v42; // rcx
  int v43; // r10d
  unsigned int v44; // r9d
  int v45; // r10d
  __int64 v46; // rdx
  __int128 v47; // xmm1
  int v48; // ecx
  int v49; // eax
  __int64 v50; // rdx
  __int128 v51; // xmm1
  char v52; // al
  unsigned int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // eax
  PVOID *v56; // rdi
  __int64 v57; // rsi
  char v59; // [rsp+30h] [rbp-D0h]
  unsigned int v60; // [rsp+34h] [rbp-CCh]
  int v61; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v62; // [rsp+40h] [rbp-C0h]
  char v63; // [rsp+48h] [rbp-B8h] BYREF
  char v64; // [rsp+49h] [rbp-B7h] BYREF
  char v65; // [rsp+4Ah] [rbp-B6h] BYREF
  char v66; // [rsp+4Bh] [rbp-B5h]
  unsigned int v67; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v68; // [rsp+54h] [rbp-ACh]
  int v69; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v70; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 *v71; // [rsp+60h] [rbp-A0h]
  unsigned int v72; // [rsp+68h] [rbp-98h]
  unsigned int v73; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v74; // [rsp+70h] [rbp-90h]
  int FileInformation; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v76; // [rsp+80h] [rbp-80h]
  unsigned int *v77; // [rsp+88h] [rbp-78h]
  char *v78; // [rsp+90h] [rbp-70h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR v80; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  char *v82; // [rsp+F0h] [rbp-10h]
  int v83; // [rsp+F8h] [rbp-8h]
  int v84; // [rsp+FCh] [rbp-4h]
  char *v85; // [rsp+100h] [rbp+0h]
  int v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+10Ch] [rbp+Ch]
  char *v88; // [rsp+110h] [rbp+10h]
  int v89; // [rsp+118h] [rbp+18h]
  int v90; // [rsp+11Ch] [rbp+1Ch]
  unsigned int *v91; // [rsp+120h] [rbp+20h]
  int v92; // [rsp+128h] [rbp+28h]
  int v93; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v94; // [rsp+130h] [rbp+30h]
  int v95; // [rsp+138h] [rbp+38h]
  int v96; // [rsp+13Ch] [rbp+3Ch]

  v7 = &v80;
  v8 = a7;
  v77 = a5;
  v78 = a6;
  v80.Ptr = 0LL;
  *(_QWORD *)&v80.Size = 0LL;
  v9 = *(_DWORD *)(a1 + 120) << 9;
  v74 = a1;
  v71 = a2;
  v70 = a3;
  v76 = a4;
  v59 = 0;
  v66 = 0;
  v10 = *(_DWORD *)(a1 + 148) == 1;
  v61 = 0;
  v11 = 0LL;
  v62 = 0LL;
  v12 = 0;
  v60 = 0;
  v13 = 0;
  v68 = 0;
  v14 = 0;
  v72 = (v9 + 4095) & ~(v9 - 1);
  v67 = 0;
  v73 = !v10 + 1;
  v15 = v72;
  do
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v15, 0x34334D43u);
    v7->Ptr = (ULONGLONG)PoolWithTag;
    if ( !PoolWithTag )
    {
      v17 = 2;
      goto LABEL_97;
    }
    memset(PoolWithTag, 0, v15);
    ++v14;
    v7 = (EVENT_DATA_DESCRIPTOR *)((char *)v7 + 8);
  }
  while ( v14 < v73 );
  v17 = 6;
  Ptr = v80.Ptr;
  v19 = *(_DWORD *)(v74 + 148);
  v20 = 4;
  if ( v19 != 1 )
  {
    if ( (unsigned int)(v19 - 4) > 1 )
      goto LABEL_18;
    v33 = *(__int64 (__fastcall **)(__int64, __int64, int *, ULONGLONG, unsigned int))(v74 + 48);
    v69 = 0;
    v11 = v80.Ptr;
    v34 = v33(v74, 4LL, &v69, v80.Ptr, v72);
    if ( v34 == 1 )
    {
      v36 = v71;
      if ( *(_DWORD *)Ptr == 1718052210 && *(_DWORD *)(Ptr + 4) == *(_DWORD *)(Ptr + 8) && *(_QWORD *)(Ptr + 12) == *v71 )
      {
        v37 = *(_DWORD *)(Ptr + 28);
        if ( v37 == 6 || v37 == 1 )
        {
          v35 = *(unsigned int *)(Ptr + 40);
          if ( (unsigned int)(v35 - 1) <= 0x7FFFDFFF
            && (v35 & 0xFFF) == 0
            && *(_DWORD *)(Ptr + 508) == (unsigned int)HvpHeaderCheckSum((_DWORD *)Ptr) )
          {
            if ( v39 != 6 )
            {
              v13 = 1;
              LODWORD(v62) = 4;
              v59 = 1;
              v67 = 0;
              goto LABEL_19;
            }
            if ( v38 < v70 )
            {
              HvpLogIneligibleLogHeader(v35, 4, v70, v38);
            }
            else
            {
              v67 = v38;
              v61 = 4;
              v12 = v38;
              LODWORD(v62) = 4;
              v13 = 1;
            }
LABEL_51:
            v69 = 0;
            v40 = v13;
            v11 = *(&v80.Ptr + v13);
            v41 = (*(__int64 (__fastcall **)(__int64, __int64, int *, ULONGLONG, unsigned int))(v74 + 48))(
                    v74,
                    5LL,
                    &v69,
                    v11,
                    v72);
            if ( v41 == 1 )
            {
              if ( *(_DWORD *)v11 == 1718052210
                && *(_DWORD *)(v11 + 4) == *(_DWORD *)(v11 + 8)
                && *(_QWORD *)(v11 + 12) == *v71 )
              {
                v43 = *(_DWORD *)(v11 + 28);
                if ( v43 == 6 || v43 == 1 && !v13 )
                {
                  v42 = *(unsigned int *)(v11 + 40);
                  if ( (unsigned int)(v42 - 1) <= 0x7FFFDFFF
                    && (v42 & 0xFFF) == 0
                    && *(_DWORD *)(v11 + 508) == (unsigned int)HvpHeaderCheckSum((_DWORD *)v11) )
                  {
                    if ( v45 != 6 )
                    {
                      v12 = 0;
                      v59 = 1;
                      v20 = 5;
                      v67 = 0;
                      LODWORD(v62) = 5;
                      ++v13;
                      goto LABEL_19;
                    }
                    if ( v44 >= v70 )
                    {
                      *(&v67 + v13++) = v44;
                      v28 = v68;
                      v12 = v67;
                      *((_DWORD *)&v62 + v40) = 5;
                      v20 = v62;
                      v60 = v28;
                      goto LABEL_20;
                    }
                    HvpLogIneligibleLogHeader(v42, 5, v70, v44);
                    goto LABEL_68;
                  }
                }
              }
            }
            else if ( !v41 )
            {
              HvpLogUnreadableLog(v42, 5);
              goto LABEL_68;
            }
            HvpLogInvalidLogHeader(v42, v71, 5, (int *)v11);
LABEL_68:
            v20 = v61;
LABEL_69:
            v28 = 0;
            goto LABEL_20;
          }
        }
      }
    }
    else
    {
      if ( !v34 )
      {
        HvpLogUnreadableLog(v35, 4);
        goto LABEL_51;
      }
      v36 = v71;
    }
    HvpLogInvalidLogHeader(v35, v36, 4, (int *)Ptr);
    goto LABEL_51;
  }
  v21 = *(__int64 (__fastcall **)(__int64, __int64, int *, ULONGLONG, unsigned int))(v74 + 48);
  v69 = 0;
  v11 = v80.Ptr;
  v22 = v21(v74, 1LL, &v69, v80.Ptr, v72);
  v20 = 1;
  if ( v22 != 1 )
  {
    if ( !v22 )
    {
      HvpLogUnreadableLog(v23, 1);
      goto LABEL_18;
    }
    v24 = v71;
    goto LABEL_31;
  }
  v24 = v71;
  if ( *(_DWORD *)Ptr != 1718052210
    || *(_DWORD *)(Ptr + 4) != *(_DWORD *)(Ptr + 8)
    || *(_QWORD *)(Ptr + 12) != *v71
    || (v25 = *(_DWORD *)(Ptr + 28), v25 != 6) && v25 != 1
    || (v23 = *(unsigned int *)(Ptr + 40), (unsigned int)(v23 - 1) > 0x7FFFDFFF)
    || (v23 & 0xFFF) != 0
    || *(_DWORD *)(Ptr + 508) != (unsigned int)HvpHeaderCheckSum((_DWORD *)Ptr) )
  {
LABEL_31:
    HvpLogInvalidLogHeader(v23, v24, 1, (int *)Ptr);
    goto LABEL_18;
  }
  if ( v27 == 6 )
  {
    if ( v26 >= v70 )
    {
      LODWORD(v62) = 1;
      v12 = v26;
      v67 = v26;
      v13 = 1;
      goto LABEL_69;
    }
    HvpLogIneligibleLogHeader(v23, 1, v70, v26);
LABEL_18:
    v20 = 0;
  }
  else
  {
    LODWORD(v62) = 1;
    v13 = 1;
    v67 = 0;
    v59 = 1;
  }
LABEL_19:
  v28 = 0;
LABEL_20:
  if ( stru_1403549F0.LevelPlus1 > 5 )
  {
    v84 = 0;
    v87 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v64 = v62;
    v65 = BYTE4(v62);
    v82 = &v63;
    v85 = &v64;
    v88 = &v65;
    v91 = &v73;
    v70 = v28;
    v94 = &v70;
    v63 = v13;
    v73 = v12;
    v83 = 1;
    v86 = 1;
    v89 = 1;
    v92 = 4;
    v95 = 4;
    TlgWrite(&stru_1403549F0, &unk_1402CF156, 0LL, 0LL, 7u, &pData);
  }
  if ( !a7 )
  {
    if ( v13 )
    {
      v52 = v66;
      v17 = 3;
      goto LABEL_86;
    }
LABEL_77:
    v17 = 1;
    goto LABEL_97;
  }
  if ( v13 == 2 )
  {
    v29 = (unsigned int)HvpDetermineLatestLogFile(&v67);
    v30 = 32LL;
    v31 = (_OWORD *)*(&v80.Ptr + v29);
    do
    {
      *v8 = *v31;
      v8[1] = v31[1];
      v8[2] = v31[2];
      v8[3] = v31[3];
      v8[4] = v31[4];
      v8[5] = v31[5];
      v8[6] = v31[6];
      v8 += 8;
      v32 = v31[7];
      v31 += 8;
      *(v8 - 1) = v32;
      --v30;
    }
    while ( v30 );
    goto LABEL_74;
  }
  if ( v13 != 1 )
  {
    if ( (CmpSelfHeal || (CmpBootType & 6) != 0)
      && ZwQueryInformationFile(*(HANDLE *)(v74 + 2664), &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation) >= 0 )
    {
      v48 = FileInformation - 4096;
      if ( (unsigned int)(FileInformation - 4097) <= 0x7FFFDFFF && (v48 & 0xFFF) == 0 )
      {
        *(_DWORD *)(v11 + 40) = v48;
        *(_DWORD *)v11 = 1718052210;
        *(_DWORD *)(v11 + 8) = 1;
        *(_DWORD *)(v11 + 4) = 1;
        *(_DWORD *)(v11 + 44) = 1;
        v49 = HvpHeaderCheckSum((_DWORD *)v11);
        v50 = 32LL;
        *(_DWORD *)(v11 + 508) = v49;
        do
        {
          *v8 = *(_OWORD *)v11;
          v8[1] = *(_OWORD *)(v11 + 16);
          v8[2] = *(_OWORD *)(v11 + 32);
          v8[3] = *(_OWORD *)(v11 + 48);
          v8[4] = *(_OWORD *)(v11 + 64);
          v8[5] = *(_OWORD *)(v11 + 80);
          v8[6] = *(_OWORD *)(v11 + 96);
          v8 += 8;
          v51 = *(_OWORD *)(v11 + 112);
          v11 += 128LL;
          *(v8 - 1) = v51;
          --v50;
        }
        while ( v50 );
        goto LABEL_83;
      }
    }
    goto LABEL_77;
  }
  v46 = 32LL;
  do
  {
    *v8 = *(_OWORD *)Ptr;
    v8[1] = *(_OWORD *)(Ptr + 16);
    v8[2] = *(_OWORD *)(Ptr + 32);
    v8[3] = *(_OWORD *)(Ptr + 48);
    v8[4] = *(_OWORD *)(Ptr + 64);
    v8[5] = *(_OWORD *)(Ptr + 80);
    v8[6] = *(_OWORD *)(Ptr + 96);
    v8 += 8;
    v47 = *(_OWORD *)(Ptr + 112);
    Ptr += 128LL;
    *(v8 - 1) = v47;
    --v46;
  }
  while ( v46 );
LABEL_74:
  v17 = 3;
LABEL_83:
  v52 = 1;
LABEL_86:
  if ( v13 == 2 )
  {
    if ( v52 )
    {
      v54 = HvpDetermineLatestLogFile(&v67);
      v53 = *(&v67 + v54);
      v62 = *((unsigned int *)&v62 + v54);
    }
    else
    {
      v53 = v60;
      if ( v60 > v12 )
        v53 = v12;
      else
        v62 = __PAIR64__(v20, HIDWORD(v62));
    }
  }
  else
  {
    v55 = 0;
    if ( v13 == 1 )
      v55 = v12;
    v53 = v55;
  }
  *v76 = v62;
  *v77 = v53;
  *v78 = v59;
LABEL_97:
  v56 = (PVOID *)&v80;
  v57 = 2LL;
  do
  {
    if ( *v56 )
      ExFreePoolWithTag(*v56, 0);
    ++v56;
    --v57;
  }
  while ( v57 );
  if ( v17 == 1 && stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
    TlgWrite(&stru_1403549F0, &unk_1402CF132, 0LL, 0LL, 2u, &v80);
  return v17;
}
