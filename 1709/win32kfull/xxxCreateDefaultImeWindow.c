/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C00CD8AC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C0093D64 (RtlInitLargeUnicodeString.c)
 *     DesktopAlloc @ 0x1C0097C60 (DesktopAlloc.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00CD864 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     CreateInputContext @ 0x1C00F8900 (CreateInputContext.c)
 */

volatile signed __int32 *__fastcall xxxCreateDefaultImeWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // di
  __int64 ThreadWin32Thread; // rax
  _QWORD *v8; // rsi
  char v9; // r15
  PVOID *v10; // rdi
  _OWORD *v11; // rax
  void *v12; // r14
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  volatile signed __int32 *Window; // rax
  ULONG64 v21; // rdx
  __int64 v22; // rcx
  ULONG64 *v23; // rax
  __int64 v24; // r8
  ULONG64 v25; // rdx
  volatile signed __int32 *v27; // [rsp+90h] [rbp-88h]
  int v28[4]; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD v29[3]; // [rsp+C0h] [rbp-58h] BYREF
  _QWORD v30[3]; // [rsp+D8h] [rbp-40h] BYREF
  ULONG64 v31; // [rsp+138h] [rbp+20h]

  v5 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v8 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 760)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v8[95] )
    return 0LL;
  if ( v5 == *(_WORD *)(gpsi + 882LL) )
    return 0LL;
  v9 = 1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 21) + 102LL) & 1) != 0
    || (*((_BYTE *)a1 + 71) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 16LL) + 400LL) != v8[50]
    && (*((_DWORD *)a1 + 17) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v10 = (PVOID *)v8[54];
  if ( !v10[16] )
    return 0LL;
  v11 = DesktopAlloc((__int64)v10, 0x18u);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  *v11 = xmmword_1C02E2E28;
  *((_QWORD *)v11 + 2) = 0x45004D0049LL;
  RtlInitLargeUnicodeString((__int64)v28, (__int64)v11);
  PushW32ThreadLock((__int64)v10, v30, UserDereferenceObject, v13);
  if ( v10 )
    ObfReferenceObject(v10);
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
  v29[0] = *(_QWORD *)(v17 + 392);
  *(_QWORD *)(v17 + 392) = v29;
  v29[1] = a1;
  _InterlockedAdd((volatile signed __int32 *)a1 + 2, 1u);
  if ( !PsGetCurrentProcessWin32Process(v29)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v9 = 0;
  }
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)*(unsigned __int16 *)(gpsi + 882LL),
             *(unsigned __int16 *)(gpsi + 882LL),
             (__int64)v28,
             0x88000000,
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
             v9,
             0LL);
  v27 = Window;
  if ( Window )
  {
    v23 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND((__int64)Window);
    if ( v23 )
      v25 = *v23;
    else
      v25 = 0LL;
    v31 = v25;
    if ( v25 )
    {
      if ( (v25 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v25 >= MmUserProbeAddress )
        v25 = MmUserProbeAddress;
      *(_BYTE *)v25 = *(_BYTE *)v25;
      *(_BYTE *)(v25 + 55) = *(_BYTE *)(v25 + 55);
      v21 = v31;
      *(_DWORD *)(v31 + 44) |= 8u;
      v22 = *(unsigned int *)(v31 + 44);
      if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 && *(_QWORD **)(*((_QWORD *)a1 + 13) + 16LL) != v8 )
      {
        v22 = (unsigned int)v22 | 0x10;
        *(_DWORD *)(v31 + 44) = v22;
      }
    }
    else
    {
      xxxDestroyWindow(v27, 0LL, v24);
      v27 = 0LL;
    }
  }
  ThreadUnlock1(v22, v21);
  RtlFreeHeap(v10[16], 0, v12);
  PopAndFreeW32ThreadLock(v30);
  return v27;
}
