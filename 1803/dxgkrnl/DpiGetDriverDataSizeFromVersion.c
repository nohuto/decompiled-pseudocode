/*
 * XREFs of DpiGetDriverDataSizeFromVersion @ 0x1C01FDD48
 * Callers:
 *     DpiInitializeEx @ 0x1C0205138 (DpiInitializeEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDriverDataSizeFromVersion(int a1, unsigned int a2, int a3, int *a4)
{
  int v4; // eax

  *a4 = a3;
  if ( !a1 )
  {
    if ( a2 >= 0x2001 )
    {
      if ( a2 >= 0x2002 )
      {
        if ( a2 >= 0x2003 )
        {
          if ( a2 >= 0x3001 )
          {
            if ( a2 >= 0x3002 )
            {
              if ( a2 >= 0x3004 )
              {
                if ( a2 >= 0x3005 )
                {
                  if ( a2 >= 0x300D )
                  {
                    if ( a2 >= 0x4000 )
                    {
                      if ( a2 >= 0x4002 )
                      {
                        if ( a2 >= 0x5000 )
                        {
                          if ( a2 >= 0x6000 )
                          {
                            if ( a2 >= 0x6002 )
                            {
                              if ( a2 >= 0x7000 )
                              {
                                if ( a2 >= 0x7002 )
                                {
                                  if ( a2 >= 0x7003 )
                                  {
                                    if ( a2 >= 0x7004 )
                                    {
                                      if ( a2 >= 0x8000 )
                                      {
                                        if ( a2 >= 0x9000 )
                                        {
                                          if ( a2 >= 0x9002 )
                                          {
                                            if ( a2 >= 0x9003 )
                                            {
                                              if ( a2 >= 0x9005 )
                                              {
                                                v4 = a3;
                                                if ( a2 < 0x9006 )
                                                  v4 = 1144;
                                                *a4 = v4;
                                              }
                                              else
                                              {
                                                *a4 = 1128;
                                              }
                                            }
                                            else
                                            {
                                              *a4 = 1112;
                                            }
                                          }
                                          else
                                          {
                                            *a4 = 1104;
                                          }
                                        }
                                        else
                                        {
                                          *a4 = 1056;
                                        }
                                      }
                                      else
                                      {
                                        *a4 = 1032;
                                      }
                                    }
                                    else
                                    {
                                      *a4 = 1008;
                                    }
                                  }
                                  else
                                  {
                                    *a4 = 952;
                                  }
                                }
                                else
                                {
                                  *a4 = 936;
                                }
                              }
                              else
                              {
                                *a4 = 880;
                              }
                            }
                            else
                            {
                              *a4 = 864;
                            }
                          }
                          else
                          {
                            *a4 = 832;
                          }
                        }
                        else
                        {
                          *a4 = 712;
                        }
                      }
                      else
                      {
                        *a4 = 696;
                      }
                    }
                    else
                    {
                      *a4 = 664;
                    }
                  }
                  else
                  {
                    *a4 = 656;
                  }
                }
                else
                {
                  *a4 = 632;
                }
              }
              else
              {
                *a4 = 624;
              }
            }
            else
            {
              *a4 = 576;
            }
          }
          else
          {
            *a4 = 568;
          }
        }
        else
        {
          *a4 = 552;
        }
      }
      else
      {
        *a4 = 544;
      }
    }
    else
    {
      *a4 = 496;
    }
  }
  return 0LL;
}
