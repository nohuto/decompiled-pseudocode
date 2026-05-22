/*
 * XREFs of ?Append@PropertyVector@Input@@UEAAJ$$QEAVPropertyNode@2@@Z @ 0x180032160
 * Callers:
 *     ?SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z @ 0x1800237E4 (-SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     ?Append@?$PropertyVectorModifiedAdapter@V?$ModifiedNotifier@VPropertyVector@Input@@@Input@@@Input@@UEAAJ$$QEAVPropertyNode@2@@Z @ 0x180023D40 (-Append@-$PropertyVectorModifiedAdapter@V-$ModifiedNotifier@VPropertyVector@Input@@@Input@@@Inpu.c)
 * Callees:
 *     ??$emplace_back@AEBQEAVPropertyNode@Input@@@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAAXAEBQEAVPropertyNode@Input@@@Z @ 0x180032930 (--$emplace_back@AEBQEAVPropertyNode@Input@@@-$vector@PEAVPropertyNode@Input@@V-$allocator@PEAVPr.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyVector::Append(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v3 = -2147024882;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
  if ( v5 )
  {
    try
    {
      std::vector<Input::PropertyNode *>::emplace_back<Input::PropertyNode * const &>(a1 + 32, &v5);
      v3 = 0;
    }
    catch ( ... )
    {
      return 0;
    }
  }
  return v3;
}
