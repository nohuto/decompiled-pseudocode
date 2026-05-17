/*
 * XREFs of RtlFindClosestEncodableLength @ 0x1800EEE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClosestEncodableLength(unsigned __int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rax

  if ( a1 <= 0xFFFFFFFF )
    goto LABEL_2;
  if ( a1 <= 0xFFFFFFFF00LL )
  {
    v3 = a1 & 0xFFFFFFFF00LL;
    if ( a1 == (a1 & 0xFFFFFFFFFFFFFF00uLL) )
      goto LABEL_2;
    a1 = v3 + 256;
    *a2 = v3 + 256;
    if ( (unsigned __int64)(v3 + 256) <= 0xFFFFFFFF00LL )
      return 0LL;
  }
  if ( a1 <= 0xFFFFFFFF0000LL )
  {
    v4 = a1 & 0xFFFFFFFF0000LL;
    if ( a1 == (a1 & 0xFFFFFFFFFFFF0000uLL) )
      goto LABEL_2;
    a1 = v4 + 0x10000;
    *a2 = v4 + 0x10000;
    if ( (unsigned __int64)(v4 + 0x10000) <= 0xFFFFFFFF0000LL )
      return 0LL;
  }
  if ( a1 > 0xFFFFFFFF00000000uLL )
    goto LABEL_13;
  if ( a1 == (a1 & 0xFFFFFFFF00000000uLL) )
  {
LABEL_2:
    *a2 = a1;
    return 0LL;
  }
  v5 = (a1 & 0xFFFFFFFF00000000uLL) + 0x100000000LL;
  *a2 = v5;
  if ( v5 <= 0xFFFFFFFF00000000uLL )
    return 0LL;
LABEL_13:
  *a2 = 0LL;
  return 3221225473LL;
}
