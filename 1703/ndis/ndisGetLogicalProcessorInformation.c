/*
 * XREFs of ndisGetLogicalProcessorInformation @ 0x1C011227C
 * Callers:
 *     ndisGetProcessorInfo @ 0x1C01120C0 (ndisGetProcessorInfo.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 */

__int64 __fastcall ndisGetLogicalProcessorInformation(__int64 a1)
{
  _LIST_ENTRY *Flink; // r14
  int v2; // r13d
  int v3; // r12d
  ULONG v4; // ebx
  __int64 v5; // r8
  char *v6; // rdx
  __int64 v7; // rcx
  _DWORD *PoolWithTag; // rax
  void *v9; // r15
  size_t v10; // rbx
  _DWORD *v11; // rax
  void *v12; // rdi
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v13; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v14; // rsi
  unsigned int v15; // ebx
  ULONG v16; // edx
  __m128i *v17; // rdi
  unsigned int v18; // ebx
  __int64 v19; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v20; // rdi
  ULONG v21; // r12d
  __int64 Size; // rax
  unsigned int v23; // ecx
  __m128i v25; // xmm0
  unsigned int v26; // r14d
  int v27; // r15d
  unsigned __int64 v28; // rsi
  char v29; // al
  char v30; // r15
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v32; // r15d
  unsigned __int16 v33; // r14
  __m128i v34; // xmm0
  unsigned __int64 v35; // rsi
  bool v36; // zf
  char j; // al
  __m128i v38; // xmm0
  unsigned __int64 v39; // rsi
  char v40; // al
  int v41; // r15d
  WORD v42; // r14
  __m128i v43; // xmm0
  unsigned __int64 v44; // rsi
  bool v45; // zf
  char k; // al
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // edx
  char v50; // al
  char v51; // [rsp+20h] [rbp-38h]
  char i; // [rsp+24h] [rbp-34h]
  unsigned int v53; // [rsp+28h] [rbp-30h]
  NTSTATUS v54; // [rsp+2Ch] [rbp-2Ch]
  _DWORD *v55; // [rsp+30h] [rbp-28h]
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v56; // [rsp+38h] [rbp-20h]
  _LIST_ENTRY *v57; // [rsp+40h] [rbp-18h]
  _DWORD *v58; // [rsp+48h] [rbp-10h]
  __int64 ProcNumber; // [rsp+A0h] [rbp+48h] BYREF
  ULONG Length; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v61; // [rsp+B0h] [rbp+58h]
  ULONG v62; // [rsp+B8h] [rbp+60h]

  ProcNumber = a1;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v2 = 0;
  v57 = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v3 = 0;
  v53 = 0;
  v4 = 0;
  v61 = 0;
  v51 = 1;
  for ( i = 1; v4 < ndisNumberOfActiveProcessorsAtBoot; ++v4 )
    KeGetProcessorNumberFromIndex(v4, (PPROCESSOR_NUMBER)WPP_MAIN_CB.DeviceExtension + 5 * v4);
  v5 = ndisMaxNumberOfProcessors;
  if ( v4 < ndisMaxNumberOfProcessors )
  {
    v6 = (char *)WPP_MAIN_CB.DeviceExtension + 20 * v4 + 3;
    v7 = ndisMaxNumberOfProcessors - v4;
    do
    {
      *(_DWORD *)(v6 - 3) = 0xFFFFFF;
      v6 += 20;
      --v7;
    }
    while ( v7 );
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v5, 0x2020444Eu);
  v55 = PoolWithTag;
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    v10 = 4LL * ndisMaxNumberOfProcessors;
    memset(PoolWithTag, 0, v10);
    v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x2020444Eu);
    v58 = v11;
    v12 = v11;
    if ( v11
      && (memset(v11, 255, 4LL * ndisMaxNumberOfProcessors),
          Length = 0,
          KeQueryLogicalProcessorRelationship(0LL, RelationAll, 0LL, &Length),
          v13 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x2020444Eu),
          v56 = v13,
          (v14 = v13) != 0LL) )
    {
      v54 = KeQueryLogicalProcessorRelationship(0LL, RelationAll, v13, &Length);
      v15 = v54;
      if ( v54 >= 0 )
      {
        v16 = 0;
        v17 = (__m128i *)v14;
        v62 = 0;
        if ( Length )
        {
          v18 = 0;
          do
          {
            if ( v17->m128i_i32[0] )
            {
              if ( v17->m128i_i32[0] == 1 )
              {
                v38 = v17[2];
                v39 = v17[2].m128i_u64[0];
                LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v38, 4);
                v40 = 0;
                if ( v38.m128i_i64[0] )
                {
                  do
                  {
                    if ( (v39 & 1) != 0 )
                    {
                      *((_WORD *)WPP_MAIN_CB.DeviceExtension
                      + 10 * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)
                      + 8) = v17->m128i_i16[4];
                      v40 = BYTE2(ProcNumber);
                    }
                    ++v40;
                    v39 >>= 1;
                    BYTE2(ProcNumber) = v40;
                  }
                  while ( v39 );
                  v16 = v62;
                }
              }
              else if ( v17->m128i_i32[0] == 3 )
              {
                v32 = 0;
                v33 = 0;
                if ( v17[1].m128i_i16[7] )
                {
                  do
                  {
                    v34 = v17[v33 + 2];
                    BYTE3(ProcNumber) = 0;
                    v35 = v34.m128i_i64[0];
                    v36 = v34.m128i_i64[0] == 0;
                    LOWORD(ProcNumber) = _mm_extract_epi16(v34, 4);
                    for ( j = 0; ; ++j )
                    {
                      BYTE2(ProcNumber) = j;
                      if ( v36 )
                        break;
                      if ( (v35 & 1) != 0 )
                      {
                        ++v32;
                        *((_DWORD *)WPP_MAIN_CB.DeviceExtension
                        + 5 * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)
                        + 1) = v2;
                        j = BYTE2(ProcNumber);
                      }
                      v35 >>= 1;
                      v36 = v35 == 0;
                    }
                    ++v33;
                  }
                  while ( v33 < (unsigned int)v17[1].m128i_i16[7] );
                  v16 = v62;
                  v18 = v61;
                }
                if ( v2 )
                {
                  v50 = i;
                  if ( v32 != v53 )
                    v50 = 0;
                  i = v50;
                }
                else
                {
                  v53 = v32;
                }
                ++v2;
              }
            }
            else
            {
              v25 = v17[2];
              v26 = 0;
              v27 = 0;
              v28 = v17[2].m128i_u64[0];
              LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v25, 4);
              v29 = 0;
              if ( v25.m128i_i64[0] )
              {
                do
                {
                  if ( (v28 & 1) != 0 )
                  {
                    ++v26;
                    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
                    *((_DWORD *)WPP_MAIN_CB.DeviceExtension + 5 * ProcessorIndexFromNumber + 3) = v27++;
                    v55[ProcessorIndexFromNumber] = v3;
                    v29 = BYTE2(ProcNumber);
                  }
                  ++v29;
                  v28 >>= 1;
                  BYTE2(ProcNumber) = v29;
                }
                while ( v28 );
                v16 = v62;
                v18 = v61;
              }
              if ( v3 )
              {
                v30 = v51;
                if ( v26 != v18 )
                  v30 = 0;
                v51 = v30;
              }
              else
              {
                v18 = v26;
                v61 = v26;
              }
              ++v3;
            }
            v19 = v17->m128i_u32[1];
            v16 += v19;
            v17 = (__m128i *)((char *)v17 + v19);
            v62 = v16;
          }
          while ( v16 < Length );
          v15 = v54;
          v14 = v56;
          Flink = v57;
        }
        v20 = v14;
        LODWORD(Flink[1].Flink) = v3;
        v21 = 0;
        HIDWORD(Flink->Blink) = v2;
        v62 = 0;
        if ( Length )
        {
          do
          {
            if ( v20->Relationship == RelationProcessorPackage )
            {
              v41 = 0;
              v42 = 0;
              if ( v20->Processor.GroupCount )
              {
                do
                {
                  v43 = *((__m128i *)&v20->Group.GroupInfo[0].MaximumProcessorCount + v42);
                  BYTE3(ProcNumber) = 0;
                  v44 = v43.m128i_i64[0];
                  v45 = v43.m128i_i64[0] == 0;
                  LOWORD(ProcNumber) = _mm_extract_epi16(v43, 4);
                  for ( k = 0; ; ++k )
                  {
                    BYTE2(ProcNumber) = k;
                    if ( v45 )
                      break;
                    if ( (v44 & 1) != 0 )
                    {
                      v47 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
                      v48 = (unsigned int)v55[v47];
                      v49 = v58[v48];
                      if ( v49 == -1 )
                      {
                        v49 = v41;
                        v58[v48] = v41++;
                      }
                      *((_DWORD *)WPP_MAIN_CB.DeviceExtension + 5 * v47 + 2) = v49;
                      k = BYTE2(ProcNumber);
                    }
                    v44 >>= 1;
                    v45 = v44 == 0;
                  }
                  ++v42;
                }
                while ( v42 < v20->Processor.GroupCount );
                v21 = v62;
              }
            }
            Size = v20->Size;
            v21 += Size;
            v20 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)v20 + Size);
            v62 = v21;
          }
          while ( v21 < Length );
          v15 = v54;
          v14 = v56;
          Flink = v57;
        }
        if ( v51 )
        {
          v23 = v61;
          LODWORD(Flink[1].Blink) = v61;
          if ( i )
          {
            if ( v23 )
              HIDWORD(Flink[1].Flink) = v53 / v23;
          }
        }
        v12 = v58;
        v9 = v55;
      }
      ExFreePoolWithTag(v14, 0);
    }
    else
    {
      v15 = -1073741670;
    }
    ExFreePoolWithTag(v9, 0);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v15;
}
