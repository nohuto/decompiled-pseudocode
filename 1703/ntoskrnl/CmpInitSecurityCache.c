/*
 * XREFs of CmpInitSecurityCache @ 0x14043A5B8
 * Callers:
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1404BF6E4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmGetSystemControlValues @ 0x14080E8DC (CmGetSystemControlValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInitSecurityCache(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 3048) = -1;
  *(_QWORD *)(a1 + 3056) = 0LL;
  *(_QWORD *)(a1 + 3040) = 0LL;
  v1 = (_QWORD *)(a1 + 3064);
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
