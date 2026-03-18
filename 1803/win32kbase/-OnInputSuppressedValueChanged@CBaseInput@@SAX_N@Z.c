/*
 * XREFs of ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C012346C
 * Callers:
 *     UserPowerInfoCallout @ 0x1C005A654 (UserPowerInfoCallout.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CBaseInput::OnInputSuppressedValueChanged(char a1)
{
  struct DEVICEINFO *i; // rbx
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v6; // [rsp+60h] [rbp+17h]
  int v7; // [rsp+68h] [rbp+1Fh]
  int v8; // [rsp+6Ch] [rbp+23h]
  __int64 v9; // [rsp+70h] [rbp+27h]
  _DWORD v10[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v11; // [rsp+80h] [rbp+37h]
  int v12; // [rsp+88h] [rbp+3Fh]
  int v13; // [rsp+8Ch] [rbp+43h]

  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( a1 )
    {
      *((_DWORD *)i + 412) = 0;
    }
    else if ( *((_DWORD *)i + 412)
           && hProvider > 5u
           && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v8 = 0;
      v10[1] = 0;
      v13 = 0;
      v6 = v10;
      v9 = *((_QWORD *)i + 27);
      v10[0] = *((unsigned __int16 *)i + 104);
      v11 = &v4;
      v7 = 2;
      v4 = (int)v3;
      v12 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0178C92, 0LL, v3, 5u, &pData);
    }
  }
  qword_1C01A1658 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
}
