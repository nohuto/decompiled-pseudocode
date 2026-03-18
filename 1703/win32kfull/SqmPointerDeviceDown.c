/*
 * XREFs of SqmPointerDeviceDown @ 0x1C01A7680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SqmPointerDeviceDown(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  result = gSqmIsOptedIn;
  if ( gSqmIsOptedIn )
  {
    v2 = *(_DWORD *)(a1 + 24);
    if ( (unsigned int)(v2 - 1) > 3 )
    {
      result = (unsigned int)(v2 - 5);
      if ( (unsigned int)result > 1 )
        return result;
      if ( ++gSqmPenDownCount == 1 )
      {
        v8 = 8843LL;
      }
      else
      {
        result = gSqmPenDownCount - 2;
        if ( gSqmPenDownCount == 2 )
        {
          v8 = 8844LL;
        }
        else
        {
          if ( gSqmPenDownCount != 3 )
            return result;
          v8 = 8845LL;
        }
      }
    }
    else
    {
      result = *(unsigned int *)(a1 + 1576);
      if ( (unsigned int)result > 0xC8 )
        return result;
      if ( (_DWORD)result == 200 )
      {
        v8 = 8842LL;
      }
      else if ( (unsigned int)result > 8 )
      {
        v9 = result - 9;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 4;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  result = (unsigned int)(v13 - 4);
                  if ( (_DWORD)result )
                  {
                    if ( (_DWORD)result != 1 )
                      return result;
                    v8 = 8841LL;
                  }
                  else
                  {
                    v8 = 8840LL;
                  }
                }
                else
                {
                  v8 = 8839LL;
                }
              }
              else
              {
                v8 = 8838LL;
              }
            }
            else
            {
              v8 = 8837LL;
            }
          }
          else
          {
            v8 = 8836LL;
          }
        }
        else
        {
          v8 = 8835LL;
        }
      }
      else if ( (_DWORD)result == 8 )
      {
        v8 = 8834LL;
      }
      else
      {
        v3 = result - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
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
                  result = (unsigned int)(v7 - 1);
                  if ( (_DWORD)result )
                  {
                    if ( (_DWORD)result != 1 )
                      return result;
                    v8 = 8833LL;
                  }
                  else
                  {
                    v8 = 8832LL;
                  }
                }
                else
                {
                  v8 = 8831LL;
                }
              }
              else
              {
                v8 = 8830LL;
              }
            }
            else
            {
              v8 = 8829LL;
            }
          }
          else
          {
            v8 = 8828LL;
          }
        }
        else
        {
          v8 = 8827LL;
        }
      }
    }
    return WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v8, 1LL);
  }
  return result;
}
