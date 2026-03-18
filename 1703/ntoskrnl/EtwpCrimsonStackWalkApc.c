/*
 * XREFs of EtwpCrimsonStackWalkApc @ 0x140252B70
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCrimsonStackWalkApc(void *a1, _QWORD *a2, _WORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v8; // [rsp+90h] [rbp-80h]
  _QWORD v9[50]; // [rsp+A0h] [rbp-70h] BYREF

  *a2 = 0LL;
  ExFreePoolWithTag(a1, 0);
  LODWORD(v8) = *a4;
  HIDWORD(v8) = *a5;
  memset(v9, 0, sizeof(v9));
  v9[16] = -1LL;
  v9[8] = v8;
  v9[47] = EtwpHostSiloState;
  HIWORD(v9[14]) = *a3;
  *(GUID *)&v9[3] = EventTracingProvGuid;
  LODWORD(v9[14]) = 1;
  LODWORD(v9[15]) = 68;
  BYTE4(v9[14]) = -1;
  v9[17] = 0LL;
  return EtwpEventWriteFull(
           v9,
           1u,
           0,
           0,
           ETW_EVENT_USER_STACK_TRACE,
           0,
           0,
           0LL,
           0LL,
           0,
           0LL,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
