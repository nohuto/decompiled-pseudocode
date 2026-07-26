/*
 * XREFs of ndisGetLogicalProcessorInformation @ 0x1C011B950
 * Callers:
 *     ndisGetProcessorInfo @ 0x1C011B794 (ndisGetProcessorInfo.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 */

__int64 __fastcall ndisGetLogicalProcessorInformation(__int64 a1)
{
  _DWORD *v1; // r14
  int v2; // r13d
  int v3; // r12d
  ULONG v4; // ebx
  _DWORD *PoolWithTag; // rax
  void *v6; // r15
  size_t v7; // rbx
  _DWORD *v8; // rax
  void *v9; // rdi
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v10; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v11; // rsi
  unsigned int v12; // ebx
  ULONG v13; // edx
  __m128i *v14; // rdi
  unsigned int v15; // ebx
  __int64 v16; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v17; // rdi
  ULONG v18; // r12d
  __int64 Size; // rax
  unsigned int v20; // ecx
  __m128i v22; // xmm0
  unsigned int v23; // r14d
  int v24; // r15d
  unsigned __int64 v25; // rsi
  char v26; // al
  char v27; // r15
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v29; // r15d
  unsigned __int16 v30; // r14
  __m128i v31; // xmm0
  unsigned __int64 v32; // rsi
  bool v33; // zf
  char j; // al
  __m128i v35; // xmm0
  unsigned __int64 v36; // rsi
  char v37; // al
  int v38; // r15d
  WORD v39; // r14
  __m128i v40; // xmm0
  unsigned __int64 v41; // rsi
  bool v42; // zf
  char k; // al
  ULONG v44; // eax
  __int64 v45; // rcx
  int v46; // edx
  __int64 v47; // rax
  char *v48; // rdx
  char v49; // al
  char v50; // [rsp+20h] [rbp-38h]
  char i; // [rsp+24h] [rbp-34h]
  unsigned int v52; // [rsp+28h] [rbp-30h]
  NTSTATUS v53; // [rsp+2Ch] [rbp-2Ch]
  _DWORD *v54; // [rsp+30h] [rbp-28h]
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v55; // [rsp+38h] [rbp-20h]
  _DWORD *v56; // [rsp+40h] [rbp-18h]
  _DWORD *v57; // [rsp+48h] [rbp-10h]
  __int64 ProcNumber; // [rsp+A0h] [rbp+48h] BYREF
  ULONG Length; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v60; // [rsp+B0h] [rbp+58h]
  ULONG v61; // [rsp+B8h] [rbp+60h]

  ProcNumber = a1;
  v1 = *(_DWORD **)&WPP_MAIN_CB.DeviceType;
  v2 = 0;
  v56 = *(_DWORD **)&WPP_MAIN_CB.DeviceType;
  v3 = 0;
  v52 = 0;
  v4 = 0;
  v60 = 0;
  v50 = 1;
  for ( i = 1; v4 < ndisNumberOfActiveProcessorsAtBoot; ++v4 )
    KeGetProcessorNumberFromIndex(v4, (PPROCESSOR_NUMBER)WPP_MAIN_CB.DeviceExtension + 5 * v4);
  if ( v4 < ndisMaxNumberOfProcessors )
  {
    v47 = ndisMaxNumberOfProcessors - v4;
    v48 = (char *)WPP_MAIN_CB.DeviceExtension + 20 * v4 + 3;
    do
    {
      *(_DWORD *)(v48 - 3) = 0xFFFFFF;
      v48 += 20;
      --v47;
    }
    while ( v47 );
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * ndisMaxNumberOfProcessors, 0x2020444Eu);
  v54 = PoolWithTag;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = 4LL * ndisMaxNumberOfProcessors;
    memset(PoolWithTag, 0, v7);
    v8 = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x2020444Eu);
    v57 = v8;
    v9 = v8;
    if ( v8
      && (memset(v8, 255, 4LL * ndisMaxNumberOfProcessors),
          Length = 0,
          KeQueryLogicalProcessorRelationship(0LL, RelationAll, 0LL, &Length),
          v10 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x2020444Eu),
          v55 = v10,
          (v11 = v10) != 0LL) )
    {
      v53 = KeQueryLogicalProcessorRelationship(0LL, RelationAll, v10, &Length);
      v12 = v53;
      if ( v53 >= 0 )
      {
        v13 = 0;
        v14 = (__m128i *)v11;
        v61 = 0;
        if ( Length )
        {
          v15 = 0;
          do
          {
            if ( v14->m128i_i32[0] )
            {
              if ( v14->m128i_i32[0] == 1 )
              {
                v35 = v14[2];
                v36 = v14[2].m128i_u64[0];
                LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v35, 4);
                v37 = 0;
                if ( v35.m128i_i64[0] )
                {
                  do
                  {
                    if ( (v36 & 1) != 0 )
                    {
                      *((_WORD *)WPP_MAIN_CB.DeviceExtension
                      + 10 * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)
                      + 8) = v14->m128i_i16[4];
                      v37 = BYTE2(ProcNumber);
                    }
                    ++v37;
                    v36 >>= 1;
                    BYTE2(ProcNumber) = v37;
                  }
                  while ( v36 );
                  v13 = v61;
                }
              }
              else if ( v14->m128i_i32[0] == 3 )
              {
                v29 = 0;
                v30 = 0;
                if ( v14[1].m128i_i16[7] )
                {
                  do
                  {
                    v31 = v14[v30 + 2];
                    BYTE3(ProcNumber) = 0;
                    v32 = v31.m128i_i64[0];
                    v33 = v31.m128i_i64[0] == 0;
                    LOWORD(ProcNumber) = _mm_extract_epi16(v31, 4);
                    for ( j = 0; ; ++j )
                    {
                      BYTE2(ProcNumber) = j;
                      if ( v33 )
                        break;
                      if ( (v32 & 1) != 0 )
                      {
                        ++v29;
                        *((_DWORD *)WPP_MAIN_CB.DeviceExtension
                        + 5 * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)
                        + 1) = v2;
                        j = BYTE2(ProcNumber);
                      }
                      v32 >>= 1;
                      v33 = v32 == 0;
                    }
                    ++v30;
                  }
                  while ( v30 < (unsigned int)v14[1].m128i_i16[7] );
                  v13 = v61;
                  v15 = v60;
                }
                if ( v2 )
                {
                  v49 = i;
                  if ( v29 != v52 )
                    v49 = 0;
                  i = v49;
                }
                else
                {
                  v52 = v29;
                }
                ++v2;
              }
            }
            else
            {
              v22 = v14[2];
              v23 = 0;
              v24 = 0;
              v25 = v14[2].m128i_u64[0];
              LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v22, 4);
              v26 = 0;
              if ( v22.m128i_i64[0] )
              {
                do
                {
                  if ( (v25 & 1) != 0 )
                  {
                    ++v23;
                    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
                    *((_DWORD *)WPP_MAIN_CB.DeviceExtension + 5 * ProcessorIndexFromNumber + 3) = v24++;
                    v54[ProcessorIndexFromNumber] = v3;
                    v26 = BYTE2(ProcNumber);
                  }
                  ++v26;
                  v25 >>= 1;
                  BYTE2(ProcNumber) = v26;
                }
                while ( v25 );
                v13 = v61;
                v15 = v60;
              }
              if ( v3 )
              {
                v27 = v50;
                if ( v23 != v15 )
                  v27 = 0;
                v50 = v27;
              }
              else
              {
                v15 = v23;
                v60 = v23;
              }
              ++v3;
            }
            v16 = v14->m128i_u32[1];
            v13 += v16;
            v14 = (__m128i *)((char *)v14 + v16);
            v61 = v13;
          }
          while ( v13 < Length );
          v12 = v53;
          v11 = v55;
          v1 = v56;
        }
        v17 = v11;
        v1[4] = v3;
        v18 = 0;
        v1[3] = v2;
        v61 = 0;
        if ( Length )
        {
          do
          {
            if ( v17->Relationship == RelationProcessorPackage )
            {
              v38 = 0;
              v39 = 0;
              if ( v17->Processor.GroupCount )
              {
                do
                {
                  v40 = *((__m128i *)&v17->Group.GroupInfo[0].MaximumProcessorCount + v39);
                  BYTE3(ProcNumber) = 0;
                  v41 = v40.m128i_i64[0];
                  v42 = v40.m128i_i64[0] == 0;
                  LOWORD(ProcNumber) = _mm_extract_epi16(v40, 4);
                  for ( k = 0; ; ++k )
                  {
                    BYTE2(ProcNumber) = k;
                    if ( v42 )
                      break;
                    if ( (v41 & 1) != 0 )
                    {
                      v44 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
                      v45 = (unsigned int)v54[v44];
                      v46 = v57[v45];
                      if ( v46 == -1 )
                      {
                        v46 = v38;
                        v57[v45] = v38++;
                      }
                      *((_DWORD *)WPP_MAIN_CB.DeviceExtension + 5 * v44 + 2) = v46;
                      k = BYTE2(ProcNumber);
                    }
                    v41 >>= 1;
                    v42 = v41 == 0;
                  }
                  ++v39;
                }
                while ( v39 < v17->Processor.GroupCount );
                v18 = v61;
              }
            }
            Size = v17->Size;
            v18 += Size;
            v17 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)v17 + Size);
            v61 = v18;
          }
          while ( v18 < Length );
          v12 = v53;
          v11 = v55;
          v1 = v56;
        }
        if ( v50 )
        {
          v20 = v60;
          v1[6] = v60;
          if ( i )
          {
            if ( v20 )
              v1[5] = v52 / v20;
          }
        }
        v9 = v57;
        v6 = v54;
      }
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      v12 = -1073741670;
    }
    ExFreePoolWithTag(v6, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v12;
}
