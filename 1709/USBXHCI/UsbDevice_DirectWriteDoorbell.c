/*
 * XREFs of UsbDevice_DirectWriteDoorbell @ 0x1C0026D2C
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x1C0025B3C (Control_Transfer_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C002AEC0 (Isoch_Stage_MapIntoRing.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C00309E0 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     McTemplateK0cqq @ 0x1C0007DB8 (McTemplateK0cqq.c)
 */

int *__fastcall UsbDevice_DirectWriteDoorbell(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  int *result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF

  v4 = ((_DWORD)a3 << 16) | (unsigned __int8)a2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x100) != 0 )
    McTemplateK0cqq(a1, a2, a3, *(_BYTE *)(a1 + 135), a2, a3);
  result = *(int **)(a1 + 160);
  *result = v4;
  _InterlockedOr(v6, 0);
  return result;
}
