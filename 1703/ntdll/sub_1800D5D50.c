/*
 * XREFs of sub_1800D5D50 @ 0x1800D5D50
 * Callers:
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800798B8 @ 0x1800798B8 (sub_1800798B8.c)
 *     EtwEventWriteNoRegistration @ 0x180088240 (EtwEventWriteNoRegistration.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1800A5C00 (ZwCreateEvent.c)
 *     sub_1800D5FB0 @ 0x1800D5FB0 (sub_1800D5FB0.c)
 */

char __fastcall sub_1800D5D50(unsigned __int16 *a1)
{
  _QWORD *pShimData; // rbx
  int v3; // esi
  wchar_t *v4; // rcx
  char v5; // di
  int v6; // eax
  HANDLE EventHandle; // [rsp+30h] [rbp-19h] BYREF
  int UniqueProcess; // [rsp+38h] [rbp-11h] BYREF
  int v10; // [rsp+3Ch] [rbp-Dh] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-9h] BYREF
  int *p_UniqueProcess; // [rsp+48h] [rbp-1h] BYREF
  int v13; // [rsp+50h] [rbp+7h]
  int v14; // [rsp+54h] [rbp+Bh]
  int *v15; // [rsp+58h] [rbp+Fh]
  int v16; // [rsp+60h] [rbp+17h]
  int v17; // [rsp+64h] [rbp+1Bh]
  __int64 v18; // [rsp+68h] [rbp+1Fh]
  int v19; // [rsp+70h] [rbp+27h]
  int v20; // [rsp+74h] [rbp+2Bh]

  EventHandle = 0LL;
  v10 = 1;
  pShimData = 0LL;
  v3 = 0;
  v4 = (wchar_t *)*((_QWORD *)a1 + 1);
  v5 = 0;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  if ( (unsigned int)sub_1800798B8(v4, 256) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)sub_1800D5FB0() )
      {
        if ( ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, NotificationEvent, 0) >= 0 )
        {
          RtlAcquireSRWLockExclusive(&stru_18015C488);
          v3 = 1;
          v5 = 1;
          if ( !byte_18015C484 )
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
            byte_18015C484 = 1;
            if ( !EtwEventWriteNoRegistration(
                    &stru_180113E90,
                    &stru_1801246A0,
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
    RtlReleaseSRWLockExclusive(&stru_18015C488);
  return v5;
}
