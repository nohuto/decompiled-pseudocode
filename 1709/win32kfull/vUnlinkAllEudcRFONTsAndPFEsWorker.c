/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C0110194
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C01100E0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C0274768 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 j; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 i; // rsi
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = a3;
    do
    {
      if ( (*(_DWORD *)(v3 + 52) & 8) == 0 )
      {
        v5 = *(_QWORD *)(v3 + 72);
        if ( v5 )
        {
          v12 = 0LL;
          do
          {
            vMakeInactiveHelper(v5 + 736);
            if ( *(_QWORD *)(v5 + 744) )
              vMakeInactiveHelper(v5 + 744);
            if ( a2 && *(_QWORD *)(v5 + 752) )
            {
              for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 848); i = (unsigned int)(i + 1) )
                vMakeInactiveHelper(*(_QWORD *)(v5 + 752) + 8 * i);
              v11 = *(_QWORD *)(v5 + 752);
              if ( v11 != v5 + 760 )
                Win32FreePool(v11, v8, v9);
              *(_DWORD *)(v5 + 848) = 0;
              *(_QWORD *)(v5 + 752) = 0LL;
              *(_DWORD *)(v5 + 840) = 0;
              *(_DWORD *)(v5 + 844) = 0;
            }
            *(_DWORD *)(v5 + 720) = 0;
            v5 = *(_QWORD *)(v5 + 520);
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12, v8, v9);
          }
          while ( v5 );
        }
        if ( a2 )
        {
          for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v3 + 144); *(_QWORD *)(v7 + 128) = 0LL )
          {
            v7 = *(_QWORD *)(v3 + 8 * j + 224);
            j = (unsigned int)(j + 1);
          }
        }
      }
      v3 = *(_QWORD *)(v3 + 8);
    }
    while ( v3 );
  }
}
