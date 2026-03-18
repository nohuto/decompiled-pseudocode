/*
 * XREFs of MiInsertProcessVads @ 0x14049E0E0
 * Callers:
 *     MiInitializeUserNoAccess @ 0x14044D3BC (MiInitializeUserNoAccess.c)
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405D36C0 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiGetWsAndInsertVad @ 0x14009A420 (MiGetWsAndInsertVad.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 */

__int64 __fastcall MiInsertProcessVads(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rbx
  unsigned int v3; // edi
  _QWORD *v6; // rbp
  __int64 result; // rax

  v2 = *a2;
  v3 = 0;
  if ( *a2 )
  {
    while ( 1 )
    {
      v6 = (_QWORD *)*v2;
      result = MiInsertVadCharges(v2, a1);
      v3 = result;
      if ( (int)result < 0 )
        break;
      MiGetWsAndInsertVad((__int64)v2);
      v2 = v6;
      if ( !v6 )
        goto LABEL_4;
    }
    *a2 = v2;
  }
  else
  {
LABEL_4:
    *a2 = 0LL;
    return v3;
  }
  return result;
}
