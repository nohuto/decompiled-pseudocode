/*
 * XREFs of ?GetRoutingPolicy@PhoneCallAudio@@UEAAJPEAW4_TelephonyRoutingPolicy@@@Z @ 0x1800FA980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::GetRoutingPolicy(PhoneCallAudio *this, enum _TelephonyRoutingPolicy *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v2 = 0;
  if ( a2 )
  {
    v3 = *((_DWORD *)this + 30) - 2;
    if ( v3 )
    {
      v4 = v3 - 2;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 == 1 )
            *(_DWORD *)a2 = 1;
          else
            return (unsigned int)-2147024809;
        }
        else
        {
          *(_DWORD *)a2 = 5;
        }
      }
      else
      {
        *(_DWORD *)a2 = 0;
      }
    }
    else
    {
      *(_DWORD *)a2 = 7;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
