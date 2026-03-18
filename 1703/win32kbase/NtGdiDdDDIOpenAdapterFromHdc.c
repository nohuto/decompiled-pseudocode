/*
 * XREFs of NtGdiDdDDIOpenAdapterFromHdc @ 0x1C005F3E0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromHdc(unsigned __int64 a1)
{
  CTouchProcessor *v2; // rdx
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  struct _UNICODE_STRING *p_DestinationString; // rcx
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx
  CTouchProcessor *v13; // rcx
  CTouchProcessor *v14; // rcx
  CTouchProcessor *v15; // rcx
  __int64 v17; // rax
  PFILE_OBJECT FileObject; // [rsp+20h] [rbp-88h] BYREF
  PDEVICE_OBJECT v19; // [rsp+28h] [rbp-80h] BYREF
  __int128 v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+40h] [rbp-68h] BYREF
  int v22; // [rsp+48h] [rbp-60h]
  int v23; // [rsp+4Ch] [rbp-5Ch]
  __int64 v24; // [rsp+50h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING v26; // [rsp+68h] [rbp-40h] BYREF
  __int128 v27; // [rsp+78h] [rbp-30h]
  __int64 v28; // [rsp+88h] [rbp-20h]
  int v29; // [rsp+B8h] [rbp+10h]
  PDEVICE_OBJECT DeviceObject; // [rsp+C8h] [rbp+20h] BYREF

  v2 = (CTouchProcessor *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v2 = W32UserProbeAddress;
  v27 = *(_OWORD *)v2;
  v28 = *((_QWORD *)v2 + 2);
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  v29 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  v22 = 0;
  v23 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v21, (HDC)v27);
  if ( v21 )
  {
    v5 = *(_QWORD *)(v21 + 48);
    v24 = v5;
    if ( !v5 )
    {
LABEL_11:
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v21);
      _InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
      v4 = v29;
      goto LABEL_12;
    }
    EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 40));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v5 + 40), 11LL);
    v7 = *(unsigned int *)(v5 + 32);
    v8 = 1LL;
    if ( (*(_DWORD *)(v5 + 32) & 0x20001) == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v24) )
    {
      v9 = *(_QWORD *)(v5 + 2592);
      v29 = *(_DWORD *)(v9 + 272);
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v9);
      p_DestinationString = &DestinationString;
    }
    else
    {
      if ( (v7 & 0x20000) != 0
        || (v17 = *(_QWORD *)(v5 + 2592)) == 0
        || (*(_DWORD *)(v17 + 160) & 0x4000000) == 0
        || (unsigned __int16)(gProtocolType - v8) > 0xFFFDu
        || !qword_1C018C350
        || (PVOID)PsGetCurrentProcess(65533LL, v7, v8, v6) == gpepCSRSS
        || UserIsCurrentProcessDwm() )
      {
LABEL_9:
        EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(v5 + 40));
        v11 = *(struct _ERESOURCE **)(v5 + 40);
        if ( v11 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v11);
          PsLeavePriorityRegion(v12);
        }
        goto LABEL_11;
      }
      v29 = *(_DWORD *)(*(_QWORD *)(v5 + 2592) + 272LL);
      RtlInitUnicodeString(&v26, word_1C018C358);
      p_DestinationString = &v26;
    }
    DeviceObjectPointer = IoGetDeviceObjectPointer(p_DestinationString, 0, &FileObject, &DeviceObject);
    goto LABEL_9;
  }
LABEL_12:
  v19 = 0LL;
  v20 = 0uLL;
  if ( DeviceObjectPointer < 0
    || (v19 = DeviceObject,
        ObfReferenceObject(DeviceObject),
        ObfDereferenceObject(FileObject),
        FileObject = 0LL,
        DeviceObjectPointer = ((__int64 (__fastcall *)(PDEVICE_OBJECT *))qword_1C018B798)(&v19),
        ObfDereferenceObject(DeviceObject),
        DeviceObject = 0LL,
        DeviceObjectPointer < 0) )
  {
    *(_QWORD *)&v20 = 0LL;
    DWORD2(v20) = 0;
    v4 = 0;
  }
  v13 = (CTouchProcessor *)(a1 + 8);
  if ( a1 + 8 >= (unsigned __int64)W32UserProbeAddress )
    v13 = W32UserProbeAddress;
  *(_DWORD *)v13 = v20;
  v14 = (CTouchProcessor *)(a1 + 12);
  if ( a1 + 12 >= (unsigned __int64)W32UserProbeAddress )
    v14 = W32UserProbeAddress;
  *(_QWORD *)v14 = *(_QWORD *)((char *)&v20 + 4);
  v15 = (CTouchProcessor *)(a1 + 20);
  if ( a1 + 20 >= (unsigned __int64)W32UserProbeAddress )
    v15 = W32UserProbeAddress;
  *(_DWORD *)v15 = v4;
  return (unsigned int)DeviceObjectPointer;
}
