/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180009580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetPolicyVolumeForStreamClass(
        CWindowsPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2,
        struct StreamCategoryPolicyVolumes *a3)
{
  *((_DWORD *)a3 + 3) = 1065353216;
  *((_BYTE *)a3 + 8) = 0;
  return (*(__int64 (__fastcall **)(__int64, struct IAudioStreamPolicyVolumeClient *, struct StreamCategoryPolicyVolumes *, char *, char *))(*(_QWORD *)(*((_QWORD *)this + 5) + 16LL) + 16LL))(
           *((_QWORD *)this + 5) + 16LL,
           a2,
           a3,
           (char *)a3 + 4,
           (char *)a3 + 16);
}
