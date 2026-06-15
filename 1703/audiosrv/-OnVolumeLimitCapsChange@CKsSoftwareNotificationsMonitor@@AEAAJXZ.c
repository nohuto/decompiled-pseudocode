/*
 * XREFs of ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800A4080
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x1800A4060 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800887E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Template_p @ 0x1800A4280 (Template_p.c)
 *     Template_pq @ 0x1800A42D8 (Template_pq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnVolumeLimitCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  signed int v7; // eax
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v14[240]; // [rsp+5Ch] [rbp-ACh] BYREF
  int v15; // [rsp+23Ch] [rbp+134h]

  v12[1] = -2LL;
  pv = 0LL;
  v12[0] = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
    Template_p(this, &EVT_VOLUME_LIMIT_CHANGED_ENTER, this);
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), &v10);
  if ( v4 >= 0 )
  {
    if ( v10 )
    {
      v4 = -2147467259;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v11);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 4) + 96LL))(*((_QWORD *)this + 4), v12);
        if ( v4 >= 0 )
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)v12[0] + 64LL))(v12[0], &pv);
          if ( v4 >= 0 )
          {
            v5 = -1LL;
            do
              ++v5;
            while ( *((_WORD *)pv + v5) );
            v15 = v11;
            v13 = 2 * v5 + 2;
            v4 = StringCbCopyW((char *)v14, 0x1E0uLL, (char *)pv);
            if ( v4 >= 0 )
            {
              if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
                Template_p(v3, &EVT_VOLUME_LIMIT_PUBLISH_WNF_AVLC_STATE, this);
              v6 = RtlPublishWnfStateData(WNF_AVLC_DRIVER_REQUEST, 0LL, &v13, 488LL, 0LL);
              if ( v6 < 0 )
              {
                v7 = RtlNtStatusToDosError(v6);
                v4 = v7;
                if ( v7 > 0 )
                  v4 = (unsigned __int16)v7 | 0x80070000;
              }
            }
          }
        }
      }
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
    Template_pq(v3, v2, this, (unsigned int)v4);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return (unsigned int)v4;
}
