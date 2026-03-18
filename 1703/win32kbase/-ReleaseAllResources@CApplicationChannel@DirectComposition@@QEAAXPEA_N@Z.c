/*
 * XREFs of ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C001D654
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001D0F0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     NtDCompositionReleaseAllResources @ 0x1C0088A50 (NtDCompositionReleaseAllResources.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C001A838 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C001DE08 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseAllResources(
        DirectComposition::CApplicationChannel *this,
        bool *a2)
{
  _QWORD *i; // rbx
  DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rsi
  unsigned __int64 j; // [rsp+40h] [rbp+8h] BYREF

  for ( i = (_QWORD *)((char *)this + 264);
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
                                                    (DirectComposition::CApplicationChannel *)((char *)this + 120),
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
    *a2 = *((_DWORD *)this + 135) != 0;
}
