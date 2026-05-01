/*
 * XREFs of ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKGROUND_ACCESS_STATE@@@Z @ 0x180048E4C
 * Callers:
 *     ?HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x180046E18 (-HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampSessionCheckBackgroundAccessAllowed(
        struct _HAM_SESSION *a1,
        struct _HAM_PACKAGE_INFO *a2,
        enum BACKGROUND_ACCESS_STATE *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF

  RtlInitUnicodeString(&UnicodeString, 0LL);
  v6 = RtlConvertSidToUnicodeString(&UnicodeString, (char *)a2 + 132, 1u);
  if ( v6 >= 0 )
  {
    v7 = *((_QWORD *)a1 + 6);
    v11 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, PWSTR, struct _HAM_PACKAGE_INFO *, int *))(*(_QWORD *)v7 + 216LL))(
           v7,
           UnicodeString.Buffer,
           a2,
           &v11);
    if ( v8 >= 0 )
      *(_DWORD *)a3 = v11;
    else
      v6 = v8 | 0xC0000000;
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v6;
}
