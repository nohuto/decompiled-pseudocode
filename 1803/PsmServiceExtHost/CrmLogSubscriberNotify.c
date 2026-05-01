/*
 * XREFs of CrmLogSubscriberNotify @ 0x180034B9C
 * Callers:
 *     CrmSubscriberNotify @ 0x180034B54 (CrmSubscriberNotify.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall CrmLogSubscriberNotify(__int64 a1, int a2, int a3)
{
  int v3; // r9d
  int v4; // r10d
  __int64 v5; // r11
  _BYTE v6[4]; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  __int64 v8; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  _BYTE *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  int *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  if ( a3 < 0 )
  {
    if ( dword_180092130 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180092130, 0x400000000000uLL) )
    {
      v8 = *(_QWORD *)(v5 + 32);
      v6[0] = v4 != 0;
      v10 = &v8;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v13 = v6;
      v16 = &v7;
      v7 = v3;
      v11 = 8;
      v14 = 1;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083D6C, 0LL, 0LL, 5u, &pData);
    }
  }
  else if ( dword_180092130 > 5u )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v6[0] = a2 != 0;
    v10 = &v8;
    v12 = 0;
    v15 = 0;
    v18 = 0;
    v13 = v6;
    v16 = &v7;
    v7 = a3;
    v11 = 8;
    v14 = 1;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083DAC, 0LL, 0LL, 5u, &pData);
  }
}
