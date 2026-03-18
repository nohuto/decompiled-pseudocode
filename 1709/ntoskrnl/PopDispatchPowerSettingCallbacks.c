/*
 * XREFs of PopDispatchPowerSettingCallbacks @ 0x1404E8230
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x1400AEE80 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1400AEEFC (PopDecrementPowerSettingPendingUpdates.c)
 *     PopUnregisterPowerSettingCallback @ 0x140241124 (PopUnregisterPowerSettingCallback.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PopCallPowerSettingCallback @ 0x1404E8318 (PopCallPowerSettingCallback.c)
 */

__int64 PopDispatchPowerSettingCallbacks()
{
  __int64 v0; // rbx
  PVOID *v1; // rdi
  __int64 v2; // r14
  PVOID *v3; // rsi
  PVOID *v4; // rbx
  PVOID *v5; // rbp
  char v7; // al
  _QWORD *v8; // r8
  __int64 v9; // r9
  char v10; // dl
  _QWORD *v12; // rbx
  PVOID *v13; // rax

  PopIncrementPowerSettingPendingUpdates(0);
  PopDecrementPowerSettingPendingUpdates(1);
  v0 = dword_1403661AC;
  ExAcquireFastMutex(&PopSettingLock);
  v1 = (PVOID *)PopPowerSettings;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    v2 = v0;
    do
    {
      v3 = v1 + 2;
      v4 = (PVOID *)v1[2];
      while ( v4 != v3 )
      {
        if ( *((_BYTE *)v4 + 104) )
        {
          v4 = (PVOID *)*v4;
        }
        else
        {
          *((_BYTE *)v4 + 104) = 1;
          if ( v4[9] != v1[v2 + 8] )
            PopCallPowerSettingCallback(v4);
          v5 = (PVOID *)*v4;
          *((_BYTE *)v4 + 104) = 0;
          if ( *((_BYTE *)v4 + 33) || *((_BYTE *)v4 + 32) )
            PopUnregisterPowerSettingCallback(v4);
          v4 = v5;
        }
      }
      if ( *v3 != v3 || *((_DWORD *)v1 + 14) || *((_DWORD *)v1 + 15) )
        goto LABEL_12;
      v7 = 1;
      v8 = v1 + 8;
      v9 = 3LL;
      do
      {
        v10 = 0;
        if ( *v8++ == 0LL )
          v10 = v7;
        v7 = v10;
        --v9;
      }
      while ( v9 );
      if ( !v10 )
      {
LABEL_12:
        v1 = (PVOID *)*v1;
      }
      else
      {
        v12 = *v1;
        if ( *((PVOID **)*v1 + 1) != v1 || (v13 = (PVOID *)v1[1], *v13 != v1) )
          __fastfail(3u);
        *v13 = v12;
        v12[1] = v13;
        ExFreePoolWithTag(v1, 0x74655350u);
        v1 = (PVOID *)v12;
      }
    }
    while ( v1 != &PopPowerSettings );
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return PopDecrementPowerSettingPendingUpdates(0);
}
