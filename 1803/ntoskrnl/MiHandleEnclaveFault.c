/*
 * XREFs of MiHandleEnclaveFault @ 0x14074F594
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 */

__int64 __fastcall MiHandleEnclaveFault(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = MiObtainReferencedVadEx(a1, 0, &v6);
  v4 = -1073741819;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 48) & 0x10000) != 0 && (*(_DWORD *)(v1 + 64) & 1) != 0 && (*(_BYTE *)(v1 + 72) & 1) != 0 )
      v4 = -1073740638;
    MiUnlockAndDereferenceVad((PVOID)v1, v1, v2, v3);
  }
  return v4;
}
