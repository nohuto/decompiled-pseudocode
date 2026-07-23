/*
 * XREFs of CcInitializeBcbProfiler @ 0x1407DC30C
 * Callers:
 *     CcInitializeCacheManager @ 0x1407FE20C (CcInitializeCacheManager.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x140012E20 (RtlSectionTableFromVirtualAddress.c)
 *     RtlLookupFunctionTable @ 0x140035EE0 (RtlLookupFunctionTable.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     KeInitializeTimer @ 0x14010EEE0 (KeInitializeTimer.c)
 *     RtlpConvertFunctionEntry @ 0x14015DAF0 (RtlpConvertFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x14015DB90 (RtlpLookupPrimaryFunctionEntry.c)
 *     strstr @ 0x1401697D0 (strstr.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     KiIsKernelCfgActive @ 0x140810DB8 (KiIsKernelCfgActive.c)
 *     KiGetLoadOptions @ 0x140826C24 (KiGetLoadOptions.c)
 *     KiAreCodePatchesAllowed @ 0x140834468 (KiAreCodePatchesAllowed.c)
 */

char CcInitializeBcbProfiler()
{
  struct _KTIMER *PoolWithTag; // rax
  const char *LoadOptions; // rax
  _IMAGE_NT_HEADERS64 *v2; // r9
  unsigned __int64 v3; // rax
  int v4; // edi
  unsigned __int128 v5; // rax
  __int64 v6; // rcx
  void *v7; // rax
  int v8; // r14d
  PIMAGE_SECTION_HEADER v9; // rbx
  unsigned int *v10; // r8
  unsigned int VirtualAddress; // r9d
  unsigned int *v12; // rsi
  int v13; // r15d
  unsigned int *v14; // r10
  unsigned int PhysicalAddress; // ecx
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int128 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int128 v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  ULONG v27; // r10d
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r8d
  struct _KTIMER *Dpc; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int128 v40; // rax
  _BYTE *v41; // rax
  unsigned int *v42; // rax
  unsigned int Blink_low; // r13d
  _QWORD *v44; // rsi
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
  unsigned __int8 *v63; // rsi
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
  int v89; // [rsp+80h] [rbp-19h]
  __int64 v90; // [rsp+88h] [rbp-11h]
  _QWORD v91[12]; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v92; // [rsp+100h] [rbp+67h] BYREF
  int v93; // [rsp+108h] [rbp+6Fh]
  _QWORD *v94; // [rsp+110h] [rbp+77h]
  int v95; // [rsp+118h] [rbp+7Fh]

  LOBYTE(PoolWithTag) = MEMORY[0xFFFFF780000002D4];
  if ( (MEMORY[0xFFFFF780000002D4] & 0xFE) == 0 )
  {
    v93 = 1359872;
    SubStr[0] = __ROL4__(1359872, 210);
    LODWORD(v94) = 34078720;
    SubStr[1] = __ROR4__(34078720, 211);
    v95 = 15564;
    SubStr[2] = __ROR4__(280, 130);
    v73 = 141312;
    SubStr[3] = __ROL4__(141312, 213);
    v74 = 276824064;
    SubStr[4] = __ROR4__(276824064, 214);
    v75 = 148951;
    SubStr[5] = __ROR4__(161792, 139);
    v76 = 20224;
    SubStr[6] = __ROL4__(20224, 216);
    v77 = -1476395008;
    SubStr[7] = __ROR4__(-1476395008, 217);
    v78 = 60833242;
    SubStr[9] = 0;
    SubStr[8] = __ROR4__(60817408, 148);
    LoadOptions = (const char *)KiGetLoadOptions();
    PoolWithTag = (struct _KTIMER *)strstr(LoadOptions, SubStr);
    if ( !PoolWithTag )
    {
      v2 = RtlImageNtHeader((PVOID)0x140000000LL);
      v3 = __rdtsc();
      v4 = 1;
      v5 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
      v90 = *((_QWORD *)&v5 + 1);
      v6 = v5 ^ *((_QWORD *)&v5 + 1);
      *((_QWORD *)&v5 + 1) = (((unsigned __int64)v5 ^ *((_QWORD *)&v5 + 1)) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v7 = sub_14041C010;
      if ( v6 - 100 * ((*((_QWORD *)&v5 + 1) + ((unsigned __int64)(v6 - *((_QWORD *)&v5 + 1)) >> 1)) >> 6) >= 0x32 )
      {
        v8 = 1;
      }
      else
      {
        v8 = 0;
        v7 = CcBcbProfiler;
      }
      v9 = RtlSectionTableFromVirtualAddress(v2, (PVOID)0x140000000LL, (unsigned int)v7 - 0x40000000);
      v10 = (unsigned int *)RtlLookupFunctionTable((ULONG_PTR)v9, v91, &v92);
      if ( !v10 || v92 < 0xC )
      {
        v18 = -1073741701;
LABEL_68:
        v89 = 25984;
        KeBugCheckEx(__ROR4__(20288, 70), 6uLL, (ULONG_PTR)v9, v18, 0LL);
      }
      VirtualAddress = v9->VirtualAddress;
      v12 = 0LL;
      v13 = 0;
      v14 = &v10[3 * (v92 / 0xC)];
      PhysicalAddress = v9->Misc.PhysicalAddress;
      if ( v9->SizeOfRawData > PhysicalAddress )
        PhysicalAddress = v9->SizeOfRawData;
      v16 = PhysicalAddress + VirtualAddress;
      do
      {
        v17 = *v10;
        if ( *v10 >= VirtualAddress )
        {
          if ( v17 >= v16 )
            break;
          v13 = (int)v10;
          if ( !v12 )
            v12 = v10;
        }
        if ( v17 >= v16 )
          break;
        v10 += 3;
      }
      while ( v10 != v14 );
      if ( !v12 )
      {
        v18 = -1073741569;
        goto LABEL_68;
      }
      v19 = __rdtsc();
      v20 = (__ROR8__(v19, 3) ^ v19) * (unsigned __int128)0x7010008004002001uLL;
      v91[1] = *((_QWORD *)&v20 + 1);
      v21 = v20 ^ *((_QWORD *)&v20 + 1);
      PoolWithTag = (struct _KTIMER *)(10 * (((unsigned __int64)v20 ^ *((_QWORD *)&v20 + 1)) / 0xA));
      if ( (unsigned __int64)(v21 - (_QWORD)PoolWithTag) < 5 )
      {
        v22 = __rdtsc();
        v23 = (__ROR8__(v22, 3) ^ v22) * (unsigned __int128)0x7010008004002001uLL;
        v91[2] = *((_QWORD *)&v23 + 1);
        v24 = ((unsigned __int64)v23 ^ *((_QWORD *)&v23 + 1)) % 0xB;
        if ( (unsigned int)v24 > 5 )
        {
          v28 = v24 - 6;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                if ( v30 == 1 )
                {
                  v85 = -1333354875;
                  v27 = __ROR4__(-1333354868, 33);
                }
                else
                {
                  v31 = __rdtsc();
                  v32 = __ROR8__(v31, 3);
                  v33 = (((v32 ^ v31) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v32 ^ v31));
                  v27 = ((((((v33 % 0x1A + 97) << 8) | ((v33 >> 5) % 0x1A + 65)) << 8) | ((v33 >> 10) % 0x1A + 97)) << 8) | ((v33 >> 15) % 0x1A + 65);
                }
              }
              else
              {
                v86 = 1684422978;
                v27 = __ROR4__(1684422978, 8);
              }
            }
            else
            {
              v87 = -2100910376;
              v27 = __ROL4__(-2100910376, 7);
            }
          }
          else
          {
            v88 = 1314342514;
            v27 = __ROR4__(1314342516, 24);
          }
        }
        else if ( (_DWORD)v24 == 5 )
        {
          v84 = 680282605;
          v27 = __ROR4__(680282605, 5);
        }
        else if ( (_DWORD)v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              if ( v26 == 1 )
              {
                v80 = -1474152136;
                v27 = __ROR4__(-1474152133, 15);
              }
              else
              {
                v79 = 1728537748;
                v27 = __ROL4__(1728537748, 4);
              }
            }
            else
            {
              v81 = -2051698419;
              v27 = __ROR4__(-2051698419, 2);
            }
          }
          else
          {
            v82 = -1297272415;
            v27 = __ROL4__(-1297272415, 1);
          }
        }
        else
        {
          v83 = -795291432;
          v27 = __ROR4__(-795291432, 6);
        }
        PoolWithTag = (struct _KTIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, v27);
        Dpc = PoolWithTag;
        if ( PoolWithTag )
        {
          KeInitializeTimer(PoolWithTag + 1);
          Dpc->Header.LockNV = 275;
          Dpc->DueTime.QuadPart = (unsigned __int64)CcBcbProfiler;
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
                           (__int64)&v12[3
                                       * (((unsigned __int64)v40 ^ *((_QWORD *)&v40 + 1))
                                        % (unsigned int)((v13 - (int)v12) / 12))],
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
          v94 = v42;
          v92 = Blink_low;
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
            v44 = v94;
            Blink_low = v92;
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
          Dpc[2].DueTime = v61;
          LODWORD(Dpc[2].Header.WaitListHead.Blink) = v48;
          HIDWORD(Dpc[2].TimerListEntry.Blink) = v8;
          if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiIsKernelCfgActive)(
                                Blink_low,
                                v62,
                                (_ULARGE_INTEGER)v61.QuadPart,
                                v49)
            || !(unsigned int)KiAreCodePatchesAllowed() )
          {
            v4 = 0;
          }
          LODWORD(Dpc[2].Dpc) = v4;
          if ( v8 )
          {
            *(_QWORD *)&Dpc[2].Processor = 0LL;
            Dpc[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)sub_14041C010;
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
