/*
 * XREFs of ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x18006E900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_qS @ 0x180066790 (WPP_SF_qS.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18006F498 (-erase@-$vector@V-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 */

void __fastcall CVolumeProvider::NotifyNewAudioProtocol(CVolumeProvider *this, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  CAudioDGProcess *v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rax
  int SessionIdFromEndpointId; // eax
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  char v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h]
  int v15; // [rsp+70h] [rbp+18h]

  v15 = a3;
  v14 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_d150c8ede9573e33824fdb490ef726ad_Traceguids, v14);
    v5 = WPP_GLOBAL_Control;
  }
  v6 = (__int64 *)*((_QWORD *)this + 8);
  v7 = (__int64 *)*((_QWORD *)this + 7);
  if ( v7 != v6 )
  {
    do
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v7 + 32LL))(*v7);
      SessionIdFromEndpointId = GetSessionIdFromEndpointId(v8);
      if ( SessionIdFromEndpointId == v14 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v7 + 24LL))(*v7);
        if ( v10 != v15 )
          break;
      }
      ++v7;
    }
    while ( v7 != v6 );
    v5 = WPP_GLOBAL_Control;
  }
  if ( v7 != *((__int64 **)this + 8) )
  {
    if ( v5 != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v5 + 7) & 0x10000) != 0
      && *((_BYTE *)v5 + 25) >= 4u )
    {
      v11 = *v7;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v7 + 32LL))(*v7);
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        (__int64)&WPP_d150c8ede9573e33824fdb490ef726ad_Traceguids,
        v11,
        v12);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v7 + 264LL))(*v7);
    std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::erase((char *)this + 56, &v13, v7);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
