/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C00C9E70
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     DesktopAlloc @ 0x1C0042C20 (DesktopAlloc.c)
 *     RtlInitLargeUnicodeString @ 0x1C004DB0C (RtlInitLargeUnicodeString.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00C9E28 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     CreateInputContext @ 0x1C00E7A90 (CreateInputContext.c)
 */

__int64 __fastcall xxxCreateDefaultImeWindow(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // rsi
  char v8; // r15
  PVOID *v9; // rdi
  _OWORD *v10; // rax
  void *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *Window; // rax
  _BYTE *v17; // rdx
  __int64 v18; // rcx
  _BYTE **v19; // rax
  __int64 v20; // r8
  _BYTE *v21; // rdx
  __int64 v23; // [rsp+90h] [rbp-88h]
  _BYTE v24[16]; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD v25[3]; // [rsp+C0h] [rbp-58h] BYREF
  _QWORD v26[3]; // [rsp+D8h] [rbp-40h] BYREF
  _BYTE *v27; // [rsp+138h] [rbp+20h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 704)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v7[88] )
    return 0LL;
  if ( a2 == *(_WORD *)(gpsi + 882LL) )
    return 0LL;
  v8 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 168) + 94LL) & 1) != 0
    || (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL) + 376LL) != v7[47]
    && (*(_DWORD *)(a1 + 68) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v9 = (PVOID *)v7[51];
  if ( !v9[16] )
    return 0LL;
  v10 = DesktopAlloc((__int64)v9, 0x18u);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  *v10 = xmmword_1C02E5AF0;
  *((_QWORD *)v10 + 2) = 0x45004D0049LL;
  RtlInitLargeUnicodeString((__int64)v24, (__int64)v10);
  PushW32ThreadLock((__int64)v9, v26, UserDereferenceObject);
  if ( v9 )
    ObfReferenceObject(v9);
  v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v25;
  v25[1] = a1;
  ++*(_DWORD *)(a1 + 8);
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent, v12)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)*(unsigned __int16 *)(gpsi + 882LL),
             *(unsigned __int16 *)(gpsi + 882LL),
             (__int64)v24,
             -2013265920,
             0,
             0,
             0,
             0,
             a1,
             0LL,
             a3,
             0LL,
             0,
             0x400u,
             v8,
             0LL);
  v23 = (__int64)Window;
  if ( Window )
  {
    v19 = (_BYTE **)unsafe_cast_fnid_or_class_to_PIMEWND((__int64)Window);
    if ( v19 )
      v21 = *v19;
    else
      v21 = 0LL;
    v27 = v21;
    if ( v21 )
    {
      if ( ((unsigned __int8)v21 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)v21 >= W32UserProbeAddress )
        v21 = (_BYTE *)W32UserProbeAddress;
      *v21 = *v21;
      v21[55] = v21[55];
      v17 = v27;
      *((_DWORD *)v27 + 11) |= 8u;
      v18 = *((unsigned int *)v27 + 11);
      if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 && *(_QWORD **)(*(_QWORD *)(a1 + 104) + 16LL) != v7 )
      {
        v18 = (unsigned int)v18 | 0x10;
        *((_DWORD *)v27 + 11) = v18;
      }
    }
    else
    {
      xxxDestroyWindow(v23, 0LL, v20);
      v23 = 0LL;
    }
  }
  ThreadUnlock1(v18, v17);
  RtlFreeHeap(v9[16], 0, v11);
  PopAndFreeW32ThreadLock(v26);
  return v23;
}
