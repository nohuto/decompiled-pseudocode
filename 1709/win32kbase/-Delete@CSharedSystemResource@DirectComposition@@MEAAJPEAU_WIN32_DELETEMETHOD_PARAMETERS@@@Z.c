/*
 * XREFs of ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C007F700
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0033230 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0034974 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedSystemResource::Delete(
        DirectComposition::CSharedSystemResource *this,
        struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  unsigned int v3; // edx
  __int64 v4; // rcx

  (*(void (__fastcall **)(DirectComposition::CSharedSystemResource *, struct _WIN32_DELETEMETHOD_PARAMETERS *))(*(_QWORD *)this + 8LL))(
    this,
    a2);
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    if ( *((_DWORD *)this + 6) )
      DirectComposition::CConnection::ReleaseSystemResource(v4, *((_DWORD *)this + 6));
    DirectComposition::CConnection::Release(*((DirectComposition::CConnection **)this + 2), v3);
    *((_QWORD *)this + 2) = 0LL;
  }
  return 0LL;
}
