/*
 * XREFs of RIMCmDeactivateContact @ 0x1C0115690
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C010FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C011098C (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C011255C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 *     rimReleaseCursor @ 0x1C01158A4 (rimReleaseCursor.c)
 */

_QWORD *__fastcall RIMCmDeactivateContact(_DWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  bool v3; // cf
  _DWORD *v4; // rdi
  __int64 v6; // rdx
  int v7; // esi
  _QWORD *v8; // rax
  _QWORD *result; // rax

  v2 = (_QWORD *)(a2 + 16);
  v3 = __CFSHR__(*(_DWORD *)(a2 + 32), 3);
  v4 = a1 + 220;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = -v3;
  if ( *(_QWORD **)(v6 + 8) != v2 || (v8 = (_QWORD *)v2[1], (_QWORD *)*v8 != v2) )
    __fastfail(3u);
  *v8 = v6;
  *(_QWORD *)(v6 + 8) = v8;
  --a1[228];
  if ( !*(_DWORD *)(a2 + 8) )
    --a1[229];
  if ( !v3 && (a1[170] > 1u || (a1[69] & 0x80u) != 0) )
    rimReleaseCursor(a1, *(unsigned int *)(a2 + 4));
  result = memset((void *)a2, 0, 0xAC8uLL);
  if ( !v7 )
  {
    result = *(_QWORD **)v4;
    if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) != v4 )
      __fastfail(3u);
    *v2 = result;
    v2[1] = v4;
    result[1] = v2;
    *(_QWORD *)v4 = v2;
  }
  return result;
}
