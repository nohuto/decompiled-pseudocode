/*
 * XREFs of PspApplyMitigationOptions @ 0x1404EF46C
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ObReferenceProcessHandleTable @ 0x1404B7304 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleExceptions @ 0x14057B6C4 (ExEnableHandleExceptions.c)
 *     PspDecodeMitigationExecuteOptions @ 0x14057FD54 (PspDecodeMitigationExecuteOptions.c)
 *     KeSetCheckStackExtentsProcess @ 0x140741844 (KeSetCheckStackExtentsProcess.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x14077A340 (PspSetNoChildProcessRestrictedPolicy.c)
 */

unsigned __int64 __fastcall PspApplyMitigationOptions(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        unsigned int a5)
{
  __int64 v5; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned __int64 v11; // rsi
  unsigned int v12; // r9d
  bool v13; // zf
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  unsigned __int64 v18; // rsi
  int v19; // ebx
  __int64 v20; // r8
  int v21; // eax
  unsigned __int64 result; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  __int128 v26; // [rsp+30h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 1064);
  v9 = *a3;
  v10 = *a4;
  v26 = *a3;
  v27 = v10;
  if ( v5 && *(_WORD *)(v5 + 8) == 332 )
  {
    v25 = v9;
    *(_BYTE *)(a1 + 447) = PspDecodeMitigationExecuteOptions(&v25);
  }
  v11 = v26;
  v12 = 2;
  if ( (((unsigned __int64)v26 >> 8) & 3) != 1 )
  {
    if ( (((unsigned __int64)v26 >> 8) & 3) != 3 )
      goto LABEL_8;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 8u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x10u);
  v11 = v26;
LABEL_8:
  if ( (v11 & 0x30000) != 0 )
    v13 = (BYTE2(v11) & 3) == 2;
  else
    v13 = (a5 & 1) == 0;
  if ( v13 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x40u);
    v11 = v26;
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0x40) == 0 )
  {
    if ( ((v11 >> 20) & 3) != 0 )
    {
      if ( ((v11 >> 20) & 3) != 1 )
        goto LABEL_19;
    }
    else if ( (a5 & 2) == 0 )
    {
      goto LABEL_19;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x20u);
    v11 = v26;
  }
LABEL_19:
  if ( !a2 )
    goto LABEL_29;
  if ( ((v11 >> 24) & 3) == 0 )
  {
    if ( (a5 & 4) == 0 )
      goto LABEL_27;
LABEL_24:
    v14 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a1);
    if ( v14 )
    {
      LOBYTE(v15) = 1;
      ExEnableHandleExceptions(v14, v15);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 760));
    }
    v12 = 2;
    goto LABEL_27;
  }
  if ( ((v11 >> 24) & 3) == 1 )
    goto LABEL_24;
LABEL_27:
  if ( (*(_DWORD *)(a2 + 2088) & 0x1000) != 0 )
  {
    v11 = v11 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
    *(_QWORD *)&v26 = v11;
  }
LABEL_29:
  if ( ((v11 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x3000u);
    v11 = v26;
  }
  v16 = 0x2000;
  if ( (*(_DWORD *)(a1 + 2088) & 0x1000) == 0 && (((unsigned __int64)v27 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x2000u);
    v11 = v26;
  }
  if ( ((v11 >> 36) & 3) != 1 )
  {
    if ( ((v11 >> 36) & 3) != 3 )
      goto LABEL_38;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x200u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x100u);
  v11 = v26;
LABEL_38:
  v17 = 2048;
  if ( (*(_DWORD *)(a1 + 2088) & 0x100) != 0 )
  {
    *((_QWORD *)&v26 + 1) = *((_QWORD *)&v26 + 1) & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
    *((_QWORD *)&v27 + 1) = *((_QWORD *)&v27 + 1) & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
  }
  else if ( (((unsigned __int64)v27 >> 36) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x800u);
    v11 = v26;
  }
  if ( (BYTE4(v11) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x80u);
    v11 = v26;
  }
  switch ( (v11 >> 40) & 3 )
  {
    case 0uLL:
      if ( (a5 & 8) == 0 )
        break;
      v18 = v11 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
      *(_QWORD *)&v26 = v18;
      if ( (a5 & 0x20) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 2u);
        *(_QWORD *)&v26 = v18 | 0x30000000000LL;
      }
LABEL_52:
      _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 1u);
      if ( (a5 & 0x10) == 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 5u);
      goto LABEL_54;
    case 1uLL:
      goto LABEL_52;
    case 3uLL:
      _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 2u);
      *(_QWORD *)&v26 = v26 | 0x30000000000LL;
      _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 1u);
      if ( (a5 & 0x10) == 0 )
        KeSetCheckStackExtentsProcess(a1, 1LL);
