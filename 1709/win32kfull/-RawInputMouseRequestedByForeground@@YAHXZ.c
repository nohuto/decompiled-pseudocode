/*
 * XREFs of ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x1C01B98E0
 * Callers:
 *     EditionGetMouseWheelRoutingMode @ 0x1C01BAC60 (EditionGetMouseWheelRoutingMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputMouseRequestedByForeground(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v4 = 0;
  if ( gpqForeground )
  {
    v5 = *(_QWORD *)(gpqForeground + 96LL);
    if ( v5 )
    {
      if ( gForegroundQRawMouseRequested )
        return (unsigned int)IsDesktopApp(*(_QWORD *)(v5 + 400), a2, a3, a4) != 0;
    }
  }
  return v4;
}
