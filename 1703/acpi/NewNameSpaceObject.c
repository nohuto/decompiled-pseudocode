/*
 * XREFs of NewNameSpaceObject @ 0x1C001C104
 * Callers:
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     InitializeNativeNamespace @ 0x1C0022FC4 (InitializeNativeNamespace.c)
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     memset @ 0x1C002CB80 (memset.c)
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
