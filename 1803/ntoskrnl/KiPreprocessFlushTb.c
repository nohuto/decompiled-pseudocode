/*
 * XREFs of KiPreprocessFlushTb @ 0x140034B20
 * Callers:
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140037AE0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     KeFlushEntireTb @ 0x14017D5B0 (KeFlushEntireTb.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140037D50 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIsFlushEntire @ 0x14024519C (KiIsFlushEntire.c)
 */

char __fastcall KiPreprocessFlushTb(char a1, unsigned int a2, int a3, _BYTE *a4, unsigned __int8 *a5)
{
  char result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE *v8; // r11
  signed __int32 v9[8]; // [rsp+0h] [rbp-28h] BYREF

  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_2;
  if ( (HvlEnlightenments & 2) != 0 || a1 && (HvlEnlightenments & 0x800000) != 0 && (unsigned __int8)KiIsFlushEntire(a2) )
    goto LABEL_10;
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
  {
LABEL_2:
    *a4 = 0;
    return 0;
  }
  if ( a3 )
  {
LABEL_10:
    *a4 = 1;
    return 0;
  }
  else
  {
    _InterlockedOr(v9, 0);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    *a5 = CurrentIrql;
    if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                         CurrentPrcb,
                         &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors) )
    {
      __writecr8(*a5);
      result = 0;
      *v8 = 1;
    }
    else
    {
      *v8 = 0;
      return 1;
    }
  }
  return result;
}
