/*
 * XREFs of ??$MakeExtendedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@KKPEAK@Z @ 0x1C00EA79C
 * Callers:
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C00EAC9C (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ndisLWMCreateAdapterInstanceName @ 0x1C00EC6F4 (ndisLWMCreateAdapterInstanceName.c)
 * Callees:
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C00EA7F0 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

_QWORD *MakeExtendedPoolPtr<_UNICODE_STRING>(_QWORD *a1, __int64 a2, int a3, ...)
{
  unsigned int v3; // r8d
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v6 = va_arg(va1, _QWORD);
  v3 = a3 + 16;
  if ( v3 < 0x10 )
  {
    *a1 = 0LL;
  }
  else
  {
    MakeSizedPoolPtr<_UNICODE_STRING>((__int64 *)va, a2, v3);
    if ( v6 )
      *a1 = v6;
    else
      *a1 = 0LL;
  }
  return a1;
}
