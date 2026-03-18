/*
 * XREFs of ?IsRawMouseSubscriber@CInputDest@@QEBA_NXZ @ 0x1C0109B00
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::IsRawMouseSubscriber(CInputDest *this)
{
  int v1; // eax

  if ( *((_DWORD *)this + 21) == 1 )
  {
    return (*(_DWORD *)(*((_QWORD *)this + 9) + 124LL) & 2u) >> 1;
  }
  else
  {
    if ( *((_DWORD *)this + 21) == 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, (unsigned int)(*((_DWORD *)this + 21) - 1));
    LOBYTE(v1) = 0;
  }
  return v1;
}
