/*
 * XREFs of ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C0032DCC
 * Callers:
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C008C180 (NtDCompositionCreateAndBindSharedSection.c)
 * Callees:
 *     ?InitializeSection@CSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C002A3F4 (-InitializeSection@CSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002F768 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateAndBindSharedSection(
        DirectComposition::CApplicationChannel *this,
        int a2,
        union _LARGE_INTEGER a3,
        void **a4)
{
  unsigned __int64 v5; // rcx
  union _LARGE_INTEGER *v8; // rbx
  int v9; // edi

  v5 = (unsigned int)(a2 - 1);
  if ( a2 && v5 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v8 = *(union _LARGE_INTEGER **)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 && (*(unsigned __int8 (__fastcall **)(union _LARGE_INTEGER *, __int64))(v8->QuadPart + 120))(v8, 118LL) )
  {
    v9 = DirectComposition::CSharedSectionMarshaler::InitializeSection(v8, a3, a4);
    if ( v9 >= 0 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
        this,
        (struct DirectComposition::CResourceMarshaler *)v8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
