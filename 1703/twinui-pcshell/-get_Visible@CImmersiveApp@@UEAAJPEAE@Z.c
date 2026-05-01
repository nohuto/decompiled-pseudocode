/*
 * XREFs of ?get_Visible@CImmersiveApp@@UEAAJPEAE@Z @ 0x1800535D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::get_Visible(CImmersiveApp *this, bool *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(char *, int *))(*((_QWORD *)this - 4) + 168LL))((char *)this - 32, &v4);
  *a2 = v4 != 0;
  return result;
}
