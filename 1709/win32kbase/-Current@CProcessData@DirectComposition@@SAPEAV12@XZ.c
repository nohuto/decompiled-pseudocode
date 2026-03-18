/*
 * XREFs of ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0023A90
 * Callers:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0023984 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C007FFB4 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0085BA0 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C009641C (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0099508 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C009B7C8 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x1C013E6C0 (NtDCompositionEnableMMCSS.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CProcessData *DirectComposition::CProcessData::Current(void)
{
  __int64 v0; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v0 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process )
    return *(struct DirectComposition::CProcessData **)(CurrentProcessWin32Process + 256);
  return (struct DirectComposition::CProcessData *)v0;
}