LABEL_54:
      v11 = v26;
      break;
  }
  if ( ((*((_QWORD *)&v26 + 1) >> 8) & 3) == 1 && (*(_DWORD *)(a1 + 2088) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 4u);
    v11 = v26;
  }
  if ( ((v11 >> 44) & 3) == 1 )
  {
    if ( *(_BYTE *)(a1 + 1736) < 8u )
      *(_BYTE *)(a1 + 1736) = 8;
    if ( *(_BYTE *)(a1 + 1737) < 8u )
      *(_BYTE *)(a1 + 1737) = 8;
  }
  else
  {
    if ( ((v11 >> 44) & 3) - 1 != v12 )
      goto LABEL_69;
    if ( *(_BYTE *)(a1 + 1736) < 6u )
      *(_BYTE *)(a1 + 1736) = 6;
    if ( *(_BYTE *)(a1 + 1737) < 6u )
      *(_BYTE *)(a1 + 1737) = 6;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x800000u);
  v11 = v26;
LABEL_69:
  if ( (*(_DWORD *)(a1 + 2088) & 0x800000) == 0 )
  {
    if ( (((unsigned __int64)v27 >> 44) & 3) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x1000000u);
      goto LABEL_74;
    }
    if ( (((unsigned __int64)v27 >> 44) & 3) - 1 == v12 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x2000000u);
LABEL_74:
      v11 = v26;
    }
  }
  if ( (((unsigned __int8)v11 >> 4) & 3) == 0 && (*(_DWORD *)(a1 + 2088) & 1) != 0 )
  {
    v11 = v11 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    *(_QWORD *)&v26 = v11;
  }
  if ( (((unsigned __int8)v11 >> 4) & 3) != 1 && (((unsigned __int64)v27 >> 4) & 3) == 1 )
  {
    v11 |= 0x30uLL;
    *(_QWORD *)&v26 = v11;
  }
  v19 = HIWORD(a5) & 3;
  if ( v19 == 1 )
  {
    v11 = v11 & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
LABEL_86:
    *(_QWORD *)&v26 = v11;
    goto LABEL_87;
  }
  if ( v19 == 3 && (BYTE6(v11) & 3) != 1 )
  {
    v11 |= 0x3000000000000uLL;
    goto LABEL_86;
  }
LABEL_87:
  if ( (HIWORD(v11) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x10000u);
    goto LABEL_91;
  }
  if ( (HIWORD(v11) & 3) - 1 == v12 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x20000u);
