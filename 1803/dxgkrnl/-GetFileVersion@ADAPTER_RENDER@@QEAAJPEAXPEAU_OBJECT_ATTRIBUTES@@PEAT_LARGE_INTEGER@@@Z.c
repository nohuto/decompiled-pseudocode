/*
 * XREFs of ?GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0159F28
 * Callers:
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00A587C (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C015A224 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetFileVersion(
        ADAPTER_RENDER *this,
        void *FileHandle,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4)
{
  PVOID v6; // rsi
  int v7; // r12d
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  NTSTATUS v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  int Resource; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v25; // [rsp+58h] [rbp-A0h] BYREF
  PVOID MappedBase; // [rsp+60h] [rbp-98h] BYREF
  __int64 v27; // [rsp+68h] [rbp-90h] BYREF
  __int64 v28; // [rsp+70h] [rbp-88h] BYREF
  void *SectionHandle; // [rsp+78h] [rbp-80h] BYREF
  PVOID Object; // [rsp+80h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-70h] BYREF

  v6 = 0LL;
  SectionHandle = 0LL;
  v25 = 0LL;
  MappedBase = 0LL;
  v7 = 1;
  v28 = 0LL;
  a3->ObjectName = 0LL;
  v8 = ZwCreateSection(&SectionHandle, 4u, a3, 0LL, 2u, 0x1000000u, FileHandle);
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_2;
  v12 = ObReferenceObjectByHandle(SectionHandle, 4u, 0LL, 0, &Object, 0LL);
  v10 = v12;
  v6 = Object;
  if ( v12 < 0 )
    goto LABEL_2;
  v27 = 0LL;
  v13 = MmMapViewInSystemSpaceEx(Object, &MappedBase, &v25, &v27, 1LL);
  v17 = v13;
  if ( v13 >= 0 )
    goto LABEL_6;
  v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
  *(_QWORD *)(v18 + 24) = *((_QWORD *)this + 2);
  *(_QWORD *)(v18 + 32) = v17;
  WdLogEvent5_WdWarning(v18);
  MappedBase = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v7 = 0;
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  v19 = MmMapViewOfSection(v6, PsInitialSystemProcess, &MappedBase, 0LL, 0LL, &v27, &v25, 2, 0, 2);
  v10 = v19;
  if ( v19 < 0 )
  {
LABEL_2:
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdError(v11);
  }
  else
  {
LABEL_6:
    a4->QuadPart = 0LL;
    Resource = LdrResFindResource(MappedBase, 16LL, 1LL, 0LL, &v28, &v25, 0LL, 0LL, 16);
    v10 = Resource;
    if ( Resource >= 0 )
    {
      if ( v25 >= 0x5C && !wcsncmp((const wchar_t *)(v28 + 6), L"VS_VERSION_INFO", 0x20uLL) )
      {
        v23 = v28;
        a4->HighPart = *(_DWORD *)(v28 + 48);
        a4->LowPart = *(_DWORD *)(v23 + 52);
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v22 + 24) = *((_QWORD *)this + 2);
      *(_QWORD *)(v22 + 32) = v10;
      WdLogEvent5_WdError(v22);
      LODWORD(v10) = 0;
    }
  }
  if ( MappedBase )
  {
    if ( v7 )
    {
      MmUnmapViewInSystemSpace(MappedBase);
    }
    else
    {
      MmUnmapViewOfSection(PsInitialSystemProcess);
      KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  return (unsigned int)v10;
}
