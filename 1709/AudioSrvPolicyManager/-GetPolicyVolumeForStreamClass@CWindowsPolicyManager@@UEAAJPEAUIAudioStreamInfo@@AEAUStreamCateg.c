/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180005540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x180012E1C (-GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetPolicyVolumeForStreamClass(
        CWindowsPolicyManager *this,
        struct IAudioStreamInfo *a2,
        struct StreamCategoryPolicyVolumes *a3)
{
  bool v6; // bl
  __int64 v7; // rbx
  bool v8; // zf
  struct CProcess *v9; // rbx
  struct CProcess *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  *((_DWORD *)a3 + 3) = 1065353216;
  v6 = 0;
  if ( (int)CApplicationManager::GetProcessFromStreamInfo(this, a2, &v11) >= 0 )
  {
    v7 = *((_QWORD *)v11 + 34);
    if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 64LL))(a2) )
      v8 = *(_DWORD *)(v7 + 576) == 0;
    else
      v8 = *(_DWORD *)(v7 + 580) == 0;
    v6 = !v8;
  }
  *((_BYTE *)a3 + 8) = v6;
  v9 = v11;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v9 + 32LL))(v9);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
    }
    v11 = 0LL;
  }
  return (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *, struct StreamCategoryPolicyVolumes *, char *, char *))(*(_QWORD *)(*((_QWORD *)this + 5) + 16LL) + 16LL))(
           *((_QWORD *)this + 5) + 16LL,
           a2,
           a3,
           (char *)a3 + 4,
           (char *)a3 + 16);
}
