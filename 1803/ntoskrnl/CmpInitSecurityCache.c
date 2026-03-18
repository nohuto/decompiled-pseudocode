/*
 * XREFs of CmpInitSecurityCache @ 0x140497FCC
 * Callers:
 *     CmpHiveInitialize @ 0x140497F38 (CmpHiveInitialize.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140516F4C (CmpValidateHiveSecurityDescriptors.c)
 *     CmGetSystemControlValues @ 0x1408B93FC (CmGetSystemControlValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInitSecurityCache(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 1872) = -1;
  *(_QWORD *)(a1 + 1880) = 0LL;
  *(_QWORD *)(a1 + 1864) = 0LL;
  v1 = (_QWORD *)(a1 + 1888);
  result = 64LL;
  do
  {
    v1[1] = v1;
    *v1 = v1;
    v1 += 2;
    --result;
  }
  while ( result );
  return result;
}
