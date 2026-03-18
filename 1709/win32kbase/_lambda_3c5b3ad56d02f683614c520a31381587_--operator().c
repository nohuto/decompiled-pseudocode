/*
 * XREFs of _lambda_3c5b3ad56d02f683614c520a31381587_::operator() @ 0x1C0002ACC
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3c5b3ad56d02f683614c520a31381587___ @ 0x1C00025A0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3c5b3ad56d02f683614c520a3138158.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_3c5b3ad56d02f683614c520a31381587_::operator()(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *a2 = 151;
  a2[1] = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  result = 0LL;
  if ( v2 )
    result = *(unsigned int *)(v2 + 24);
  a2[2] = result;
  return result;
}
