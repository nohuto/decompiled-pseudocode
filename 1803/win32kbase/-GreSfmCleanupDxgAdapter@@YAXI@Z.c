/*
 * XREFs of ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C00D7760
 * Callers:
 *     GreSfmCleanupPresentHistory @ 0x1C00D7870 (GreSfmCleanupPresentHistory.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     NtGdiDdDDIGetPresentHistoryInternal @ 0x1C00CA270 (NtGdiDdDDIGetPresentHistoryInternal.c)
 */

void __fastcall GreSfmCleanupDxgAdapter(int a1)
{
  _DWORD v2[4]; // [rsp+20h] [rbp-CE8h] BYREF
  char *v3; // [rsp+30h] [rbp-CD8h]
  int v4; // [rsp+38h] [rbp-CD0h]
  char v5; // [rsp+40h] [rbp-CC8h] BYREF

  if ( (int)((__int64 (*)(void))qword_1C01A1A00)() >= 0 )
  {
    do
    {
      v4 = 0;
      v3 = &v5;
      v2[0] = a1;
      v2[1] = 3240;
      NtGdiDdDDIGetPresentHistoryInternal((__int64)v2);
    }
    while ( v4 );
  }
}
