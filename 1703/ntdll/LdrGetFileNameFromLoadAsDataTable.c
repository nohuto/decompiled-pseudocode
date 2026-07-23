/*
 * XREFs of LdrGetFileNameFromLoadAsDataTable @ 0x1800E1860
 * Callers:
 *     <none>
 * Callees:
 *     sub_180076144 @ 0x180076144 (sub_180076144.c)
 */

NTSTATUS __cdecl LdrGetFileNameFromLoadAsDataTable(PVOID Module, PVOID *pFileNamePrt)
{
  NTSTATUS result; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF

  if ( !Module || !pFileNamePrt )
    return -1073741811;
  result = sub_180076144((__int64)Module, &v4);
  if ( result >= 0 )
  {
    if ( *((_QWORD *)&v4 + 1) )
      *pFileNamePrt = (PVOID)*((_QWORD *)&v4 + 1);
    else
      return -1073741823;
  }
  return result;
}
