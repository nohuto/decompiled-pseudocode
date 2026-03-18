/*
 * XREFs of ?GetKnownRIMDeviceKind@CBaseInput@@AEBA?AW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@@Z @ 0x1C0019900
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0019E30 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z @ 0x1C001A300 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInput::GetKnownRIMDeviceKind(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  int v4; // edx

  v2 = 0;
  if ( *(_BYTE *)(a2 + 48) )
  {
    if ( *(_BYTE *)(a2 + 48) == 1 )
    {
      return 2;
    }
    else if ( *(_BYTE *)(a2 + 48) == 2 )
    {
      v3 = *(_QWORD *)(a2 + 32);
      if ( (*(_DWORD *)(v3 + 264) & 0x80u) != 0 )
      {
        v4 = *(_DWORD *)(*(_QWORD *)(v3 + 536) + 24LL);
        if ( v4 > 0 )
        {
          if ( v4 > 4 )
          {
            if ( v4 > 6 )
            {
              if ( v4 == 7 )
                return 4;
            }
            else
            {
              return 5;
            }
          }
          else
          {
            return 3;
          }
        }
      }
    }
  }
  else
  {
    return 1;
  }
  return v2;
}
