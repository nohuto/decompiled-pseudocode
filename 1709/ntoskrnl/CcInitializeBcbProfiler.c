/*
 * XREFs of CcInitializeBcbProfiler @ 0x14080C364
 * Callers:
 *     CcInitializeCacheManager @ 0x140842C3C (CcInitializeCacheManager.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400AE6E0 (RtlSectionTableFromVirtualAddress.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 *     RtlpConvertFunctionEntry @ 0x14011D3F0 (RtlpConvertFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x14011E490 (RtlpLookupPrimaryFunctionEntry.c)
 *     KeInitializeTimer @ 0x140127500 (KeInitializeTimer.c)
 *     RtlLookupFunctionTable @ 0x14012B9A0 (RtlLookupFunctionTable.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     KiIsKernelCfgActive @ 0x140839914 (KiIsKernelCfgActive.c)
 *     KiGetLoadOptions @ 0x140858458 (KiGetLoadOptions.c)
 *     KiAreCodePatchesAllowed @ 0x14086B630 (KiAreCodePatchesAllowed.c)
 */

char CcInitializeBcbProfiler()
{
  struct _KTIMER *PoolWithTag; // rax
  const char *LoadOptions; // rax
  _IMAGE_NT_HEADERS64 *v2; // r9
  unsigned __int64 v3; // rax
  void *v4; // r8
  unsigned __int128 v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // r14
  PIMAGE_SECTION_HEADER v8; // rbx
  unsigned int *v9; // r8
  unsigned int VirtualAddress; // r9d
  unsigned int *v11; // rdi
  int v12; // r15d
  unsigned int *v13; // r10
  unsigned int PhysicalAddress; // ecx
  unsigned int v15; // edx
  unsigned int v16; // eax
  ULONG_PTR v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int128 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // ecx
  int v25; // ecx
  ULONG v26; // r10d
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r8d
  struct _KTIMER *Dpc; // rbx
  int v34; // esi
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int128 v40; // rax
  _BYTE *v41; // rax
  unsigned int *v42; // rax
  unsigned int Blink_low; // r13d
  _QWORD *v44; // rdi
  struct _LIST_ENTRY *Flink; // r12
  int v46; // r10d
  _QWORD *v47; // rdx
  unsigned int v48; // r15d
  _QWORD *v49; // r9
  unsigned __int64 v50; // rcx
  const char *v51; // rax
  _ULARGE_INTEGER v52; // r8
  unsigned int v53; // r11d
  __int64 v54; // rax
  __int64 v55; // r8
  unsigned __int64 v56; // rcx
  unsigned int v57; // edx
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  const char *v60; // rax
  _ULARGE_INTEGER v61; // r8
  __int64 v62; // rdx
  unsigned __int8 *v63; // rdi
  __int64 v64; // rax
  bool v65; // zf
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  LARGE_INTEGER v68; // r10
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rdx
  char SubStr[16]; // [rsp+30h] [rbp-69h] BYREF
  int v73; // [rsp+40h] [rbp-59h]
  int v74; // [rsp+44h] [rbp-55h]
  int v75; // [rsp+48h] [rbp-51h]
  int v76; // [rsp+4Ch] [rbp-4Dh]
  int v77; // [rsp+50h] [rbp-49h]
  int v78; // [rsp+54h] [rbp-45h]
  int v79; // [rsp+58h] [rbp-41h]
  int v80; // [rsp+5Ch] [rbp-3Dh]
  int v81; // [rsp+60h] [rbp-39h]
  int v82; // [rsp+64h] [rbp-35h]
  int v83; // [rsp+68h] [rbp-31h]
  int v84; // [rsp+6Ch] [rbp-2Dh]
  int v85; // [rsp+70h] [rbp-29h]
  int v86; // [rsp+74h] [rbp-25h]
  int v87; // [rsp+78h] [rbp-21h]
  int v88; // [rsp+7Ch] [rbp-1Dh]
  BOOL v89; // [rsp+80h] [rbp-19h]
  int v90; // [rsp+84h] [rbp-15h]
  unsigned __int64 v91; // [rsp+88h] [rbp-11h]
  __int64 v92; // [rsp+90h] [rbp-9h]
  _QWORD v93[11]; // [rsp+98h] [rbp-1h] BYREF
  unsigned int v94; // [rsp+100h] [rbp+67h] BYREF
  int v95; // [rsp+108h] [rbp+6Fh]
  int v96; // [rsp+110h] [rbp+77h]
  int v97; // [rsp+118h] [rbp+7Fh]

  LOBYTE(PoolWithTag) = -44;
  if ( MEMORY[0xFFFFF780000002D4] < 2u )
  {
    v95 = 19029;
    SubStr[0] = __ROR4__(2656, 165);
    v96 = 66560;
    SubStr[1] = __ROL4__(66560, 54);
    v97 = 587202560;
    SubStr[2] = __ROR4__(587202560, 55);
    v73 = 1114168;
    SubStr[3] = __ROR4__(1130496, 174);
    v74 = 8448;
    SubStr[4] = __ROL4__(8448, 57);
    v75 = 1006632961;
    SubStr[5] = __ROR4__(1006632961, 58);
    v76 = 662716475;
    SubStr[6] = __ROR4__(662700032, 183);
    v77 = 1344;
    SubStr[7] = __ROL4__(1344, 60);
    v78 = 1073741831;
    SubStr[8] = __ROR4__(1073741831, 61);
    SubStr[9] = 0;
    LoadOptions = (const char *)KiGetLoadOptions();
    PoolWithTag = (struct _KTIMER *)strstr(LoadOptions, SubStr);
    if ( !PoolWithTag )
    {
      v2 = RtlImageNtHeader((PVOID)0x140000000LL);
      v3 = __rdtsc();
      v4 = sub_14043C010;
      v5 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
      v92 = *((_QWORD *)&v5 + 1);
      v6 = v5 ^ *((_QWORD *)&v5 + 1);
      *((_QWORD *)&v5 + 1) = (((unsigned __int64)v5 ^ *((_QWORD *)&v5 + 1)) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v7 = v6 - 100 * ((*((_QWORD *)&v5 + 1) + ((unsigned __int64)(v6 - *((_QWORD *)&v5 + 1)) >> 1)) >> 6);
      v91 = v7;
      if ( v7 < 0x32 )
        v4 = CcBcbProfiler;
      v89 = v7 >= 0x32;
      v8 = RtlSectionTableFromVirtualAddress(v2, (PVOID)0x140000000LL, (unsigned int)v4 - 0x40000000);
      v9 = (unsigned int *)RtlLookupFunctionTable((unsigned __int64)v8, v93, &v94);
      if ( !v9 || v94 < 0xC )
      {
        v17 = -1073741701LL;
LABEL_67:
        v90 = -201326588;
        KeBugCheckEx(__ROR4__(-201326588, 90), 6uLL, (ULONG_PTR)v8, v17, 0LL);
      }
      VirtualAddress = v8->VirtualAddress;
      v11 = 0LL;
      v12 = 0;
      v13 = &v9[3 * (v94 / 0xC)];
      PhysicalAddress = v8->Misc.PhysicalAddress;
      if ( v8->SizeOfRawData > PhysicalAddress )
        PhysicalAddress = v8->SizeOfRawData;
      v15 = PhysicalAddress + VirtualAddress;
      do
      {
        v16 = *v9;
        if ( *v9 >= VirtualAddress )
        {
          if ( v16 >= v15 )
            break;
          v12 = (int)v9;
          if ( !v11 )
            v11 = v9;
        }
        if ( v16 >= v15 )
          break;
        v9 += 3;
      }
      while ( v9 != v13 );
      if ( !v11 )
      {
        v17 = -1073741569LL;
        goto LABEL_67;
      }
      v18 = __rdtsc();
      v19 = (__ROR8__(v18, 3) ^ v18) * (unsigned __int128)0x7010008004002001uLL;
      v93[1] = *((_QWORD *)&v19 + 1);
      v20 = v19 ^ *((_QWORD *)&v19 + 1);
      PoolWithTag = (struct _KTIMER *)(10 * (((unsigned __int64)v19 ^ *((_QWORD *)&v19 + 1)) / 0xA));
      if ( (unsigned __int64)(v20 - (_QWORD)PoolWithTag) < 5 )
      {
        v21 = __rdtsc();
        v22 = (__ROR8__(v21, 3) ^ v21) * (unsigned __int128)0x7010008004002001uLL;
        v93[2] = *((_QWORD *)&v22 + 1);
        v23 = ((unsigned __int64)v22 ^ *((_QWORD *)&v22 + 1)) % 0xB;
        if ( (unsigned int)v23 > 5 )
        {
          v27 = v23 - 6;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 == 1 )
                {
                  v85 = -1333354875;
                  v26 = __ROR4__(-1333354868, 33);
                }
                else
                {
                  v30 = __rdtsc();
                  v31 = __ROR8__(v30, 3);
                  v32 = (((v31 ^ v30) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v31 ^ v30));
                  v26 = ((((((v32 % 0x1A + 97) << 8) | ((v32 >> 5) % 0x1A + 65)) << 8) | ((v32 >> 10) % 0x1A + 97)) << 8) | ((v32 >> 15) % 0x1A + 65);
                }
              }
              else
              {
                v86 = 1684422978;
                v26 = __ROR4__(1684422978, 8);
              }
            }
            else
            {
              v87 = -2100910376;
              v26 = __ROL4__(-2100910376, 7);
            }
          }
          else
          {
            v88 = 1314342514;
            v26 = __ROR4__(1314342516, 24);
          }
        }
        else if ( (_DWORD)v23 == 5 )
        {
          v84 = 680282605;
          v26 = __ROR4__(680282605, 5);
        }
        else if ( (_DWORD)v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 == 1 )
              {
                v80 = -1474152136;
                v26 = __ROR4__(-1474152133, 15);
              }
              else
              {
                v79 = 1728537748;
                v26 = __ROL4__(1728537748, 4);
              }
            }
            else
            {
              v81 = -2051698419;
              v26 = __ROR4__(-2051698419, 2);
            }
          }
          else
          {
            v82 = -1297272415;
            v26 = __ROL4__(-1297272415, 1);
          }
        }
        else
        {
          v83 = -795291432;
          v26 = __ROR4__(-795291432, 6);
        }
        PoolWithTag = (struct _KTIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, v26);
        Dpc = PoolWithTag;
        if ( PoolWithTag )
        {
          KeInitializeTimer(PoolWithTag + 1);
          Dpc->Header.LockNV = 275;
          Dpc->DueTime.QuadPart = (unsigned __int64)CcBcbProfiler;
          v34 = 1;
          Dpc->TimerListEntry.Flink = (struct _LIST_ENTRY *)Dpc;
          *(_QWORD *)&Dpc->Processor = 0LL;
          Dpc->Header.WaitListHead.Blink = 0LL;
          v35 = __rdtsc();
          v36 = __ROR8__(v35, 3);
          Dpc[2].TimerListEntry.Flink = (struct _LIST_ENTRY *)((0x7010008004002001LL * (v36 ^ v35)) ^ (((v36 ^ v35) * (unsigned __int128)0x7010008004002001uLL) >> 64));
          v37 = __rdtsc();
          v38 = __ROR8__(v37, 3);
          LOBYTE(Dpc[2].TimerListEntry.Blink) = ((0x7010008004002001LL * (v38 ^ v37)) ^ (((v38 ^ v37)
                                                                                        * (unsigned __int128)0x7010008004002001uLL) >> 64))
                                              % 0x3F
                                              + 1;
          v39 = __rdtsc();
          Dpc[2].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)0x140000000LL;
          v40 = (__ROR8__(v39, 3) ^ v39) * (unsigned __int128)0x7010008004002001uLL;
          v41 = (_BYTE *)RtlpConvertFunctionEntry(
                           (__int64)&v11[3
                                       * (((unsigned __int64)v40 ^ *((_QWORD *)&v40 + 1))
                                        % (unsigned int)((v12 - (int)v11) / 12))],
                           0x140000000uLL);
          v42 = (unsigned int *)RtlpLookupPrimaryFunctionEntry(
                                  v41,
                                  (__int64)Dpc[2].Header.WaitListHead.Flink,
                                  (unsigned __int64)Dpc[2].Header.WaitListHead.Flink + *(unsigned int *)v41);
          Blink_low = LOBYTE(Dpc[2].TimerListEntry.Blink);
          v44 = v42;
          Flink = Dpc[2].TimerListEntry.Flink;
          LOBYTE(v46) = Dpc[2].TimerListEntry.Blink;
          *(_QWORD *)&Dpc[2].Header.Lock = v42;
          v47 = (struct _LIST_ENTRY **)((char *)&Dpc[2].Header.WaitListHead.Flink->Flink + *v42);
          v48 = v42[1] - *v42;
          v49 = v47;
          v50 = (unsigned __int64)v47 + v48;
          v94 = Blink_low;
          v51 = (const char *)v47;
          if ( (unsigned __int64)v47 < v50 )
          {
            do
            {
              _mm_prefetch(v51, 0);
              v51 += 64;
            }
            while ( (unsigned __int64)v51 < v50 );
          }
          v52.QuadPart = (unsigned __int64)Flink;
          v53 = v48 >> 7;
          if ( v48 >> 7 )
          {
            do
            {
              v54 = 8LL;
              do
              {
                v55 = v49[1] ^ __ROL8__(*v49 ^ v52.QuadPart, v46);
                v49 += 2;
                v52.QuadPart = __ROL8__(v55, v46);
                --v54;
              }
              while ( v54 );
              v56 = __ROL8__((unsigned __int64)Flink ^ ((char *)v49 - (char *)v47), 17) ^ (unsigned __int64)Flink ^ ((char *)v49 - (char *)v47);
              v46 = ((unsigned __int8)(((v56 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v56) ^ (unsigned __int8)v46) & 0x3F;
              if ( !v46 )
                LOBYTE(v46) = 1;
              --v53;
            }
            while ( v53 );
            v7 = v91;
            Blink_low = v94;
          }
          v57 = v48 & 0x7F;
          if ( v57 >= 8 )
          {
            v58 = (unsigned __int64)(v48 & 0x7F) >> 3;
            do
            {
              v52.QuadPart = __ROL8__(*v49++ ^ v52.QuadPart, v46);
              v57 -= 8;
              --v58;
            }
            while ( v58 );
          }
          for ( ; v57; --v57 )
          {
            v59 = *(unsigned __int8 *)v49;
            v49 = (_QWORD *)((char *)v49 + 1);
            v52.QuadPart = __ROL8__(v59 ^ v52.QuadPart, v46);
          }
          Dpc[2].DueTime = v52;
          v60 = (const char *)v44;
          if ( v44 < (_QWORD *)((char *)v44 + 12) )
          {
            do
            {
              _mm_prefetch(v60, 0);
              v60 += 64;
            }
            while ( v60 < (const char *)v44 + 12 );
          }
          v61.QuadPart = __ROL8__(*v44 ^ v52.QuadPart, Blink_low);
          LODWORD(v62) = 4;
          v63 = (unsigned __int8 *)(v44 + 1);
          do
          {
            v64 = *v63++;
            v61.QuadPart = __ROL8__(v64 ^ v61.QuadPart, Blink_low);
            v65 = (_DWORD)v62 == 1;
            v62 = (unsigned int)(v62 - 1);
          }
          while ( !v65 );
          HIDWORD(Dpc[2].TimerListEntry.Blink) = v89;
          Dpc[2].DueTime = v61;
          LODWORD(Dpc[2].Header.WaitListHead.Blink) = v48;
          if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiIsKernelCfgActive)(
                                Blink_low,
                                v62,
                                (_ULARGE_INTEGER)v61.QuadPart,
                                v49)
            || !(unsigned int)KiAreCodePatchesAllowed() )
          {
            v34 = 0;
          }
          LODWORD(Dpc[2].Dpc) = v34;
          if ( v7 >= 0x32 )
          {
            *(_QWORD *)&Dpc[2].Processor = 0LL;
            Dpc[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)sub_14043C010;
            Dpc[3].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)Dpc;
          }
          v66 = __rdtsc();
          v67 = __ROR8__(v66, 3);
          v68.QuadPart = -1200000000LL
                       - ((0x7010008004002001LL * (v67 ^ v66)) ^ (((v67 ^ v66) * (unsigned __int128)0x7010008004002001uLL) >> 64))
                       % 0x5F5E100;
          v69 = __rdtsc();
          v70 = __ROR8__(v69, 3) ^ v69;
          LOBYTE(PoolWithTag) = KeSetCoalescableTimer(
                                  Dpc + 1,
                                  v68,
                                  0,
                                  ((0x7010008004002001LL * v70) ^ ((v70 * (unsigned __int128)0x7010008004002001uLL) >> 64))
                                % 0x2710,
                                  (PKDPC)Dpc);
        }
      }
    }
  }
  return (char)PoolWithTag;
}
