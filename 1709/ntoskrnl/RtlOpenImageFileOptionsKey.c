/*
 * XREFs of RtlOpenImageFileOptionsKey @ 0x14071E390
 * Callers:
 *     <none>
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14057E328 (RtlpOpenImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, a2, (__int64)a3, a3);
}
