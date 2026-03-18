/*
 * XREFs of NewNameSpaceObject @ 0x1C001A558
 * Callers:
 *     InitializeNativeNamespace @ 0x1C0012064 (InitializeNativeNamespace.c)
 *     CreateNameSpaceObject @ 0x1C001C380 (CreateNameSpaceObject.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

_QWORD *__fastcall NewNameSpaceObject(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx

  v1 = (_QWORD *)HeapAlloc(a1, 1330859592, 0xA0u);
  v2 = v1;
  if ( v1 )
  {
    memset(v1, 0, 0xA0uLL);
    v2[4] = v2 + 3;
    v2[3] = v2 + 3;
    v2[18] = 0LL;
    v2[19] = -1LL;
    *((_DWORD *)v2 + 28) = 2;
    *((_DWORD *)v2 + 32) = 1;
    v2[15] = v2;
  }
  return v2;
}
