/*
 * XREFs of PspApplyMitigationOptions @ 0x1404A0710
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExEnableHandleExceptions @ 0x140455EF0 (ExEnableHandleExceptions.c)
 *     PspDecodeMitigationExecuteOptions @ 0x140457C78 (PspDecodeMitigationExecuteOptions.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 *     PsWow64GetProcessMachine @ 0x14053B210 (PsWow64GetProcessMachine.c)
 */

unsigned __int64 __fastcall PspApplyMitigationOptions(__int64 a1, __int64 a2, __m128i *a3, unsigned int a4)
{
  __m128i v4; // xmm6
  unsigned __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // ebx
  unsigned __int64 result; // rax
  __m128i v15; // [rsp+20h] [rbp-40h] BYREF
  __m128i v16; // [rsp+30h] [rbp-30h] BYREF

  v4 = *a3;
  v16 = *a3;
  if ( (unsigned __int16)PsWow64GetProcessMachine(a1) == 332 )
  {
    v15 = v4;
    *(_BYTE *)(a1 + 447) = PspDecodeMitigationExecuteOptions(&v15);
  }
  v9 = v16.m128i_i64[0];
  if ( (v16.m128i_i8[1] & 3) != 1 )
  {
    if ( (v16.m128i_i8[1] & 3) != 3 )
      goto LABEL_7;
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x1000000u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x8000000u);
  v9 = v16.m128i_i64[0];
LABEL_7:
  if ( (v9 & 0x30000) != 0 )
    v10 = (BYTE2(v9) & 3) == 2;
  else
    v10 = (a4 & 1) == 0;
  if ( v10 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x20000u);
    v9 = v16.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 768) & 0x20000) == 0 )
  {
    if ( ((v9 >> 20) & 3) != 0 )
    {
      if ( ((v9 >> 20) & 3) != 1 )
        goto LABEL_18;
    }
    else if ( (a4 & 2) == 0 )
    {
      goto LABEL_18;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x2000000u);
    v9 = v16.m128i_i64[0];
  }
LABEL_18:
  if ( !a2 )
    goto LABEL_27;
  if ( (v9 & 0x3000000) == 0 )
  {
    if ( (a4 & 4) == 0 )
      goto LABEL_25;
LABEL_23:
    v11 = ObReferenceProcessHandleTable(a1);
    if ( v11 )
    {
      ExEnableHandleExceptions(v11, 1);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 760));
    }
    goto LABEL_25;
  }
  if ( (BYTE3(v9) & 3) == 1 )
    goto LABEL_23;
LABEL_25:
  if ( *(int *)(a2 + 768) < 0 )
  {
    v9 = v9 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
    v16.m128i_i64[0] = v9;
  }
LABEL_27:
  if ( ((v9 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x80000000);
    v9 = v16.m128i_i64[0];
  }
  if ( ((v9 >> 36) & 3) != 1 )
  {
    if ( ((v9 >> 36) & 3) != 3 )
      goto LABEL_33;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x4000u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x400u);
  v9 = v16.m128i_i64[0];
LABEL_33:
  if ( (BYTE4(v9) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x4000000u);
    v9 = v16.m128i_i64[0];
  }
  if ( (v9 & 0x30000000000LL) == 0 )
  {
    if ( (a4 & 8) == 0 )
      goto LABEL_45;
    v16.m128i_i64[0] = v9 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
    if ( (a4 & 0x20) == 0 )
      goto LABEL_42;
    goto LABEL_41;
  }
  if ( (BYTE5(v9) & 3) != 1 )
  {
    if ( (BYTE5(v9) & 3) != 3 )
      goto LABEL_45;
LABEL_41:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x4000000u);
    v16.m128i_i64[0] = v16.m128i_i64[0] & 0xFFFFFCFFFFFFFFFFuLL | 0x30000000000LL;
  }
LABEL_42:
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x10u);
  if ( (a4 & 0x10) == 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 5u);
  v9 = v16.m128i_i64[0];
LABEL_45:
  v12 = _mm_srli_si128(_mm_load_si128(&v16), 8).m128i_u64[0];
  v16.m128i_i64[1] = v12;
  if ( (BYTE1(v12) & 3) == 1 && (*(_DWORD *)(a1 + 772) & 0x10) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x20000000u);
    v12 = v16.m128i_u64[1];
    v9 = v16.m128i_i64[0];
  }
  if ( ((v9 >> 44) & 3) == 1 )
  {
    if ( *(_BYTE *)(a1 + 1736) < 8u )
      *(_BYTE *)(a1 + 1736) = 8;
    if ( *(_BYTE *)(a1 + 1737) < 8u )
      *(_BYTE *)(a1 + 1737) = 8;
    goto LABEL_58;
  }
  if ( ((v9 >> 44) & 3) == 3 )
  {
    if ( *(_BYTE *)(a1 + 1736) < 6u )
      *(_BYTE *)(a1 + 1736) = 6;
    if ( *(_BYTE *)(a1 + 1737) < 6u )
      *(_BYTE *)(a1 + 1737) = 6;
LABEL_58:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x2000u);
    v12 = v16.m128i_u64[1];
    v9 = v16.m128i_i64[0];
  }
  if ( ((v9 >> 4) & 3) == 0 && (*(_DWORD *)(a1 + 772) & 0x10) != 0 )
  {
    v9 = v9 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v16.m128i_i64[0] = v9;
  }
  v13 = HIWORD(a4) & 3;
  if ( v13 == 1 )
  {
    v9 = v9 & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
LABEL_67:
    v16.m128i_i64[0] = v9;
    goto LABEL_68;
  }
  if ( v13 == 3 && (BYTE6(v9) & 3) != 1 )
  {
    v9 = v9 & 0xFFFCFFFFFFFFFFFFuLL | 0x3000000000000LL;
    goto LABEL_67;
  }
LABEL_68:
  if ( (BYTE6(v9) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 4u);
    goto LABEL_72;
  }
  if ( (BYTE6(v9) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 8u);
LABEL_72:
    v12 = v16.m128i_u64[1];
    v9 = v16.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 1740) & 0x800) != 0 )
  {
    v9 = v9 & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
    v16.m128i_i64[0] = v9;
  }
  if ( ((v9 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x800u);
    v12 = v16.m128i_u64[1];
    v9 = v16.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 1740) & 0x1000) != 0 )
  {
    v9 = v9 & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
    v16.m128i_i64[0] = v9;
  }
  if ( (HIBYTE(v9) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x1000u);
    v12 = v16.m128i_u64[1];
    v9 = v16.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 1740) & 0x20000) != 0 )
  {
    v9 = v9 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
    v16.m128i_i64[0] = v9;
  }
  if ( ((v9 >> 60) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x20000u);
    v12 = v16.m128i_u64[1];
  }
  if ( (BYTE6(v12) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2064), 8u);
    v12 = v16.m128i_u64[1];
  }
  result = v12 >> 52;
  if ( ((v12 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2064), 0x10u);
    v12 = v16.m128i_u64[1];
  }
  if ( a2 )
  {
    result = *(unsigned int *)(a2 + 1740);
    if ( (result & 0x1000000) != 0 )
    {
      v12 = v12 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else
    {
      if ( (result & 0x2000000) == 0 )
        goto LABEL_98;
      v12 = v12 & 0xFFFFFFFFFFFFFFCFuLL | 0x30;
    }
    v16.m128i_i64[1] = v12;
  }
LABEL_98:
  if ( ((v12 >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x3000000u);
  }
  else if ( ((v12 >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x2000000u);
  }
  *a3 = v16;
  return result;
}
