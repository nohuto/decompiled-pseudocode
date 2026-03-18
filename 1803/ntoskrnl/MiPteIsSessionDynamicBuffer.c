/*
 * XREFs of MiPteIsSessionDynamicBuffer @ 0x1401553E4
 * Callers:
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPteIsSessionDynamicBuffer(unsigned __int64 a1)
{
  return a1 >= (((unsigned __int64)qword_1403CB5F0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && a1 < (((unsigned __int64)qword_1403CB5E8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
}
