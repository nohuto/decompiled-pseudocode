/*
 * XREFs of PopFreeSessionState @ 0x1406FA384
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PopFreeRegistration @ 0x1406FA310 (PopFreeRegistration.c)
 */

void __fastcall PopFreeSessionState(int a1)
{
  unsigned int i; // esi
  WNF_STATE_NAME **v3; // rdi
  WNF_STATE_NAME *v4; // rbx
  WNF_STATE_NAME *v5; // rcx
  unsigned int v6; // eax
  WNF_STATE_NAME v7; // rax
  WNF_STATE_NAME **v8; // rdx

  ExAcquireFastMutex(&PopSettingLock);
  for ( i = 0; i < 2; ++i )
  {
    v3 = (WNF_STATE_NAME **)((char *)&PopSessionSpecificLists + 16 * i);
    v4 = *v3;
    while ( v4 != (WNF_STATE_NAME *)v3 )
    {
      v5 = v4;
      if ( v4[6].Data[0] != a1 )
        goto LABEL_6;
      v6 = v4[6].Data[1];
      if ( (v6 & 2) != 0 )
      {
        v4[6].Data[1] = v6 | 4;
LABEL_6:
        v4 = (WNF_STATE_NAME *)*v4;
      }
      else
      {
        v7 = *v4;
        v4 = (WNF_STATE_NAME *)*v4;
        if ( *(WNF_STATE_NAME **)(*(_QWORD *)v5 + 8LL) != v5 || (v8 = (WNF_STATE_NAME **)v5[1], *v8 != v5) )
          __fastfail(3u);
        *v8 = (WNF_STATE_NAME *)v7;
        *(_QWORD *)(*(_QWORD *)&v7 + 8LL) = v8;
        PopFreeRegistration(v5);
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
}
