/*
 * XREFs of scl_Scale @ 0x1C02BF2AC
 * Callers:
 *     scl_InitializeScaling @ 0x1C02BE930 (scl_InitializeScaling.c)
 *     scl_ScaleOldCharPoints @ 0x1C02BF9D8 (scl_ScaleOldCharPoints.c)
 *     scl_ScaleOldPhantomPoints @ 0x1C02BFAD4 (scl_ScaleOldPhantomPoints.c)
 *     fsg_RunPreProgram @ 0x1C02C8584 (fsg_RunPreProgram.c)
 * Callees:
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 */

__int64 __fastcall scl_Scale(int *a1, int a2, __int64 a3, int *a4, int a5)
{
  __int64 result; // rax
  int *v6; // r10
  __int64 v7; // rbx
  __int64 v9; // r11
  __int64 v10; // r9
  int v11; // edx
  __int64 v12; // r11
  _DWORD *v13; // r10

  result = (unsigned int)a5;
  v6 = a4;
  v7 = a5;
  if ( a2 == 1 )
  {
    if ( a5 > 0 )
    {
      do
      {
        result = (unsigned int)(a1[1] >> 1);
        *v6 = ((int)result + a1[2] * *(int *)((char *)v6 + a3 - (_QWORD)a4)) >> a1[3];
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  else if ( a2 == 2 )
  {
    if ( a5 > 0 )
    {
      v9 = a3 - (_QWORD)a4;
      v10 = (unsigned int)a5;
      do
      {
        v11 = *(int *)((char *)v6 + v9);
        if ( v11 >= 0 )
          result = (unsigned int)(((a1[1] >> 1) + v11 * a1[2]) / a1[1]);
        else
          result = (unsigned int)-(((a1[1] >> 1) - v11 * a1[2]) / a1[1]);
        *v6++ = result;
        --v10;
      }
      while ( v10 );
    }
  }
  else if ( a5 > 0 )
  {
    v12 = a3 - (_QWORD)a4;
    do
    {
      result = FixMul(*(int *)((char *)v6 + v12), *a1);
      *v13 = result;
      v6 = v13 + 1;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
