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
  int v2; // esi
  wchar_t *v3; // rcx
  char v4; // di
  _QWORD *pShimData; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  int v9; // eax
  int UniqueProcess; // [rsp+38h] [rbp-48h] BYREF
  int v12; // [rsp+3Ch] [rbp-44h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h]
  int *p_UniqueProcess; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+54h] [rbp-2Ch]
  int *v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]
  __int64 v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+74h] [rbp-Ch]

  v12 = 1;
  v2 = 0;
  v3 = (wchar_t *)*((_QWORD *)a1 + 1);
  v4 = 0;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  if ( (unsigned int)sub_18003FF10(v3, 256) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)sub_1800CB770() )
      {
        if ( (int)ZwCreateEvent() >= 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D488, v6, v7, v8);
          v2 = 1;
          v4 = 1;
          if ( !byte_18015D484 )
          {
            pShimData[494] = 0LL;
            v16 = 0;
            v19 = 0;
            v22 = 0;
            p_UniqueProcess = &UniqueProcess;
            v17 = &v12;
            v20 = *((_QWORD *)a1 + 1);
            v9 = *a1 + 2;
            v15 = 4;
            v18 = 4;
            v21 = v9;
            byte_18015D484 = 1;
            if ( !(unsigned int)EtwEventWriteNoRegistration(
                                  (__int64)qword_1801160F8,
                                  &xmmword_180123F20,
                                  3,
                                  (__int64)&p_UniqueProcess) )
            {
              v13 = -100000000LL;
              ZwWaitForSingleObject();
            }
          }
        }
      }
    }
  }
  if ( v2 )
    RtlReleaseSRWLockExclusive(&qword_18015D488);
  return v4;
}
