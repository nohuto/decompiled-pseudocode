/*
 * XREFs of ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x180018A20
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ @ 0x18000C810 (--$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001907C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DWMInputTarget::IsSameAsTarget(DWMInputTarget *this, const struct tagMsgRoutingInfo *a2, void *a3)
{
  char result; // al
  char v6; // bl
  __int64 v7; // rcx
  void *v8; // rdi
  void **Attached; // rax

  result = operator==(a2, (char *)this + 72);
  v6 = 0;
  if ( result )
  {
    v7 = *((_QWORD *)this + 14);
    v8 = 0LL;
    if ( v7 )
    {
      Attached = (void **)InputSite::GetAttachedObject<LegacyInputSinkData>(v7);
      if ( Attached )
        v8 = *Attached;
    }
    if ( a3 == v8 )
      return 1;
    if ( a3 )
    {
      if ( v8 )
        return (*(__int64 (__fastcall **)(DWMInputTarget *, void *))(*(_QWORD *)this + 40LL))(this, a3);
    }
    return v6;
  }
  return result;
}
