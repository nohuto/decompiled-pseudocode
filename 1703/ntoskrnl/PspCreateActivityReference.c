/*
 * XREFs of PspCreateActivityReference @ 0x14056CB48
 * Callers:
 *     NtAcquireProcessActivityReference @ 0x14056CA3C (NtAcquireProcessActivityReference.c)
 * Callees:
 *     PsChargeProcessWakeCounter @ 0x1404C80E0 (PsChargeProcessWakeCounter.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

__int64 __fastcall PspCreateActivityReference(__int64 a1, _QWORD *a2)
{
  char PreviousMode; // r9
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-68h]
  int v8; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-30h]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  __int128 v12; // [rsp+70h] [rbp-18h]
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF

  v8 = 48;
  v9 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 32;
  v10 = 0LL;
  v12 = 0LL;
  result = ObCreateObjectEx(
             0,
             (_DWORD *)PspActivityReferenceObjectType,
             (int)&v8,
             PreviousMode,
             v7,
             8,
             0,
             8,
             &Object,
             0LL);
  if ( (int)result >= 0 )
  {
    v6 = Object;
    *v6 = PsChargeProcessWakeCounter(a1, 0, 5, (int)Object);
    return ObInsertObjectEx(v6, 0LL, 983040LL, 0, 0, 0LL, a2);
  }
  return result;
}
