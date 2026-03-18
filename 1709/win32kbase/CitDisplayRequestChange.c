/*
 * XREFs of CitDisplayRequestChange @ 0x1C0076ED0
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0076738 (UserPowerInfoCallout.c)
 * Callees:
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1C00231BC (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 */

char __fastcall CitDisplayRequestChange(int a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rbx
  bool v3; // si
  char result; // al

  v1 = qword_1C0193750;
  if ( qword_1C0193750 )
  {
    v3 = a1 != 0;
    result = *((_BYTE *)qword_1C0193750 + 112) & 1;
    if ( (a1 != 0) != result )
    {
      if ( a1 )
      {
        if ( (unsigned int)dword_1C018CF6C < MEMORY[0xFFFFF7800000037C] )
          EtwTelemetryCoverageReport(&off_1C018CF60);
      }
      CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(
        (struct _CIT_IMPACT_CONTEXT *)((char *)v1 + 212),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        a1);
      result = v3 | *((_BYTE *)v1 + 112) & 0xFE;
      *((_BYTE *)v1 + 112) = result;
    }
  }
  return result;
}
