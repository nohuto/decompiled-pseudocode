/*
 * XREFs of CTouchpadAcceleration_CreateInstance @ 0x1C0006430
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall CTouchpadAcceleration_CreateInstance(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi

  v2 = 0LL;
  v3 = Win32AllocPool(104LL, 1682006883LL);
  v4 = v3;
  if ( v3 )
  {
    *(_BYTE *)(v3 + 8) = 0;
    memset((void *)(v3 + 16), 0, 0x50uLL);
    *(_DWORD *)(v4 + 96) = a1;
    *(_QWORD *)v4 = &CTouchpadAcceleration::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    return v4;
  return v2;
}
