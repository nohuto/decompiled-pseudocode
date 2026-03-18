/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x140552860
 * Callers:
 *     EtwpDisableTraceProviders @ 0x140552644 (EtwpDisableTraceProviders.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404808F0 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404F218C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpSendDataBlock @ 0x1405535DC (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140553DE0 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1405541BC (EtwpAllocDataBlock.c)
 *     EtwpUpdateFilterData @ 0x140554514 (EtwpUpdateFilterData.c)
 *     EtwpCopySchematizedFilters @ 0x140712A08 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  unsigned int v3; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v11; // r10
  __int64 v12; // r8
  int v13; // r11d
  __int64 v14; // rdx
  int v15; // r9d
  __int128 v16; // xmm1
  _QWORD **v17; // r12
  _QWORD *v18; // r14
  char v19; // r13
  struct _KTHREAD *v20; // rax
  __int64 v21; // rsi
  char *v22; // r15
  char v23; // dl
  char v24; // cl
  int SchematizedFilterSize; // eax
  int v26; // r13d
  unsigned int v27; // r15d
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // al
  char v30; // [rsp+38h] [rbp-39h]
  char v31; // [rsp+39h] [rbp-38h]
  __int64 v33; // [rsp+3Ch] [rbp-35h]
  char v34; // [rsp+48h] [rbp-29h]
  __int64 v35; // [rsp+50h] [rbp-21h]
  int v36; // [rsp+58h] [rbp-19h]
  _OWORD v38[2]; // [rsp+60h] [rbp-11h] BYREF
  _OWORD Source2[2]; // [rsp+80h] [rbp+Fh] BYREF

  v3 = 0;
  v30 = 0;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v33) = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 384, 0LL);
  *(_QWORD *)(a2 + 392) = KeGetCurrentThread();
  v36 = *(unsigned __int16 *)(a2 + 72);
  if ( v36 == a1 )
  {
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 72) = 0LL;
  }
  v7 = 0;
  v8 = a2 + 112;
  v9 = 8LL;
  while ( *(_DWORD *)v8 != 1 || *(unsigned __int16 *)(v8 + 6) != a1 )
  {
    ++v7;
    v8 += 32LL;
    if ( v7 >= 8 )
    {
      v31 = 0;
      goto LABEL_7;
    }
  }
  *(_DWORD *)v8 = 0;
  memset(v38, 0, sizeof(v38));
  v11 = *(_QWORD *)&v38[1];
  v12 = a2 + 116;
  v13 = DWORD2(v38[0]);
  v14 = -1LL;
  LOBYTE(v15) = BYTE4(v38[0]);
  *((_QWORD *)&v38[1] + 1) = -1LL;
  do
  {
    if ( *(_DWORD *)(v12 - 4) )
    {
      v28 = *(_BYTE *)v12;
      v29 = v15;
      LODWORD(v38[0]) = 1;
      if ( (unsigned __int8)v15 <= v28 )
        v29 = v28;
      v11 |= *(_QWORD *)(v12 + 12);
      v14 &= *(_QWORD *)(v12 + 20);
      LOBYTE(v15) = v29;
      v13 |= *(_DWORD *)(v12 + 4);
    }
    v12 += 32LL;
    --v9;
  }
  while ( v9 );
  BYTE4(v38[0]) = v15;
  *((_QWORD *)&v38[1] + 1) = v14;
  LOBYTE(v15) = 1;
  DWORD2(v38[0]) = v13;
  *(_QWORD *)&v38[1] = v11;
  v16 = v38[1];
  *(_OWORD *)(a2 + 80) = v38[0];
  *(_OWORD *)(a2 + 96) = v16;
  EtwpUpdateFilterData(a2, v7, 0, v15, 0LL);
  v17 = (_QWORD **)(a2 + 40);
  v31 = 1;
  if ( *v17 != v17 )
  {
    v18 = *v17;
    v19 = ~(unsigned __int8)(1 << v7);
    v34 = v19;
    do
    {
      if ( a3 )
      {
        v20 = KeGetCurrentThread();
        v21 = (__int64)(v18 - 2);
        v22 = (char *)v18 + 85;
        --v20->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v18[2] + 384LL, 0LL);
        v30 = 1;
        *(_QWORD *)(v18[2] + 392LL) = KeGetCurrentThread();
      }
      else
      {
        v21 = (__int64)v18;
        v22 = (char *)v18 + 100;
      }
      v23 = *v22;
      v18 = (_QWORD *)*v18;
      v24 = *v22 & v19;
      *v22 = v24;
      if ( (*(_BYTE *)(v21 + 98) & 8) != 0 && v36 != a1 || v24 == v23 )
      {
        v3 = v33;
      }
      else
      {
        EtwpComputeRegEntryEnableInfo(v21, (unsigned __int8 *)Source2);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(_BYTE *)(v21 + 100));
        v26 = SchematizedFilterSize;
        v27 = 120;
        if ( SchematizedFilterSize )
          v27 = SchematizedFilterSize + 136;
        v33 = (unsigned int)EtwpAllocDataBlock(v27, 0LL);
        if ( (int)v33 >= 0 )
        {
          MEMORY[0] = 3;
          MEMORY[4] = v27;
          MEMORY[0x28] = *(_OWORD *)(*(_QWORD *)(v21 + 32) + 24LL);
          MEMORY[0x48] = Source2[0];
          MEMORY[0x58] = Source2[1];
          MEMORY[0x70] = *(_BYTE *)(a2 + 75) & 1;
          LOWORD(v35) = *(_WORD *)(a2 + 72);
          WORD1(v35) = *(unsigned __int8 *)(a2 + 74);
          HIDWORD(v35) = *(_DWORD *)(a2 + 64);
          MEMORY[0x68] = v35;
          if ( v26 )
          {
            MEMORY[0x84] = 0x80000000;
            MEMORY[0x80] = v26;
            MEMORY[0x78] = 136LL;
            EtwpCopySchematizedFilters((void *)0x88);
            MEMORY[0x74] = 1;
          }
          else
          {
            MEMORY[0x74] = 0;
          }
        }
        v3 = v33;
        v19 = v34;
      }
      if ( v30 )
      {
        *(_QWORD *)(*(_QWORD *)(v21 + 32) + 392LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(v21 + 32) + 384LL, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v30 = 0;
      }
    }
    while ( v18 != v17 );
  }
LABEL_7:
  *(_QWORD *)(a2 + 392) = 0LL;
  ExReleasePushLockEx(a2 + 384, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v31 == 1 )
    EtwpUnreferenceGuidEntry((_QWORD *)a2);
  return v3;
}
