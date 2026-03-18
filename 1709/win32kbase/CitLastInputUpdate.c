/*
 * XREFs of CitLastInputUpdate @ 0x1C0022F10
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0011110 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0022F64 (-CitpLastInputUpdate@@YAXEI@Z.c)
 */

void __fastcall CitLastInputUpdate(int a1, unsigned int a2)
{
  int v2; // ecx
  int v3; // ecx
  unsigned __int8 v4; // al
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v5 = v3 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 6;
          if ( v7 )
          {
            if ( v7 == 2 )
              v4 = 8;
            else
              v4 = 0;
          }
          else
          {
            v4 = 4;
          }
        }
        else
        {
          v4 = 32;
        }
      }
      else
      {
        v4 = 16;
      }
    }
    else
    {
      v4 = 2;
    }
  }
  else
  {
    v4 = 1;
  }
  CitpLastInputUpdate(v4, a2);
}
