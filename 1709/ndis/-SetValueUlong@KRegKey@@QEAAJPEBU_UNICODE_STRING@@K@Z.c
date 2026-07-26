/*
 * XREFs of ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x1C00F9C50
 * Callers:
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00B0330 (ndisCheckNetworkInterfaceDataMismatch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::SetValueUlong(KRegKey *this, struct _UNICODE_STRING *a2, int a3)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ZwSetValueKey(this->m_ptr, a2, 0, 4u, &v4, 4u);
}
