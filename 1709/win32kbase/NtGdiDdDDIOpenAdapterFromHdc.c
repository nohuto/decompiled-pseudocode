/*
 * XREFs of NtGdiDdDDIOpenAdapterFromHdc @ 0x1C005E800
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromHdc(ULONG64 a1)
{
  ULONG64 v2; // rax
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // esi
  __int64 v5; // rbx
  int v6; // edx
  WCHAR *v7; // rdx
  struct _ERESOURCE *v8; // rcx
  _DWORD *v9; // rdx
  _QWORD *v10; // rdx
  _DWORD *v11; // rdx
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+2Ch] [rbp-4Ch]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]
  PDEVICE_OBJECT v19; // [rsp+48h] [rbp-30h]
  __int128 v20; // [rsp+50h] [rbp-28h]
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp+20h] BYREF

  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  DestinationString = *(struct _UNICODE_STRING *)v2;
  v18 = *(_QWORD *)(v2 + 16);
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  v15 = 0;
  v16 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v14, *(struct HOBJ__ **)&DestinationString.Length);
  if ( v14 )
  {
    v5 = *(_QWORD *)(v14 + 48);
    v21 = v5;
    if ( !v5 )
    {
LABEL_12:
      XDCOBJ::vUnlockFast((XDCOBJ *)&v14);
      goto LABEL_13;
    }
    EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 40));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v5 + 40), 11LL);
    v6 = *(_DWORD *)(v5 + 32);
    if ( (v6 & 1) == 0 )
      goto LABEL_33;
    if ( (v6 & 0x20000) != 0 )
      goto LABEL_10;
    if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v21) )
    {
      v7 = *(WCHAR **)(v5 + 2592);
      v4 = *((_DWORD *)v7 + 68);
    }
    else
    {
LABEL_33:
      if ( (v6 & 0x20000) != 0
        || (v13 = *(_QWORD *)(v5 + 2592)) == 0
        || (*(_DWORD *)(v13 + 160) & 0x4000000) == 0
        || (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
        || !Object
        || (PVOID)PsGetCurrentProcess() == gpepCSRSS
        || UserIsCurrentProcessDwm() )
      {
LABEL_10:
        EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(v5 + 40));
        v8 = *(struct _ERESOURCE **)(v5 + 40);
        if ( v8 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v8);
          PsLeavePriorityRegion();
        }
        goto LABEL_12;
      }
      v4 = *(_DWORD *)(*(_QWORD *)(v5 + 2592) + 272LL);
      v7 = word_1C0191088;
    }
    RtlInitUnicodeString(&DestinationString, v7);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
    goto LABEL_10;
  }
LABEL_13:
  v19 = 0LL;
  v20 = 0uLL;
  if ( DeviceObjectPointer < 0
    || (v19 = DeviceObject,
        ObfReferenceObject(DeviceObject),
        ObfDereferenceObject(FileObject),
        FileObject = 0LL,
        DeviceObjectPointer = _guard_dispatch_icall_fptr(),
        ObfDereferenceObject(DeviceObject),
        DeviceObject = 0LL,
        DeviceObjectPointer < 0) )
  {
    *(_QWORD *)&v20 = 0LL;
    DWORD2(v20) = 0;
    v4 = 0;
  }
  v9 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v9 = (_DWORD *)MmUserProbeAddress;
  *v9 = v20;
  v10 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v10 = (_QWORD *)MmUserProbeAddress;
  *v10 = *(_QWORD *)((char *)&v20 + 4);
  v11 = (_DWORD *)(a1 + 20);
  if ( a1 + 20 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  *v11 = v4;
  return (unsigned int)DeviceObjectPointer;
}
