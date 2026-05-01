/*
 * XREFs of ?IsQuirkEnabled@CImmersiveApp@@UEAAHW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0005@@@Z @ 0x18009DBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::IsQuirkEnabled(_BYTE *a1, int a2)
{
  unsigned int v2; // r9d
  char v3; // r8
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                if ( v9 == 1 )
                  v3 = a1[629];
              }
              else
              {
                v3 = a1[628];
              }
            }
            else
            {
              v3 = a1[626];
            }
          }
          else
          {
            v3 = a1[625];
          }
        }
        else
        {
          v3 = a1[624];
        }
      }
      else
      {
        v3 = a1[623];
      }
    }
    else
    {
      v3 = a1[621];
    }
  }
  else
  {
    v3 = a1[620];
  }
  LOBYTE(v2) = v3 != 0;
  return v2;
}
