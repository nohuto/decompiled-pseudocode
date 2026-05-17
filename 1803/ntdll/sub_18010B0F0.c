/*
 * XREFs of sub_18010B0F0 @ 0x18010B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall sub_18010B0F0(__int64 a1, _QWORD *a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 < 0x40 )
    return 3221225507LL;
  *a2 = 64LL;
  return ZwQueryInformationProcess();
}
