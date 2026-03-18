/*
 * XREFs of ObpRemoveObjectRoutine @ 0x140520990
 * Callers:
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     NtSetInformationWorkerFactory @ 0x140129BE0 (NtSetInformationWorkerFactory.c)
 *     ObpProcessRemoveObjectQueue @ 0x140428DC0 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ObpFreeObject @ 0x140520A70 (ObpFreeObject.c)
 */

__int64 __fastcall ObpRemoveObjectRoutine(__int64 a1, char a2)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v4 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  if ( (PVOID)v4 == ObpTypeObjectType )
    KeBugCheckEx(0xF4u, v4, a1 + 48, 0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *, _DWORD, _QWORD, _BYTE))(v4 + 152))(
      a1 + 48,
      2LL,
      0LL,
      0LL,
      0LL,
      &v6,
      0,
      0LL,
      0);
  if ( *(_QWORD *)(v4 + 136) )
  {
    if ( !a2 )
      *(_BYTE *)(a1 + 27) |= 0x80u;
    (*(void (__fastcall **)(__int64))(v4 + 136))(a1 + 48);
  }
  return ObpFreeObject(a1);
}
