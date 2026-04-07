/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031238
 * Callers:
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180014B28 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18003EC00 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180066468 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?GetAppName@CDwmWinSqm@@QEAAJPEAVCWindowData@@PEAG_K12@Z @ 0x18007D678 (-GetAppName@CDwmWinSqm@@QEAAJPEAVCWindowData@@PEAG_K12@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007D97C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800811A8 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x180031274 (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}
