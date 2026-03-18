/*
 * XREFs of ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C0108ED4
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x1C010A680 (RIMIDEInjectDeviceInput.c)
 * Callees:
 *     RIMGetMaxContactCountNoButton @ 0x1C01063C4 (RIMGetMaxContactCountNoButton.c)
 */

__int64 __fastcall RIMIDEInjectionIndexToLinkIndex(struct RIMDEV *a1, int a2, unsigned __int16 *a3, int a4)
{
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // r10d
  unsigned __int16 *v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // r8d
  unsigned __int16 v14; // ax
  unsigned int *v15; // rdx
  __int64 v16; // rbx
  unsigned int v17; // eax
  _DWORD *i; // rcx
  unsigned int v19; // ecx
  unsigned __int16 *v20; // rdx

  *a3 = 0;
  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v7 = RIMGetMaxContactCountNoButton(*((_QWORD *)a1 + 59));
    v12 = *(_QWORD *)(v11 + 688);
    v13 = v7;
    if ( v12 )
    {
      if ( v8 )
      {
        if ( a4 )
        {
          v14 = *(_WORD *)(v12 + 6);
          if ( v13 )
          {
            v15 = (unsigned int *)(v10 + 2);
            v16 = v13;
            do
            {
              *((_WORD *)v15 - 1) = v14;
              v14 = *(_WORD *)(*(_QWORD *)(v12 + 24) + 8LL * v14 + 4);
              *v15 = v9;
              v15 += 2;
              --v16;
            }
            while ( v16 );
          }
        }
        else
        {
          v19 = v9;
          if ( v7 )
          {
            v20 = v10;
            while ( *v20 != a2 || *((_DWORD *)v20 + 1) == v9 )
            {
              ++v19;
              v20 += 4;
              if ( v19 >= v7 )
                goto LABEL_8;
            }
            *a3 = v10[4 * v19 + 1];
            return 1;
          }
        }
LABEL_8:
        v17 = v9;
        if ( !v13 )
          return v9;
        for ( i = v10 + 2; *i != v9; i += 2 )
        {
          if ( ++v17 >= v13 )
            return v9;
        }
        *a3 = v10[4 * v17 + 1];
        v10[4 * v17] = a2;
        *(_DWORD *)&v10[4 * v17 + 2] = 1;
        return 1;
      }
    }
  }
  return 1LL;
}
