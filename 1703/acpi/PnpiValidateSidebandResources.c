/*
 * XREFs of PnpiValidateSidebandResources @ 0x1C00A331C
 * Callers:
 *     PnpiAddSidebandResources @ 0x1C00A204C (PnpiAddSidebandResources.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpiValidateSidebandResources(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // r9
  _QWORD *v6; // rax
  char i; // cl
  unsigned int v8; // r10d
  unsigned int v9; // esi
  char v10; // bp
  __int64 v11; // rcx
  int v12; // ebp
  unsigned int v13; // r13d
  __int64 v14; // r11
  unsigned int v15; // r15d
  unsigned int v16; // edi
  unsigned int v17; // r14d
  _QWORD *v18; // r9
  bool v19; // zf
  __int16 v21; // dx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx

  v2 = *(_DWORD *)(a2 + 28);
  v3 = a2 + 32;
  v4 = 0;
  v5 = a1;
  if ( v2 )
  {
    v6 = AcpiInformation;
    for ( i = AcpiGlobalFlags; ; i = AcpiGlobalFlags )
    {
      v8 = *(_DWORD *)(v3 + 4);
      v9 = 0;
      if ( v8 )
        break;
LABEL_33:
      if ( v8 <= 1 )
        v24 = v3;
      else
        v24 = v3 + 32LL * (v8 - 1);
      ++v4;
      v3 = v24 + 40;
      if ( v4 >= v2 )
        return 1;
      v6 = AcpiInformation;
    }
    v10 = i;
    v11 = v3 + 9;
    v12 = v10 & 2;
    while ( 1 )
    {
      if ( (v12 || *(_BYTE *)(v6[1] + 8LL) >= 5u) && *(_BYTE *)v11 != 2 || *(_DWORD *)(v11 + 7) == *(_DWORD *)(v11 + 11) )
      {
        v13 = *(_DWORD *)(v5 + 28);
        v14 = v5 + 32;
        v15 = 0;
        if ( v13 )
          break;
      }
LABEL_32:
      v6 = AcpiInformation;
      ++v9;
      v11 += 32LL;
      if ( v9 >= v8 )
        goto LABEL_33;
    }
    while ( 1 )
    {
      v16 = *(_DWORD *)(v14 + 4);
      v17 = 0;
      if ( v16 )
        break;
LABEL_27:
      if ( v16 <= 1 )
        v23 = v14;
      else
        v23 = v14 + 32LL * (v16 - 1);
      ++v15;
      v14 = v23 + 40;
      if ( v15 >= v13 )
      {
        v5 = a1;
        goto LABEL_32;
      }
    }
    v18 = (_QWORD *)(v14 + 24);
    while ( 1 )
    {
      if ( *((_BYTE *)v18 - 15) == 2 )
      {
        if ( *(_BYTE *)v11 == 2 )
        {
          v21 = *(_WORD *)(v11 + 3);
          if ( (v21 & 2) == 0 )
          {
            v22 = *(_DWORD *)(v11 + 7);
            if ( v22 >= *((_DWORD *)v18 - 2) && v22 <= *((_DWORD *)v18 - 1) && (v21 & 0x20) == 0 )
              return 0;
          }
        }
      }
      else
      {
        if ( *((_BYTE *)v18 - 15) == 3 )
        {
          v19 = *(_BYTE *)v11 == 3;
        }
        else
        {
          if ( *((_BYTE *)v18 - 15) != 7 )
            goto LABEL_26;
          v19 = *(_BYTE *)v11 == 7;
        }
        if ( v19 && (*(_QWORD *)(v11 + 15) <= *v18 || *(_QWORD *)(v11 + 23) >= *v18) )
          return 0;
      }
LABEL_26:
      ++v17;
      v18 += 4;
      if ( v17 >= v16 )
        goto LABEL_27;
    }
  }
  return 1;
}
