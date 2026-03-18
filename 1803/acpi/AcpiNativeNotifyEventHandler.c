/*
 * XREFs of AcpiNativeNotifyEventHandler @ 0x1C0033650
 * Callers:
 *     <none>
 * Callees:
 *     AcpiHandleInternalNotify @ 0x1C0033430 (AcpiHandleInternalNotify.c)
 *     NotifyHandler @ 0x1C0035A50 (NotifyHandler.c)
 */

__int64 __fastcall AcpiNativeNotifyEventHandler(__int64 a1)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // rdi
  __int64 v3; // rdx

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(volatile signed __int32 **)a1;
  if ( v1 == 0xFFFF )
    AcpiHandleInternalNotify(*(volatile signed __int32 **)a1);
  v3 = 0LL;
  if ( v1 != 0xFFFF )
    v3 = v1;
  return NotifyHandler(2LL, v3, v2);
}
