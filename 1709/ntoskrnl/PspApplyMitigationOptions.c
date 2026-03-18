/*
 * XREFs of PspApplyMitigationOptions @ 0x14048B80C
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 *     ObReferenceProcessHandleTable @ 0x140506A2C (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleExceptions @ 0x140590EC8 (ExEnableHandleExceptions.c)
 *     PspDecodeMitigationExecuteOptions @ 0x140598B40 (PspDecodeMitigationExecuteOptions.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407161A0 (PspSetNoChildProcessRestrictedPolicy.c)
 */

unsigned __int64 __fastcall PspApplyMitigationOptions(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int128 *a4,
        unsigned int a5)
{
  __m128i v5; // xmm6
  __int128 v8; // xmm0
  unsigned __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __m128i v19; // [rsp+30h] [rbp-40h] BYREF
  __m128i v20; // [rsp+40h] [rbp-30h] BYREF

  v5 = *a3;
  v8 = *a4;
  v20 = *a3;
  if ( (unsigned __int16)PsWow64GetProcessMachine(a1) == 332 )
  {
    v19 = v5;
    *(_BYTE *)(a1 + 447) = PspDecodeMitigationExecuteOptions(&v19);
  }
  v10 = v20.m128i_i64[0];
  if ( (((unsigned __int64)v20.m128i_i64[0] >> 8) & 3) != 1 )
  {
    if ( (((unsigned __int64)v20.m128i_i64[0] >> 8) & 3) != 3 )
      goto LABEL_7;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 8u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x10u);
  v10 = v20.m128i_i64[0];
LABEL_7:
  if ( (v10 & 0x30000) != 0 )
    v11 = (BYTE2(v10) & 3) == 2;
  else
    v11 = (a5 & 1) == 0;
  if ( v11 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x40u);
    v10 = v20.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0x40) == 0 )
  {
    if ( ((v10 >> 20) & 3) != 0 )
    {
      if ( ((v10 >> 20) & 3) != 1 )
        goto LABEL_18;
    }
    else if ( (a5 & 2) == 0 )
    {
      goto LABEL_18;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x20u);
    v10 = v20.m128i_i64[0];
  }
LABEL_18:
  if ( !a2 )
    goto LABEL_27;
  if ( ((v10 >> 24) & 3) == 0 )
  {
    if ( (a5 & 4) == 0 )
      goto LABEL_25;
LABEL_23:
    v12 = ObReferenceProcessHandleTable(a1);
    if ( v12 )
    {
      LOBYTE(v13) = 1;
      ExEnableHandleExceptions(v12, v13);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 760));
    }
    goto LABEL_25;
  }
  if ( ((v10 >> 24) & 3) == 1 )
    goto LABEL_23;
LABEL_25:
  if ( (*(_DWORD *)(a2 + 2088) & 0x1000) != 0 )
  {
    v10 = v10 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
    v20.m128i_i64[0] = v10;
  }
LABEL_27:
  if ( ((v10 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x3000u);
    v10 = v20.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0x1000) == 0 && (((unsigned __int64)v8 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x2000u);
    v10 = v20.m128i_i64[0];
  }
  if ( ((v10 >> 36) & 3) == 1 )
    goto LABEL_35;
  if ( ((v10 >> 36) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x200u);
LABEL_35:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x100u);
    v10 = v20.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0x100) == 0 && (((unsigned __int64)v8 >> 36) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x800u);
    v10 = v20.m128i_i64[0];
  }
  if ( (BYTE4(v10) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x80u);
    v10 = v20.m128i_i64[0];
  }
  if ( ((v10 >> 40) & 3) == 0 )
  {
    if ( (a5 & 8) == 0 )
      goto LABEL_51;
    v20.m128i_i64[0] = v10 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
    if ( (a5 & 0x20) == 0 )
      goto LABEL_48;
    goto LABEL_47;
  }
  if ( ((v10 >> 40) & 3) != 1 )
  {
    if ( ((v10 >> 40) & 3) != 3 )
      goto LABEL_51;
LABEL_47:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 2u);
    v20.m128i_i64[0] |= 0x30000000000uLL;
  }
LABEL_48:
  _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 1u);
  if ( (a5 & 0x10) == 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 5u);
  v10 = v20.m128i_i64[0];
LABEL_51:
  v20.m128i_i64[1] = _mm_srli_si128(_mm_load_si128(&v20), 8).m128i_u64[0];
  if ( (((unsigned __int64)v20.m128i_i64[1] >> 8) & 3) == 1 && (*(_DWORD *)(a1 + 2088) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 4u);
    v10 = v20.m128i_i64[0];
  }
  if ( ((v10 >> 44) & 3) == 1 )
  {
    if ( *(_BYTE *)(a1 + 1736) < 8u )
      *(_BYTE *)(a1 + 1736) = 8;
    if ( *(_BYTE *)(a1 + 1737) < 8u )
      *(_BYTE *)(a1 + 1737) = 8;
  }
  else
  {
    if ( ((v10 >> 44) & 3) != 3 )
      goto LABEL_65;
    if ( *(_BYTE *)(a1 + 1736) < 6u )
      *(_BYTE *)(a1 + 1736) = 6;
    if ( *(_BYTE *)(a1 + 1737) < 6u )
      *(_BYTE *)(a1 + 1737) = 6;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x800000u);
  v10 = v20.m128i_i64[0];
LABEL_65:
  if ( (*(_DWORD *)(a1 + 2088) & 0x800000) == 0 )
  {
    if ( (((unsigned __int64)v8 >> 44) & 3) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x1000000u);
      goto LABEL_70;
    }
    if ( (((unsigned __int64)v8 >> 44) & 3) == 3 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x2000000u);
