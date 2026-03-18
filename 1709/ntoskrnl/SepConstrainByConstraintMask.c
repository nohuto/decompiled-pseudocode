/*
 * XREFs of SepConstrainByConstraintMask @ 0x140067BF4
 * Callers:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

void __fastcall SepConstrainByConstraintMask(int a1, int a2, char *a3, char *a4, bool *a5, unsigned int a6, _BYTE *a7)
{
  int v10; // r9d
  signed __int64 v11; // r10
  bool *v12; // rdx
  __int64 v13; // rsi
  int v14; // ecx

  *a7 = 0;
  if ( a1 != -1 )
  {
    if ( a6 )
    {
      v11 = a4 - a3;
      v12 = a5;
      v13 = a6;
      do
      {
        v14 = a1 & *(_DWORD *)a3;
        if ( v14 != *(_DWORD *)a3 )
        {
          *a7 = 1;
          *(_DWORD *)a3 = v14;
          if ( (a2 & 0x2000000) != 0 )
          {
            if ( v14 )
            {
              *(_DWORD *)&a3[v11] = 0;
              if ( a5 )
                *v12 = 1;
            }
            else
            {
              *(_DWORD *)&a3[v11] = -1073741790;
              if ( a5 )
                *v12 = 0;
            }
          }
          else
          {
            *(_DWORD *)&a3[v11] = -1073741790;
            if ( a5 )
              *v12 = *(_DWORD *)a3 != 0;
          }
        }
        a3 += 4;
        ++v12;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v10 = a1 & *(_DWORD *)a3;
      if ( v10 != *(_DWORD *)a3 )
      {
        *a7 = 1;
        *(_DWORD *)a3 = v10;
        if ( (a2 & 0x2000000) != 0 )
        {
          if ( v10 )
          {
            *(_DWORD *)a4 = 0;
            if ( a5 )
              *a5 = 1;
          }
          else
          {
            *(_DWORD *)a4 = -1073741790;
            if ( a5 )
              *a5 = 0;
          }
        }
        else
        {
          *(_DWORD *)a4 = -1073741790;
          if ( a5 )
            *a5 = *(_DWORD *)a3 != 0;
        }
      }
    }
  }
}
