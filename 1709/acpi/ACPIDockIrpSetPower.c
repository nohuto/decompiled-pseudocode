/*
 * XREFs of ACPIDockIrpSetPower @ 0x1C0042550
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDockIrpSetDevicePower @ 0x1C0029FA4 (ACPIDockIrpSetDevicePower.c)
 *     ACPIDockIrpSetSystemPower @ 0x1C0042584 (ACPIDockIrpSetSystemPower.c)
 */

__int64 __fastcall ACPIDockIrpSetPower(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 184);
  *(_BYTE *)(v2 + 3) |= 1u;
  if ( *(_DWORD *)(v2 + 16) )
    ACPIDockIrpSetDevicePower((ULONG_PTR)a1, a2);
  else
    ACPIDockIrpSetSystemPower(a1, (PIRP *)a2);
  return 259LL;
}
