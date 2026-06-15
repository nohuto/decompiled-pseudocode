/*
 * XREFs of ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x18002BCA0
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x18002BDE0 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ?OnEndpointLockedForExclusiveUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800A68A0 (-OnEndpointLockedForExclusiveUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSharedStreamGroupProxy::DeleteAuxiliaryInputStream(CSharedStreamGroupProxy *this)
{
  void *v2; // rsi
  bool v3; // zf
  __int64 v4; // rbx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  DWORD LastError; // ebx
  _OWORD v11[6]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+28h] BYREF

  if ( *((_QWORD *)this + 43) )
  {
    v3 = *((_BYTE *)this + 288) == 0;
    v4 = *((_QWORD *)this + 45);
    v13 = v4;
    if ( !v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
      *((_BYTE *)this + 288) = 0;
    }
    v12 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 88LL))(v4, &v12) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, *((_QWORD *)this + 43));
    memset(v11, 0, sizeof(v11));
    v5 = v11[1];
    *(_OWORD *)((char *)this + 296) = v11[0];
    v6 = v11[2];
    *(_OWORD *)((char *)this + 312) = v5;
    v7 = v11[3];
    *(_OWORD *)((char *)this + 328) = v6;
    v8 = v11[4];
    *(_OWORD *)((char *)this + 344) = v7;
    v9 = v11[5];
    *(_OWORD *)((char *)this + 360) = v8;
    *(_OWORD *)((char *)this + 376) = v9;
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v12);
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v13);
  }
  v2 = (void *)*((_QWORD *)this + 49);
  if ( v2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 49) = 0LL;
}
