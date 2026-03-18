/*
 * XREFs of PfSnLogGetReadListsStop @ 0x1404657B8
 * Callers:
 *     PfSnPrefetchSections @ 0x14046540C (PfSnPrefetchSections.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PfSnLogGetReadListsStop(__int64 a1)
{
  REGHANDLE v1; // rbx
  __int64 v3; // rax
  __int16 v4; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v6; // [rsp+50h] [rbp+7h]
  int v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+5Ch] [rbp+13h]
  __int64 v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  __int64 v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]

  if ( a1 )
  {
    v1 = RegHandle;
    if ( RegHandle )
    {
      if ( EtwEventEnabled(RegHandle, &PfSnEvt_GetReadLists_Stop) )
      {
        v3 = -1LL;
        do
          ++v3;
        while ( *(_WORD *)(a1 + 16 + 2 * v3) );
        v4 = v3;
        UserData.Ptr = (ULONGLONG)&v4;
        v7 = 2 * (unsigned __int16)v3;
        v6 = a1 + 16;
        v9 = a1 + 76;
        *(_QWORD *)&UserData.Size = 2LL;
        v11 = a1 + 80;
        v8 = 0;
        v10 = 4LL;
        v12 = 4LL;
        EtwWrite(v1, &PfSnEvt_GetReadLists_Stop, 0LL, 4u, &UserData);
      }
    }
  }
}
