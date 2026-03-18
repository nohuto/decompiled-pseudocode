/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x140721A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x140722598 (RtlpGetTokenNamedObjectPath.c)
 */

__int64 __fastcall RtlGetTokenNamedObjectPath(void *a1)
{
  return RtlpGetTokenNamedObjectPath(a1, 0LL);
}
