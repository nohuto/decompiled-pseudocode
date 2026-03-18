/*
 * XREFs of xxxClientAllocWindowClassExtraBytes @ 0x1C00EA644
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(SIZE_T Length, __int64 a2, __int64 a3, __int64 a4)
{
  SIZE_T v4; // rdi
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  volatile void **v8; // rcx
  unsigned __int64 v9; // rdx
  volatile void *v10; // rbx
  __int64 CurrentProcessWow64Process; // rax
  int v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = (unsigned int)Length;
  v13 = Length;
  if ( gdwInAtomicOperation )
  {
    a2 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(Length, a2, gdwInAtomicOperation, a4);
  EtwTraceBeginCallback(127LL);
  v5 = KeUserModeCallback(127LL, &v13, 4LL, &v15, &v14);
  EtwTraceEndCallback(127LL);
  EnterCrit(0LL, 1LL);
  if ( v5 < 0 || v14 != 24 )
    return 0LL;
  v8 = (volatile void **)v15;
  v9 = v15 + 8;
  if ( v15 + 8 < v15 || v9 > W32UserProbeAddress )
    v8 = (volatile void **)W32UserProbeAddress;
  v10 = *v8;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8, v9, v6, v7);
  ProbeForRead(v10, v4, CurrentProcessWow64Process != 0 ? 1 : 4);
  return v10;
}
