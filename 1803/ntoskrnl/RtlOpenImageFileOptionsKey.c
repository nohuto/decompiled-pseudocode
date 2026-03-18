/*
 * XREFs of RtlOpenImageFileOptionsKey @ 0x140781990
 * Callers:
 *     <none>
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14056CE78 (RtlpOpenImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, a2, (__int64)a3, a3);
}
