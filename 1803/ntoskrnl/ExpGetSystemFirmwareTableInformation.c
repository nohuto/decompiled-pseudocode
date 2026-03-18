/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x14058A1CC
 * Callers:
 *     ExpGetSystemFlushInformation @ 0x140572C3C (ExpGetSystemFlushInformation.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x140651BE4 (ExpGetSystemPlatformBinary.c)
 *     ExGetSystemFirmwareTable @ 0x140652860 (ExGetSystemFirmwareTable.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1407BAAC0 (ExEnumerateSystemFirmwareTables.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1407BFCEC (ExpFirmwareAccessAppContainerCheck.c)
 */

__int64 __fastcall ExpGetSystemFirmwareTableInformation(char *Src, char a2, unsigned int a3, _DWORD *a4)
{
  int v7; // edi
  _DWORD *v8; // rbx
  _DWORD *v9; // rsi
  unsigned int v10; // r14d
  _DWORD *PoolWithQuotaTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 (__fastcall *v14)(_DWORD *); // r14
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v18; // rax
  int v19; // [rsp+30h] [rbp-88h] BYREF
  PVOID P; // [rsp+38h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  int *v22; // [rsp+60h] [rbp-58h]
  int v23; // [rsp+68h] [rbp-50h]
  int v24; // [rsp+6Ch] [rbp-4Ch]

  v7 = 0;
  v8 = 0LL;
  P = 0LL;
  if ( a3 < 0x10 )
  {
    *a4 = 16;
    v7 = -1073741820;
    goto LABEL_19;
  }
  v9 = Src;
  v10 = a3 - 16;
  if ( !a2 )
    goto LABEL_5;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x54465241u);
  v8 = PoolWithQuotaTag;
  P = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v7 = -1073741670;
    goto LABEL_19;
  }
  memmove(PoolWithQuotaTag, Src, a3);
  v9 = v8;
  if ( !(unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process)
    || *v8 == 1381190978 && (unsigned __int8)ExpFirmwareAccessAppContainerCheck(0LL) )
  {
LABEL_5:
    v9[3] = v10;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&ExpFirmwareTableResource, 1u);
    v14 = 0LL;
    v15 = ExpFirmwareTableProviderListHead - 24;
    if ( &ExpFirmwareTableProviderListHead != (__int64 *)ExpFirmwareTableProviderListHead )
    {
      while ( *(_DWORD *)v15 != *v9 )
      {
        v18 = *(__int64 **)(v15 + 24);
        v15 = (__int64)(v18 - 3);
        if ( &ExpFirmwareTableProviderListHead == v18 )
          goto LABEL_8;
      }
      v14 = *(__int64 (__fastcall **)(_DWORD *))(v15 + 8);
    }
LABEL_8:
    if ( v14 )
      v7 = v14(v9);
    ExReleaseResourceLite(&ExpFirmwareTableResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v14 )
    {
      if ( a2 )
      {
        if ( v7 >= 0 )
          memmove(Src + 16, v8 + 4, (unsigned int)v8[3]);
        if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
          *((_DWORD *)Src + 3) = v8[3];
        v16 = v8[3];
      }
      else
      {
        v16 = v9[3];
      }
      *a4 = v16 + 16;
    }
    else
    {
      v7 = -1073741822;
    }
  }
  else
  {
    v7 = -1073741790;
    if ( stru_140398400.LevelPlus1 > 5 && TlgKeywordOn(&stru_140398400, 0x200000000000uLL) )
    {
      v19 = *v8;
      v22 = &v19;
      v23 = 4;
      v24 = 0;
      TlgWrite(&stru_140398400, &unk_14030F12E, 0LL, 0LL, 3u, &pData);
    }
  }
LABEL_19:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54465241u);
  return (unsigned int)v7;
}
