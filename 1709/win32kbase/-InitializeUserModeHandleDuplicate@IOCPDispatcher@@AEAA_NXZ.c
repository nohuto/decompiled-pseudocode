/*
 * XREFs of ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C003B2E0
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C009AB98 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     ProtectHandle @ 0x1C0074204 (ProtectHandle.c)
 */

bool __fastcall IOCPDispatcher::InitializeUserModeHandleDuplicate(HANDLE *this)
{
  _QWORD *v1; // rdi
  __int64 v2; // rdx
  NTSTATUS v3; // ebx
  __int64 v4; // r9
  __int64 v6; // [rsp+28h] [rbp-20h]

  v1 = this + 323;
  v3 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, this[322], (HANDLE)0xFFFFFFFFFFFFFFFFLL, this + 323, 0, 0, 2u);
  if ( v3 < 0 )
  {
    LODWORD(v6) = v3;
    WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0x18u, (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids, v6);
  }
  else
  {
    LOBYTE(v4) = 1;
    ProtectHandle(*v1, v2, 0LL, v4);
  }
  return v3 >= 0;
}
