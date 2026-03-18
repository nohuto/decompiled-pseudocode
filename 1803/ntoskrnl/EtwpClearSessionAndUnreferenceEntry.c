/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x140591B34
 * Callers:
 *     EtwpDisableTraceProviders @ 0x14058EF9C (EtwpDisableTraceProviders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpAllocDataBlock @ 0x14058B9A8 (EtwpAllocDataBlock.c)
 *     EtwpUpdateFilterData @ 0x14058CE40 (EtwpUpdateFilterData.c)
 *     EtwpUnreferenceDataBlock @ 0x14058DCB4 (EtwpUnreferenceDataBlock.c)
 *     EtwpSendDataBlock @ 0x14058DED0 (EtwpSendDataBlock.c)
 *     EtwpGetSchematizedFilterSize @ 0x140590420 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140591660 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpCopySchematizedFilters @ 0x1407B17C4 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // r15
  unsigned int v7; // r12d
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v13; // r13d
  __int64 v14; // r10
  __int64 v15; // r8
  int v16; // r11d
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int128 v20; // xmm1
  _QWORD *v21; // r14
  __int64 v22; // rbx
  struct _KTHREAD *v23; // rax
  __int64 v24; // rsi
  char *v25; // r15
  char v26; // dl
  char v27; // cl
  int SchematizedFilterSize; // eax
  int v29; // r13d
  unsigned int v30; // r15d
  int v31; // eax
  __int64 v32; // rcx
  unsigned __int8 v33; // cl
  char v34; // al
  char v35; // [rsp+38h] [rbp-39h]
  char v36; // [rsp+39h] [rbp-38h]
  _DWORD *v38; // [rsp+40h] [rbp-31h] BYREF
  int v39; // [rsp+48h] [rbp-29h]
  __int64 v40; // [rsp+50h] [rbp-21h]
  int v41; // [rsp+58h] [rbp-19h]
  int v42; // [rsp+5Ch] [rbp-15h]
  _OWORD v43[2]; // [rsp+60h] [rbp-11h] BYREF
  _OWORD Source2[2]; // [rsp+80h] [rbp+Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v42 = a1;
  v5 = a3;
  v35 = 0;
  --CurrentThread->KernelApcDisable;
  v38 = 0LL;
  v7 = 0;
  ExAcquirePushLockExclusiveEx(a2 + 384, 0LL);
  *(_QWORD *)(a2 + 392) = KeGetCurrentThread();
  v41 = *(unsigned __int16 *)(a2 + 72);
  if ( v41 == a1 )
  {
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 72) = 0LL;
  }
  v10 = 0;
  v11 = a2 + 112;
  while ( *(_DWORD *)v11 != 1 || *(unsigned __int16 *)(v11 + 6) != a1 )
  {
    ++v10;
    v11 += 32LL;
    if ( v10 >= 8 )
    {
      v36 = 0;
      goto LABEL_7;
    }
  }
  *(_DWORD *)v11 = 0;
  v13 = 1 << v10;
  memset(v43, 0, sizeof(v43));
  v14 = *(_QWORD *)&v43[1];
  v15 = a2 + 116;
  v16 = DWORD2(v43[0]);
  LOBYTE(v17) = BYTE4(v43[0]);
  v18 = -1LL;
  *((_QWORD *)&v43[1] + 1) = -1LL;
  v19 = 8LL;
  do
  {
    if ( *(_DWORD *)(v15 - 4) )
    {
      v33 = *(_BYTE *)v15;
      v34 = v17;
      LODWORD(v43[0]) = 1;
      if ( (unsigned __int8)v17 <= v33 )
        v34 = v33;
      v14 |= *(_QWORD *)(v15 + 12);
      v18 &= *(_QWORD *)(v15 + 20);
      LOBYTE(v17) = v34;
      v16 |= *(_DWORD *)(v15 + 4);
    }
    v15 += 32LL;
    --v19;
  }
  while ( v19 );
  BYTE4(v43[0]) = v17;
  *((_QWORD *)&v43[1] + 1) = v18;
  LOBYTE(v17) = 1;
  DWORD2(v43[0]) = v16;
  *(_QWORD *)&v43[1] = v14;
  v20 = v43[1];
  *(_OWORD *)(a2 + 80) = v43[0];
  *(_OWORD *)(a2 + 96) = v20;
  EtwpUpdateFilterData(a2, v10, 0LL, v17, 0LL);
  v36 = 1;
  v21 = *(_QWORD **)(a2 + 40);
  if ( v21 != (_QWORD *)(a2 + 40) )
  {
    v22 = (__int64)v38;
    LOBYTE(v13) = ~(_BYTE)v13;
    v39 = v13;
    do
    {
      if ( v5 )
      {
        v23 = KeGetCurrentThread();
        v24 = (__int64)(v21 - 2);
        v25 = (char *)v21 + 85;
        --v23->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v21[2] + 384LL, 0LL);
        v22 = (__int64)v38;
        v35 = 1;
        *(_QWORD *)(v21[2] + 392LL) = KeGetCurrentThread();
      }
      else
      {
        v24 = (__int64)v21;
        v25 = (char *)v21 + 100;
      }
      v26 = *v25;
      v21 = (_QWORD *)*v21;
      v27 = *v25 & v13;
      *v25 = v27;
      if ( ((*(_BYTE *)(v24 + 98) & 8) == 0 || v41 == v42) && v27 != v26 )
      {
        EtwpComputeRegEntryEnableInfo(v24, (unsigned __int8 *)Source2);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(_BYTE *)(v24 + 100));
        v29 = SchematizedFilterSize;
        v30 = 120;
        if ( SchematizedFilterSize )
          v30 = SchematizedFilterSize + 136;
        if ( v22 )
        {
          if ( *(_DWORD *)(v22 + 4) != v30 || RtlCompareMemory((const void *)(v22 + 72), Source2, 0x20uLL) != 32 )
          {
            EtwpUnreferenceDataBlock((volatile signed __int32 *)v22);
            v22 = 0LL;
            v38 = 0LL;
          }
          if ( v22 )
            goto LABEL_26;
        }
        v31 = EtwpAllocDataBlock(v30, 0LL, &v38);
        v22 = (__int64)v38;
        v7 = v31;
        if ( v31 >= 0 )
        {
          *v38 = 3;
          *(_DWORD *)(v22 + 4) = v30;
          v32 = *(_QWORD *)(v24 + 32);
          BYTE3(v40) = 0;
          *(_OWORD *)(v22 + 40) = *(_OWORD *)(v32 + 24);
          *(_OWORD *)(v22 + 72) = Source2[0];
          *(_OWORD *)(v22 + 88) = Source2[1];
          *(_DWORD *)(v22 + 112) = *(_BYTE *)(a2 + 75) & 1;
          LOWORD(v40) = *(_WORD *)(a2 + 72);
          BYTE2(v40) = *(_BYTE *)(a2 + 74);
          HIDWORD(v40) = *(_DWORD *)(a2 + 64);
          *(_QWORD *)(v22 + 104) = v40;
          if ( v29 )
          {
            *(_DWORD *)(v22 + 132) = 0x80000000;
            *(_DWORD *)(v22 + 128) = v29;
            *(_QWORD *)(v22 + 120) = 136LL;
            EtwpCopySchematizedFilters((void *)(v22 + 136));
            *(_DWORD *)(v22 + 116) = 1;
          }
          else
          {
            *(_DWORD *)(v22 + 116) = 0;
          }
        }
        if ( v22 )
LABEL_26:
          v7 = EtwpSendDataBlock(v24, v22, v8);
        LOBYTE(v13) = v39;
      }
      if ( v35 )
      {
        *(_QWORD *)(*(_QWORD *)(v24 + 32) + 392LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(v24 + 32) + 384LL, 0LL, v8, v9);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v22 = (__int64)v38;
        v35 = 0;
      }
      v5 = a3;
    }
    while ( v21 != (_QWORD *)(a2 + 40) );
    if ( v22 )
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v22);
  }
LABEL_7:
  *(_QWORD *)(a2 + 392) = 0LL;
  ExReleasePushLockEx(a2 + 384, 0LL, v8, v9);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v36 == 1 )
    EtwpUnreferenceGuidEntry((volatile signed __int64 *)a2);
  return v7;
}
