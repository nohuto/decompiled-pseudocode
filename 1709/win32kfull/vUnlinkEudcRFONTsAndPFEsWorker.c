/*
 * XREFs of vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C027497C
 * Callers:
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C02748C4 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C0274768 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkEudcRFONTsAndPFEsWorker(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 i; // rcx
  __int64 v14; // rax
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = a3;
    do
    {
      if ( (*(_DWORD *)(v3 + 52) & 8) == 0 )
      {
        v6 = *(_QWORD *)(v3 + 72);
        if ( v6 )
        {
          v15 = 0LL;
          while ( 1 )
          {
            v7 = *(unsigned int *)(v6 + 848);
            v8 = 0LL;
            v9 = 1;
            if ( (_DWORD)v7 )
            {
              v10 = *(_QWORD *)(v6 + 752);
              while ( 1 )
              {
                a3 = v10 + 8 * v8;
                if ( *(_QWORD *)a3 )
                {
                  v11 = *(_QWORD *)(*(_QWORD *)a3 + 112LL);
                  v9 = 0;
                  if ( v11 == *a1 || v11 == a1[1] )
                    break;
                }
                v8 = (unsigned int)(v8 + 1);
                if ( (unsigned int)v8 >= (unsigned int)v7 )
                  goto LABEL_14;
              }
              vMakeInactiveHelper((struct _FONTOBJ **)(v10 + 8 * v8));
              if ( *(_QWORD *)(*(_QWORD *)(v6 + 112) + 128LL) == a2 )
                break;
            }
LABEL_14:
            if ( *(_QWORD *)(v6 + 752) && v9 )
              break;
LABEL_19:
            *(_DWORD *)(v6 + 720) = 0;
            v6 = *(_QWORD *)(v6 + 520);
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15, v7, a3);
            if ( !v6 )
              goto LABEL_20;
          }
          v12 = *(_QWORD *)(v6 + 752);
          if ( v12 != v6 + 760 )
            Win32FreePool(v12, v7);
          *(_QWORD *)(v6 + 752) = 0LL;
          *(_DWORD *)(v6 + 848) = 0;
          *(_DWORD *)(v6 + 840) = 0;
          *(_DWORD *)(v6 + 844) = 0;
          goto LABEL_19;
        }
LABEL_20:
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 144); i = (unsigned int)(i + 1) )
        {
          v14 = *(_QWORD *)(v3 + 8 * i + 224);
          if ( *(_QWORD *)(v14 + 128) == a2 )
            *(_QWORD *)(v14 + 128) = 0LL;
        }
      }
      v3 = *(_QWORD *)(v3 + 8);
    }
    while ( v3 );
  }
}
