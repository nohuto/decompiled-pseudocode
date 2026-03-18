/*
 * XREFs of PspCreateActivityReference @ 0x1404514C8
 * Callers:
 *     NtAcquireProcessActivityReference @ 0x1404513BC (NtAcquireProcessActivityReference.c)
 * Callees:
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     PsChargeProcessWakeCounter @ 0x140599290 (PsChargeProcessWakeCounter.c)
 */

__int64 __fastcall PspCreateActivityReference(PVOID Object, __int64 a2)
{
  char PreviousMode; // r9
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp-38h] BYREF
  __int64 v7; // [rsp+58h] [rbp-30h]
  __int64 v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  __int128 v10; // [rsp+70h] [rbp-18h]
  _QWORD *Objecta; // [rsp+A0h] [rbp+18h]

  v6 = 48;
  v7 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 32;
  v8 = 0LL;
  v10 = 0LL;
  result = ObCreateObjectEx(0, PspActivityReferenceObjectType, (unsigned int)&v6, PreviousMode);
  if ( (int)result >= 0 )
  {
    *Objecta = PsChargeProcessWakeCounter(Object);
    return ObInsertObjectEx(Objecta, 0LL, 0, 0LL, a2);
  }
  return result;
}
