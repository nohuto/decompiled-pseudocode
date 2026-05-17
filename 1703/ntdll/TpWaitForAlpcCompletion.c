/*
 * XREFs of TpWaitForAlpcCompletion @ 0x18007F270
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     sub_18007F3E0 @ 0x18007F3E0 (sub_18007F3E0.c)
 *     ZwAlpcQueryInformation @ 0x1800A63B0 (ZwAlpcQueryInformation.c)
 */

__int64 __fastcall TpWaitForAlpcCompletion(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+48h] [rbp+10h] BYREF

  result = sub_18007F3E0(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 280);
    if ( v3 )
      ZwAlpcQueryInformation(*(_QWORD *)(a1 + 272), 11LL, &v3);
    return sub_18007358C((volatile signed __int64 *)(a1 + 128), 0, 1);
  }
  return result;
}
