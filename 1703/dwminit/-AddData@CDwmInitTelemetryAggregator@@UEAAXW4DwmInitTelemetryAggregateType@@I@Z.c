/*
 * XREFs of ?AddData@CDwmInitTelemetryAggregator@@UEAAXW4DwmInitTelemetryAggregateType@@I@Z @ 0x180001320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDwmInitTelemetryAggregator::AddData(_DWORD *a1, int a2, int a3)
{
  int v3; // edx
  int v4; // edx

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          a1[5] += a3;
      }
      else
      {
        a1[4] += a3;
      }
    }
    else
    {
      a1[3] += a3;
    }
  }
  else
  {
    a1[2] += a3;
  }
}
