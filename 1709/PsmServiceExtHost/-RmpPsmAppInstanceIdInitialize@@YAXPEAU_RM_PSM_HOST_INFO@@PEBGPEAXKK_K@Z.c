/*
 * XREFs of ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x18001F09C
 * Callers:
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000CAA0 (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ?FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000CB94 (-FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000D270 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall RmpPsmAppInstanceIdInitialize(
        wchar_t *Destination,
        wchar_t *Source,
        void *Src,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  ULONG v10; // eax

  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  memset_0(Destination + 232, 0, 0x44uLL);
  v10 = RtlLengthSid(Src);
  memcpy_0(Destination + 232, Src, v10);
  *((_DWORD *)Destination + 134) = a5;
  *((_DWORD *)Destination + 133) = a4;
  *((_QWORD *)Destination + 68) = a6;
}