LABEL_91:
    v11 = v26;
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0x30000) == 0 && (WORD3(v27) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x20000u);
    v11 = v26;
  }
  if ( a2 && (*(_DWORD *)(a2 + 2088) & 0x80000) != 0 )
  {
    v11 = v11 & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
    *(_QWORD *)&v26 = v11;
  }
  if ( ((v11 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x80000u);
    v11 = v26;
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0x80000) == 0 && (((unsigned __int64)v27 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x100000u);
    v11 = v26;
  }
  if ( a2 && (*(_DWORD *)(a2 + 2088) & 0x200000) != 0 )
  {
    v11 = v11 & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
    *(_QWORD *)&v26 = v11;
  }
  if ( (HIBYTE(v11) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x200000u);
    v11 = v26;
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0x200000) == 0 && (BYTE7(v27) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x400000u);
    v11 = v26;
  }
  if ( a2 && (*(_DWORD *)(a2 + 2088) & 0x40000) != 0 )
  {
    v11 = v11 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
    *(_QWORD *)&v26 = v11;
  }
  if ( ((v11 >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x40000u);
  v20 = 0x8000000LL;
  if ( a2 )
  {
    v21 = *(_DWORD *)(a2 + 2088);
    if ( (v21 & 0x4000000) != 0 )
    {
      *((_QWORD *)&v26 + 1) = *((_QWORD *)&v26 + 1) & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else if ( (v21 & 0x8000000) != 0 )
    {
      *((_QWORD *)&v26 + 1) |= 0x30uLL;
    }
  }
  if ( ((*((_QWORD *)&v26 + 1) >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0xC000000u);
  }
  else if ( ((*((_QWORD *)&v26 + 1) >> 4) & 3) - 1 == v12 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x8000000u);
  }
  if ( (*(_DWORD *)(a1 + 2088) & 0xC000000) == 0 && ((*((_QWORD *)&v27 + 1) >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x8000000u);
  if ( ((*((_QWORD *)&v26 + 1) >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 1u);
  if ( (*(_DWORD *)(a1 + 2092) & 1) == 0 && ((*((_QWORD *)&v27 + 1) >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), v12);
  if ( (BYTE12(v26) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 4u);
  if ( (HIWORD(*((_QWORD *)&v26 + 1)) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x40000000u);
  if ( ((*((_QWORD *)&v26 + 1) >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), v16);
  if ( (*(_DWORD *)(a1 + 2092) & 4) == 0 && (BYTE12(v27) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 8u);
  if ( ((*((_QWORD *)&v26 + 1) >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x400u);
  if ( (*(_DWORD *)(a1 + 2092) & 0x400) == 0 && ((*((_QWORD *)&v27 + 1) >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), v17);
  if ( ((*((_QWORD *)&v26 + 1) >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x10u);
  if ( (*(_DWORD *)(a1 + 2092) & 0x10) == 0 && ((*((_QWORD *)&v27 + 1) >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x20u);
  result = *(_QWORD *)(a1 + 1064);
  if ( result )
  {
    result = *(unsigned __int16 *)(result + 8);
    if ( (_WORD)result == 332 )
    {
      if ( ((*((_QWORD *)&v26 + 1) >> 20) & 3) == 1 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x40u);
      result = *(unsigned int *)(a1 + 2092);
      if ( (result & 0x40) == 0 && ((*((_QWORD *)&v27 + 1) >> 20) & 3) == 1 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x80u);
      if ( ((*((_QWORD *)&v26 + 1) >> 24) & 3) == 1 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x100u);
      if ( (*(_DWORD *)(a1 + 2092) & 0x100) == 0 && ((*((_QWORD *)&v27 + 1) >> 24) & 3) == 1 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2092), 0x200u);
    }
  }
  v23 = *((_QWORD *)&v26 + 1) >> 36;
  if ( ((*((_QWORD *)&v26 + 1) >> 36) & 3) == 1 )
  {
    v24 = 1LL;
    goto LABEL_168;
  }
  if ( ((*((_QWORD *)&v26 + 1) >> 36) & 3) - 1 == v12 )
  {
    v24 = v12;
LABEL_168:
    result = PspSetNoChildProcessRestrictedPolicy(a1, v24, 0x8000000LL);
  }
  if ( (v23 & 3) != 1 && ((*((_QWORD *)&v27 + 1) >> 36) & 3) == 1 )
    result = PspSetNoChildProcessRestrictedPolicy(a1, 3LL, v20);
  if ( a2 )
  {
    result = *(unsigned int *)(a2 + 2088);
    if ( (result & 0x10000000) != 0 && (result & 0x20000000) == 0 )
    {
      result = *((_QWORD *)&v26 + 1) & 0xFFFFCFFFFFFFFFFFuLL | 0x100000000000LL;
      *((_QWORD *)&v26 + 1) = result;
    }
  }
  if ( ((*((_QWORD *)&v26 + 1) >> 44) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x10000000u);
  }
  else if ( ((*((_QWORD *)&v26 + 1) >> 44) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2088), 0x30000000u);
  }
  *a3 = v26;
  return result;
}
