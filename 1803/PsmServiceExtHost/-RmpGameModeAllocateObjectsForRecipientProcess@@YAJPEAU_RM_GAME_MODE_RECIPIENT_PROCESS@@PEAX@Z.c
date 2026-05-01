/*
 * XREFs of ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x180056DE4
 * Callers:
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x1800574D8 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180011CC8 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeAllocateObjectsForRecipientProcess(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1, void *a2)
{
  int v4; // r9d
  DWORD ProcessId; // ebx
  const struct _TlgProvider_t *v6; // rcx
  NTSTATUS v8; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  NTSTATUS *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  v4 = TpAllocWait((char *)a1 + 48, RmpGameModeRecipientProcessTerminationCallback, a1, 0LL);
  if ( v4 >= 0 )
  {
    ProcessId = GetProcessId(a2);
    if ( RmpSystemOpenProcess((void **)a1 + 5, 0x101200u, ProcessId) >= 0
      || (v8 = RmpSystemOpenProcess((void **)a1 + 5, 0x103000u, ProcessId), v4 = v8, v8 >= 0) )
    {
      *((_DWORD *)a1 + 27) = ProcessId;
      return 0;
    }
    else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v12 = 0;
      v10 = &v8;
      v11 = 4;
      TlgWrite(v6, &unk_18007E4A3, 0LL, 0LL, 3u, &pData);
      return (unsigned int)v8;
    }
  }
  return (unsigned int)v4;
}
