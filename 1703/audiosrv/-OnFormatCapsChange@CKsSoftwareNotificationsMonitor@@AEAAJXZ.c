/*
 * XREFs of ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800A3D34
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x1800A4060 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x18009D148 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  BOOL v2; // edi
  unsigned int i; // ebx
  unsigned __int16 *v4; // rax
  int v5; // r8d
  int v6; // ecx
  unsigned int v8; // [rsp+38h] [rbp-49h] BYREF
  __int64 v9; // [rsp+40h] [rbp-41h] BYREF
  __int64 v10; // [rsp+48h] [rbp-39h] BYREF
  LPVOID v11; // [rsp+50h] [rbp-31h] BYREF
  __int64 v12; // [rsp+58h] [rbp-29h] BYREF
  int v13; // [rsp+60h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-19h] BYREF
  __int64 v15; // [rsp+70h] [rbp-11h] BYREF
  PROPVARIANT pvar; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int16 *v17; // [rsp+80h] [rbp-1h]
  __int64 v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  _DWORD v20[6]; // [rsp+98h] [rbp+17h] BYREF
  _DWORD v21[6]; // [rsp+B0h] [rbp+2Fh] BYREF

  v19 = -2LL;
  v15 = 0LL;
  v11 = 0LL;
  v2 = *((_DWORD *)this + 2) != 0;
  v12 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 4) + 96LL))(*((_QWORD *)this + 4), &v15) >= 0
    && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v15 + 64LL))(v15, &v11) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v13) >= 0
    && (*(int (__fastcall **)(_QWORD, BOOL, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v2,
         1879048207LL,
         &v12) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 24LL))(v12, &v8) >= 0 )
  {
    for ( i = 0; i < v8; ++i )
    {
      v10 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, i, &v10) >= 0 )
      {
        v9 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, 0LL, &v9) >= 0 )
        {
          v20[0] = 590439624;
          v20[1] = 1283267372;
          v20[2] = 1907779772;
          v20[3] = 1730509416;
          v20[4] = 1;
          pvar = 0LL;
          v17 = 0LL;
          v18 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(v9, v20, &pvar) >= 0
            && (_WORD)pvar == 31 )
          {
            v4 = v17;
            do
            {
              v5 = *(unsigned __int16 *)((char *)v4 + (_BYTE *)v11 - (_BYTE *)v17);
              v6 = *v4 - v5;
              if ( v6 )
                break;
              ++v4;
            }
            while ( v5 );
            if ( !v6 )
            {
              v21[0] = -1702713381;
              v21[1] = 1102331579;
              v21[2] = -1223116157;
              v21[3] = -65530063;
              v21[4] = 1;
              PropVariantClear(&pvar);
              if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(v9, v21, &pvar) >= 0
                && (_WORD)pvar == 19
                && (_DWORD)v17 == v13 )
              {
                pv = 0LL;
                if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v10 + 40LL))(v10, &pv) >= 0 )
                {
                  CPolicyConfig::RefreshConnectorFormats((const unsigned __int16 *)pv);
                  CoTaskMemFree(pv);
                }
                PropVariantClear(&pvar);
              }
            }
          }
          PropVariantClear(&pvar);
        }
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( v11 )
  {
    CoTaskMemFree(v11);
    v11 = 0LL;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return 0LL;
}
