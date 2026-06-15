/*
 * XREFs of SearchForHeadphones @ 0x18003C5D0
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x180039894 (ReconsiderSpatialOnComboEndpoints.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     GetContainerId @ 0x18003C818 (GetContainerId.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SearchForHeadphones(__int64 a1, char *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rbx
  HRESULT v12; // edi
  ULONG v13; // edi
  __int64 v14; // rcx
  int ContainerId; // eax
  int v16; // ebx
  char v17; // bl
  __int64 v19; // rax
  ULONG pulRet; // [rsp+28h] [rbp-49h] BYREF
  unsigned int v21; // [rsp+2Ch] [rbp-45h] BYREF
  __int64 v22; // [rsp+30h] [rbp-41h] BYREF
  __int64 v23; // [rsp+38h] [rbp-39h] BYREF
  PROPVARIANT propvarIn[3]; // [rsp+40h] [rbp-31h] BYREF
  PROPERTYKEY v25; // [rsp+58h] [rbp-19h] BYREF
  __int64 v26; // [rsp+78h] [rbp+7h]
  __int64 v27; // [rsp+80h] [rbp+Fh]
  _QWORD v28[2]; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v26 = -2LL;
  *a2 = 0;
  v21 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v21);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x135,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v4,
      pulRet);
    return v5;
  }
  else
  {
    v6 = 0;
    if ( v21 )
    {
      while ( !*a2 )
      {
        v23 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, v6, &v23);
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x13B,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v7,
            pulRet);
          wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v23);
          return v8;
        }
        v22 = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 32LL))(v23, 0LL, &v22);
        v10 = v9;
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x119,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v9,
            pulRet);
        if ( v10 )
          goto LABEL_28;
        pulRet = 10;
        v11 = v22;
        v27 = v22;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        pulRet = 0;
        LOWORD(propvarIn[0]) = 0;
        v25 = PKEY_AudioEndpoint_FormFactor;
        v12 = (*(__int64 (__fastcall **)(__int64, PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
                v11,
                &v25,
                propvarIn);
        if ( v12 >= 0 )
        {
          if ( !LOWORD(propvarIn[0]) )
            v12 = -2147023728;
          if ( v12 >= 0 )
          {
            pulRet = 0;
            if ( LOWORD(propvarIn[0]) )
              v12 = PropVariantToUInt32(propvarIn, &pulRet);
            else
              v12 = -2147023728;
          }
        }
        PropVariantClear(propvarIn);
        if ( v12 == -2147023728 )
        {
          v13 = 10;
          pulRet = 10;
        }
        else
        {
          v13 = pulRet;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        ContainerId = GetContainerId(v14, v22, v28);
        v16 = ContainerId;
        if ( ContainerId < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x11E,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)ContainerId,
            pulRet);
        if ( v16 )
        {
LABEL_28:
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          v17 = 0;
        }
        else
        {
          if ( v13 != 3 )
            goto LABEL_22;
          v19 = v28[0];
          if ( !v28[0] )
            v19 = v28[1] + 1LL;
          if ( v19 )
LABEL_22:
            v17 = 0;
          else
            v17 = 1;
          wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v22);
        }
        *a2 = v17;
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( ++v6 >= v21 )
          return 0LL;
      }
    }
    return 0LL;
  }
}
