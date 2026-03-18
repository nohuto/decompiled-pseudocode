/*
 * XREFs of ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C00F5A8C
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00F4274 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall BuildValueDeviceUsages(__int64 a1, struct tagINPUT_INJECTION_VALUE **a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  int v6; // edi
  __int64 v7; // rsi
  char *v8; // rbp
  int v9; // edi
  unsigned int v10; // r15d
  struct tagINPUT_INJECTION_VALUE *v11; // rax
  struct tagINPUT_INJECTION_VALUE *v12; // rcx
  struct tagINPUT_INJECTION_VALUE *v13; // rdx
  __int16 *v14; // r8
  unsigned int v15; // r9d
  __int16 v16; // ax
  unsigned int v17; // edx
  _WORD *v18; // r8
  __int64 v19; // rcx

  v3 = 0;
  v6 = a1;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v7 = 5LL;
  if ( v6 == 3 )
  {
    v8 = (char *)&penUsages;
    v9 = 11;
    v10 = 6;
  }
  else
  {
    if ( v6 != 2 )
      return 0LL;
    v8 = (char *)&touchUsages;
    v10 = 5;
    v9 = 10;
  }
  v11 = (struct tagINPUT_INJECTION_VALUE *)Win32AllocPoolZInit(0x90uLL, 0x6A6E6952u);
  *a2 = v11;
  v12 = v11;
  if ( v11 )
  {
    v13 = v11;
    v14 = (__int16 *)&unk_1C019FE24;
    v15 = 5;
    do
    {
      *(_WORD *)v13 = *(v14 - 1);
      v13 = (struct tagINPUT_INJECTION_VALUE *)((char *)v13 + 12);
      v16 = *v14;
      v14 += 16;
      *((_WORD *)v13 - 5) = v16;
      --v7;
    }
    while ( v7 );
    v17 = 0;
    v18 = (_WORD *)((char *)v12 + 60);
    do
    {
      if ( v17 >= v10 )
        break;
      ++v15;
      v19 = 32LL * v17++;
      *v18 = *(_WORD *)&v8[v19 + 2];
      v18[1] = *(_WORD *)&v8[v19 + 4];
      v18 += 6;
    }
    while ( v15 < 0xC );
    if ( v15 == v9 )
    {
      *a3 = 12;
      return 1;
    }
  }
  return v3;
}
