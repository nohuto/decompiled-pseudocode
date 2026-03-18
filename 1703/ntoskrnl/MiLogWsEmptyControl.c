/*
 * XREFs of MiLogWsEmptyControl @ 0x14007E9D4
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1404CA12C (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiFillLogProcessInfo @ 0x14007F868 (MiFillLogProcessInfo.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401F8C50 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 */

void __fastcall MiLogWsEmptyControl(__int64 a1)
{
  const struct _TlgProvider_t *v1; // r9
  __int64 v2; // r10
  int v3; // r11d
  char v4; // al
  ULONG64 v5; // r8
  TraceLoggingHProvider v6; // r9
  const GUID *v7; // [rsp+20h] [rbp-69h]
  const GUID *v8; // [rsp+28h] [rbp-61h]
  char v9; // [rsp+40h] [rbp-49h] BYREF
  int v10; // [rsp+44h] [rbp-45h] BYREF
  int v11; // [rsp+48h] [rbp-41h] BYREF
  LPCSTR psz[2]; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  char *v14; // [rsp+80h] [rbp-9h]
  int v15; // [rsp+88h] [rbp-1h]
  int v16; // [rsp+8Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+7h] BYREF
  int *v18; // [rsp+A0h] [rbp+17h]
  int v19; // [rsp+A8h] [rbp+1Fh]
  int v20; // [rsp+ACh] [rbp+23h]
  int *v21; // [rsp+B0h] [rbp+27h]
  int v22; // [rsp+B8h] [rbp+2Fh]
  int v23; // [rsp+BCh] [rbp+33h]

  if ( qword_14036CFD8 )
  {
    MiFillLogProcessInfo(a1, &v10, psz);
    if ( v1->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(v1, 0x10uLL) )
      {
        v4 = *(_BYTE *)(v2 + 192) & 7;
        v16 = 0;
        v9 = v4;
        v14 = &v9;
        v11 = v3;
        v15 = 1;
        TlgCreateSz(&pDesc, psz[0]);
        v20 = 0;
        v23 = 0;
        v18 = &v10;
        v19 = 4;
        v22 = 4;
        v21 = &v11;
        TlgWriteEx(v6, &unk_1402ACD3A, v5, (ULONG)v6, v7, v8, 6u, &pData);
      }
    }
  }
}
