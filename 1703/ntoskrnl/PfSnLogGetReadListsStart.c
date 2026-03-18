/*
 * XREFs of PfSnLogGetReadListsStart @ 0x14046583C
 * Callers:
 *     PfSnPrefetchSections @ 0x14046540C (PfSnPrefetchSections.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PfSnLogGetReadListsStart(__int64 a1, int a2)
{
  REGHANDLE v2; // rbx
  __int64 v4; // rax
  __int16 v5; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int64 v7; // [rsp+50h] [rbp-9h]
  int v8; // [rsp+58h] [rbp-1h]
  int v9; // [rsp+5Ch] [rbp+3h]
  __int64 v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  int *v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+C8h] [rbp+6Fh] BYREF

  if ( a1 )
  {
    v16 = a2;
    v2 = RegHandle;
    if ( RegHandle )
    {
      if ( EtwEventEnabled(RegHandle, &PfSnEvt_GetReadLists_Start) )
      {
        v4 = -1LL;
        do
          ++v4;
        while ( *(_WORD *)(a1 + 16 + 2 * v4) );
        v5 = v4;
        UserData.Ptr = (ULONGLONG)&v5;
        v8 = 2 * (unsigned __int16)v4;
        v7 = a1 + 16;
        v10 = a1 + 76;
        *(_QWORD *)&UserData.Size = 2LL;
        v12 = a1 + 80;
        v9 = 0;
        v14 = &v16;
        v11 = 4LL;
        v13 = 4LL;
        v15 = 4LL;
        EtwWrite(v2, &PfSnEvt_GetReadLists_Start, 0LL, 5u, &UserData);
      }
    }
  }
}
