/*
 * XREFs of Intersect26Dot6 @ 0x1C02C5958
 * Callers:
 *     EmboldPoint @ 0x1C02C55D8 (EmboldPoint.c)
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 */

unsigned __int64 __fastcall Intersect26Dot6(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  int v6; // esi
  unsigned __int64 v7; // r13
  int v8; // r9d
  int v9; // r8d
  int v10; // ebp
  unsigned __int64 result; // rax
  int v13; // r14d
  int v14; // r15d
  int v15; // r14d
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // r14
  int v19; // eax
  int v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+80h] [rbp+8h]
  int v22; // [rsp+8Ch] [rbp+14h]
  int v23; // [rsp+94h] [rbp+1Ch]
  int v24; // [rsp+98h] [rbp+20h]

  v23 = HIDWORD(a3);
  v22 = HIDWORD(a2);
  v6 = a1;
  v7 = HIDWORD(a1);
  v8 = a2 - a1;
  v9 = HIDWORD(a2) - HIDWORD(a1);
  LODWORD(a1) = a4 - a3;
  v24 = v8;
  v20 = HIDWORD(a2) - HIDWORD(a1);
  v10 = a2;
  LODWORD(a4) = HIDWORD(a4) - HIDWORD(a3);
  v21 = a1;
  if ( HIDWORD(a2) == (_DWORD)v7 )
  {
    if ( !(_DWORD)a1 )
    {
      result = (unsigned __int64)a5;
      *a5 = a3;
      a5[1] = v7;
      return result;
    }
    v13 = HIDWORD(a4) - HIDWORD(a3);
    v14 = HIDWORD(a3) - v7;
  }
  else
  {
    if ( v8 )
    {
      if ( (int)abs32(v8) < (int)abs32(v9) )
      {
        v18 = v8;
        v14 = v6 - a3 + CompDiv(v9, v8 * (__int64)(HIDWORD(a3) - (int)v7));
        v19 = CompDiv(v20, v18 * (int)a4);
        LODWORD(a1) = v21;
        v15 = v21 - v19;
      }
      else
      {
        v16 = v9;
        v14 = HIDWORD(a3) - v7 - CompDiv(v8, v9 * (__int64)((int)a3 - v6));
        v17 = CompDiv(v24, v16 * v21);
        LODWORD(a1) = v21;
        v15 = v17 - a4;
      }
      goto LABEL_13;
    }
    if ( !(_DWORD)a4 )
    {
      result = (unsigned __int64)a5;
      *a5 = v6;
      a5[1] = HIDWORD(a3);
      return result;
    }
    v13 = a1;
    v14 = a3 - v6;
  }
  v15 = -v13;
LABEL_13:
  if ( (int)abs32(v15) <= 16 )
  {
    result = (unsigned int)(((int)a3 + v10) >> 1);
    a5[1] = (v22 + v23) >> 1;
    *a5 = result;
  }
  else
  {
    *a5 = a3 + CompDiv(v15, v14 * (__int64)(int)a1);
    result = HIDWORD(a3) + (unsigned int)CompDiv(v15, v14 * (__int64)(int)a4);
    a5[1] = result;
  }
  return result;
}
