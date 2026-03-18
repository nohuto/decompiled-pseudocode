/*
 * XREFs of NtRIMFreeInputBuffer @ 0x1C00FF990
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C009539C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMFreeInputBuffer @ 0x1C01012C0 (RIMFreeInputBuffer.c)
 */

__int64 __fastcall NtRIMFreeInputBuffer(__int64 a1, __int64 a2)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    RIMFreeInputBuffer(a1, a2);
  return 0LL;
}
