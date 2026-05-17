/*
 * XREFs of TpWaitForAlpcCompletion @ 0x180055760
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180056970 @ 0x180056970 (sub_180056970.c)
 *     ZwAlpcQueryInformation @ 0x18009BB90 (ZwAlpcQueryInformation.c)
 */

__int64 __fastcall TpWaitForAlpcCompletion(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  int v4; // [rsp+48h] [rbp+10h] BYREF

  result = sub_180056970(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v4 = *(_DWORD *)(a1 + 280);
    if ( v4 )
      ZwAlpcQueryInformation(*(_QWORD *)(a1 + 272), 11LL, &v4);
    return sub_180055584((volatile signed __int64 *)(a1 + 128), 0, (unsigned __int64 *)1, v3);
  }
  return result;
}
