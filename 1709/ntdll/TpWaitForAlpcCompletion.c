/*
 * XREFs of TpWaitForAlpcCompletion @ 0x180087F10
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x180013AB0 (TppAlpcpValidateAlpc.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 *     ZwAlpcQueryInformation @ 0x1800A1170 (ZwAlpcQueryInformation.c)
 */

__int64 __fastcall TpWaitForAlpcCompletion(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  int v4; // [rsp+48h] [rbp+10h] BYREF

  result = TppAlpcpValidateAlpc((_PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v4 = *(_DWORD *)(a1 + 280);
    if ( v4 )
      ZwAlpcQueryInformation(*(_QWORD *)(a1 + 272), 11LL, &v4);
    return TppBarrierAdjust((volatile signed __int64 *)(a1 + 128), 0, (unsigned __int64 *)1, v3);
  }
  return result;
}
