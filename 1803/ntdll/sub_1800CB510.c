/*
 * XREFs of sub_1800CB510 @ 0x1800CB510
 * Callers:
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18003FF10 @ 0x18003FF10 (sub_18003FF10.c)
 *     EtwEventWriteNoRegistration @ 0x180082B90 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateEvent @ 0x18009B3C0 (ZwCreateEvent.c)
 *     sub_1800CB770 @ 0x1800CB770 (sub_1800CB770.c)
 */

char __fastcall sub_1800CB510(unsigned __int16 *a1)
{
  _QWORD *pShimData; // rbx
  int v3; // esi
  wchar_t *v4; // rcx
  char v5; // di
  int v6; // eax
  HANDLE EventHandle; // [rsp+30h] [rbp-50h] BYREF
  int UniqueProcess; // [rsp+38h] [rbp-48h] BYREF
  int v10; // [rsp+3Ch] [rbp-44h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  int *p_UniqueProcess; // [rsp+48h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-2Ch]
  int *v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+64h] [rbp-1Ch]
  __int64 v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+70h] [rbp-10h]
  int v20; // [rsp+74h] [rbp-Ch]

  EventHandle = 0LL;
  v10 = 1;
  pShimData = 0LL;
  v3 = 0;
  v4 = (wchar_t *)*((_QWORD *)a1 + 1);
  v5 = 0;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  if ( (unsigned int)sub_18003FF10(v4, 256) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)sub_1800CB770() )
      {
        if ( ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, NotificationEvent, 0) >= 0 )
        {
          RtlAcquireSRWLockExclusive(&stru_18015D488);
          v3 = 1;
          v5 = 1;
          if ( !byte_18015D484 )
          {
            pShimData[494] = EventHandle;
            v14 = 0;
            v17 = 0;
            v20 = 0;
            p_UniqueProcess = &UniqueProcess;
            v15 = &v10;
            v18 = *((_QWORD *)a1 + 1);
            v6 = *a1 + 2;
            v13 = 4;
            v16 = 4;
            v19 = v6;
            byte_18015D484 = 1;
            if ( !EtwEventWriteNoRegistration(
                    &stru_1801160F8,
                    &stru_180123F20,
                    3u,
                    (PEVENT_DATA_DESCRIPTOR)&p_UniqueProcess) )
            {
              Timeout.QuadPart = -100000000LL;
              ZwWaitForSingleObject(EventHandle, 0, &Timeout);
            }
          }
        }
      }
    }
  }
  if ( EventHandle )
  {
    ZwClose(EventHandle);
    pShimData[494] = 0LL;
  }
  if ( v3 )
    RtlReleaseSRWLockExclusive(&stru_18015D488);
  return v5;
}
