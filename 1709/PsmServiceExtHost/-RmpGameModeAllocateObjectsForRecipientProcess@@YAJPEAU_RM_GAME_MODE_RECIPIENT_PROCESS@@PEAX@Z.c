/*
 * XREFs of ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x1800383C0
 * Callers:
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180038CC8 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180007388 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeAllocateObjectsForRecipientProcess(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1, void *a2)
{
  const GUID *v4; // r9
  DWORD ProcessId; // ebx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  NTSTATUS v9; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  NTSTATUS *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  LODWORD(v4) = TpAllocWait((char *)a1 + 48, RmpGameModeRecipientProcessTerminationCallback, a1, 0LL);
  if ( (int)v4 >= 0 )
  {
    ProcessId = GetProcessId(a2);
    if ( RmpSystemOpenProcess((void **)a1 + 5, 0x101200u, ProcessId) >= 0
      || (v9 = RmpSystemOpenProcess((void **)a1 + 5, 0x103000u, ProcessId), LODWORD(v4) = v9, v9 >= 0) )
    {
      *((_DWORD *)a1 + 23) = ProcessId;
      LODWORD(v4) = 0;
    }
    else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v13 = 0;
      v11 = &v9;
      v12 = 4;
      TlgWrite(v6, &unk_1800580EE, v7, v4, 3u, &pData);
      LODWORD(v4) = v9;
    }
  }
  return (unsigned int)v4;
}
