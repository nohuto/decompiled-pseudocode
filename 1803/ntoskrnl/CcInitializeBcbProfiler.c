/*
 * XREFs of CcInitializeBcbProfiler @ 0x14087C364
 * Callers:
 *     CcInitializeCacheManager @ 0x1408A0410 (CcInitializeCacheManager.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     RtlpConvertFunctionEntry @ 0x1400C1D40 (RtlpConvertFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1400C21B0 (RtlpLookupPrimaryFunctionEntry.c)
 *     KeInitializeTimer @ 0x1400C6930 (KeInitializeTimer.c)
 *     RtlLookupFunctionTable @ 0x1400CF450 (RtlLookupFunctionTable.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14013D7A0 (RtlSectionTableFromVirtualAddress.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     KiIsKernelCfgActive @ 0x1408BB470 (KiIsKernelCfgActive.c)
 *     KiGetLoadOptions @ 0x1408CA3AC (KiGetLoadOptions.c)
 *     KiAreCodePatchesAllowed @ 0x1408E00E0 (KiAreCodePatchesAllowed.c)
 */

char CcInitializeBcbProfiler()
{
  struct _KTIMER *PoolWithTag; // rax
  const char *LoadOptions; // rax
  _IMAGE_NT_HEADERS64 *v2; // r9
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(__int64, __int64); // r8
  unsigned __int128 v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // r14
  int v8; // eax
  PIMAGE_SECTION_HEADER v9; // rbx
  unsigned int *v10; // r8
  unsigned int *v11; // rdi
  int v12; // r15d
  unsigned int VirtualAddress; // edx
  unsigned int *v14; // r11
  unsigned int SizeOfRawData; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int *v18; // r9
  ULONG_PTR v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int128 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int128 v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // ecx
  int v27; // ecx
  ULONG v28; // r10d
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // r8d
  struct _KTIMER *Dpc; // rbx
  int v36; // esi
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int128 v42; // rax
  _BYTE *v43; // rax
  unsigned int *v44; // rax
  unsigned int Blink_low; // r13d
  _QWORD *v46; // rdi
  struct _LIST_ENTRY *Flink; // r12
  int v48; // r10d
  _QWORD *v49; // rdx
  unsigned int v50; // r15d
  _QWORD *v51; // r9
  unsigned __int64 v52; // rcx
  const char *v53; // rax
  _ULARGE_INTEGER v54; // r8
  unsigned int v55; // r11d
  __int64 v56; // rax
  __int64 v57; // r8
  unsigned __int64 v58; // rcx
  unsigned int v59; // edx
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  const char *v62; // rax
  _ULARGE_INTEGER v63; // r8
  __int64 v64; // rdx
  unsigned __int8 *v65; // rdi
  __int64 v66; // rax
  bool v67; // zf
  unsigned __int64 v68; // rax
  __int64 v69; // rcx
  LARGE_INTEGER v70; // r10
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rdx
  char SubStr[16]; // [rsp+30h] [rbp-69h] BYREF
  int v75; // [rsp+40h] [rbp-59h]
  int v76; // [rsp+44h] [rbp-55h]
  int v77; // [rsp+48h] [rbp-51h]
  int v78; // [rsp+4Ch] [rbp-4Dh]
  int v79; // [rsp+50h] [rbp-49h]
  int v80; // [rsp+54h] [rbp-45h]
  int v81; // [rsp+58h] [rbp-41h]
  int v82; // [rsp+5Ch] [rbp-3Dh]
  int v83; // [rsp+60h] [rbp-39h]
  int v84; // [rsp+64h] [rbp-35h]
  int v85; // [rsp+68h] [rbp-31h]
  int v86; // [rsp+6Ch] [rbp-2Dh]
  int v87; // [rsp+70h] [rbp-29h]
  int v88; // [rsp+74h] [rbp-25h]
  int v89; // [rsp+78h] [rbp-21h]
  int v90; // [rsp+7Ch] [rbp-1Dh]
  int v91; // [rsp+80h] [rbp-19h]
  int v92; // [rsp+84h] [rbp-15h]
  unsigned __int64 v93; // [rsp+88h] [rbp-11h]
  __int64 v94; // [rsp+90h] [rbp-9h]
  _QWORD v95[11]; // [rsp+98h] [rbp-1h] BYREF
  unsigned int v96; // [rsp+100h] [rbp+67h] BYREF
  int v97; // [rsp+108h] [rbp+6Fh]
  int v98; // [rsp+110h] [rbp+77h]
  int v99; // [rsp+118h] [rbp+7Fh]

  LOBYTE(PoolWithTag) = -44;
  if ( MEMORY[0xFFFFF780000002D4] < 2u )
  {
    v97 = 2656;
    SubStr[0] = __ROL4__(2656, 219);
    v98 = 268435460;
    SubStr[1] = __ROR4__(268435460, 220);
    v99 = -1073725227;
    SubStr[2] = __ROR4__(-1073741816, 157);
    v75 = 276;
    SubStr[3] = __ROL4__(276, 222);
    v76 = 33;
    SubStr[4] = __ROR4__(33, 223);
    v77 = 21280;
    SubStr[5] = __ROR4__(5056, 166);
    v78 = -2147483609;
    SubStr[6] = __ROL4__(-2147483609, 225);
    v79 = 336;
    SubStr[7] = __ROR4__(336, 226);
    v80 = 1917155;
    SubStr[9] = 0;
    SubStr[8] = __ROR4__(1900544, 175);
    LoadOptions = (const char *)KiGetLoadOptions();
    PoolWithTag = (struct _KTIMER *)strstr(LoadOptions, SubStr);
    if ( !PoolWithTag )
    {
      v2 = RtlImageNtHeader((PVOID)0x140000000LL);
      v3 = __rdtsc();
      v4 = CcBcbProfiler;
      v5 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
      v94 = *((_QWORD *)&v5 + 1);
      v6 = v5 ^ *((_QWORD *)&v5 + 1);
      *((_QWORD *)&v5 + 1) = (((unsigned __int64)v5 ^ *((_QWORD *)&v5 + 1)) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v7 = v6 - 100 * ((*((_QWORD *)&v5 + 1) + ((unsigned __int64)(v6 - *((_QWORD *)&v5 + 1)) >> 1)) >> 6);
      v8 = 0;
      v93 = v7;
      if ( v7 >= 0x32 )
        LODWORD(v4) = (unsigned int)sub_140489010;
      LOBYTE(v8) = v7 >= 0x32;
      v91 = v8;
      v9 = RtlSectionTableFromVirtualAddress(v2, (PVOID)0x140000000LL, (unsigned int)v4 - 0x40000000);
      v10 = (unsigned int *)RtlLookupFunctionTable((ULONG_PTR)v9, v95, &v96);
      if ( !v10 || v96 < 0xC )
      {
        v19 = -1073741701LL;
LABEL_67:
        v92 = 1329605744;
        KeBugCheckEx(__ROR4__(1329594368, 86), 6uLL, (ULONG_PTR)v9, v19, 0LL);
      }
      v11 = 0LL;
      v12 = 0;
      VirtualAddress = v9->VirtualAddress;
      v14 = &v10[3 * (v96 / 0xC)];
      SizeOfRawData = v9->SizeOfRawData;
      if ( SizeOfRawData <= v9->Misc.PhysicalAddress )
        SizeOfRawData = v9->Misc.PhysicalAddress;
      v16 = VirtualAddress + SizeOfRawData;
      do
      {
        v17 = *v10;
        v18 = v11;
        if ( *v10 >= VirtualAddress )
        {
          if ( v17 >= v16 )
            break;
          v11 = v10;
          v12 = (int)v10;
          if ( v18 )
            v11 = v18;
        }
        if ( v17 >= v16 )
          break;
        v10 += 3;
      }
      while ( v10 != v14 );
      if ( !v11 )
      {
        v19 = -1073741569LL;
        goto LABEL_67;
      }
      v20 = __rdtsc();
      v21 = (__ROR8__(v20, 3) ^ v20) * (unsigned __int128)0x7010008004002001uLL;
      v95[1] = *((_QWORD *)&v21 + 1);
      v22 = v21 ^ *((_QWORD *)&v21 + 1);
      PoolWithTag = (struct _KTIMER *)(10 * (((unsigned __int64)v21 ^ *((_QWORD *)&v21 + 1)) / 0xA));
      if ( (unsigned __int64)(v22 - (_QWORD)PoolWithTag) < 5 )
      {
        v23 = __rdtsc();
        v24 = (__ROR8__(v23, 3) ^ v23) * (unsigned __int128)0x7010008004002001uLL;
        v95[2] = *((_QWORD *)&v24 + 1);
        v25 = ((unsigned __int64)v24 ^ *((_QWORD *)&v24 + 1)) % 0xB;
        if ( (unsigned int)v25 > 5 )
        {
          v29 = v25 - 6;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( v31 )
              {
                if ( v31 == 1 )
                {
                  v87 = -1333354875;
                  v28 = __ROR4__(-1333354868, 33);
                }
                else
                {
                  v32 = __rdtsc();
                  v33 = __ROR8__(v32, 3);
                  v34 = (((v33 ^ v32) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v33 ^ v32));
                  v28 = ((((((v34 % 0x1A + 97) << 8) | ((v34 >> 5) % 0x1A + 65)) << 8) | ((v34 >> 10) % 0x1A + 97)) << 8) | ((v34 >> 15) % 0x1A + 65);
                }
              }
              else
              {
                v88 = 1684422978;
                v28 = __ROR4__(1684422978, 8);
              }
            }
            else
            {
              v89 = -2100910376;
              v28 = __ROL4__(-2100910376, 7);
            }
          }
          else
          {
            v90 = 1314342514;
            v28 = __ROR4__(1314342516, 24);
          }
        }
        else if ( (_DWORD)v25 == 5 )
        {
          v86 = 680282605;
          v28 = __ROR4__(680282605, 5);
        }
        else if ( (_DWORD)v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              if ( v27 == 1 )
              {
                v82 = -1474152136;
                v28 = __ROR4__(-1474152133, 15);
              }
              else
              {
                v81 = 1728537748;
                v28 = __ROL4__(1728537748, 4);
              }
            }
            else
            {
              v83 = -2051698419;
              v28 = __ROR4__(-2051698419, 2);
            }
          }
          else
          {
            v84 = -1297272415;
            v28 = __ROL4__(-1297272415, 1);
          }
        }
        else
        {
          v85 = -795291432;
          v28 = __ROR4__(-795291432, 6);
        }
        PoolWithTag = (struct _KTIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, v28);
        Dpc = PoolWithTag;
        if ( PoolWithTag )
        {
          KeInitializeTimer(PoolWithTag + 1);
          Dpc->Header.LockNV = 275;
          Dpc->DueTime.QuadPart = (unsigned __int64)CcBcbProfiler;
          v36 = 1;
          Dpc->TimerListEntry.Flink = (struct _LIST_ENTRY *)Dpc;
          *(_QWORD *)&Dpc->Processor = 0LL;
          Dpc->Header.WaitListHead.Blink = 0LL;
          v37 = __rdtsc();
          v38 = __ROR8__(v37, 3);
          Dpc[2].TimerListEntry.Flink = (struct _LIST_ENTRY *)((0x7010008004002001LL * (v38 ^ v37)) ^ (((v38 ^ v37) * (unsigned __int128)0x7010008004002001uLL) >> 64));
          v39 = __rdtsc();
          v40 = __ROR8__(v39, 3);
          LOBYTE(Dpc[2].TimerListEntry.Blink) = ((0x7010008004002001LL * (v40 ^ v39)) ^ (((v40 ^ v39)
                                                                                        * (unsigned __int128)0x7010008004002001uLL) >> 64))
                                              % 0x3F
                                              + 1;
          v41 = __rdtsc();
          Dpc[2].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)0x140000000LL;
          v42 = (__ROR8__(v41, 3) ^ v41) * (unsigned __int128)0x7010008004002001uLL;
          v43 = (_BYTE *)RtlpConvertFunctionEntry(
                           (__int64)&v11[3
                                       * (((unsigned __int64)v42 ^ *((_QWORD *)&v42 + 1))
                                        % (unsigned int)((v12 - (int)v11) / 12))],
                           0x140000000uLL);
          v44 = (unsigned int *)RtlpLookupPrimaryFunctionEntry(
                                  v43,
                                  (__int64)Dpc[2].Header.WaitListHead.Flink,
                                  (unsigned __int64)Dpc[2].Header.WaitListHead.Flink + *(unsigned int *)v43);
          Blink_low = LOBYTE(Dpc[2].TimerListEntry.Blink);
          v46 = v44;
          Flink = Dpc[2].TimerListEntry.Flink;
          LOBYTE(v48) = Dpc[2].TimerListEntry.Blink;
          *(_QWORD *)&Dpc[2].Header.Lock = v44;
          v49 = (struct _LIST_ENTRY **)((char *)&Dpc[2].Header.WaitListHead.Flink->Flink + *v44);
          v50 = v44[1] - *v44;
          v51 = v49;
          v52 = (unsigned __int64)v49 + v50;
          v96 = Blink_low;
          v53 = (const char *)v49;
          if ( (unsigned __int64)v49 < v52 )
          {
            do
            {
              _mm_prefetch(v53, 0);
              v53 += 64;
            }
            while ( (unsigned __int64)v53 < v52 );
          }
          v54.QuadPart = (unsigned __int64)Flink;
          v55 = v50 >> 7;
          if ( v50 >> 7 )
          {
            do
            {
              v56 = 8LL;
              do
              {
                v57 = v51[1] ^ __ROL8__(*v51 ^ v54.QuadPart, v48);
                v51 += 2;
                v54.QuadPart = __ROL8__(v57, v48);
                --v56;
              }
              while ( v56 );
              v58 = __ROL8__((unsigned __int64)Flink ^ ((char *)v51 - (char *)v49), 17) ^ (unsigned __int64)Flink ^ ((char *)v51 - (char *)v49);
              v48 = ((unsigned __int8)(((v58 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v58) ^ (unsigned __int8)v48) & 0x3F;
              if ( !v48 )
                LOBYTE(v48) = 1;
              --v55;
            }
            while ( v55 );
            v7 = v93;
            Blink_low = v96;
          }
          v59 = v50 & 0x7F;
          if ( v59 >= 8 )
          {
            v60 = (unsigned __int64)(v50 & 0x7F) >> 3;
            do
            {
              v54.QuadPart = __ROL8__(*v51++ ^ v54.QuadPart, v48);
              v59 -= 8;
              --v60;
            }
            while ( v60 );
          }
          for ( ; v59; --v59 )
          {
            v61 = *(unsigned __int8 *)v51;
            v51 = (_QWORD *)((char *)v51 + 1);
            v54.QuadPart = __ROL8__(v61 ^ v54.QuadPart, v48);
          }
          Dpc[2].DueTime = v54;
          v62 = (const char *)v46;
          if ( v46 < (_QWORD *)((char *)v46 + 12) )
          {
            do
            {
              _mm_prefetch(v62, 0);
              v62 += 64;
            }
            while ( v62 < (const char *)v46 + 12 );
          }
          v63.QuadPart = __ROL8__(*v46 ^ v54.QuadPart, Blink_low);
          LODWORD(v64) = 4;
          v65 = (unsigned __int8 *)(v46 + 1);
          do
          {
            v66 = *v65++;
            v63.QuadPart = __ROL8__(v66 ^ v63.QuadPart, Blink_low);
            v67 = (_DWORD)v64 == 1;
            v64 = (unsigned int)(v64 - 1);
          }
          while ( !v67 );
          HIDWORD(Dpc[2].TimerListEntry.Blink) = v91;
          Dpc[2].DueTime = v63;
          LODWORD(Dpc[2].Header.WaitListHead.Blink) = v50;
          if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiIsKernelCfgActive)(
                                Blink_low,
                                v64,
                                (_ULARGE_INTEGER)v63.QuadPart,
                                v51)
            || !(unsigned int)KiAreCodePatchesAllowed() )
          {
            v36 = 0;
          }
          LODWORD(Dpc[2].Dpc) = v36;
          if ( v7 >= 0x32 )
          {
            *(_QWORD *)&Dpc[2].Processor = 0LL;
            Dpc[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)sub_140489010;
            Dpc[3].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)Dpc;
          }
          v68 = __rdtsc();
          v69 = __ROR8__(v68, 3);
          v70.QuadPart = -1200000000LL
                       - ((0x7010008004002001LL * (v69 ^ v68)) ^ (((v69 ^ v68) * (unsigned __int128)0x7010008004002001uLL) >> 64))
                       % 0x5F5E100;
          v71 = __rdtsc();
          v72 = __ROR8__(v71, 3) ^ v71;
          LOBYTE(PoolWithTag) = KeSetCoalescableTimer(
                                  Dpc + 1,
                                  v70,
                                  0,
                                  ((0x7010008004002001LL * v72) ^ ((v72 * (unsigned __int128)0x7010008004002001uLL) >> 64))
                                % 0x2710,
                                  (PKDPC)Dpc);
        }
      }
    }
  }
  return (char)PoolWithTag;
}
