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
  __int64 v2; // r8
  unsigned int i; // esi
  __int64 **v4; // rdi
  __int64 *v5; // rbx
  _QWORD *v6; // rcx
  int v7; // eax
  __int64 *v8; // rax
  _QWORD *v9; // rdx

  ExAcquireFastMutex(&PopSettingLock);
  for ( i = 0; i < 2; ++i )
  {
    v4 = (__int64 **)((char *)&PopSessionSpecificLists + 16 * i);
    v5 = *v4;
    while ( v5 != (__int64 *)v4 )
    {
      v6 = v5;
      if ( *((_DWORD *)v5 + 12) != a1 )
        goto LABEL_6;
      v7 = *((_DWORD *)v5 + 13);
      if ( (v7 & 2) != 0 )
      {
        *((_DWORD *)v5 + 13) = v7 | 4;
LABEL_6:
        v5 = (__int64 *)*v5;
      }
      else
      {
        v8 = (__int64 *)*v5;
        v5 = (__int64 *)*v5;
        if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v9 = (_QWORD *)v6[1], (_QWORD *)*v9 != v6) )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = (__int64)v9;
        PopFreeRegistration(v6, (__int64)v9, v2);
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
}
