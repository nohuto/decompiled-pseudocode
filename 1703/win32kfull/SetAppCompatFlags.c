/*
 * XREFs of SetAppCompatFlags @ 0x1C0018610
 * Callers:
 *     <none>
 * Callees:
 *     SetAppImeCompatFlags @ 0x1C0018BCC (SetAppImeCompatFlags.c)
 *     IsCurrentDesktopComposed @ 0x1C0018CD0 (IsCurrentDesktopComposed.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C01399A0 (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     __report_rangecheckfailure @ 0x1C0195CE0 (__report_rangecheckfailure.c)
 */

__int64 __fastcall SetAppCompatFlags(_QWORD *a1)
{
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessPeb; // r13
  __int64 v4; // rax
  int v5; // ecx
  unsigned __int16 *v7; // rdx
  int v8; // r15d
  unsigned __int64 v9; // rdx
  int v10; // ecx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  _WORD *v13; // rbx
  _WORD *v14; // rax
  _WORD *v15; // rcx
  _WORD *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rdx
  _WORD *v20; // rcx
  size_t v21; // r8
  __int64 v22; // rdx
  __int64 ThreadTeb; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  ULONG Value; // [rsp+40h] [rbp-1F8h] BYREF
  int v37; // [rsp+44h] [rbp-1F4h]
  int v38; // [rsp+48h] [rbp-1F0h]
  int v39; // [rsp+4Ch] [rbp-1ECh] BYREF
  _WORD *v40; // [rsp+50h] [rbp-1E8h]
  _WORD *v41; // [rsp+58h] [rbp-1E0h]
  int v42; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-1D0h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-1B8h] BYREF
  struct _UNICODE_STRING v45; // [rsp+90h] [rbp-1A8h] BYREF
  WCHAR v46[96]; // [rsp+A0h] [rbp-198h] BYREF
  WCHAR SourceString[80]; // [rsp+160h] [rbp-D8h] BYREF

  Value = 0;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v4 = a1[73];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 560);
    *((_DWORD *)a1 + 140) = v5;
    a1[71] = *(_QWORD *)(v4 + 568);
    *(_DWORD *)(a1[54] + 20LL) = v5;
    *(_DWORD *)(a1[54] + 24LL) = *((_DWORD *)a1 + 142);
    return 0LL;
  }
  v7 = (unsigned __int16 *)a1[56];
  v8 = 1;
  if ( !v7 )
  {
    v9 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
    if ( v9 >= W32UserProbeAddress )
      v9 = W32UserProbeAddress;
    v10 = *(_DWORD *)v9;
    v37 = v10;
    v42 = v10;
    v11 = *(_QWORD *)(v9 + 8);
    v43 = v11;
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v11 + (unsigned __int16)v10 + 2LL;
    if ( v12 >= W32UserProbeAddress || (unsigned __int16)v10 > HIWORD(v37) || (v10 & 1) != 0 || v12 <= v11 )
      *W32UserProbeAddress = 0;
    v7 = (unsigned __int16 *)&v42;
  }
  v13 = (_WORD *)(*((_QWORD *)v7 + 1) + 2 * ((unsigned __int64)*v7 >> 1));
  v41 = v13;
  v14 = v13;
  v40 = v13;
  while ( 1 )
  {
    v15 = (_WORD *)*((_QWORD *)v7 + 1);
    if ( v13 == v15 )
      break;
    if ( *v13 == 46 )
      goto LABEL_18;
    v41 = --v13;
  }
  v13 = v14;
  v41 = v14;
