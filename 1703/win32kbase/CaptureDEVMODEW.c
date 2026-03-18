/*
 * XREFs of CaptureDEVMODEW @ 0x1C008CFC0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C00221E0 (NtGdiOpenDCW.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0012E10 (PopThreadGuardedObject.c)
 *     AllocThreadBufferWithTag @ 0x1C003B1F0 (AllocThreadBufferWithTag.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

_WORD *__fastcall CaptureDEVMODEW(unsigned __int16 *a1)
{
  int v1; // esi
  int v2; // r14d
  __int64 v3; // rdi
  _WORD *v4; // rbx

  v1 = a1[34];
  v2 = a1[35];
  v3 = (unsigned int)(v1 + v2);
  if ( (unsigned int)v3 <= 0x48 )
    return 0LL;
  v4 = (_WORD *)AllocThreadBufferWithTag(v3, 0x706D7447u, 0);
  if ( v4 )
  {
    if ( (unsigned __int16 *)((char *)a1 + v3) < a1 || (char *)a1 + v3 > (char *)W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v4, a1, (unsigned int)v3);
    v4[34] = v1;
    v4[35] = v2;
  }
  return v4;
}
