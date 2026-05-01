/*
 * XREFs of CrmGlobalsRundown @ 0x180034D70
 * Callers:
 *     PsmCrmSessionUserNotification @ 0x180036ED0 (PsmCrmSessionUserNotification.c)
 *     CrmGlobalsPeriodicRundown @ 0x180069E10 (CrmGlobalsPeriodicRundown.c)
 * Callees:
 *     CrmLogStateMonitorRundown @ 0x180034E60 (CrmLogStateMonitorRundown.c)
 *     CrmGlobalsSubscriberRundownHelper @ 0x180034F08 (CrmGlobalsSubscriberRundownHelper.c)
 */

__int64 __fastcall CrmGlobalsRundown(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  char v5; // dl
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rdi

  RtlAcquireSRWLockShared(&unk_180092A18);
  v2 = xmmword_180092A28;
  if ( (_QWORD)xmmword_180092A28 )
  {
    while ( 1 )
    {
LABEL_2:
      if ( (int)CrmGlobalsSubscriberRundownHelper(v2, 0LL) < 0 )
        goto LABEL_15;
      v3 = *(_QWORD *)v2;
      if ( !*(_QWORD *)v2 )
      {
        v3 = *(_QWORD *)(v2 + 8);
        if ( !v3 )
          break;
      }
      if ( (BYTE8(xmmword_180092A28) & 1) != 0 )
        v2 ^= v3;
      else
        v2 = v3;
    }
    v4 = v2;
    v5 = BYTE8(xmmword_180092A28) & 1;
    while ( 1 )
    {
      v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 )
      {
        if ( !v4 )
          break;
        v4 ^= v2;
      }
      if ( !v4 )
        break;
      v6 = *(_QWORD *)(v4 + 8);
      if ( v5 )
      {
        if ( !v6 )
          goto LABEL_11;
        v6 ^= v4;
      }
      if ( v6 && v6 != v2 )
      {
        v2 = v6;
        goto LABEL_2;
      }
LABEL_11:
      v2 = v4;
    }
  }
LABEL_15:
  RtlReleaseSRWLockShared(&unk_180092A18);
  RtlAcquireSRWLockShared(a1);
  v7 = (_QWORD *)(a1 + 16);
  v8 = 16LL;
  do
  {
    if ( *v7 )
      CrmLogStateMonitorRundown();
    ++v7;
    --v8;
  }
  while ( v8 );
  return RtlReleaseSRWLockShared(a1);
}
