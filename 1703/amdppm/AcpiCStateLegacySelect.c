/*
 * XREFs of AcpiCStateLegacySelect @ 0x1C0007434
 * Callers:
 *     PepIdlePreselect @ 0x1C0005ED0 (PepIdlePreselect.c)
 *     AcpiCStateIdlePrepare @ 0x1C0007580 (AcpiCStateIdlePrepare.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiCStateLegacySelect(__int64 a1, __int64 a2)
{
  unsigned int v2; // r11d
  char i; // r10
  unsigned int v5; // eax
  unsigned __int8 v6; // al
  unsigned int v7; // r8d
  __int64 v8; // rdx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdi

  v2 = *(_DWORD *)(a2 + 32);
  i = 0;
  if ( v2 == -1 )
  {
    if ( *(_BYTE *)(a2 + 42) )
    {
      i = 1;
      v7 = *(unsigned __int8 *)(a1 + 20) - 1;
      v2 = *(unsigned __int8 *)(v7 + a1 + 21);
    }
    else
    {
      v9 = *(_QWORD *)a2 - *(_QWORD *)(a1 + 32);
      v7 = *(_DWORD *)(a1 + 16);
      if ( v9 >= *(unsigned int *)(a2 + 36) )
      {
        v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(a1 + 24);
        if ( v10 < (unsigned int)(v9 * *(unsigned __int8 *)(a2 + 41) / 0x64) && v7 )
        {
          --v7;
        }
        else if ( v10 >= (unsigned int)(v9 * *(unsigned __int8 *)(a2 + 40) / 0x64)
               && v7 + 1 < *(unsigned __int8 *)(a1 + 20) )
        {
          ++v7;
        }
        i = 1;
      }
      v2 = *(unsigned __int8 *)(v7 + a1 + 21);
    }
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 56);
    if ( v2 >= v5 )
      v2 = v5 - 1;
    v6 = *(_BYTE *)(a1 + 20);
    v7 = 0;
    v8 = 0LL;
    for ( i = 1; (unsigned int)v8 < v6; v8 = (unsigned int)(v8 + 1) )
    {
      if ( (_DWORD)v8 && *(unsigned __int8 *)(v8 + a1 + 21) <= v2 )
        v7 = v8;
    }
  }
  *(_DWORD *)(a1 + 12) = v2;
  *(_DWORD *)(a1 + 16) = v7;
  if ( i )
  {
    *(_QWORD *)(a1 + 32) = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  }
}
