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
  int v2; // esi
  wchar_t *v3; // rcx
  char v4; // di
  _QWORD *pShimData; // rbx
  int v6; // eax
  int UniqueProcess; // [rsp+38h] [rbp-11h] BYREF
  int v9; // [rsp+3Ch] [rbp-Dh] BYREF
  __int64 v10; // [rsp+40h] [rbp-9h]
  int *p_UniqueProcess; // [rsp+48h] [rbp-1h] BYREF
  int v12; // [rsp+50h] [rbp+7h]
  int v13; // [rsp+54h] [rbp+Bh]
  int *v14; // [rsp+58h] [rbp+Fh]
  int v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+64h] [rbp+1Bh]
  __int64 v17; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+74h] [rbp+2Bh]

  v9 = 1;
  v2 = 0;
  v3 = (wchar_t *)*((_QWORD *)a1 + 1);
  v4 = 0;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  if ( (unsigned int)sub_1800798B8(v3, 256) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)sub_1800D5FB0() )
      {
        if ( (int)ZwCreateEvent() >= 0 )
        {
          RtlAcquireSRWLockExclusive(&qword_18015C488);
          v2 = 1;
          v4 = 1;
          if ( !byte_18015C484 )
          {
            pShimData[494] = 0LL;
            v13 = 0;
            v16 = 0;
            v19 = 0;
            p_UniqueProcess = &UniqueProcess;
            v14 = &v9;
            v17 = *((_QWORD *)a1 + 1);
            v6 = *a1 + 2;
            v12 = 4;
            v15 = 4;
            v18 = v6;
            byte_18015C484 = 1;
            if ( !(unsigned int)EtwEventWriteNoRegistration(
                                  (__int64)&unk_180113E90,
                                  &xmmword_1801246A0,
                                  3,
                                  (__int64)&p_UniqueProcess) )
            {
              v10 = -100000000LL;
              ZwWaitForSingleObject();
            }
          }
        }
      }
    }
  }
  if ( v2 )
    RtlReleaseSRWLockExclusive(&qword_18015C488);
  return v4;
}
