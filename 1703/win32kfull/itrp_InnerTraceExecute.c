/*
 * XREFs of itrp_InnerTraceExecute @ 0x1C02D4568
 * Callers:
 *     InvokeInterpreter @ 0x1C02CF5AC (InvokeInterpreter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall itrp_InnerTraceExecute(__int64 a1, unsigned __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rdx

  qword_1C032CA58 = a2;
  qword_1C032CA60 = a1;
  v3 = (char *)a1;
  if ( a1 < a2 )
  {
    do
    {
      if ( !qword_1C032CA08 )
        break;
      qword_1C032C9F0 = (__int64)v3;
      byte_1C032CA24 = *v3;
      qword_1C032CA08(&LocalGS, a2);
      if ( !qword_1C032CA08 )
        break;
      v4 = (unsigned __int8)*v3;
      if ( !--dword_1C032CA70 )
      {
        dword_1C032CA50 = 4366;
        return;
      }
      v3 = (char *)((__int64 (__fastcall *)(char *))function[v4])(v3 + 1);
    }
    while ( (unsigned __int64)v3 < a2 );
  }
}
