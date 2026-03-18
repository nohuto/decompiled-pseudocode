/*
 * XREFs of itrp_InnerExecute @ 0x1C02CE2AC
 * Callers:
 *     InvokeInterpreter @ 0x1C02C9348 (InvokeInterpreter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall itrp_InnerExecute(unsigned __int8 *a1, unsigned __int64 a2)
{
  __int64 v3; // rdx

  qword_1C0327CE8 = a2;
  qword_1C0327CF0 = (__int64)a1;
  if ( (unsigned __int64)a1 < a2 )
  {
    while ( 1 )
    {
      v3 = *a1;
      if ( !--dword_1C0327D00 )
        break;
      a1 = (unsigned __int8 *)((__int64 (__fastcall *)(unsigned __int8 *))function[v3])(a1 + 1);
      if ( (unsigned __int64)a1 >= a2 )
        return;
    }
    dword_1C0327CE0 = 4366;
  }
}
