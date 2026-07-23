/*
 * XREFs of RtlpSubSegmentInitialize @ 0x18005E860
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180041A70 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlRunOnceComplete @ 0x180078C00 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180087308 (RtlpRunOnceWaitForInit.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlReportCriticalFailure @ 0x1800F8394 (RtlReportCriticalFailure.c)
 *     RtlpInitRandomExVector @ 0x1800FAC90 (RtlpInitRandomExVector.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x180101C74 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x180106484 (RtlpSubSegmentDebugInitialize.c)
 */

struct _PEB *__fastcall RtlpSubSegmentInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  signed __int32 v6; // ebx
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rsi
  int v15; // edi
  int v16; // ebp
  unsigned __int64 i; // rax
  int v18; // ecx
  int v19; // edx
  unsigned __int64 v20; // rsi
  __int64 v21; // r10
  __int16 v22; // cx
  signed __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  struct _TEB *v26; // rdx
  __int64 LowFragHeapDataSlot; // r8
  unsigned int v28; // ecx
  unsigned __int64 v29; // rsi
  signed __int64 Value; // rax
  NTSTATUS v31; // ebx
  __int32 v32; // r8d
  int v33; // edx
  unsigned int v36; // r8d
  unsigned __int64 v37; // rbx
  signed __int64 v38; // rax
  NTSTATUS v39; // edi
  __int32 v40; // r9d
  int v41; // edx
  unsigned int v43; // r9d
  struct _PEB *result; // rax
  _DWORD *SharedData; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // eax
  NTSTATUS InformationProcess; // eax
  signed __int64 v52; // rcx
  signed __int64 v53; // rcx
  NTSTATUS v54; // eax
  signed __int64 v55; // rcx
  signed __int64 v56; // rcx
  char v57; // [rsp+40h] [rbp-58h] BYREF
  char v58[7]; // [rsp+41h] [rbp-57h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-50h]
  unsigned __int64 v60; // [rsp+50h] [rbp-48h]
  __int64 v61; // [rsp+58h] [rbp-40h]
  __int64 v62; // [rsp+60h] [rbp-38h]
  int v64; // [rsp+C8h] [rbp+30h]
  signed __int64 v65; // [rsp+C8h] [rbp+30h]
  signed __int32 v66; // [rsp+C8h] [rbp+30h]

  v6 = *(_DWORD *)(a2 + 32);
  v11 = *(unsigned __int8 *)(a6 + 2);
  if ( *(_BYTE *)(a2 + 43) )
    v12 = *(_QWORD *)(a1 + 8 * v11 + 2224) + 192LL * *(unsigned __int8 *)(a2 + 43) - 192;
  else
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1192);
  v13 = (*(_BYTE *)(a6 + 3) >> 1) & 3;
  if ( v13 )
  {
    result = (struct _PEB *)RtlpSubSegmentDebugInitialize(a1, a2, a3, v13, a4, a5, a6);
    if ( (_DWORD)result )
      return result;
  }
  v14 = a4 + 16;
  *(_QWORD *)a3 = a2;
  v59 = v14 >> 4;
  v15 = 0;
  v16 = RtlpLFHKey;
  v60 = (((((unsigned __int64)(unsigned int)((a5 - 64) / v14) + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL) + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  for ( i = a3 + v60; i + v14 + 8 <= a3 + a5; i += v14 )
  {
    v18 = (unsigned __int16)v15 << 8;
    v19 = *(_DWORD *)(a1 + 24) ^ v16 ^ (i >> 4) ^ (((_DWORD)i - (_DWORD)a3) << 12);
    ++v15;
    *(_DWORD *)(i + 12) &= 0xFF0000FF;
    *(_DWORD *)(i + 12) |= v18;
    *(_BYTE *)(i + 15) = 0x80;
    *(_DWORD *)(i + 8) = v19;
  }
  *(_QWORD *)(a3 + 32) = (unsigned int)v15;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  v20 = *(_QWORD *)(a3 + 32);
  memset((void *)(a3 + 48), 0, (v20 + 7) >> 3);
  if ( (v20 & 0x3F) != 0 )
    *(_QWORD *)(a3 + 48 + 8 * (v20 >> 6)) |= ~((1LL << (v20 & 0x3F)) - 1);
  v21 = a2;
  v22 = v59;
  *(_WORD *)(a2 + 36) = v59;
  *(_WORD *)(a2 + 40) = v15;
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a6 + 2);
  *(_WORD *)(a2 + 38) = 0;
  *(_QWORD *)(a2 + 8) = a3;
  if ( (((_BYTE)a2 + 16) & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  LOWORD(v64) = v60;
  HIWORD(v64) = 16 * v22;
  *(_DWORD *)(a3 + 24) = v64 ^ v16 ^ a3 ^ a1;
  if ( *(_DWORD *)(v12 + 164) )
  {
    if ( ++*(_WORD *)(v12 + 176) <= 0x1Cu )
      goto LABEL_11;
    v47 = *(_QWORD *)v12;
    v50 = *(_DWORD *)(*(_QWORD *)v12 + 36LL);
    if ( v50 )
    {
      v49 = v50 - 4;
      goto LABEL_38;
    }
  }
  else
  {
    v47 = *(_QWORD *)v12;
    v48 = *(_DWORD *)(*(_QWORD *)v12 + 36LL);
    if ( v48 < 0x20 )
    {
      v49 = v48 + 4;
LABEL_38:
      *(_DWORD *)(v47 + 36) = v49;
    }
  }
  *(_WORD *)(v12 + 176) = 0;
  do
  {
LABEL_11:
    v23 = *(_QWORD *)(v12 + 160);
    if ( v15 <= 0 )
      v24 = HIDWORD(v23) - 1;
    else
      v24 = HIDWORD(v23) + 1;
    HIDWORD(v65) = v24;
    LODWORD(v65) = v23 + v15;
  }
  while ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 160), v65, v23) );
  v25 = *(_QWORD *)v12;
  *(_DWORD *)(v12 + 168) = ++*(_DWORD *)(v25 + 32);
  v26 = NtCurrentTeb();
  LowFragHeapDataSlot = v26->LowFragHeapDataSlot;
  v26->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 2);
  v28 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + LowFragHeapDataSlot);
  *(_DWORD *)(a2 + 44) = 1;
  HIWORD(v66) = (v28 | (unsigned __int64)(*((unsigned __int8 *)RtlpLowFragHeapRandomData
                                          + (unsigned __int8)(LowFragHeapDataSlot + 1)) << 7))
              % (unsigned int)v15;
  LOWORD(v66) = v15;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v66, v6);
  if ( (RtlpLowFragHeapGlobalFlags & 2) == 0 )
  {
    v29 = (unsigned __int8)NtCurrentTeb()->LowFragHeapDataSlot;
    if ( !dword_180160090 )
    {
      InformationProcess = NtQueryInformationProcess(
                             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                             ProcessCookie,
                             &dword_180160090,
                             4u,
                             0LL);
      v21 = a2;
      if ( InformationProcess < 0 )
        dword_180160090 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    }
    Value = RtlpRandomExInit.Value;
    v31 = 0;
    if ( ((__int64)RtlpRandomExInit.Ptr & 3) == 2 )
    {
LABEL_17:
      if ( v31 >= 0 )
        goto LABEL_18;
      v57 = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v52 = Value & 3;
          if ( (Value & 3) == 0 )
            break;
          if ( v52 != 1 )
          {
            v21 = a2;
            if ( v52 == 3 )
              v31 = -1073741584;
            goto LABEL_17;
          }
          Value = RtlpRunOnceWaitForInit(Value, &RtlpRandomExInit);
        }
        v53 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, Value);
      }
      while ( Value != v53 );
      if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
      {
        v31 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
        if ( v31 >= 0 )
          goto LABEL_61;
        v57 = 1;
      }
      else
      {
        v31 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
        if ( v31 >= 0 )
          goto LABEL_61;
        v57 = 2;
      }
    }
    RtlReportCriticalFailure((unsigned int)v31, &v57, 1LL);
