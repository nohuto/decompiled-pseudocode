/*
 * XREFs of ?GetZbid@CImmersiveApp@@UEAA?AW4ZBID@@XZ @ 0x1800555D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetZbid(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  __int64 v3; // rcx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 408) & 9) != 0 )
  {
    v5 = 0;
    v6 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 272) + 128LL))(*(_QWORD *)(a1 + 272), &v6) >= 0
      && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v7) >= 0 )
    {
      GetWindowBand(v7, &v5);
    }
    v2 = v5;
    v3 = v6;
    if ( v6 )
    {
      v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    return v2;
  }
  return v1;
}
