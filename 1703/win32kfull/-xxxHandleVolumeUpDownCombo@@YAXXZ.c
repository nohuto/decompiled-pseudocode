/*
 * XREFs of ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01C4B1C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     UserBeep @ 0x1C01963EC (UserBeep.c)
 *     ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01C4B9C (-xxxVolumeUpDownComboSupported@@YAHXZ.c)
 */

void xxxHandleVolumeUpDownCombo(void)
{
  LARGE_INTEGER PerformanceCounter; // rax
  int v1; // r8d

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v1 = guVolComboCount;
  if ( guVolComboCount )
  {
    if ( PerformanceCounter.QuadPart <= gliVolComboTicks )
      goto LABEL_5;
    v1 = 0;
  }
  gliVolComboTicks = PerformanceCounter.QuadPart + 2LL * gliQpcFreq;
LABEL_5:
  guVolComboCount = v1 + 1;
  if ( (unsigned int)(v1 + 1) >= 3 )
  {
    if ( (unsigned int)xxxVolumeUpDownComboSupported() )
    {
      UserBeep(494, 200);
      xxxDisplayDiagBlackScreenDetected(2u);
    }
    guVolComboCount = 0;
  }
}
