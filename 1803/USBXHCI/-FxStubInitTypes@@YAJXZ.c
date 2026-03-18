/*
 * XREFs of ?FxStubInitTypes@@YAJXZ @ 0x1C000205C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0001EB4 (FxDriverEntryWorker.c)
 * Callees:
 *     Control_Cleanup @ 0x1C0001D40 (Control_Cleanup.c)
 */

__int64 FxStubInitTypes(void)
{
  _QWORD *i; // rbx
  __int64 (__fastcall *v2)(_QWORD); // rdi

  if ( &__KMDF_TYPE_INIT_START > (_UNKNOWN *)__KMDF_TYPE_INIT_END )
    return 3221225595LL;
  for ( i = __KMDF_TYPE_INIT_END; ; i += 5 )
  {
    if ( i >= __KMDF_TYPE_INIT_END )
      return 0LL;
    if ( *(_DWORD *)i != 40 )
      break;
    v2 = (__int64 (__fastcall *)(_QWORD))i[4];
    if ( v2 )
      i[3] = v2(i[4]);
  }
  return 3221225476LL;
}
