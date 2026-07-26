/*
 * XREFs of ndisGetLogicalProcessorInformation @ 0x1C011E8CC
 * Callers:
 *     ndisGetProcessorInfo @ 0x1C011E710 (ndisGetProcessorInfo.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 */

__int64 __fastcall ndisGetLogicalProcessorInformation(__int64 a1)
{
  _LIST_ENTRY *Flink; // r14
  int v2; // r13d
  int v3; // r12d
  ULONG v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  _DWORD *PoolWithTag; // rax
  void *v8; // r15
  size_t v9; // rbx
  _DWORD *v10; // rax
  void *v11; // rdi
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v12; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v13; // rsi
  unsigned int v14; // ebx
  ULONG v15; // edx
  __m128i *v16; // rdi
  unsigned int v17; // ebx
  __int64 v18; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v19; // rdi
  ULONG v20; // r12d
  __int64 Size; // rax
  unsigned int v22; // ecx
  __m128i v24; // xmm0
  unsigned int v25; // r14d
  int v26; // r15d
  unsigned __int64 v27; // rsi
  char v28; // al
  char v29; // r15
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v31; // r15d
  unsigned __int16 v32; // r14
  __m128i v33; // xmm0
  unsigned __int64 v34; // rsi
  bool v35; // zf
  char j; // al
  __m128i v37; // xmm0
  unsigned __int64 v38; // rsi
  char v39; // al
  int v40; // r15d
  WORD v41; // r14
  __m128i v42; // xmm0
  unsigned __int64 v43; // rsi
  bool v44; // zf
  char k; // al
  ULONG v46; // eax
  __int64 v47; // rcx
  int v48; // edx
  char v49; // al
  char v50; // [rsp+20h] [rbp-38h]
  char i; // [rsp+24h] [rbp-34h]
  unsigned int v52; // [rsp+28h] [rbp-30h]
  NTSTATUS v53; // [rsp+2Ch] [rbp-2Ch]
  _DWORD *v54; // [rsp+30h] [rbp-28h]
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v55; // [rsp+38h] [rbp-20h]
  _LIST_ENTRY *v56; // [rsp+40h] [rbp-18h]
  _DWORD *v57; // [rsp+48h] [rbp-10h]
  __int64 ProcNumber; // [rsp+A0h] [rbp+48h] BYREF
  ULONG Length; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v60; // [rsp+B0h] [rbp+58h]
  ULONG v61; // [rsp+B8h] [rbp+60h]

  ProcNumber = a1;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v2 = 0;
  v56 = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v3 = 0;
  v52 = 0;
  v4 = 0;
  v60 = 0;
  v50 = 1;
  for ( i = 1; v4 < ndisNumberOfActiveProcessorsAtBoot; ++v4 )
    KeGetProcessorNumberFromIndex(v4, (PPROCESSOR_NUMBER)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * v4));
  if ( v4 < ndisMaxNumberOfProcessors )
  {
    v5 = ndisMaxNumberOfProcessors - v4;
    v6 = *(_QWORD *)&WPP_MAIN_CB.DeviceType + 3LL + 20LL * v4;
    do
    {
      *(_DWORD *)(v6 - 3) = 0xFFFFFF;
      v6 += 20LL;
      --v5;
    }
    while ( v5 );
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * ndisMaxNumberOfProcessors, 0x2020444Eu);
  v54 = PoolWithTag;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = 4LL * ndisMaxNumberOfProcessors;
    memset(PoolWithTag, 0, v9);
    v10 = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x2020444Eu);
    v57 = v10;
    v11 = v10;
    if ( v10
      && (memset(v10, 255, 4LL * ndisMaxNumberOfProcessors),
          Length = 0,
          KeQueryLogicalProcessorRelationship(0LL, RelationAll, 0LL, &Length),
          v12 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x2020444Eu),
          v55 = v12,
          (v13 = v12) != 0LL) )
    {
      v53 = KeQueryLogicalProcessorRelationship(0LL, RelationAll, v12, &Length);
      v14 = v53;
      if ( v53 >= 0 )
      {
        v15 = 0;
        v16 = (__m128i *)v13;
        v61 = 0;
        if ( Length )
        {
          v17 = 0;
          do
          {
            if ( v16->m128i_i32[0] )
            {
              if ( v16->m128i_i32[0] == 1 )
              {
                v37 = v16[2];
                v38 = v16[2].m128i_u64[0];
                LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v37, 4);
                v39 = 0;
                if ( v37.m128i_i64[0] )
                {
                  do
                  {
                    if ( (v38 & 1) != 0 )
                    {
                      *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType
                               + 20LL * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)
                               + 16) = v16->m128i_i16[4];
                      v39 = BYTE2(ProcNumber);
                    }
                    ++v39;
                    v38 >>= 1;
                    BYTE2(ProcNumber) = v39;
                  }
                  while ( v38 );
                  v15 = v61;
                }
              }
              else if ( v16->m128i_i32[0] == 3 )
              {
                v31 = 0;
                v32 = 0;
                if ( v16[1].m128i_i16[7] )
                {
                  do
                  {
                    v33 = v16[v32 + 2];
                    BYTE3(ProcNumber) = 0;
                    v34 = v33.m128i_i64[0];
                    v35 = v33.m128i_i64[0] == 0;
                    LOWORD(ProcNumber) = _mm_extract_epi16(v33, 4);
                    for ( j = 0; ; ++j )
                    {
                      BYTE2(ProcNumber) = j;
                      if ( v35 )
                        break;
                      if ( (v34 & 1) != 0 )
                      {
                        ++v31;
                        *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType
                                  + 20LL * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)
                                  + 4) = v2;
                        j = BYTE2(ProcNumber);
                      }
                      v34 >>= 1;
                      v35 = v34 == 0;
                    }
                    ++v32;
                  }
                  while ( v32 < (unsigned int)v16[1].m128i_i16[7] );
                  v15 = v61;
                  v17 = v60;
                }
                if ( v2 )
                {
                  v49 = i;
                  if ( v31 != v52 )
                    v49 = 0;
                  i = v49;
                }
                else
                {
                  v52 = v31;
                }
                ++v2;
              }
            }
            else
            {
              v24 = v16[2];
              v25 = 0;
              v26 = 0;
              v27 = v16[2].m128i_u64[0];
              LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v24, 4);
              v28 = 0;
              if ( v24.m128i_i64[0] )
              {
                do
                {
                  if ( (v27 & 1) != 0 )
                  {
                    ++v25;
                    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
                    *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * ProcessorIndexFromNumber + 12) = v26++;
                    v54[ProcessorIndexFromNumber] = v3;
                    v28 = BYTE2(ProcNumber);
                  }
                  ++v28;
                  v27 >>= 1;
                  BYTE2(ProcNumber) = v28;
                }
                while ( v27 );
                v15 = v61;
                v17 = v60;
              }
              if ( v3 )
              {
                v29 = v50;
                if ( v25 != v17 )
                  v29 = 0;
                v50 = v29;
              }
              else
              {
                v17 = v25;
                v60 = v25;
              }
              ++v3;
            }
            v18 = v16->m128i_u32[1];
            v15 += v18;
            v16 = (__m128i *)((char *)v16 + v18);
            v61 = v15;
          }
          while ( v15 < Length );
          v14 = v53;
          v13 = v55;
          Flink = v56;
        }
        v19 = v13;
        LODWORD(Flink[1].Flink) = v3;
        v20 = 0;
        HIDWORD(Flink->Blink) = v2;
        v61 = 0;
        if ( Length )
        {
          do
          {
            if ( v19->Relationship == RelationProcessorPackage )
            {
              v40 = 0;
              v41 = 0;
              if ( v19->Processor.GroupCount )
              {
                do
                {
                  v42 = *((__m128i *)&v19->Group.GroupInfo[0].MaximumProcessorCount + v41);
                  BYTE3(ProcNumber) = 0;
                  v43 = v42.m128i_i64[0];
                  v44 = v42.m128i_i64[0] == 0;
                  LOWORD(ProcNumber) = _mm_extract_epi16(v42, 4);
                  for ( k = 0; ; ++k )
                  {
                    BYTE2(ProcNumber) = k;
                    if ( v44 )
                      break;
                    if ( (v43 & 1) != 0 )
                    {
                      v46 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
                      v47 = (unsigned int)v54[v46];
                      v48 = v57[v47];
                      if ( v48 == -1 )
                      {
                        v48 = v40;
                        v57[v47] = v40++;
                      }
                      *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * v46 + 8) = v48;
                      k = BYTE2(ProcNumber);
                    }
                    v43 >>= 1;
                    v44 = v43 == 0;
                  }
                  ++v41;
                }
                while ( v41 < v19->Processor.GroupCount );
                v20 = v61;
              }
            }
            Size = v19->Size;
            v20 += Size;
            v19 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)v19 + Size);
            v61 = v20;
          }
          while ( v20 < Length );
          v14 = v53;
          v13 = v55;
          Flink = v56;
        }
        if ( v50 )
        {
          v22 = v60;
          LODWORD(Flink[1].Blink) = v60;
          if ( i )
          {
            if ( v22 )
              HIDWORD(Flink[1].Flink) = v52 / v22;
          }
        }
        v11 = v57;
        v8 = v54;
      }
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      v14 = -1073741670;
    }
    ExFreePoolWithTag(v8, 0);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v14;
}
