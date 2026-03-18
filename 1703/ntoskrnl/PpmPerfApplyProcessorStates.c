/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x140146A10
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeOrAffinityEx @ 0x140080BD0 (KeOrAffinityEx.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400D9440 (KeRemoveProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140120AD0 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfApplyProcessorState @ 0x140146C0C (PpmPerfApplyProcessorState.c)
 *     PpmPerfQueueAction @ 0x140147208 (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x14017D35C (PpmPerfApplyHiddenProcessorState.c)
 *     memset @ 0x140192D80 (memset.c)
 */

char PpmPerfApplyProcessorStates()
{
  char v0; // bl
  __int64 i; // rdi
  __int64 v2; // r8
  unsigned int v3; // esi
  __int64 v4; // r14
  __int64 Prcb; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v13; // [rsp+28h] [rbp-99h] BYREF
  unsigned __int16 *v14; // [rsp+30h] [rbp-91h] BYREF
  __int64 v15; // [rsp+38h] [rbp-89h]
  __int16 v16; // [rsp+40h] [rbp-81h]
  __int64 v17; // [rsp+48h] [rbp-79h] BYREF
  __int64 v18; // [rsp+50h] [rbp-71h]
  _BYTE v19[152]; // [rsp+58h] [rbp-69h] BYREF

  v0 = 0;
  v17 = 1310721LL;
  v18 = 0LL;
  memset(v19, 0, sizeof(v19));
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 487) )
    {
      KeOrAffinityEx((unsigned __int16 *)(i + 24), (unsigned __int16 *)&v17, &v17);
      v3 = 0;
      LODWORD(v13) = 0;
      if ( *(_DWORD *)(i + 200) )
      {
        do
        {
          v4 = *(_QWORD *)(i + 208) + 152LL * v3;
          if ( *(_BYTE *)(v4 + 16) )
          {
            if ( *(_BYTE *)(v4 + 144) )
            {
              LOBYTE(v2) = 1;
              PpmPerfApplyHiddenProcessorState(i, *(_QWORD *)(i + 208) + 152LL * v3, v2);
              *(_BYTE *)(v4 + 144) = 0;
            }
            PpmPerfApplyHiddenProcessorState(i, v4, 0LL);
          }
          ++v3;
        }
        while ( v3 < *(_DWORD *)(i + 200) );
        LODWORD(v13) = v3;
      }
      *(_BYTE *)(i + 487) = 0;
    }
  }
  v15 = v18;
  v14 = (unsigned __int16 *)&v17;
  v16 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v14) )
  {
    Prcb = KeGetPrcb(v13);
    v9 = Prcb;
    v10 = *(_QWORD *)(Prcb + 24312);
    if ( *(_BYTE *)(v10 + 144) )
    {
      LOBYTE(v6) = 1;
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, v6, v7, v8) )
      {
        *(_BYTE *)(v10 + 144) = 0;
        goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( (unsigned __int8)PpmPerfApplyProcessorState(v9, 0LL, v7, v8) )
        KeRemoveProcessorAffinityEx((unsigned __int16 *)&v17, v13);
    }
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&v17);
  if ( !PpmCheckCount )
    return 1;
  v15 = v18;
  v14 = (unsigned __int16 *)&v17;
  v16 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v14) )
  {
    v11 = KeGetPrcb(v13);
    PpmPerfQueueAction(v11, 2LL);
  }
  return v0;
}
