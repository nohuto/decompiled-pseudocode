/*
 * XREFs of SetAppCompatFlags @ 0x1C00759F0
 * Callers:
 *     <none>
 * Callees:
 *     SetAppImeCompatFlags @ 0x1C0077FDC (SetAppImeCompatFlags.c)
 *     IsCurrentDesktopComposed @ 0x1C00780E0 (IsCurrentDesktopComposed.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C01406D0 (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0143570 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall SetAppCompatFlags(_QWORD *a1)
{
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessPeb; // r13
  __int64 v4; // rax
  int v5; // ecx
  unsigned __int16 *v7; // rdx
  int v8; // r15d
  ULONG64 v9; // rdx
  int v10; // ecx
  ULONG64 v11; // r9
  ULONG64 v12; // r8
  _WORD *v13; // rbx
  _WORD *v14; // rax
  _WORD *v15; // rcx
  _WORD *v16; // rsi
  unsigned int v17; // ebx
  __int64 v18; // r14
  _WORD *v19; // rcx
  size_t v20; // r8
  __int64 ThreadTeb; // rax
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // r14
  __int64 v32; // rax
  ULONG Value; // [rsp+40h] [rbp-208h] BYREF
  int v34; // [rsp+44h] [rbp-204h]
  unsigned int v35; // [rsp+48h] [rbp-200h]
  int v36; // [rsp+4Ch] [rbp-1FCh] BYREF
  int v37; // [rsp+50h] [rbp-1F8h] BYREF
  _WORD *v38; // [rsp+58h] [rbp-1F0h]
  _WORD *v39; // [rsp+60h] [rbp-1E8h]
  int v40; // [rsp+68h] [rbp-1E0h] BYREF
  ULONG64 v41; // [rsp+70h] [rbp-1D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-1C0h] BYREF
  struct _UNICODE_STRING v43; // [rsp+98h] [rbp-1B0h] BYREF
  WCHAR v44[96]; // [rsp+B0h] [rbp-198h] BYREF
  WCHAR SourceString[80]; // [rsp+170h] [rbp-D8h] BYREF

  Value = 0;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v4 = a1[80];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 616);
    *((_DWORD *)a1 + 154) = v5;
    a1[78] = *(_QWORD *)(v4 + 624);
    *(_DWORD *)(a1[57] + 20LL) = v5;
    *(_DWORD *)(a1[57] + 24LL) = *((_DWORD *)a1 + 156);
    return 0LL;
  }
  v7 = (unsigned __int16 *)a1[59];
  v8 = 1;
  if ( !v7 )
  {
    v9 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
    if ( v9 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    v10 = *(_DWORD *)v9;
    v34 = v10;
    v40 = v10;
    v11 = *(_QWORD *)(v9 + 8);
    v41 = v11;
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v11 + (unsigned __int16)v10 + 2LL;
    if ( v12 >= MmUserProbeAddress || (unsigned __int16)v10 > HIWORD(v34) || (v10 & 1) != 0 || v12 <= v11 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = (unsigned __int16 *)&v40;
  }
  v13 = (_WORD *)(*((_QWORD *)v7 + 1) + 2 * ((unsigned __int64)*v7 >> 1));
  v39 = v13;
  v14 = v13;
  v38 = v13;
  while ( 1 )
  {
    v15 = (_WORD *)*((_QWORD *)v7 + 1);
    if ( v13 == v15 )
      break;
    if ( *v13 == 46 )
      goto LABEL_18;
    v39 = --v13;
  }
  v13 = v14;
  v39 = v14;
LABEL_18:
  v16 = v13;
  v38 = v13;
  while ( v16 != v15 )
  {
    if ( *v16 == 92 || *v16 == 58 )
    {
      v38 = ++v16;
      break;
    }
    v38 = --v16;
  }
  v17 = 2 * (v13 - v16);
  v35 = v17;
  if ( v17 >= 0xA4 )
    v17 = 162;
  v35 = v17;
  v18 = v17;
  memmove(v44, v16, v17);
  v19 = (_WORD *)(a1[50] + 944LL);
  if ( !*v19 )
  {
    v20 = 30LL;
    if ( v17 < 0x1E )
      v20 = v17;
    memmove(v19, v16, v20);
    *(_WORD *)(a1[50] + 974LL) = 0;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 12) & 0x80u) == 0 )
  {
    v24 = *(_QWORD *)(ProcessPeb + 720);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v22 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v23 = *(unsigned int *)(v22 + 48);
    ProbeForRead((volatile void *)(unsigned int)v23, 0x468uLL, 4u);
    v24 = *(_QWORD *)(v23 + 480);
  }
  a1[78] = v24;
  if ( (v24 & 0x800000000000000LL) != 0 )
  {
    if ( (unsigned int)FastGetProfileDwordW(0LL, 4LL, L"ForceDisableGDIScaling", 0LL, &v36, 4) && v36 )
    {
      a1[78] &= ~0x800000000000000uLL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x20000000u;
    }
    else
    {
      v27 = PsGetCurrentProcessWin32Process(v25);
      *(_DWORD *)(v27 + 12) |= 0x20000000u;
      TraceLoggingGDIScaledAppEvent();
    }
  }
  gbNoDwmStyleNotify = 0;
  if ( (unsigned int)FastGetProfileDwordW(0LL, 2LL, L"NoDwmStyleNotify", 0LL, &v37, 0) )
    gbNoDwmStyleNotify = v37 != 0;
  *(_DWORD *)(a1[57] + 24LL) = *((_DWORD *)a1 + 156);
  if ( (a1[78] & 0x2000000) == 0 && (unsigned int)IsCurrentDesktopComposed() )
    v8 = 0;
  if ( (*(_DWORD *)(a1[50] + 776LL) & 0x30) == 0x10 )
    *(_QWORD *)a1[57] |= 0x10000000uLL;
  if ( v8 )
  {
LABEL_49:
    *(_QWORD *)a1[57] |= 0x20000000uLL;
    goto LABEL_52;
  }
  if ( (a1[78] & 0x880000000000000LL) == 0 )
  {
    v28 = a1[50];
    if ( (*(_DWORD *)(v28 + 776) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v28) )
        *(_QWORD *)(a1[57] + 224LL) |= 0x80uLL;
      goto LABEL_52;
    }
    goto LABEL_49;
  }
  *(_QWORD *)(a1[57] + 224LL) |= 0x10uLL;
LABEL_52:
  v29 = 0x100000000000000LL;
  if ( (a1[78] & 0x100000000000000LL) != 0 )
    *(_QWORD *)(a1[57] + 224LL) |= 0x20uLL;
  v30 = *((_DWORD *)a1 + 156);
  if ( (v30 & 0x10000000) == 0 )
  {
    v29 = 1536LL;
    if ( *((_WORD *)a1 + 304) < 0x600u )
    {
      *((_DWORD *)a1 + 156) = v30 | 0x20000000;
      *(_DWORD *)(a1[57] + 24LL) |= 0x20000000u;
    }
  }
  v31 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v31 >= 0xB4 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)v44 + v31) = 0;
  v32 = PsGetCurrentProcessWin32Process(v29);
  if ( (unsigned int)FastGetProfileStringW(
                       0LL,
                       (*(_DWORD *)(v32 + 12) & 0x80u) != 0 ? 43 : 33,
                       v44,
                       0LL,
                       SourceString,
                       80,
                       0) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  *(_DWORD *)(a1[57] + 20LL) = Value;
  *((_DWORD *)a1 + 154) = Value;
  *(WCHAR *)((char *)v44 + v31) = 0;
  RtlInitUnicodeString(&v43, v44);
  return SetAppImeCompatFlags(a1, &v43);
}
