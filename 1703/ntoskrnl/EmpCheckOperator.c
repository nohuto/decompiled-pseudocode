/*
 * XREFs of EmpCheckOperator @ 0x1405C1258
 * Callers:
 *     EmCpuMatchCallback @ 0x1405C1190 (EmCpuMatchCallback.c)
 *     EmMatchDate @ 0x140684150 (EmMatchDate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmpCheckOperator(unsigned __int8 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v5; // r10d
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx

  v3 = 0;
  v5 = *a1 - (unsigned __int8)asc_1402983E4[0];
  if ( !v5 )
    v5 = a1[1] - (unsigned __int8)asc_1402983E4[1];
  if ( !v5 )
    goto LABEL_4;
  v7 = *a1 - (unsigned __int8)asc_1402B2CDC[0];
  if ( !v7 )
  {
    v7 = a1[1] - (unsigned __int8)asc_1402B2CDC[1];
    if ( !v7 )
      v7 = a1[2] - (unsigned __int8)asc_1402B2CDC[2];
  }
  if ( v7 )
  {
    v8 = *a1 - (unsigned __int8)asc_1402B2CE0[0];
    if ( !v8 )
    {
      v8 = a1[1] - (unsigned __int8)asc_1402B2CE0[1];
      if ( !v8 )
        v8 = a1[2] - (unsigned __int8)asc_1402B2CE0[2];
    }
    if ( !v8 )
      goto LABEL_52;
    v9 = *a1 - (unsigned __int8)asc_1402B2CE4[0];
    if ( !v9 )
    {
      v9 = a1[1] - (unsigned __int8)asc_1402B2CE4[1];
      if ( !v9 )
        v9 = a1[2] - (unsigned __int8)asc_1402B2CE4[2];
    }
    if ( !v9 )
      goto LABEL_52;
    v10 = *a1 - (unsigned __int8)asc_1402B2CE8[0];
    if ( !v10 )
    {
      v10 = a1[1] - (unsigned __int8)asc_1402B2CE8[1];
      if ( !v10 )
        v10 = a1[2] - (unsigned __int8)asc_1402B2CE8[2];
    }
    if ( v10 )
    {
      v11 = *a1 - (unsigned __int8)asc_1402B2CEC[0];
      if ( !v11 )
        v11 = a1[1] - (unsigned __int8)asc_1402B2CEC[1];
      if ( v11 )
      {
        v12 = *a1 - (unsigned __int8)asc_1402B2CF0[0];
        if ( !v12 )
        {
          v12 = a1[1] - (unsigned __int8)asc_1402B2CF0[1];
          if ( !v12 )
            v12 = a1[2] - (unsigned __int8)asc_1402B2CF0[2];
        }
        if ( !v12 )
          goto LABEL_51;
        v13 = *a1 - (unsigned __int8)asc_1402B2CF4[0];
        if ( !v13 )
        {
          v13 = a1[1] - (unsigned __int8)asc_1402B2CF4[1];
          if ( !v13 )
            v13 = a1[2] - (unsigned __int8)asc_1402B2CF4[2];
        }
        if ( v13 )
        {
          v14 = *a1 - (unsigned __int8)asc_1402B2CF8[0];
          if ( !v14 )
            v14 = a1[1] - (unsigned __int8)asc_1402B2CF8[1];
          if ( v14 )
          {
            v15 = *a1 - (unsigned __int8)asc_1402B2CFC[0];
            if ( !v15 )
            {
              v15 = a1[1] - (unsigned __int8)asc_1402B2CFC[1];
              if ( !v15 )
                v15 = a1[2] - (unsigned __int8)asc_1402B2CFC[2];
            }
            if ( !v15 )
              goto LABEL_50;
            v16 = *a1 - (unsigned __int8)asc_1402B2D00[0];
            if ( !v16 )
            {
              v16 = a1[1] - (unsigned __int8)asc_1402B2D00[1];
              if ( !v16 )
                v16 = a1[2] - (unsigned __int8)asc_1402B2D00[2];
            }
            if ( v16 )
            {
              v17 = *a1 - (unsigned __int8)asc_1402B2D04[0];
              if ( !v17 )
                v17 = a1[1] - (unsigned __int8)asc_1402B2D04[1];
              if ( !v17 )
                return 1;
            }
            else
            {
LABEL_50:
              LOBYTE(v3) = a2 >= a3;
            }
          }
          else
          {
            LOBYTE(v3) = a2 > a3;
          }
        }
        else
        {
LABEL_51:
          LOBYTE(v3) = a2 <= a3;
        }
      }
      else
      {
        LOBYTE(v3) = a2 < a3;
      }
    }
    else
    {
LABEL_52:
      LOBYTE(v3) = a2 != a3;
    }
  }
  else
  {
LABEL_4:
    LOBYTE(v3) = a2 == a3;
  }
  return v3;
}
