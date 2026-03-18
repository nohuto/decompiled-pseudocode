/*
 * XREFs of ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C0032D18
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0032790 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     NtDCompositionReleaseAllResources @ 0x1C008D8A0 (NtDCompositionReleaseAllResources.c)
 * Callees:
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C00270E4 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C002FD58 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseAllResources(
        DirectComposition::CApplicationChannel *this,
        bool *a2)
{
  _QWORD *i; // rdi
  DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rdi
  unsigned __int64 j; // [rsp+30h] [rbp+8h] BYREF

  for ( i = (_QWORD *)((char *)this + 248);
        (_QWORD *)*i != i;
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          (struct DirectComposition::CResourceMarshaler *)(*i - 248LL)) )
  {
    ;
  }
  for ( j = 0LL;
        DirectComposition::CLinearObjectTableBase::EnumerateObjects(
          (DirectComposition::CApplicationChannel *)((char *)this + 56),
          &j);
        DirectComposition::CApplicationChannel::ReleaseResource(this, j) )
  {
    ;
  }
  j = 0LL;
  while ( 1 )
  {
    v5 = (DirectComposition::CResourceMarshaler *)DirectComposition::CLinearObjectTableBase::EnumerateObjects(
                                                    (DirectComposition::CApplicationChannel *)((char *)this + 112),
                                                    &j);
    v6 = v5;
    if ( !v5 )
      break;
    DirectComposition::CResourceMarshaler::AddRef(v5);
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v6 + 112LL))(
      v6,
      this);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v6);
  }
  if ( a2 )
    *a2 = *((_DWORD *)this + 129) != 0;
}
