/*
 * XREFs of CmpInitSecurityCache @ 0x14047115C
 * Callers:
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1404746C0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmGetSystemControlValues @ 0x140836B78 (CmGetSystemControlValues.c)
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
