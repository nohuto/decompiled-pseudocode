/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x1404EF2A8
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1404EF090 (EtwpDisableTraceProviders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14048E508 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x140491B04 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpUpdateFilterData @ 0x1404EEF40 (EtwpUpdateFilterData.c)
 *     EtwpSendDataBlock @ 0x1404EF6A0 (EtwpSendDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1404EFAC4 (EtwpAllocDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1404EFD38 (EtwpUnreferenceDataBlock.c)
 *     EtwpCopySchematizedFilters @ 0x140750AF0 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // r15
  int v7; // r12d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // r10
  __int64 v12; // r8
  int v13; // r11d
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int128 v17; // xmm1
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
  char v29; // al
  char v30; // [rsp+38h] [rbp-39h]
  char v31; // [rsp+39h] [rbp-38h]
  __int64 v33; // [rsp+50h] [rbp-21h]
  int v34; // [rsp+58h] [rbp-19h]
  _OWORD v36[2]; // [rsp+60h] [rbp-11h] BYREF
  _OWORD Source2[2]; // [rsp+80h] [rbp+Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  v30 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = 0;
  ExAcquirePushLockExclusiveEx(a2 + 384, 0LL);
  *(_QWORD *)(a2 + 392) = KeGetCurrentThread();
  v34 = *(unsigned __int16 *)(a2 + 72);
  if ( v34 == a1 )
  {
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 72) = 0LL;
  }
  v8 = 0;
  v9 = a2 + 112;
  while ( *(_DWORD *)v9 != 1 || *(unsigned __int16 *)(v9 + 6) != a1 )
  {
    ++v8;
    v9 += 32LL;
    if ( v8 >= 8 )
    {
      v31 = 0;
      goto LABEL_7;
    }
  }
  *(_DWORD *)v9 = 0;
  memset(v36, 0, sizeof(v36));
  v11 = *(_QWORD *)&v36[1];
  v12 = a2 + 116;
  v13 = DWORD2(v36[0]);
  LOBYTE(v14) = BYTE4(v36[0]);
  v15 = -1LL;
  *((_QWORD *)&v36[1] + 1) = -1LL;
  v16 = 8LL;
  do
  {
    if ( *(_DWORD *)(v12 - 4) )
    {
      v28 = *(_BYTE *)v12;
      v29 = v14;
      LODWORD(v36[0]) = 1;
      if ( (unsigned __int8)v14 <= v28 )
        v29 = v28;
      v11 |= *(_QWORD *)(v12 + 12);
      v15 &= *(_QWORD *)(v12 + 20);
      LOBYTE(v14) = v29;
      v13 |= *(_DWORD *)(v12 + 4);
    }
    v12 += 32LL;
    --v16;
  }
  while ( v16 );
  BYTE4(v36[0]) = v14;
  *((_QWORD *)&v36[1] + 1) = v15;
  LOBYTE(v14) = 1;
  DWORD2(v36[0]) = v13;
  *(_QWORD *)&v36[1] = v11;
  v17 = v36[1];
  *(_OWORD *)(a2 + 80) = v36[0];
  *(_OWORD *)(a2 + 96) = v17;
  EtwpUpdateFilterData(a2, v8, 0LL, v14, 0LL);
  v31 = 1;
  v18 = *(_QWORD **)(a2 + 40);
  if ( v18 != (_QWORD *)(a2 + 40) )
  {
    v19 = ~(unsigned __int8)(1 << v8);
    do
    {
      if ( v5 )
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
      if ( ((*(_BYTE *)(v21 + 98) & 8) == 0 || v34 == a1) && v24 != v23 )
      {
        EtwpComputeRegEntryEnableInfo(v21, (unsigned __int8 *)Source2);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(_BYTE *)(v21 + 100));
        v26 = SchematizedFilterSize;
        v27 = 120;
        if ( SchematizedFilterSize )
          v27 = SchematizedFilterSize + 136;
        v7 = EtwpAllocDataBlock(v27, 0LL);
        if ( v7 >= 0 )
        {
          MEMORY[0] = 3;
          MEMORY[4] = v27;
          MEMORY[0x28] = *(_OWORD *)(*(_QWORD *)(v21 + 32) + 24LL);
          MEMORY[0x48] = Source2[0];
          MEMORY[0x58] = Source2[1];
          MEMORY[0x70] = *(_BYTE *)(a2 + 75) & 1;
          LOWORD(v33) = *(_WORD *)(a2 + 72);
          WORD1(v33) = *(unsigned __int8 *)(a2 + 74);
          HIDWORD(v33) = *(_DWORD *)(a2 + 64);
          MEMORY[0x68] = v33;
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
        v19 = ~(unsigned __int8)(1 << v8);
      }
      if ( v30 )
      {
        *(_QWORD *)(*(_QWORD *)(v21 + 32) + 392LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(v21 + 32) + 384LL, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v30 = 0;
      }
      v5 = a3;
    }
    while ( v18 != (_QWORD *)(a2 + 40) );
  }
LABEL_7:
  *(_QWORD *)(a2 + 392) = 0LL;
  ExReleasePushLockEx(a2 + 384, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v31 == 1 )
    EtwpUnreferenceGuidEntry((__int64 *)a2);
  return (unsigned int)v7;
}
