/*
 * XREFs of sub_1800D08FC @ 0x1800D08FC
 * Callers:
 *     sub_180075C44 @ 0x180075C44 (sub_180075C44.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 */

__int64 __fastcall sub_1800D08FC(__int64 a1)
{
  int InformationProcess; // ebx

  if ( *(_QWORD *)(a1 + 56) == qword_18015BF88 )
  {
    InformationProcess = ZwQueryInformationProcess();
    if ( InformationProcess >= 0 )
    {
      InformationProcess = ZwMapViewOfSection();
      if ( InformationProcess >= 0 )
        *(_QWORD *)(a1 + 184) = 0LL;
      ZwClose();
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)InformationProcess;
}
