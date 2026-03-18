/*
 * XREFs of xxxClientRimDevCallback @ 0x1C020132C
 * Callers:
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01A83DC (RIMDevChangeDoUsermodeCallback.c)
 *     EditionClientRimDevCallback @ 0x1C01C51C0 (EditionClientRimDevCallback.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxClientRimDevCallback(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        __int16 a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+38h] [rbp-40h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+4Ch] [rbp-2Ch]
  int v15; // [rsp+50h] [rbp-28h]
  __int16 v16; // [rsp+54h] [rbp-24h]
  __int16 v17; // [rsp+56h] [rbp-22h]
  __int64 v18; // [rsp+58h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp-18h]

  v12[0] = a4;
  v12[1] = a5;
  v13 = a1;
  v14 = a2;
  v15 = a3;
  v16 = a6;
  v17 = a7;
  v18 = a8;
  v19 = a9;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(118LL);
  v9 = KeUserModeCallback(118LL, v12, 48LL, &a5, &a6);
  EtwTraceEndCallback(118LL);
  EnterCrit(0LL, 1LL);
  if ( v9 < 0 || a6 != 24 )
    return 0LL;
  v10 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v10 = (__int64 *)W32UserProbeAddress;
  result = *v10;
  a8 = *v10;
  return result;
}
