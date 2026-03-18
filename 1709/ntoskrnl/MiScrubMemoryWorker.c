/*
 * XREFs of MiScrubMemoryWorker @ 0x1406EE9C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiScrubNode @ 0x140238CDC (MiScrubNode.c)
 *     MiInitializeScrubPacket @ 0x1406EE840 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1406EE968 (MiReleaseScrubPacket.c)
 */

void __fastcall MiScrubMemoryWorker(unsigned int *a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rbx
  int v4; // esi
  unsigned __int64 v5[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = *a1;
  v3 = &a1[-10 * v2];
  v4 = MiInitializeScrubPacket(*((_QWORD *)v3 - 1), v2, *((_QWORD *)v3 - 3), (__int64)v5);
  if ( v4 >= 0 )
  {
    MiScrubNode(*((ULONG_PTR **)v3 - 1), (__int64)v5);
    MiReleaseScrubPacket((__int64)v5);
  }
  a1[1] = v4;
  _InterlockedExchangeAdd64((volatile signed __int64 *)v3 - 2, v5[21]);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3 - 14, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)(v3 - 12), 1u);
}
