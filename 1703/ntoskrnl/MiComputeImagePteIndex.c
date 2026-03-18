/*
 * XREFs of MiComputeImagePteIndex @ 0x140097E7C
 * Callers:
 *     MiReferenceInPageFile @ 0x140097390 (MiReferenceInPageFile.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140097F34 (MiGetSubsectionDriverProtos.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiComputeImagePteIndex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 PrototypePteDirect; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 SharedProtos; // rdx
  __int64 SubsectionDriverProtos; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx

  v4 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), a2, a3, a4);
  v7 = PrototypePteDirect;
  v8 = *(_QWORD *)PrototypePteDirect;
  if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 && (*(_DWORD *)(v8 + 56) & 0x4000000) != 0 )
  {
    SharedProtos = MiGetSharedProtos(*(_QWORD *)PrototypePteDirect, v6, PrototypePteDirect);
  }
  else
  {
    SubsectionDriverProtos = MiGetSubsectionDriverProtos(PrototypePteDirect);
    SharedProtos = SubsectionDriverProtos;
    if ( !SubsectionDriverProtos )
    {
LABEL_10:
      v12 = *(_QWORD *)(v8 + 136);
      LODWORD(v13) = 0;
      return (unsigned int)v13 + (unsigned int)((__int64)(v4 - v12) >> 3);
    }
    v11 = *(_QWORD *)(SubsectionDriverProtos + 32);
    if ( v4 < v11 || v4 >= v11 + 8LL * *(unsigned int *)(v7 + 44) )
      SharedProtos = 0LL;
  }
  if ( !SharedProtos )
    goto LABEL_10;
  v12 = *(_QWORD *)(SharedProtos + 32);
  v13 = (__int64)(*(_QWORD *)(v7 + 8) - *(_QWORD *)(v8 + 136)) >> 3;
  return (unsigned int)v13 + (unsigned int)((__int64)(v4 - v12) >> 3);
}
