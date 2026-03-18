/*
 * XREFs of UsbhStartThisPowerIrp_Pdo @ 0x1C0006218
 * Callers:
 *     UsbhPdoPower_QueryPower @ 0x1C0006090 (UsbhPdoPower_QueryPower.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

__int64 __fastcall UsbhStartThisPowerIrp_Pdo(int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r9

  result = PdoExt(a2);
  v8 = *(_QWORD *)(a3 + 184);
  if ( *(_DWORD *)(v8 + 16) <= 1u )
  {
    result = Log(a1, 16, 1346653747, v8, a3);
    *(_QWORD *)(v9 + 8 * v10 + 800) = a3;
    *(_QWORD *)(v9 + 8 * v10 + 816) = v11;
    *(_DWORD *)(v9 + 4 * v10 + 832) = a4;
  }
  return result;
}
