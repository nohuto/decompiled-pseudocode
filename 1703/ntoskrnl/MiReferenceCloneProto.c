/*
 * XREFs of MiReferenceCloneProto @ 0x140002838
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiReferenceCloneProto(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdx
  _QWORD *v4; // r8
  char v5; // r9

  if ( !MiLocateCloneAddress(KeGetCurrentThread()->ApcState.Process, a1, a3, a2) )
    return 0LL;
  _InterlockedAdd64((volatile signed __int64 *)(v3 + 24), 1uLL);
  if ( (v5 & 1) == 0 )
    return 0LL;
  if ( (_InterlockedIncrement64((volatile signed __int64 *)(v3 + 16)) & 0x7FFFFFFFFFFFFFFLL) == 1 )
    ++v4[1];
  else
    ++*v4;
  return v3;
}
