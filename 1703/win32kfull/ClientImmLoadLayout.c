/*
 * XREFs of ClientImmLoadLayout @ 0x1C011574C
 * Callers:
 *     xxxImmLoadLayout @ 0x1C01156BC (xxxImmLoadLayout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientImmLoadLayout(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _OWORD *v12; // rax
  _BYTE v14[368]; // [rsp+48h] [rbp-170h] BYREF
  int v15; // [rsp+1C0h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+1D0h] [rbp+18h] BYREF
  __int64 v17; // [rsp+1D8h] [rbp+20h] BYREF

  v17 = a1;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(92LL);
  v5 = KeUserModeCallback(92LL, &v17, 8LL, &v16, &v15);
  EtwTraceEndCallback(92LL);
  EnterCrit(0LL, 1LL);
  if ( v5 < 0 || v15 != 24 )
    return 0LL;
  v6 = (__int64 *)v16;
  if ( v16 + 8 < v16 || v16 + 8 > W32UserProbeAddress )
    v6 = (__int64 *)W32UserProbeAddress;
  v7 = *v6;
  if ( *v6 )
  {
    v8 = *(_OWORD **)(v16 + 16);
    if ( v8 + 22 < v8 || (unsigned __int64)(v8 + 22) > W32UserProbeAddress )
      v8 = (_OWORD *)W32UserProbeAddress;
    v9 = v14;
    v10 = 2LL;
    v11 = 2LL;
    do
    {
      *v9 = *v8;
      v9[1] = v8[1];
      v9[2] = v8[2];
      v9[3] = v8[3];
      v9[4] = v8[4];
      v9[5] = v8[5];
      v9[6] = v8[6];
      v9 += 8;
      *(v9 - 1) = v8[7];
      v8 += 8;
      --v11;
    }
    while ( v11 );
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    v9[4] = v8[4];
    v9[5] = v8[5];
    v12 = v14;
    do
    {
      *a2 = *v12;
      a2[1] = v12[1];
      a2[2] = v12[2];
      a2[3] = v12[3];
      a2[4] = v12[4];
      a2[5] = v12[5];
      a2[6] = v12[6];
      a2 += 8;
      *(a2 - 1) = v12[7];
      v12 += 8;
      --v10;
    }
    while ( v10 );
    *a2 = *v12;
    a2[1] = v12[1];
    a2[2] = v12[2];
    a2[3] = v12[3];
    a2[4] = v12[4];
    a2[5] = v12[5];
  }
  return (unsigned int)v7;
}
