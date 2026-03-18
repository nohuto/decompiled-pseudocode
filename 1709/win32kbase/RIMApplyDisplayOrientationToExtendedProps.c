/*
 * XREFs of RIMApplyDisplayOrientationToExtendedProps @ 0x1C0105840
 * Callers:
 *     RIMApplyTransforms @ 0x1C0105998 (RIMApplyTransforms.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMApplyDisplayOrientationToExtendedProps(int a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // r10d
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // r9d
  int v15; // r9d
  unsigned int v16; // ecx
  unsigned int v17; // ecx

  result = a2[2];
  if ( (_DWORD)result != 2 )
  {
    if ( (_DWORD)result != 3 )
      return result;
    v9 = a2[27];
    if ( (v9 & 2) == 0 )
      goto LABEL_31;
    if ( a1 == 2 )
    {
      v13 = a2[29];
      if ( v13 >= 0x5A )
        result = v13 - 90;
      else
        result = v13 + 270;
    }
    else
    {
      result = (unsigned int)(a1 - 3);
      if ( a1 == 3 )
      {
        v11 = a2[29];
        result = v11 - 180;
        v12 = v11 + 180;
        if ( v11 >= 0xB4 )
          v12 = v11 - 180;
        a2[29] = v12;
        goto LABEL_31;
      }
      if ( a1 != 4 )
      {
LABEL_31:
        if ( (v9 & 4) != 0 && (v9 & 8) != 0 )
        {
          v14 = a1 - 2;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              if ( v15 == 1 )
              {
                v16 = a2[31];
                result = -a2[30];
                a2[31] = result;
                a2[30] = v16;
              }
            }
            else
            {
              a2[30] = -a2[30];
              result = -a2[31];
              a2[31] = result;
            }
          }
          else
          {
            v17 = a2[30];
            result = -a2[31];
            a2[30] = result;
            a2[31] = v17;
          }
        }
        return result;
      }
      v10 = a2[29];
      if ( v10 >= 0x10E )
        result = v10 - 270;
      else
        result = v10 + 90;
    }
    a2[29] = result;
    goto LABEL_31;
  }
  result = a2[27];
  if ( (result & 2) == 0 )
    return result;
  if ( a1 == 2 )
  {
    v8 = a2[36];
    if ( v8 >= 0x5A )
      result = v8 - 90;
    else
      result = v8 + 270;
LABEL_15:
    a2[36] = result;
    return result;
  }
  if ( a1 != 3 )
  {
    if ( a1 != 4 )
      return result;
    v5 = a2[36];
    if ( v5 >= 0x10E )
      result = v5 - 270;
    else
      result = v5 + 90;
    goto LABEL_15;
  }
  v6 = a2[36];
  result = v6 - 180;
  v7 = v6 + 180;
  if ( v6 >= 0xB4 )
    v7 = v6 - 180;
  a2[36] = v7;
  return result;
}