LABEL_18:
  v16 = v13;
  v40 = v13;
  while ( v16 != v15 )
  {
    if ( *v16 == 92 || *v16 == 58 )
    {
      v40 = ++v16;
      break;
    }
    v40 = --v16;
  }
  v17 = 2 * (v13 - v16);
  v38 = v17;
  if ( (unsigned int)v17 >= 0xA4 )
    LODWORD(v17) = 162;
  v38 = v17;
  v18 = (unsigned int)v17;
  memmove(v46, v16, (unsigned int)v17);
  v20 = (_WORD *)(a1[47] + 936LL);
  if ( !*v20 )
  {
    v21 = 30LL;
    if ( (unsigned int)v17 < 0x1E )
      v21 = (unsigned int)v17;
    memmove(v20, v16, v21);
    *(_WORD *)(a1[47] + 966LL) = 0;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20, v19) + 12) & 0x80u) == 0 )
  {
    v26 = *(_QWORD *)(ProcessPeb + 720);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v24 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v25 = *(unsigned int *)(v24 + 48);
    ProbeForRead((volatile void *)(unsigned int)v25, 0x460uLL, 4u);
    v26 = *(_QWORD *)(v25 + 480);
  }
  a1[71] = v26;
  if ( (v26 & 0x800000000000000LL) != 0 )
  {
    if ( (unsigned int)FastGetProfileDwordW(0LL, 4LL, L"ForceDisableGDIScaling", 0LL, &v39, 4) && v39 )
    {
      a1[71] &= ~0x800000000000000uLL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28, v27);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x20000000u;
    }
    else
    {
      v30 = PsGetCurrentProcessWin32Process(v28, v27);
      *(_DWORD *)(v30 + 12) |= 0x20000000u;
      TraceLoggingGDIScaledAppEvent();
    }
  }
  *(_DWORD *)(a1[54] + 24LL) = *((_DWORD *)a1 + 142);
  if ( (a1[71] & 0x2000000) == 0 && (unsigned int)IsCurrentDesktopComposed() )
    v8 = 0;
  if ( (*(_DWORD *)(a1[47] + 768LL) & 0x30) == 0x10 )
    *(_QWORD *)a1[54] |= 0x10000000uLL;
  if ( v8 )
  {
LABEL_47:
    *(_QWORD *)a1[54] |= 0x20000000uLL;
    goto LABEL_50;
  }
  if ( (a1[71] & 0x880000000000000LL) == 0 )
  {
    v31 = a1[47];
    if ( (*(_DWORD *)(v31 + 768) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v31) )
        *(_QWORD *)(a1[54] + 224LL) |= 0x80uLL;
      goto LABEL_50;
    }
    goto LABEL_47;
  }
  *(_QWORD *)(a1[54] + 224LL) |= 0x10uLL;
LABEL_50:
  v32 = 0x100000000000000LL;
  if ( (a1[71] & 0x100000000000000LL) != 0 )
    *(_QWORD *)(a1[54] + 224LL) |= 0x20uLL;
  v33 = *((_DWORD *)a1 + 142);
  if ( (v33 & 0x10000000) == 0 )
  {
    v32 = 1536LL;
    if ( *((_WORD *)a1 + 276) < 0x600u )
    {
      *((_DWORD *)a1 + 142) = v33 | 0x20000000;
      *(_DWORD *)(a1[54] + 24LL) |= 0x20000000u;
    }
  }
  if ( (v18 & 0xFFFFFFFFFFFFFFFEuLL) >= 0xB4 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)v46 + (v18 & 0xFFFFFFFFFFFFFFFEuLL)) = 0;
  v34 = PsGetCurrentProcessWin32Process(v32, v22);
  if ( (unsigned int)FastGetProfileStringW(
                       0LL,
                       (*(_DWORD *)(v34 + 12) & 0x80u) != 0 ? 43 : 33,
                       v46,
                       0LL,
                       SourceString,
                       80,
                       0) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  *(_DWORD *)(a1[54] + 20LL) = Value;
  *((_DWORD *)a1 + 140) = Value;
  v35 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v35 >= 0xB4 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)v46 + v35) = 0;
  RtlInitUnicodeString(&v45, v46);
  return SetAppImeCompatFlags(a1, &v45);
}
