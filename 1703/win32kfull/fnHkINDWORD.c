/*
 * XREFs of fnHkINDWORD @ 0x1C00E2800
 * Callers:
 *     xxxCallCtfHook @ 0x1C004DFF4 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C00544D0 (xxxHkCallHook.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall fnHkINDWORD(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, _DWORD *a6)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rdi
  int v14; // ebx
  _QWORD *v15; // rcx
  _DWORD *v16; // r8
  _DWORD *v17; // rcx
  _QWORD v19[6]; // [rsp+40h] [rbp-38h] BYREF
  int v20; // [rsp+80h] [rbp+8h] BYREF

  memset(v19, 0, sizeof(v19));
  LODWORD(v19[0]) = a1;
  v19[1] = a2;
  v19[5] = a3;
  v19[2] = a4;
  v19[3] = a5;
  v13 = a6;
  LODWORD(v19[4]) = *a6;
  if ( gdwInAtomicOperation )
  {
    v10 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation, v11, v12);
  EtwTraceBeginCallback(40LL);
  v14 = KeUserModeCallback(40LL, v19, 48LL, &a5, &v20);
  EtwTraceEndCallback(40LL);
  EnterCrit(0LL, 1LL);
  if ( v14 < 0 || v20 != 24 )
    return 0LL;
  v15 = (_QWORD *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v15 = (_QWORD *)W32UserProbeAddress;
  v16 = (_DWORD *)*v15;
  a6 = (_DWORD *)*v15;
  v17 = *(_DWORD **)(a5 + 16);
  if ( v17 + 1 < v17 || (unsigned __int64)(v17 + 1) > W32UserProbeAddress )
    v17 = (_DWORD *)W32UserProbeAddress;
  *v13 ^= ((unsigned __int8)*v17 ^ (unsigned __int8)*v13) & 0x10;
  return (unsigned int)v16;
}
