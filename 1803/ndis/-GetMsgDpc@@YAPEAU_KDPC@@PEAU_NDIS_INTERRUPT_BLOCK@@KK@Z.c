/*
 * XREFs of ?GetMsgDpc@@YAPEAU_KDPC@@PEAU_NDIS_INTERRUPT_BLOCK@@KK@Z @ 0x1C0008B04
 * Callers:
 *     NdisMRegisterInterruptEx @ 0x1C0106A70 (NdisMRegisterInterruptEx.c)
 * Callees:
 *     <none>
 */

struct _KDPC *__fastcall GetMsgDpc(struct _NDIS_INTERRUPT_BLOCK *a1, int a2, int a3)
{
  return &a1->MsgDpc[(unsigned __int64)(a3 + a2 * (ndisMaxNumberOfProcessors + 1))];
}