LABEL_61:
    v21 = a2;
LABEL_18:
    dword_180160090 = (2147483629 * (unsigned __int64)(unsigned int)dword_180160090 + 2147483587) % 0x7FFFFFFF;
    v32 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180160090);
    if ( MEMORY[0x7FFE0290] )
    {
      v33 = 0;
      while ( 1 )
      {
        __asm { rdrand  rcx }
        v61 = _RCX;
        if ( _CF )
          break;
        if ( (unsigned int)++v33 >= 0xA )
          goto LABEL_35;
      }
    }
    else
    {
LABEL_35:
      LODWORD(_RCX) = 0;
    }
    v36 = _RCX ^ v32;
    _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v36);
    v37 = (unsigned __int64)v36 << 32;
    if ( !dword_180160090 )
    {
      v54 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_180160090, 4u, 0LL);
      v21 = a2;
      if ( v54 < 0 )
        dword_180160090 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    }
    v38 = RtlpRandomExInit.Value;
    v39 = 0;
    if ( ((__int64)RtlpRandomExInit.Ptr & 3) == 2 )
    {
LABEL_23:
      if ( v39 >= 0 )
      {
LABEL_24:
        dword_180160090 = (2147483629 * (unsigned __int64)(unsigned int)dword_180160090 + 2147483587) % 0x7FFFFFFF;
        v40 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180160090);
        if ( MEMORY[0x7FFE0290] )
        {
          v41 = 0;
          while ( 1 )
          {
            __asm { rdrand  rcx }
            v62 = _RCX;
            if ( _CF )
              break;
            if ( (unsigned int)++v41 >= 0xA )
              goto LABEL_36;
          }
        }
        else
        {
LABEL_36:
          LODWORD(_RCX) = 0;
        }
        v43 = _RCX ^ v40;
        _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v43);
        RtlpLowFragHeapRandomData[v29 >> 3] = (v37 | v43) & 0x7F7F7F7F7F7F7F7FLL;
        goto LABEL_28;
      }
      v58[0] = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v55 = v38 & 3;
          if ( (v38 & 3) == 0 )
            break;
          if ( v55 != 1 )
          {
            v21 = a2;
            if ( v55 == 3 )
              v39 = -1073741584;
            goto LABEL_23;
          }
          v38 = RtlpRunOnceWaitForInit(v38, &RtlpRandomExInit);
        }
        v56 = v38;
        v38 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, v38);
      }
      while ( v38 != v56 );
      if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
      {
        v39 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
        if ( v39 >= 0 )
          goto LABEL_80;
        v58[0] = 1;
      }
      else
      {
        v39 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
        if ( v39 >= 0 )
          goto LABEL_80;
        v58[0] = 2;
      }
    }
    RtlReportCriticalFailure((unsigned int)v39, v58, 1LL);
LABEL_80:
    v21 = a2;
    goto LABEL_24;
  }
LABEL_28:
  result = NtCurrentPeb();
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v46 = (__int64)result->SharedData + 550;
  }
  else
  {
    v46 = 2147353472LL;
  }
  if ( *(_BYTE *)v46 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
      return (struct _PEB *)RtlpLogHeapSubSegmentInitialize(
                              *(_QWORD *)(a1 + 24),
                              *(_QWORD *)(v21 + 8),
                              *(unsigned __int16 *)(v21 + 36),
                              *(unsigned __int16 *)(v21 + 40),
                              *(unsigned __int8 *)(v21 + 43));
  }
  return result;
}
