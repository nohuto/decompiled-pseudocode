/*
 * XREFs of _lambda_93b6d172784ab005d03ec383313e6029_::operator() @ 0x1C00926A0
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_93b6d172784ab005d03ec383313e6029___ @ 0x1C002A014 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_93b6d172784ab005d03ec383313e602.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_93b6d172784ab005d03ec383313e6029_::operator()(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = *a1;
  v3 = *(_QWORD *)(*a1 + 40);
  if ( v3 )
  {
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v3 + 24);
    result = *(unsigned int *)(*(_QWORD *)(*a1 + 40) + 64LL);
    *(_DWORD *)(a2 + 12) = result;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
  }
  return result;
}
