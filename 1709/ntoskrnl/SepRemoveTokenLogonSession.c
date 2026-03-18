/*
 * XREFs of SepRemoveTokenLogonSession @ 0x14072F3CC
 * Callers:
 *     SepLinkLogonSessions @ 0x1401523CC (SepLinkLogonSessions.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x14048D160 (SepTokenDeleteMethod.c)
 *     SepSetServerSiloToken @ 0x140728934 (SepSetServerSiloToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SepRemoveTokenLogonSession(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edx
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *i; // rdx
  __int64 *j; // rbx
  __int64 *v8; // rax
  __int64 **v9; // rdx

  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = *(_DWORD *)(a1 + 24) & 0xF;
    --CurrentThread->KernelApcDisable;
    v4 = v3;
    v5 = &SepRmDbLock + (v3 & 3);
    ExAcquireResourceExclusiveLite(v5, 1u);
    for ( i = *(__int64 **)(SepLogonSessions + 8 * v4); i; i = (__int64 *)*i )
    {
      if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)i + 2)
        && *(_DWORD *)(a1 + 28) == *((_DWORD *)i + 3)
        && *(_QWORD *)(*(_QWORD *)(a1 + 216) + 160LL) == i[20] )
      {
        for ( j = (__int64 *)i[22]; j != i + 22; j = (__int64 *)*j )
        {
          if ( j[2] == a1 )
          {
            v8 = (__int64 *)*j;
            if ( *(__int64 **)(*j + 8) != j || (v9 = (__int64 **)j[1], *v9 != j) )
              __fastfail(3u);
            *v9 = v8;
            v8[1] = (__int64)v9;
            ExReleaseResourceLite(v5);
            KeLeaveCriticalRegion();
            ExFreePoolWithTag(j, 0);
            return;
          }
        }
      }
    }
    ExReleaseResourceLite(v5);
    KeLeaveCriticalRegion();
  }
}
