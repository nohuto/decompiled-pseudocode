/*
 * XREFs of MiScrubMemoryWorker @ 0x1406BFFD0
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     MiScrubNode @ 0x140226610 (MiScrubNode.c)
 *     MiInitializeScrubPacket @ 0x1406BFEE8 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1406BFF98 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubMemoryWorker(unsigned int *a1)
{
  __int64 v1; // rdx
  unsigned int *v3; // rbx
  int v4; // esi
  __int64 result; // rax
  _BYTE v6[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-20h]

  v1 = *a1;
  v3 = &a1[-10 * v1];
  v4 = MiInitializeScrubPacket(*((_QWORD *)v3 - 1), v1, *((_QWORD *)v3 - 3), (__int64)v6);
  if ( v4 >= 0 )
  {
    MiScrubNode(*((ULONG_PTR **)v3 - 1), (__int64)v6);
    MiReleaseScrubPacket((__int64)v6);
  }
  a1[1] = v4;
  _InterlockedExchangeAdd64((volatile signed __int64 *)v3 - 2, v7);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v3 - 14, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate((__int64)(v3 - 12), 1);
  return result;
}
