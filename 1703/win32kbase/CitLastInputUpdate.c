/*
 * XREFs of CitLastInputUpdate @ 0x1C0156640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CitLastInputUpdate(int a1, unsigned int a2, __int16 a3)
{
  unsigned __int8 v3; // r9
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v3 = 0;
  if ( qword_1C018E8C8 )
    *((_WORD *)qword_1C018E8C8 + 502) = a3;
  v4 = a1 - 1;
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
          v8 = v7 - 6;
          if ( v8 )
          {
            if ( v8 == 2 )
              v3 = 8;
          }
          else
          {
            v3 = 4;
          }
        }
        else
        {
          v3 = 32;
        }
      }
      else
      {
        v3 = 16;
      }
    }
    else
    {
      v3 = 2;
    }
  }
  else
  {
    v3 = 1;
  }
  CitpLastInputUpdate(v3, a2);
}
