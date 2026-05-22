/*
 * XREFs of ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180005E58
 * Callers:
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180006BB0 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x180005B60 (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall InputETW::InputStateManager::OnInputReport(struct InputInfo *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-29h] BYREF
  __int64 v5; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  __int64 *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  char *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  char *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]

  v2 = *((_QWORD *)InputETW::Instance() + 1);
  if ( *(_DWORD *)v2 > 5u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    v3 = *((_QWORD *)InputETW::Instance() + 1);
    if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    {
      v4 = *((unsigned int *)a1 + 1);
      v7 = &v4;
      v5 = *(int *)a1;
      v9 = &v5;
      v11 = (char *)a1 + 8;
      v13 = (char *)a1 + 16;
      v8 = 8LL;
      v10 = 8LL;
      v12 = 4LL;
      v14 = 8LL;
      TlgWrite((TraceLoggingHProvider)v3, &unk_18010CCEA, 0LL, 0LL, 6u, &pData);
    }
  }
}
