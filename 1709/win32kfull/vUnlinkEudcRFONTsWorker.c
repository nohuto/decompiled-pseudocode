/*
 * XREFs of vUnlinkEudcRFONTsWorker @ 0x1C0274AC8
 * Callers:
 *     vUnlinkEudcRFONTs @ 0x1C0274810 (vUnlinkEudcRFONTs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C0274768 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkEudcRFONTsWorker(PVOID *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 i; // rsi
  struct _FONTOBJ **v7; // rcx
  PVOID pvConsumer; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = a2;
    do
    {
      if ( (*(_DWORD *)(v3 + 52) & 8) == 0 )
      {
        v5 = *(_QWORD *)(v3 + 72);
        if ( v5 )
        {
          v9 = 0LL;
          do
          {
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 848); i = (unsigned int)(i + 1) )
            {
              v7 = (struct _FONTOBJ **)(*(_QWORD *)(v5 + 752) + 8 * i);
              if ( *v7 )
              {
                pvConsumer = (*v7)[1].pvConsumer;
                if ( pvConsumer == *a1 || pvConsumer == a1[1] )
                  vMakeInactiveHelper(v7);
              }
            }
            *(_DWORD *)(v5 + 720) = 0;
            v5 = *(_QWORD *)(v5 + 520);
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9, a2, a3);
          }
          while ( v5 );
        }
      }
      v3 = *(_QWORD *)(v3 + 8);
    }
    while ( v3 );
  }
}
