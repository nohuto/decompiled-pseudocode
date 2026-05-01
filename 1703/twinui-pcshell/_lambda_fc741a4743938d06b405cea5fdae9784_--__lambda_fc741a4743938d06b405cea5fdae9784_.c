/*
 * XREFs of _lambda_fc741a4743938d06b405cea5fdae9784_::__lambda_fc741a4743938d06b405cea5fdae9784_ @ 0x180039DF4
 * Callers:
 *     _CRotationManagerSync::_CheckForInitialSuppression_::_1_::dtor$3 @ 0x1801995C3 (_CRotationManagerSync--_CheckForInitialSuppression_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall lambda_fc741a4743938d06b405cea5fdae9784_::__lambda_fc741a4743938d06b405cea5fdae9784_(__int64 *a1)
{
  char *v2; // rcx
  int result; // eax
  __int64 v4; // rcx

  v2 = (char *)a1[1];
  result = (_DWORD)v2 - 1;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    result = CloseHandle(v2);
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
