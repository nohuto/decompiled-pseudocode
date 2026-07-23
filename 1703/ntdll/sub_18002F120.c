/*
 * XREFs of sub_18002F120 @ 0x18002F120
 * Callers:
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlRunOnceComplete @ 0x18001A390 (RtlRunOnceComplete.c)
 *     sub_180088C98 @ 0x180088C98 (sub_180088C98.c)
 *     sub_180095680 @ 0x180095680 (sub_180095680.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F7568 @ 0x1800F7568 (sub_1800F7568.c)
 *     sub_1800FFFA8 @ 0x1800FFFA8 (sub_1800FFFA8.c)
 *     sub_180102D18 @ 0x180102D18 (sub_180102D18.c)
 */

struct _PEB *__fastcall sub_18002F120(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  signed __int32 v6; // ebx
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rbp
  int v15; // r14d
  int v16; // edi
  unsigned __int64 i; // rax
  int v18; // ecx
  int v19; // edx
  unsigned __int64 v20; // rbp
  __int64 v21; // r10
  __int16 v22; // cx
  signed __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  struct _TEB *v26; // rdx
  __int64 HeapData_high; // r8
  unsigned int v28; // ecx
  unsigned __int16 v29; // si
  signed __int64 Ptr; // rax
  NTSTATUS v31; // ebx
  NTSTATUS v32; // ebx
  __int32 v33; // r8d
  int v34; // edx
  unsigned int v37; // r8d
  unsigned __int64 v38; // rdi
  signed __int64 v39; // rax
  __int32 v40; // r9d
  int v41; // edx
  unsigned int v43; // r9d
  struct _PEB *result; // rax
  _DWORD *p_ServiceSessionId; // rcx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v47; // rcx
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // eax
  NTSTATUS InformationProcess; // eax
  signed __int64 v52; // rcx
  NTSTATUS v53; // eax
  signed __int64 v54; // rcx
  char v55; // [rsp+40h] [rbp-58h] BYREF
  char v56[7]; // [rsp+41h] [rbp-57h] BYREF
  unsigned __int64 v57; // [rsp+48h] [rbp-50h]
  unsigned __int64 v58; // [rsp+50h] [rbp-48h]
  __int64 v59; // [rsp+58h] [rbp-40h]
  __int64 v60; // [rsp+60h] [rbp-38h]
  int v62; // [rsp+C8h] [rbp+30h]
  signed __int64 v63; // [rsp+C8h] [rbp+30h]
  signed __int32 v64; // [rsp+C8h] [rbp+30h]

  v6 = *(_DWORD *)(a2 + 32);
  v11 = *(unsigned __int8 *)(a6 + 2);
  if ( *(_BYTE *)(a2 + 43) )
    v12 = *(_QWORD *)(a1 + 8 * v11 + 2224) + 192LL * *(unsigned __int8 *)(a2 + 43) - 192;
  else
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1192);
  v13 = *(_BYTE *)(a6 + 3);
  if ( (v13 & 6) != 0 )
  {
    result = (struct _PEB *)sub_180102D18(a1, a2, a3, (v13 >> 1) & 3, a4, a5, a6);
    if ( (_DWORD)result )
      return result;
  }
  v14 = a4 + 16;
  *(_QWORD *)a3 = a2;
  v57 = v14 >> 4;
  v15 = qword_18015BFE8;
  v16 = 0;
  v58 = (((((unsigned __int64)(unsigned int)((a5 - 64) / v14) + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL) + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  for ( i = a3 + v58; i + v14 + 8 <= a3 + a5; i += v14 )
  {
    v18 = (unsigned __int16)v16 << 8;
    v19 = *(_DWORD *)(a1 + 24) ^ v15 ^ (i >> 4) ^ (((_DWORD)i - (_DWORD)a3) << 12);
    ++v16;
    *(_DWORD *)(i + 12) &= 0xFF0000FF;
    *(_DWORD *)(i + 12) |= v18;
    *(_BYTE *)(i + 15) = 0x80;
    *(_DWORD *)(i + 8) = v19;
  }
  *(_QWORD *)(a3 + 32) = (unsigned int)v16;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  v20 = *(_QWORD *)(a3 + 32);
  memset((void *)(a3 + 48), 0, (v20 + 7) >> 3);
  if ( (v20 & 0x3F) != 0 )
    *(_QWORD *)(a3 + 48 + 8 * (v20 >> 6)) |= ~((1LL << (v20 & 0x3F)) - 1);
  v21 = a2;
  v22 = v57;
  *(_WORD *)(a2 + 36) = v57;
  *(_WORD *)(a2 + 40) = v16;
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a6 + 2);
  *(_WORD *)(a2 + 38) = 0;
  *(_QWORD *)(a2 + 8) = a3;
  if ( (((_BYTE)a2 + 16) & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  LOWORD(v62) = v58;
  HIWORD(v62) = 16 * v22;
  *(_DWORD *)(a3 + 24) = v62 ^ a1 ^ v15 ^ a3;
  if ( *(_DWORD *)(v12 + 164) )
  {
    if ( ++*(_WORD *)(v12 + 176) <= 0x1Cu )
      goto LABEL_11;
    v47 = *(_QWORD *)v12;
    v50 = *(_DWORD *)(*(_QWORD *)v12 + 36LL);
    if ( v50 )
    {
      v49 = v50 - 4;
      goto LABEL_36;
    }
  }
  else
  {
    v47 = *(_QWORD *)v12;
    v48 = *(_DWORD *)(*(_QWORD *)v12 + 36LL);
    if ( v48 < 0x20 )
    {
      v49 = v48 + 4;
LABEL_36:
      *(_DWORD *)(v47 + 36) = v49;
    }
  }
  *(_WORD *)(v12 + 176) = 0;
  do
  {
LABEL_11:
    v23 = *(_QWORD *)(v12 + 160);
    if ( v16 <= 0 )
      v24 = HIDWORD(v23) - 1;
    else
      v24 = HIDWORD(v23) + 1;
    HIDWORD(v63) = v24;
    LODWORD(v63) = v23 + v16;
  }
  while ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 160), v63, v23) );
  v25 = *(_QWORD *)v12;
  *(_DWORD *)(v12 + 168) = ++*(_DWORD *)(v25 + 32);
  v26 = NtCurrentTeb();
  HeapData_high = HIWORD(v26->HeapData);
  HIWORD(v26->HeapData) = (unsigned __int8)(HeapData_high + 2);
  v28 = *((unsigned __int8 *)qword_180159900 + HeapData_high);
  *(_DWORD *)(a2 + 44) = 1;
  HIWORD(v64) = (v28 | (unsigned __int64)(*((unsigned __int8 *)qword_180159900 + (unsigned __int8)(HeapData_high + 1)) << 7))
              % (unsigned int)v16;
  LOWORD(v64) = v16;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v64, v6);
  if ( (dword_18015BFDC & 2) == 0 )
  {
    v29 = HIWORD(NtCurrentTeb()->HeapData);
    if ( !dword_18015BFB8 )
    {
      InformationProcess = ZwQueryInformationProcess(
                             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                             ProcessCookie,
                             &dword_18015BFB8,
                             4u,
                             0LL);
      v21 = a2;
      if ( InformationProcess < 0 )
        dword_18015BFB8 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    }
    Ptr = (signed __int64)stru_18015C320.Ptr;
    v31 = 0;
    if ( ((__int64)stru_18015C320.Ptr & 3) == 2 )
    {
LABEL_17:
      if ( v31 >= 0 )
        goto LABEL_18;
      v55 = 0;
    }
    else
    {
      do
      {
        while ( (Ptr & 3) != 0 )
        {
          if ( (Ptr & 3) != 1 )
          {
            v21 = a2;
            if ( (Ptr & 3) == 3 )
              v31 = -1073741584;
            goto LABEL_17;
          }
          Ptr = sub_180088C98(Ptr, &stru_18015C320);
        }
        v52 = Ptr;
        Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_18015C320, 1LL, Ptr);
      }
      while ( Ptr != v52 );
      if ( sub_180095680(&stru_18015C320, 0LL, 0LL) )
      {
        v31 = RtlRunOnceComplete(&stru_18015C320, 0, 0LL);
        if ( v31 >= 0 )
          goto LABEL_59;
        v55 = 1;
      }
      else
      {
        v31 = RtlRunOnceComplete(&stru_18015C320, 4u, 0LL);
        if ( v31 >= 0 )
          goto LABEL_59;
        v55 = 2;
      }
    }
    sub_1800F7568((unsigned int)v31, &v55, 1LL);
