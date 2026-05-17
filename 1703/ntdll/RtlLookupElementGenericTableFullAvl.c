/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x180069170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006938C @ 0x18006938C (sub_18006938C.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFullAvl(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v6; // eax

  v6 = sub_18006938C();
  *a4 = v6;
  if ( v6 == 1 )
    return *a3 + 32LL;
  else
    return 0LL;
}
