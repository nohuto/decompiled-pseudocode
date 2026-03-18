/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x1405EE6C0
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x1405FB30C (MiMapSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x140756740 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140048594 (MiGetSubsectionDriverProtos.c)
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 */

void __fastcall MiDeleteSessionDriverProtos(__int64 a1)
{
  __int64 i; // rbx
  __int64 SubsectionDriverProtos; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  for ( i = a1 + 128; i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_BYTE *)(i + 34) & 2) == 0 )
    {
      SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)i);
      if ( SubsectionDriverProtos )
      {
        *(_QWORD *)(i + 24) = 0LL;
        *(_QWORD *)(SubsectionDriverProtos + 64) = i;
        MiDeletePerSessionProtos((PVOID *)SubsectionDriverProtos, v3, v4, v5);
      }
    }
  }
}
