/*
 * XREFs of AcquireDeviceFirmwareLock @ 0x1C0018FB0
 * Callers:
 *     AcpiHandleDeviceFirmwareLock @ 0x1C0018F00 (AcpiHandleDeviceFirmwareLock.c)
 * Callees:
 *     DereferenceDeviceFirmwareLockHandlerEntry @ 0x1C001924C (DereferenceDeviceFirmwareLockHandlerEntry.c)
 *     FindDeviceFirmwareLockHandlerEntry @ 0x1C001944C (FindDeviceFirmwareLockHandlerEntry.c)
 *     PerformHandlerInvocation @ 0x1C00195CC (PerformHandlerInvocation.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0029E0C (ACPIInternalGetDeviceFromNSOBJ.c)
 */

__int64 __fastcall AcquireDeviceFirmwareLock(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int16 a6)
{
  __int64 DeviceFirmwareLockHandlerEntry; // rsi
  int v11; // r12d
  int v12; // edi
  int v13; // eax
  __int64 v14; // rax
  KIRQL v15; // dl
  __int64 v16; // rax
  _QWORD *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rdi
  __int64 v21; // r8
  void *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // ecx
  KIRQL v26; // al
  __int64 v27; // rcx
  __int64 v29; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+28h] [rbp-40h]
  int v31; // [rsp+30h] [rbp-38h]
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF

  DeviceFirmwareLockHandlerEntry = 0LL;
  if ( !*(_DWORD *)(a1 + 24) )
    *(_DWORD *)(a1 + 24) = 1;
  v11 = a5;
  v12 = -1073741802;
  do
  {
    if ( *(_DWORD *)(a1 + 24) == 1 )
    {
      v26 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
      if ( *(_QWORD *)a1 != a1 )
      {
        v27 = *(_QWORD *)(a1 + 16);
        if ( v27 )
        {
          DeviceFirmwareLockHandlerEntry = *(_QWORD *)(a1 + 16);
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 64));
        }
      }
      KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v26);
      if ( !DeviceFirmwareLockHandlerEntry )
      {
        *(_DWORD *)(a1 + 24) = 3;
        continue;
      }
      v25 = 2;
      v24 = *(_QWORD *)(a1 + 16);
      v31 = a6;
      v30 = 0;
      v29 = 0LL;
      *(_DWORD *)(a1 + 24) = 2;
      goto LABEL_26;
    }
    if ( *(_DWORD *)(a1 + 24) == 2 )
    {
      v12 = *(_DWORD *)(a1 + 40);
      DeviceFirmwareLockHandlerEntry = *(_QWORD *)(a1 + 16);
      if ( v12 >= 0 )
        *(_BYTE *)(a1 + 48) = 1;
      else
        DereferenceDeviceFirmwareLockHandlerEntry(*(PVOID *)(a1 + 16));
      if ( v12 != -1073741267 )
      {
        *(_DWORD *)(a1 + 24) = 0;
        continue;
      }
      *(_DWORD *)(a1 + 24) = 1;
      goto LABEL_16;
    }
    if ( *(_DWORD *)(a1 + 24) != 3 )
    {
      if ( *(_DWORD *)(a1 + 24) != 4 )
      {
        *(_DWORD *)(a1 + 24) = 0;
        v12 = -1073741823;
        continue;
      }
      v13 = *(_DWORD *)(a1 + 40);
      if ( v13 == -1073741267 )
      {
        DereferenceDeviceFirmwareLockHandlerEntry(*(PVOID *)(a1 + 64));
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      else if ( v13 >= 0 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_QWORD *)(a1 + 16) = v14;
        v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
        v16 = *(_QWORD *)(a1 + 16) + 16LL;
        v17 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
        if ( *v17 != v16 )
          __fastfail(3u);
        *(_QWORD *)(a1 + 8) = v17;
        *(_QWORD *)a1 = v16;
        *v17 = a1;
        *(_QWORD *)(v16 + 8) = a1;
        KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v15);
        v18 = *(void **)(a1 + 16);
        *(_DWORD *)(a1 + 24) = 1;
        DereferenceDeviceFirmwareLockHandlerEntry(v18);
        v19 = *(void **)(a1 + 72);
        if ( v19 )
        {
          ObfDereferenceObject(v19);
          *(_QWORD *)(a1 + 72) = 0LL;
        }
        goto LABEL_16;
      }
      *(_DWORD *)(a1 + 24) = 3;
LABEL_16:
      v12 = -1073741802;
      continue;
    }
    v20 = *(void **)(a1 + 64);
    DeviceFirmwareLockHandlerEntry = FindDeviceFirmwareLockHandlerEntry(
                                       *(unsigned __int8 *)(*(_QWORD *)(a1 + 88) + 41LL),
                                       0LL,
                                       v20);
    if ( v20 )
      DereferenceDeviceFirmwareLockHandlerEntry(v20);
    *(_QWORD *)(a1 + 64) = DeviceFirmwareLockHandlerEntry;
    if ( DeviceFirmwareLockHandlerEntry )
    {
      v23 = *(_QWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 24) = 4;
      if ( v23 )
      {
        v32 = v23;
      }
      else
      {
        ACPIInternalGetDeviceFromNSOBJ(a3, &v32, v21, 0LL);
        *(_QWORD *)(a1 + 72) = v32;
      }
      v31 = 0;
      LODWORD(v24) = DeviceFirmwareLockHandlerEntry;
      v30 = v11;
      v25 = 0;
      v29 = a4;
LABEL_26:
      *(_QWORD *)(a1 + 56) = a2;
      v12 = PerformHandlerInvocation(v25, a1, v24, a2, v29, v30, v31);
      continue;
    }
    v22 = *(void **)(a1 + 72);
    v12 = 0;
    *(_DWORD *)(a1 + 24) = 0;
    if ( v22 )
    {
      ObfDereferenceObject(v22);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
  }
  while ( *(_DWORD *)(a1 + 24) && v12 == -1073741802 );
  return (unsigned int)v12;
}
