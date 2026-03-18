/*
 * XREFs of MiScrubMemoryWorker @ 0x140757E90
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiScrubNode @ 0x1402707F0 (MiScrubNode.c)
 *     MiInitializeScrubPacket @ 0x140757D28 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x140757E44 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubMemoryWorker(unsigned int *a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rbx
  int v4; // esi
  __int64 result; // rax
  unsigned __int64 v6[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v6, 0, sizeof(v6));
  v2 = *a1;
  v3 = &a1[-10 * v2];
  v4 = MiInitializeScrubPacket(*((_QWORD *)v3 - 1), v2, *((_QWORD *)v3 - 3), (__int64)v6);
  if ( v4 >= 0 )
  {
    MiScrubNode(*((ULONG_PTR **)v3 - 1), (__int64)v6);
    MiReleaseScrubPacket((__int64)v6);
  }
  a1[1] = v4;
  _InterlockedExchangeAdd64((volatile signed __int64 *)v3 - 2, v6[21]);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v3 - 14, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate((__int64)(v3 - 12), 1);
  return result;
}
