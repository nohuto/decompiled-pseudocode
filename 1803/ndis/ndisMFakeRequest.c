/*
 * XREFs of ndisMFakeRequest @ 0x1C005FF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMFakeRequest(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 540);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL) < 6u && (v2 & 0xC0230000) == 0xC0230000 )
      return (unsigned __int16)v2 | 0xC0010000;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
