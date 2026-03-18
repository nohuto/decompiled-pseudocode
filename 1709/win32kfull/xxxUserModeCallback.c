/*
 * XREFs of xxxUserModeCallback @ 0x1C0202EA4
 * Callers:
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

__int64 xxxUserModeCallback(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, ...)
{
  unsigned int v6; // edi
  int v7; // ebx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF
  __int64 v10; // [rsp+60h] [rbp+28h] BYREF
  va_list va; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v10 = va_arg(va1, _QWORD);
  v9 = a4;
  v6 = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(v6);
  v7 = KeUserModeCallback(v6, a2, a3, &v9, (__int64 *)va);
  EtwTraceEndCallback(v6);
  EnterCrit(0LL, 1LL);
  if ( v7 >= 0 && (_DWORD)v10 )
    return (unsigned int)-1073741823;
  return (unsigned int)v7;
}
