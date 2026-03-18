/*
 * XREFs of MiComputeImagePteIndex @ 0x1400484D0
 * Callers:
 *     MiReferenceInPageFile @ 0x14005A494 (MiReferenceInPageFile.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140048594 (MiGetSubsectionDriverProtos.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiComputeImagePteIndex(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 PrototypePteDirect; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 SharedProtos; // rdx
  __int64 SubsectionDriverProtos; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
  LODWORD(v4) = 0;
  v5 = PrototypePteDirect;
  v6 = *(_QWORD *)PrototypePteDirect;
  if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 && (*(_DWORD *)(v6 + 56) & 0x4000000) != 0 )
  {
    SharedProtos = MiGetSharedProtos(*(_QWORD *)PrototypePteDirect, v3, PrototypePteDirect);
  }
  else
  {
    SubsectionDriverProtos = MiGetSubsectionDriverProtos(PrototypePteDirect, v3);
    SharedProtos = SubsectionDriverProtos;
    if ( SubsectionDriverProtos )
    {
      v9 = *(_QWORD *)(SubsectionDriverProtos + 72);
      if ( v1 < v9 || v1 >= v9 + 8LL * *(unsigned int *)(v5 + 44) )
        SharedProtos = 0LL;
    }
  }
  if ( SharedProtos )
  {
    v10 = *(_QWORD *)(SharedProtos + 72);
    v4 = (__int64)(*(_QWORD *)(v5 + 8) - *(_QWORD *)(v6 + 136)) >> 3;
  }
  else
  {
    v10 = *(_QWORD *)(v6 + 136);
  }
  return (unsigned int)v4 + (unsigned int)((__int64)(v1 - v10) >> 3);
}
