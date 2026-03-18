/*
 * XREFs of MiLogWsEmptyControl @ 0x140230D80
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406EC9D0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiFillLogProcessInfo @ 0x14000BC4C (MiFillLogProcessInfo.c)
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x140213AC0 (_TlgWriteEx.c)
 */

void __fastcall MiLogWsEmptyControl(__int64 a1)
{
  const struct _TlgProvider_t *v1; // r9
  __int64 v2; // r10
  int v3; // r11d
  char v4; // al
  ULONG64 v5; // r8
  TraceLoggingHProvider v6; // r9
  const GUID *v7; // [rsp+20h] [rbp-59h]
  const GUID *v8; // [rsp+28h] [rbp-51h]
  char v9; // [rsp+40h] [rbp-39h] BYREF
  int v10; // [rsp+44h] [rbp-35h] BYREF
  int v11; // [rsp+48h] [rbp-31h] BYREF
  LPCSTR psz[2]; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  char *v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+17h] BYREF
  int *v18; // [rsp+A0h] [rbp+27h]
  int v19; // [rsp+A8h] [rbp+2Fh]
  int v20; // [rsp+ACh] [rbp+33h]
  int *v21; // [rsp+B0h] [rbp+37h]
  int v22; // [rsp+B8h] [rbp+3Fh]
  int v23; // [rsp+BCh] [rbp+43h]

  if ( hProvider )
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
        TlgWriteEx(v6, &unk_1402D0CEB, v5, (ULONG)v6, v7, v8, 6u, &pData);
      }
    }
  }
}
