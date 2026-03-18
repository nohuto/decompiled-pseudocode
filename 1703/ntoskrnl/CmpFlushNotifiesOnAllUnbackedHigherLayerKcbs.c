/*
 * XREFs of CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x14066D910
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 */

_UNKNOWN **__fastcall CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(__int64 a1, __int64 a2, char a3)
{
  int v4; // [rsp+58h] [rbp+20h] BYREF
  char v5; // [rsp+5Ch] [rbp+24h]
  char v6; // [rsp+5Dh] [rbp+25h]

  v6 = a3;
  v4 = 8;
  v5 = 1;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int (__fastcall *)(volatile signed __int32 *, __int64))CmpFlushNotifiesPreCallback,
           (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpFlushNotifiesPostCallback,
           (__int64)&v4,
           a3,
           1);
}
