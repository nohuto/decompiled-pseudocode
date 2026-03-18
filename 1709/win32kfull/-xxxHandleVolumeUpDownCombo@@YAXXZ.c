/*
 * XREFs of ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01C6E80
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     UserBeep @ 0x1C01A1E74 (UserBeep.c)
 *     ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01C6F00 (-xxxVolumeUpDownComboSupported@@YAHXZ.c)
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
