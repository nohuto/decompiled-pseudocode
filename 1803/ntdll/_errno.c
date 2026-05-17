/*
 * XREFs of _errno @ 0x180083380
 * Callers:
 *     sub_18008CDCC @ 0x18008CDCC (sub_18008CDCC.c)
 *     mbstowcs @ 0x18008EDC0 (mbstowcs.c)
 *     sub_18009038C @ 0x18009038C (sub_18009038C.c)
 *     sub_180090F98 @ 0x180090F98 (sub_180090F98.c)
 *     wcstombs @ 0x180091250 (wcstombs.c)
 *     sub_180091404 @ 0x180091404 (sub_180091404.c)
 *     sub_180091F30 @ 0x180091F30 (sub_180091F30.c)
 *     sub_18009297C @ 0x18009297C (sub_18009297C.c)
 *     sub_180093A28 @ 0x180093A28 (sub_180093A28.c)
 *     sub_180093D28 @ 0x180093D28 (sub_180093D28.c)
 *     sub_180094E8C @ 0x180094E8C (sub_180094E8C.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
