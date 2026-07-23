/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x140772E60
 * Callers:
 *     PopNotifySessionDisplayRequired @ 0x140613950 (PopNotifySessionDisplayRequired.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x14065363C (TtmpAcquireSessionById.c)
 *     TtmiUndimAllTerminals @ 0x1407721FC (TtmiUndimAllTerminals.c)
 *     TtmiScheduleSessionWorker @ 0x140773264 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x140776CB8 (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x140776D7C (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(int a1, char a2)
{
  unsigned int v3; // ebp
  char v4; // si
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // edx
  int v10; // eax
  int v11; // eax
  __int64 *i; // rax
  int v13; // eax
  unsigned int ExplicitScope; // [rsp+70h] [rbp+8h] BYREF
  bool Buffer; // [rsp+78h] [rbp+10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  ExplicitScope = a1;
  v3 = 0;
  v4 = 0;
  v5 = TtmpAcquireSessionById(&v17, a1);
  v6 = v17;
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = v5;
    v9 = 2355;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v9, v8, -1);
    goto LABEL_19;
  }
  v10 = *(_DWORD *)(v17 + 20);
  if ( a2 )
  {
    if ( v10 == -1 )
    {
      v7 = -1073741675;
      v9 = 2385;
      v8 = -1073741675;
      goto LABEL_3;
    }
    v13 = v10 + 1;
    *(_DWORD *)(v17 + 20) = v13;
    if ( v13 == 1 )
    {
      TtmiUndimAllTerminals(v6);
LABEL_16:
      v4 = 1;
    }
  }
  else
  {
    if ( !v10 )
    {
      v7 = -1073741811;
      v9 = 2364;
      v8 = -1073741811;
      goto LABEL_3;
    }
    v11 = v10 - 1;
    *(_DWORD *)(v17 + 20) = v11;
    if ( !v11 )
    {
      for ( i = *(__int64 **)(v6 + 40); i != (__int64 *)(v6 + 40); i = (__int64 *)*i )
        *((_DWORD *)i + 8) |= 0x24u;
      TtmiScheduleSessionWorker(v6, 2LL);
      goto LABEL_16;
    }
  }
  v7 = 0;
  if ( v4 )
  {
    Buffer = *(_DWORD *)(v6 + 20) != 0;
    ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &Buffer, 1u, 0LL, &ExplicitScope, 0, 0);
  }
LABEL_19:
  if ( v6 )
  {
    v3 = *(_DWORD *)(v6 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a2 )
    return TtmiLogSessionDisplayRequiredReference(ExplicitScope, v3, v7);
  else
    return TtmiLogSessionDisplayRequiredDereference(ExplicitScope, v3, v7);
}
