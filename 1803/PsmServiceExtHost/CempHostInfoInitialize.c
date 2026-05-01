/*
 * XREFs of CempHostInfoInitialize @ 0x180028804
 * Callers:
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180028414 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800288A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall CempHostInfoInitialize(
        unsigned __int16 *a1,
        PSID SourceSid,
        int a3,
        int a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  __int64 result; // rax

  memset_0(a6, 0, 0x228uLL);
  StringCchCopyW(a6, 0xE8uLL, a1);
  RtlCopySid(0x44u, a6 + 232, SourceSid);
  result = a5;
  *((_DWORD *)a6 + 133) = a3;
  *((_QWORD *)a6 + 68) = a5;
  *((_DWORD *)a6 + 134) = a4;
  return result;
}
