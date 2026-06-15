/*
 * XREFs of ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x180008EC0
 * Callers:
 *     VADServerUserSessionChanged @ 0x180008AC4 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?GetDeviceID@CVolumeStrip@@UEBAPEBGXZ @ 0x1800091B0 (-GetDeviceID@CVolumeStrip@@UEBAPEBGXZ.c)
 *     std::_Pass_fn__lambda_823040ae01d5059dfb369ac1bb9874b3__0_ @ 0x180009548 (std--_Pass_fn__lambda_823040ae01d5059dfb369ac1bb9874b3__0_.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x1800A0B54 (WPP_SF_qS.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1800A6B0C (-erase@-$vector@V-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

void __fastcall CVolumeProvider::NotifyNewAudioProtocol(CVolumeProvider *this, unsigned int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  CVolumeStrip **v5; // r15
  CVolumeStrip **v6; // rdi
  _DWORD **v7; // rbx
  CAudioSessionManager *v8; // r10
  __int64 (*v9)(void); // rax
  const unsigned __int16 *DeviceID; // rax
  CVolumeStrip *v11; // rbx
  __int64 v12; // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-10h] BYREF
  char v14; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+48h] BYREF
  int v16; // [rsp+90h] [rbp+50h] BYREF

  v16 = a3;
  v15 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_47f4b705a74e3dc9170912854ed06807_Traceguids, v15);
  }
  v5 = (CVolumeStrip **)*((_QWORD *)this + 8);
  v6 = (CVolumeStrip **)*((_QWORD *)this + 7);
  v13[0] = &v15;
  v13[1] = &v16;
  v7 = *(_DWORD ***)std::_Pass_fn__lambda_823040ae01d5059dfb369ac1bb9874b3__0_(&v14, v13);
  if ( v6 != v5 )
  {
    do
    {
      v9 = *(__int64 (**)(void))(*(_QWORD *)*v6 + 32LL);
      if ( (char *)v9 == (char *)CVolumeStrip::GetDeviceID )
        DeviceID = CVolumeStrip::GetDeviceID(*v6);
      else
        DeviceID = (const unsigned __int16 *)v9();
      if ( (unsigned int)GetSessionIdFromEndpointId(DeviceID) == **v7
        && (*(unsigned int (__fastcall **)(CVolumeStrip *))(*(_QWORD *)*v6 + 24LL))(*v6) != *v7[1] )
      {
        break;
      }
      ++v6;
    }
    while ( v6 != v5 );
    v8 = WPP_GLOBAL_Control;
  }
  if ( v6 != *((CVolumeStrip ***)this + 8) )
  {
    if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v8 + 7) & 0x10000) != 0
      && *((_BYTE *)v8 + 25) >= 4u )
    {
      v11 = *v6;
      v12 = (*(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)*v6 + 32LL))(*v6);
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13,
        (unsigned int)&WPP_47f4b705a74e3dc9170912854ed06807_Traceguids,
        (_DWORD)v11,
        v12);
    }
    (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)*v6 + 264LL))(*v6);
    std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::erase((char *)this + 56, &v14, v6);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
