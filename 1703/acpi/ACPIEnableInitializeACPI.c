/*
 * XREFs of ACPIEnableInitializeACPI @ 0x1C00054A0
 * Callers:
 *     ACPIInitialize @ 0x1C00AA7F0 (ACPIInitialize.c)
 * Callees:
 *     ACPIEnableEnterACPIMode @ 0x1C0005398 (ACPIEnableEnterACPIMode.c)
 *     READ_PM1_CONTROL @ 0x1C0005528 (READ_PM1_CONTROL.c)
 *     WRITE_PM1_CONTROL @ 0x1C00055B0 (WRITE_PM1_CONTROL.c)
 *     WRITE_PM1_ENABLE @ 0x1C00056C0 (WRITE_PM1_ENABLE.c)
 *     READ_PM1_STATUS @ 0x1C0005734 (READ_PM1_STATUS.c)
 *     CLEAR_PM1_STATUS_REGISTER @ 0x1C00057B8 (CLEAR_PM1_STATUS_REGISTER.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C001F1BC (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeClearRegisters @ 0x1C0020454 (ACPIGpeClearRegisters.c)
 */

void *__fastcall ACPIEnableInitializeACPI(__int64 a1, __int64 a2)
{
  void *result; // rax
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = AcpiInformation;
  v3 = a1;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    if ( (READ_PM1_CONTROL(a1, a2) & 1) != 0 )
    {
      if ( (_DWORD)AcpiKsrContext == 1481917259 )
        *((_BYTE *)AcpiInformation + 84) = qword_1C0076AD8 & 1;
    }
    else
    {
      *((_BYTE *)AcpiInformation + 84) = 0;
      ACPIEnableEnterACPIMode(v3);
    }
    CLEAR_PM1_STATUS_REGISTER();
    if ( (READ_PM1_STATUS() & 0xFBEF) != 0 )
    {
      CLEAR_PM1_STATUS_REGISTER();
      READ_PM1_STATUS();
    }
    WRITE_PM1_ENABLE(*((unsigned __int16 *)AcpiInformation + 56));
    if ( v3 )
    {
      ACPIGpeClearRegisters();
      LOBYTE(v8) = 1;
      ACPIGpeEnableDisableEvents(v8);
    }
    v6 = READ_PM1_CONTROL(v5, v4);
    LOBYTE(v7) = 1;
    return (void *)WRITE_PM1_CONTROL(v6 & 0xDFFD, v7);
  }
  return result;
}
