/*
 * XREFs of ??1CApplicationSubmix@@QEAA@XZ @ 0x1800AEE30
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@PEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@2@@std@@YAXPEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@0@0AEAU?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@0@@Z @ 0x1800AE4E8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicatio.c)
 *     ??$destroy@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@std@@QEAAXPEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@1@@Z @ 0x1800AE734 (--$destroy@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix@@@std@@@std@.c)
 *     ??1?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@QEAA@XZ @ 0x1800AEE04 (--1-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix@@@std@@@std@@QEAA@XZ.c)
 *     ??1CProcessSubmixManager@@UEAA@XZ @ 0x1800AEF14 (--1CProcessSubmixManager@@UEAA@XZ.c)
 *     ??4?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEFF8 (--4-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix@@@std@@@std@@QEAAAEAV.c)
 *     ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800AF180 (-GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixC.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@2@_K1@Z @ 0x1800AF8E8 (-_Change_array@-$vector@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix.c)
 *     ?erase@?$vector@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800AFAD4 (-erase@-$vector@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix@@@std@@.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CApplicationSubmix::~CApplicationSubmix(CApplicationSubmix *this)
{
  __int64 **v1; // rdi
  __int64 **v3; // rbp
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  __int64 *v6; // rsi

  v1 = (__int64 **)*((_QWORD *)this + 5);
  if ( v1 )
  {
    v3 = (__int64 **)*((_QWORD *)this + 6);
    while ( v1 != v3 )
    {
      v4 = *v1;
      if ( *v1 )
      {
        wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(*v1);
        operator delete(v4, (const struct std::nothrow_t *)0x10);
      }
      ++v1;
    }
    std::_Deallocate(*((_QWORD **)this + 5), (__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 5)) >> 3, 8uLL);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  v5 = (__int64 *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 3);
    while ( v5 != v6 )
      wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v5++);
    std::_Deallocate(*((_QWORD **)this + 2), (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) >> 3, 8uLL);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( *(_QWORD *)this )
    CoTaskMemFree(*(LPVOID *)this);
}
