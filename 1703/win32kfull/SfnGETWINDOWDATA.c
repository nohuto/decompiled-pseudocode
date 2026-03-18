/*
 * XREFs of SfnGETWINDOWDATA @ 0x1C01F9000
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnGETWINDOWDATA(__int64 *a1, int a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rcx
  _QWORD v17[6]; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+88h] [rbp+10h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( a1 )
    v11 = *a1;
  else
    v11 = 0LL;
  v17[0] = v11;
  LODWORD(v17[1]) = a2;
  v17[2] = a3;
  v17[3] = a4;
  v17[4] = a5;
  v12 = gpsi;
  if ( (*((_BYTE *)a1 + 58) & 8) != 0 )
    v13 = *(_QWORD *)(gpsi + 424LL);
  else
    v13 = *(_QWORD *)(gpsi + 608LL);
  v17[5] = v13;
  if ( gdwInAtomicOperation )
  {
    v12 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v12, gdwInAtomicOperation, v9, v10);
  EtwTraceBeginCallback(129LL);
  v14 = KeUserModeCallback(129LL, v17, 48LL, &a5, &v18);
  EtwTraceEndCallback(129LL);
  EnterCrit(0LL, 1LL);
  if ( v14 < 0 || v18 != 24 )
    return 0LL;
  v15 = a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v15 = W32UserProbeAddress;
  return *(_QWORD *)v15;
}
