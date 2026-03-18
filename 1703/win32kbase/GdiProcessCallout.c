/*
 * XREFs of GdiProcessCallout @ 0x1C0068BE0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C00691E0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C006D8A8 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall GdiProcessCallout(__int64 a1, char a2)
{
  unsigned __int64 v4; // rdi
  int v5; // r15d
  HANDLE ProcessId; // rax
  COPM *v7; // rcx
  HANDLE v8; // rax
  BOOLEAN i; // dl
  PVOID v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  void *v13; // rcx
  __int64 ProcessPeb; // rax
  __int64 v16; // r14
  __int64 v17; // r8
  NTSTATUS v18; // edi
  HANDLE v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  ULONG_PTR ViewSize[5]; // [rsp+50h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+18h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp+20h] BYREF

  if ( a2 )
  {
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(a1 + 88),
      GDIEngUserMemAllocNodeCompare,
      GDIEngUserMemAllocNodeAlloc,
      (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
      0LL);
    *(_QWORD *)(a1 + 200) = a1 + 192;
    *(_QWORD *)(a1 + 192) = a1 + 192;
    *(_QWORD *)(a1 + 216) = a1 + 208;
    *(_QWORD *)(a1 + 208) = a1 + 208;
    *(_DWORD *)(a1 + 284) |= 1u;
    ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
    v16 = ProcessPeb;
    if ( ProcessPeb
      && (*(_DWORD *)(ProcessPeb + 264) = 20,
          memset((void *)(ProcessPeb + 320), 0, 0xF0uLL),
          LOBYTE(v17) = a2,
          (int)((__int64 (__fastcall *)(__int64, void *, __int64))qword_1C018B780)(
                 a1 + 248,
                 &gDxgkWin32kEngInterface,
                 v17) >= 0) )
    {
      BaseAddress = 0LL;
      ViewSize[0] = 0LL;
      SectionHandle = 0LL;
      if ( ObOpenObjectByPointer(gpHmgrSharedHandleSection, 0x200u, 0LL, 0xF001Fu, 0LL, 0, &SectionHandle) < 0 )
      {
        v18 = -1073741502;
      }
      else
      {
        v18 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                0LL,
                0LL,
                ViewSize,
                ViewUnmap,
                0,
                2u);
        if ( v18 >= 0 && (v19 = MmSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u), (*(_QWORD *)(a1 + 240) = v19) != 0LL) )
          *(_QWORD *)(v16 + 248) = BaseAddress;
        else
          v18 = -1073741502;
        ZwClose(SectionHandle);
      }
      if ( v18 < 0 )
        ((void (__fastcall *)(__int64, void *, _QWORD))qword_1C018B780)(a1 + 248, &gDxgkWin32kEngInterface, 0LL);
      return (unsigned int)v18;
    }
    else
    {
      return 3221225794LL;
    }
  }
  else
  {
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
    GdiUnmapGDIW32PIDLockedBitmaps(a1);
    if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0
      && (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock()
      && (int)IsUmfdUninitializeProcessSupported() >= 0 )
    {
      UmfdUninitializeProcess();
    }
    v5 = NtGdiCloseProcess((unsigned int)v4, 1LL);
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    COPM::DestroyProtectedOutputsOwnedByProcess(v7, ProcessId);
    if ( (int)IsMonitorAPIProcessTerminatingSupported() >= 0 )
    {
      v8 = PsGetProcessId(*(PEPROCESS *)a1);
      MonitorAPIProcessTerminating(v8);
    }
    ((void (__fastcall *)(__int64, void *, _QWORD))qword_1C018B780)(a1 + 248, &gDxgkWin32kEngInterface, 0LL);
    for ( i = 1; ; i = 0 )
    {
      v10 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), i);
      if ( !v10 )
        break;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), v10);
    }
    v11 = *(_QWORD **)(a1 + 192);
    if ( v11 )
    {
      while ( v11 != (_QWORD *)(a1 + 192) )
      {
        v20 = (__int64)v11;
        v11 = (_QWORD *)*v11;
        Win32FreePool(v20);
      }
    }
    v12 = *(_QWORD **)(a1 + 208);
    if ( v12 )
    {
      while ( v12 != (_QWORD *)(a1 + 208) )
      {
        v21 = (__int64)v12;
        v12 = (_QWORD *)*v12;
        Win32FreePool(v21);
      }
    }
    v13 = *(void **)(a1 + 240);
    if ( v13 )
      MmUnsecureVirtualMemory(v13);
    return v5 == 0 ? 0xC0000121 : 0;
  }
}
