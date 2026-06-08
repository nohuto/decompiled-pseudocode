/*
 * XREFs of AcpiCStateLegacySelect @ 0x1C0004884
 * Callers:
 *     AcpiCStateIdlePrepare @ 0x1C0004A00 (AcpiCStateIdlePrepare.c)
 *     PepIdlePreselect @ 0x1C000A1E0 (PepIdlePreselect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiCStateLegacySelect(__int64 a1, __int64 a2)
{
  char i; // r10
  unsigned int v4; // ecx
  __int64 result; // rax
  unsigned int v7; // r11d
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rdi
  unsigned __int8 v13; // dl
  bool v14; // zf

  i = 0;
  v4 = *(_DWORD *)(a2 + 32);
  if ( v4 == -1 )
  {
    if ( *(_BYTE *)(a2 + 42) )
    {
      i = 1;
      LODWORD(v8) = *(unsigned __int8 *)(a1 + 20) - 1;
      v10 = *(_BYTE *)((unsigned int)v8 + a1 + 21);
    }
    else
    {
      v11 = *(_QWORD *)a2 - *(_QWORD *)(a1 + 32);
      LODWORD(v8) = *(_DWORD *)(a1 + 16);
      if ( v11 >= *(unsigned int *)(a2 + 36) )
      {
        v12 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(a1 + 24);
        if ( v12 < (unsigned int)(v11 * *(unsigned __int8 *)(a2 + 41) / 0x64) && (_DWORD)v8 )
        {
          LODWORD(v8) = v8 - 1;
        }
        else if ( v12 >= (unsigned int)(v11 * *(unsigned __int8 *)(a2 + 40) / 0x64)
               && (int)v8 + 1 < (unsigned int)*(unsigned __int8 *)(a1 + 20) )
        {
          LODWORD(v8) = v8 + 1;
        }
        i = 1;
      }
      v10 = *(_BYTE *)((unsigned int)v8 + a1 + 21);
    }
    v13 = *(_BYTE *)(a2 + 46);
    result = v10;
    v7 = v10;
    if ( v13 && (_DWORD)v8 )
    {
      do
      {
        result = v7;
        if ( *(_BYTE *)(88LL * v7 + a1 + 146) <= v13 )
          break;
        v14 = (_DWORD)v8 == 1;
        v8 = (unsigned int)(v8 - 1);
        v7 = *(unsigned __int8 *)(v8 + a1 + 21);
      }
      while ( !v14 );
    }
  }
  else
  {
    result = *(unsigned int *)(a1 + 56);
    v7 = result - 1;
    if ( v4 < (unsigned int)result )
      v7 = *(_DWORD *)(a2 + 32);
    LODWORD(v8) = 0;
    v9 = 0LL;
    for ( i = 1; (unsigned int)v9 < *(unsigned __int8 *)(a1 + 20); v9 = (unsigned int)(v9 + 1) )
    {
      if ( (_DWORD)v9 && *(unsigned __int8 *)(v9 + a1 + 21) <= v7 )
        LODWORD(v8) = v9;
    }
  }
  *(_DWORD *)(a1 + 12) = v7;
  *(_DWORD *)(a1 + 16) = v8;
  if ( i )
  {
    *(_QWORD *)(a1 + 32) = *(_QWORD *)a2;
    result = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 24) = result;
  }
  return result;
}
