/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1C0200268
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01E59D0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     xxxClientCopyDDEOut2 @ 0x1C020058C (xxxClientCopyDDEOut2.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 *v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  _DWORD v10[4]; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-138h] BYREF
  __int64 v12; // [rsp+48h] [rbp-130h]
  __int128 v13; // [rsp+60h] [rbp-118h] BYREF
  __int128 v14; // [rsp+70h] [rbp-108h]
  __int128 v15; // [rsp+80h] [rbp-F8h]
  __int128 v16; // [rsp+90h] [rbp-E8h]
  __int64 v17; // [rsp+A0h] [rbp-D8h]
  __int128 v18; // [rsp+B0h] [rbp-C8h]
  __int128 v19; // [rsp+C0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-A8h]
  volatile void *v21[2]; // [rsp+E0h] [rbp-98h]
  __int64 v22; // [rsp+F0h] [rbp-88h]
  _OWORD v23[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v24; // [rsp+150h] [rbp-28h]

  v4 = a1;
  v23[0] = *(_OWORD *)a1;
  v23[1] = *(_OWORD *)(a1 + 16);
  v23[2] = *(_OWORD *)(a1 + 32);
  v23[3] = *(_OWORD *)(a1 + 48);
  v24 = *(_QWORD *)(a1 + 64);
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(62LL);
  v5 = KeUserModeCallback(62LL, v23, 72LL, &v11, v10);
  EtwTraceEndCallback(62LL);
  EnterCrit(0LL, 1LL);
  if ( v5 < 0 || v10[0] != 24 )
    return 0LL;
  v6 = (__int64 *)v11;
  if ( v11 + 8 < v11 || v11 + 8 > W32UserProbeAddress )
    v6 = (__int64 *)W32UserProbeAddress;
  v7 = *v6;
  v12 = v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v11 + 16);
    if ( v8 + 72 < v8 || v8 + 72 > W32UserProbeAddress )
      v8 = W32UserProbeAddress;
    v18 = *(_OWORD *)v8;
    v19 = *(_OWORD *)(v8 + 16);
    *(_OWORD *)Address = *(_OWORD *)(v8 + 32);
    *(_OWORD *)v21 = *(_OWORD *)(v8 + 48);
    v22 = *(_QWORD *)(v8 + 64);
    v13 = v18;
    v14 = v19;
    v15 = *(_OWORD *)Address;
    v16 = *(_OWORD *)v21;
    v17 = v22;
    if ( *(_DWORD *)(v4 + 40) )
    {
      ProbeForWrite(Address[0], *(int *)(v4 + 40), 1u);
      memmove((void *)Address[0], (const void *)(v4 + 72), *(int *)(v4 + 40));
    }
    if ( *(_DWORD *)(v4 + 64) )
    {
      ProbeForWrite(v21[1], *(int *)(v4 + 64), 1u);
      memmove((void *)v21[1], (const void *)(*(int *)(v4 + 40) + v4 + 72), *(int *)(v4 + 64));
    }
    if ( *((_QWORD *)&v19 + 1) && (unsigned int)xxxClientCopyDDEOut2(&v13) )
    {
      if ( (v14 & 0x800) != 0 )
        v7 = *((_QWORD *)&v14 + 1);
      v12 = v7;
    }
    *(_OWORD *)v4 = v13;
    *(_OWORD *)(v4 + 16) = v14;
    *(_OWORD *)(v4 + 32) = v15;
    *(_OWORD *)(v4 + 48) = v16;
    *(_QWORD *)(v4 + 64) = v17;
  }
  return v7;
}