LABEL_59:
    v21 = a2;
LABEL_18:
    v32 = 0;
    dword_18015BFB8 = (2147483629 * (unsigned __int64)(unsigned int)dword_18015BFB8 + 2147483587) % 0x7FFFFFFF;
    v33 = _InterlockedExchange(&dword_1801596A0[dword_1801598A0 & 0x7F], dword_18015BFB8);
    if ( MEMORY[0x7FFE0290] )
    {
      v34 = 0;
      while ( 1 )
      {
        __asm { rdrand  rcx }
        v59 = _RCX;
        if ( _CF )
          break;
        if ( (unsigned int)++v34 >= 0xA )
          goto LABEL_61;
      }
    }
    else
    {
LABEL_61:
      LODWORD(_RCX) = 0;
    }
    v37 = _RCX ^ v33;
    _InterlockedExchangeAdd(&dword_1801598A0, v37);
    v38 = (unsigned __int64)v37 << 32;
    if ( !dword_18015BFB8 )
    {
      v53 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_18015BFB8, 4u, 0LL);
      v21 = a2;
      if ( v53 < 0 )
        dword_18015BFB8 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    }
    v39 = (signed __int64)stru_18015C320.Ptr;
    if ( ((__int64)stru_18015C320.Ptr & 3) == 2 )
    {
LABEL_23:
      if ( v32 >= 0 )
      {
LABEL_24:
        dword_18015BFB8 = (2147483629 * (unsigned __int64)(unsigned int)dword_18015BFB8 + 2147483587) % 0x7FFFFFFF;
        v40 = _InterlockedExchange(&dword_1801596A0[dword_1801598A0 & 0x7F], dword_18015BFB8);
        if ( MEMORY[0x7FFE0290] )
        {
          v41 = 0;
          while ( 1 )
          {
            __asm { rdrand  rcx }
            v60 = _RCX;
            if ( _CF )
              break;
            if ( (unsigned int)++v41 >= 0xA )
              goto LABEL_80;
          }
        }
        else
        {
LABEL_80:
          LODWORD(_RCX) = 0;
        }
        v43 = _RCX ^ v40;
        _InterlockedExchangeAdd(&dword_1801598A0, v43);
        qword_180159900[(unsigned __int64)v29 >> 3] = (v38 | v43) & 0x7F7F7F7F7F7F7F7FLL;
        goto LABEL_28;
      }
      v56[0] = 0;
    }
    else
    {
      do
      {
        while ( (v39 & 3) != 0 )
        {
          if ( (v39 & 3) != 1 )
          {
            v21 = a2;
            if ( (v39 & 3) == 3 )
              v32 = -1073741584;
            goto LABEL_23;
          }
          v39 = sub_180088C98(v39, &stru_18015C320);
        }
        v54 = v39;
        v39 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_18015C320, 1LL, v39);
      }
      while ( v39 != v54 );
      if ( sub_180095680(&stru_18015C320, 0LL, 0LL) )
      {
        v32 = RtlRunOnceComplete(&stru_18015C320, 0, 0LL);
        if ( v32 >= 0 )
          goto LABEL_78;
        v56[0] = 1;
      }
      else
      {
        v32 = RtlRunOnceComplete(&stru_18015C320, 4u, 0LL);
        if ( v32 >= 0 )
          goto LABEL_78;
        v56[0] = 2;
      }
    }
    sub_1800F7568((unsigned int)v32, v56, 1LL);
LABEL_78:
    v21 = a2;
    goto LABEL_24;
  }
LABEL_28:
  result = NtCurrentPeb();
  p_ServiceSessionId = &result->SharedData->ServiceSessionId;
  if ( p_ServiceSessionId && *p_ServiceSessionId )
  {
    result = NtCurrentPeb();
    UserModeGlobalLogger = (__int64)result->SharedData->UserModeGlobalLogger;
  }
  else
  {
    UserModeGlobalLogger = 2147353472LL;
  }
  if ( *(_BYTE *)UserModeGlobalLogger )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
      return (struct _PEB *)sub_1800FFFA8(
                              *(_QWORD *)(a1 + 24),
                              *(_QWORD *)(v21 + 8),
                              *(unsigned __int16 *)(v21 + 36),
                              *(unsigned __int16 *)(v21 + 40),
                              *(unsigned __int8 *)(v21 + 43));
  }
  return result;
}
