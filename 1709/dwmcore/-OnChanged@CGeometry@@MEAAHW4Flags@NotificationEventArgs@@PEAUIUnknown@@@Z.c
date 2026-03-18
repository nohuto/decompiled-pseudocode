/*
 * XREFs of ?OnChanged@CGeometry@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007DA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry::OnChanged(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  *(_DWORD *)(a1 + 32) |= 1u;
  return result;
}