LABEL_70:
      v10 = v20.m128i_i64[0];
    }
  }
  if ( (((unsigned __int8)v10 >> 4) & 3) == 0 && (*(_DWORD *)(a1 + 2088) & 1) != 0 )
  {
    v10 = v10 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v20.m128i_i64[0] = v10;
  }
  if ( (((unsigned __int8)v10 >> 4) & 3) != 1 && (((unsigned __int64)v8 >> 4) & 3) == 1 )
  {
    v10 |= 0x30uLL;
    v20.m128i_i64[0] = v10;
  }
  v14 = HIWORD(a5) & 3;
  if ( v14 == 1 )
  {
    v10 = v10 & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
LABEL_82:
    v20.m128i_i64[0] = v10;
    goto LABEL_83;
  }
  if ( v14 == 3 && (BYTE6(v10) & 3) != 1 )
  {
    v10 |= 0x3000000000000uLL;
    goto LABEL_82;
  }
LABEL_83:
  if ( (HIWORD(v10) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x10000u);
    goto LABEL_87;
  }
  if ( (HIWORD(v10) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x20000u);
LABEL_87:
    v10 = v20.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0x30000) == 0 && (WORD3(v8) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x20000u);
    v10 = v20.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 2088) & 0x80000) != 0 )
  {
    v10 = v10 & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
    v20.m128i_i64[0] = v10;
  }
  if ( ((v10 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x80000u);
    v10 = v20.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0x80000) == 0 && (((unsigned __int64)v8 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x100000u);
    v10 = v20.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 2088) & 0x200000) != 0 )
  {
    v10 = v10 & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
    v20.m128i_i64[0] = v10;
  }
  if ( (HIBYTE(v10) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x200000u);
    v10 = v20.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0x200000) == 0 && (BYTE7(v8) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x400000u);
    v10 = v20.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 2088) & 0x40000) != 0 )
  {
    v10 = v10 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
    v20.m128i_i64[0] = v10;
  }
  if ( ((v10 >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x40000u);
  if ( a2 )
  {
    v15 = *(_DWORD *)(a2 + 2088);
    if ( (v15 & 0x4000000) != 0 )
    {
      v20.m128i_i64[1] = v20.m128i_i64[1] & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else if ( (v15 & 0x8000000) != 0 )
    {
      v20.m128i_i64[1] |= 0x30uLL;
    }
  }
  if ( (((unsigned __int64)v20.m128i_i64[1] >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0xC000000u);
  }
  else if ( (((unsigned __int64)v20.m128i_i64[1] >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x8000000u);
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0xC000000) == 0 && ((*((_QWORD *)&v8 + 1) >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x8000000u);
  if ( (((unsigned __int64)v20.m128i_i64[1] >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 1u);
  if ( (*(_DWORD *)(a1 + 2092) & 1) == 0 && ((*((_QWORD *)&v8 + 1) >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 2u);
  if ( (v20.m128i_i8[12] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 4u);
  if ( (HIWORD(v20.m128i_i64[1]) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x40000000u);
  if ( (((unsigned __int64)v20.m128i_i64[1] >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x2000u);
  if ( (*(_DWORD *)(a1 + 2092) & 4) == 0 && (BYTE12(v8) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 8u);
  if ( (((unsigned __int64)v20.m128i_i64[1] >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x400u);
  if ( (*(_DWORD *)(a1 + 2092) & 0x400) == 0 && ((*((_QWORD *)&v8 + 1) >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x800u);
  if ( (((unsigned __int64)v20.m128i_i64[1] >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x10u);
  if ( (*(_DWORD *)(a1 + 2092) & 0x10) == 0 && ((*((_QWORD *)&v8 + 1) >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x20u);
  result = PsWow64GetProcessMachine(a1);
  if ( (_WORD)result == 332 )
  {
    if ( (((unsigned __int64)v20.m128i_i64[1] >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x40u);
    result = *(unsigned int *)(a1 + 2092);
    if ( (result & 0x40) == 0 && ((*((_QWORD *)&v8 + 1) >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x80u);
    if ( (((unsigned __int64)v20.m128i_i64[1] >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x100u);
    if ( (*(_DWORD *)(a1 + 2092) & 0x100) == 0 && ((*((_QWORD *)&v8 + 1) >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x200u);
  }
  v17 = (unsigned __int64)v20.m128i_i64[1] >> 36;
  if ( (((unsigned __int64)v20.m128i_i64[1] >> 36) & 3) == 1 )
  {
    v18 = 1LL;
    goto LABEL_163;
  }
  if ( (((unsigned __int64)v20.m128i_i64[1] >> 36) & 3) == 3 )
  {
    v18 = 2LL;
LABEL_163:
    result = PspSetNoChildProcessRestrictedPolicy(a1, v18);
  }
  if ( (v17 & 3) != 1 && ((*((_QWORD *)&v8 + 1) >> 36) & 3) == 1 )
    result = PspSetNoChildProcessRestrictedPolicy(a1, 3LL);
  if ( a2 )
  {
    result = *(unsigned int *)(a2 + 2088);
    if ( (result & 0x10000000) != 0 && (result & 0x20000000) == 0 )
    {
      result = v20.m128i_i64[1] & 0xFFFFCFFFFFFFFFFFuLL | 0x100000000000LL;
      v20.m128i_i64[1] = result;
    }
  }
  if ( (((unsigned __int64)v20.m128i_i64[1] >> 44) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x10000000u);
  }
  else if ( (((unsigned __int64)v20.m128i_i64[1] >> 44) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x30000000u);
  }
  *a3 = v20;
  return result;
}
