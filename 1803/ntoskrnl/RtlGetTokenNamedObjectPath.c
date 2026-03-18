/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x140785200
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x140785D38 (RtlpGetTokenNamedObjectPath.c)
 */

__int64 __fastcall RtlGetTokenNamedObjectPath(void *a1)
{
  return RtlpGetTokenNamedObjectPath(a1, 0LL);
}
