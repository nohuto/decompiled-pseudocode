/*
 * XREFs of vUnlinkEudcRFONTsWorker @ 0x1C02780F8
 * Callers:
 *     vUnlinkEudcRFONTs @ 0x1C0277E40 (vUnlinkEudcRFONTs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C0277D90 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkEudcRFONTsWorker(PVOID *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 i; // rsi
  struct _FONTOBJ **v6; // rcx
  PVOID pvConsumer; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = a2;
    do
    {
      if ( (*(_DWORD *)(v2 + 52) & 8) == 0 )
      {
        v4 = *(_QWORD *)(v2 + 72);
        if ( v4 )
        {
          v8 = 0LL;
          do
          {
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 848); i = (unsigned int)(i + 1) )
            {
              v6 = (struct _FONTOBJ **)(*(_QWORD *)(v4 + 752) + 8 * i);
              if ( *v6 )
              {
                pvConsumer = (*v6)[1].pvConsumer;
                if ( pvConsumer == *a1 || pvConsumer == a1[1] )
                  vMakeInactiveHelper(v6);
              }
            }
            *(_DWORD *)(v4 + 720) = 0;
            v4 = *(_QWORD *)(v4 + 520);
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
          }
          while ( v4 );
        }
      }
      v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v2 );
  }
}
