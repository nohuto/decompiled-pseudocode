/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x18002AD00
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002B4CC (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x180081AB0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpMapResourceFile @ 0x180018AC4 (LdrpMapResourceFile.c)
 *     LdrpGetDataModulePath @ 0x180018EF8 (LdrpGetDataModulePath.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18001AA5C (LdrpGetMUIFromCMFSegment.c)
 *     LdrpGetFromMUIMemCache @ 0x180029A0C (LdrpGetFromMUIMemCache.c)
 *     RtlAppendUnicodeToString @ 0x18002C120 (RtlAppendUnicodeToString.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002EE40 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180031110 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x18004D9D0 (RtlAppendUnicodeStringToString.c)
 *     RtlLcidToLocaleName @ 0x180051F50 (RtlLcidToLocaleName.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074F58 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpQuerySxSMUIFile @ 0x18007D764 (LdrpQuerySxSMUIFile.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18007DAD8 (LdrpVerifyAlternateResourceModule.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180089DF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     ResCIncrementCMFMissCount @ 0x18008E96C (ResCIncrementCMFMissCount.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180090E18 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x1800969C0 (wcsrchr.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0604 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  const wchar_t *v7; // rdi
  wchar_t *v8; // r12
  __int64 v9; // rsi
  _DWORD *v10; // rax
  __int64 v11; // r8
  __int64 v13; // r15
  int DataModulePath; // eax
  unsigned __int64 v15; // rax
  NTSTATUS ModuleInfoFromVirtualMemory; // edi
  int v17; // edi
  char v18; // di
  LANGID v19; // si
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rsi
  char v23; // al
  bool v24; // cf
  __int64 MUIFromCMFSegment; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  wchar_t *Heap; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  char v32; // [rsp+52h] [rbp-7E6h]
  NTSTATUS v33; // [rsp+54h] [rbp-7E4h]
  __int16 v34; // [rsp+58h] [rbp-7E0h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-7DCh] BYREF
  void *v36; // [rsp+60h] [rbp-7D8h] BYREF
  unsigned int v37; // [rsp+68h] [rbp-7D0h] BYREF
  ULONG v38; // [rsp+6Ch] [rbp-7CCh]
  int v39; // [rsp+70h] [rbp-7C8h] BYREF
  PVOID DllHandlea; // [rsp+78h] [rbp-7C0h]
  ULONG_PTR v41; // [rsp+80h] [rbp-7B8h] BYREF
  _UNICODE_STRING v42; // [rsp+88h] [rbp-7B0h] BYREF
  int v43; // [rsp+98h] [rbp-7A0h]
  wchar_t *Str; // [rsp+A0h] [rbp-798h] BYREF
  PVOID v45; // [rsp+A8h] [rbp-790h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-788h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-780h] BYREF
  PVOID BaseAddress; // [rsp+C0h] [rbp-778h] BYREF
  PVOID v49; // [rsp+C8h] [rbp-770h]
  _UNICODE_STRING Destination; // [rsp+D0h] [rbp-768h] BYREF
  PUNICODE_STRING v51; // [rsp+E0h] [rbp-758h] BYREF
  wchar_t *v52; // [rsp+E8h] [rbp-750h]
  _UNICODE_STRING LocaleName; // [rsp+F0h] [rbp-748h] BYREF
  ULONG_PTR *v54; // [rsp+100h] [rbp-738h]
  int v55; // [rsp+108h] [rbp-730h]
  __int64 v56; // [rsp+110h] [rbp-728h]
  int v57; // [rsp+118h] [rbp-720h]
  _BYTE *v58; // [rsp+120h] [rbp-718h]
  __int64 v59; // [rsp+130h] [rbp-708h] BYREF
  int v60; // [rsp+138h] [rbp-700h]
  _BYTE v61[56]; // [rsp+140h] [rbp-6F8h] BYREF
  char v62; // [rsp+180h] [rbp-6B8h] BYREF
  WCHAR Source[352]; // [rsp+1C0h] [rbp-678h] BYREF
  char v64; // [rsp+480h] [rbp-3B8h] BYREF
  _BYTE v65[704]; // [rsp+530h] [rbp-308h] BYREF

  v54 = ResourceOffset;
  DllHandlea = DllHandle;
  v38 = Flags;
  v45 = 0LL;
  Handle = 0LL;
  v37 = 0;
  v7 = 0LL;
  Str = 0LL;
  v35 = 0;
  v8 = 0LL;
  v52 = 0LL;
  v41 = 0LL;
  v51 = 0LL;
  v32 = 0;
  v59 = 72LL;
  v60 = 1;
  memset(v61, 0, sizeof(v61));
  v34 = 256;
  v39 = -1;
  v49 = 0LL;
  BaseAddress = 0LL;
  v9 = 0LL;
  v46 = 0LL;
  if ( !DllHandlea || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v10 = LdrpGetFromMUIMemCache((unsigned __int64)DllHandlea, LanguageId, &v41, 4);
  if ( v10 == (_DWORD *)-1LL )
  {
    if ( (Flags & 0x400000) == 0 )
    {
      *ResourceDllBase = 0LL;
      return -1073020922;
    }
  }
  else if ( v10 )
  {
    *ResourceDllBase = v10;
    if ( ResourceOffset )
      *ResourceOffset = v41;
    return 0;
  }
  v13 = 0LL;
  v36 = 0LL;
  v43 = v38 & 0x400000;
  if ( (v38 & 0x400000) != 0 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(
                       DllHandlea,
                       Source,
                       v11,
                       &v37,
                       &Str,
                       &v35,
                       (struct _ACTIVATION_CONTEXT **)&v46);
    v7 = Str;
    v9 = v46;
  }
  if ( DataModulePath < 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(
                                    DllHandlea,
                                    Source,
                                    (__int64)&BaseAddress,
                                    (__int64)&v35,
                                    (__int64)&v34);
    v33 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_75;
    v7 = (const wchar_t *)BaseAddress;
    Str = (wchar_t *)BaseAddress;
  }
  v15 = v37 & 0xFFFFFFFE;
  if ( v15 >= 0x2BE )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)Source + v15) = 0;
  if ( wcsrchr(v7, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Source, v7) >= 0 )
  {
    v7 = (const wchar_t *)v49;
    Str = (wchar_t *)v49;
    v29 = -1LL;
    do
      ++v29;
    while ( *((_WORD *)v49 + v29) );
    v35 = 2 * v29;
  }
  v58 = v65;
  v57 = 46006272;
  v56 = 0LL;
  v55 = 0;
  if ( (unsigned __int64)v35 + 12 > 0x3C )
  {
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v35 + 10);
    v8 = Heap;
    v52 = Heap;
    v13 = (__int64)v36;
    if ( !Heap )
    {
      ModuleInfoFromVirtualMemory = -1073741801;
LABEL_88:
      v33 = ModuleInfoFromVirtualMemory;
      goto LABEL_75;
    }
    Destination.Buffer = Heap;
    Destination.MaximumLength = 2 * (v35 + 5);
    v7 = Str;
    v9 = v46;
  }
  else
  {
    Destination.Buffer = (wchar_t *)&v62;
    Destination.MaximumLength = 60;
  }
  Destination.Length = 0;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, v7);
  v33 = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_75;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, L".mui");
  v33 = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_75;
  if ( v9 )
    RtlActivateActivationContextUnsafeFast(&v59, v9);
  v17 = LdrpQuerySxSMUIFile(&Destination, &v51);
  if ( v9 )
    RtlDeactivateActivationContextUnsafeFast(&v59);
  if ( v17 >= 0 )
  {
    v18 = 1;
    v32 = 1;
    v42.Buffer = v51->Buffer;
    v42.Length = v51->Length;
    v42.MaximumLength = v51->MaximumLength;
  }
  else
  {
    v18 = 0;
  }
  if ( v18
    || ResRuntimeView == (PVOID)-1LL
    || ResRuntimeView
    && ((v26 = *((_QWORD *)ResRuntimeView + 2)) == 0
     || (v27 = *(_QWORD *)(v26 + 24)) == 0
     || (*(_DWORD *)(v27 + 48) & 0x100000) != 0) )
  {
    v19 = LanguageId;
LABEL_27:
    if ( v18 )
    {
      LocaleName.Buffer = 0LL;
LABEL_30:
      v20 = 2147353477LL;
      if ( RtlGetCurrentServiceSessionId() )
      {
        v21 = (__int64)NtCurrentPeb()->SharedData + 555;
        v13 = (__int64)v36;
      }
      else
      {
        v21 = 2147353477LL;
      }
      if ( (*(_BYTE *)v21 & 1) != 0 )
      {
        v22 = 2147353476LL;
        if ( RtlGetCurrentServiceSessionId() )
        {
          v30 = (__int64)NtCurrentPeb()->SharedData + 554;
          v13 = (__int64)v36;
        }
        else
        {
          v30 = 2147353476LL;
        }
        LdrpTraceLoadMUIDll(&v42, *(unsigned __int8 *)v30);
      }
      else
      {
        v22 = 2147353476LL;
      }
      ModuleInfoFromVirtualMemory = LdrpMapResourceFile((__int64)DllHandlea, (__int128 *)&v42, v34, &Handle, &v45, &v41);
      v33 = ModuleInfoFromVirtualMemory;
      if ( ModuleInfoFromVirtualMemory >= 0 )
      {
        v13 = (unsigned __int64)v45 | 1;
        if ( !v32
          && !(unsigned __int8)LdrpVerifyAlternateResourceModule(
                                 DllHandlea,
                                 (unsigned __int64)v45 | 1,
                                 LocaleName.Buffer,
                                 v38) )
        {
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v45);
          NtClose(Handle);
          Handle = 0LL;
          v41 = 0LL;
          v13 = 0LL;
          ModuleInfoFromVirtualMemory = -1073020926;
          v33 = -1073020926;
        }
      }
      goto LABEL_38;
    }
    v42.Buffer = (wchar_t *)v65;
    *(_DWORD *)&v42.Length = 46006272;
    RtlAppendUnicodeToString(&v42, Source);
    LocaleName.Buffer = (wchar_t *)&v64;
    LocaleName.MaximumLength = 170;
    if ( RtlLcidToLocaleName(v19, &LocaleName, 2u, 0) >= 0 )
    {
      RtlAppendUnicodeStringToString(&v42, &LocaleName);
      RtlAppendUnicodeToString(&v42, L"\\");
      RtlAppendUnicodeToString(&v42, Destination.Buffer);
      goto LABEL_30;
    }
    ModuleInfoFromVirtualMemory = -1073741811;
    goto LABEL_88;
  }
  v19 = LanguageId;
  MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(DllHandlea, LanguageId, 0, v38, &v39, 0LL);
  v45 = (PVOID)MUIFromCMFSegment;
  if ( !MUIFromCMFSegment )
    goto LABEL_27;
  v13 = MUIFromCMFSegment | 1;
  ModuleInfoFromVirtualMemory = 0;
  v33 = 0;
LABEL_75:
  v22 = 2147353476LL;
  v20 = 2147353477LL;
LABEL_38:
  if ( !v13 )
    v13 = -1LL;
  v36 = (void *)v13;
  if ( ModuleInfoFromVirtualMemory == -1073741659
    || ModuleInfoFromVirtualMemory == -1073741801
    || ModuleInfoFromVirtualMemory == -1073741523 )
  {
    v23 = 0;
  }
  else
  {
    v23 = HIBYTE(v34);
  }
  if ( v23 )
  {
    v24 = v43 != 0;
    v43 = -v43;
    LdrpSetAlternateResourceModuleHandle(
      (_DWORD)DllHandlea,
      (unsigned int)&v36,
      (unsigned int)&Handle,
      0,
      v39,
      LanguageId,
      v24 ? 33 : 1,
      ModuleInfoFromVirtualMemory,
      v41);
  }
  if ( v36 == (void *)-1LL )
  {
    *ResourceDllBase = 0LL;
  }
  else
  {
    if ( v39 == -1 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v20 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v20 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v22 = (__int64)NtCurrentPeb()->SharedData + 554;
        LdrpTraceLoadMUIDll(&v42, *(unsigned __int8 *)v22);
      }
      if ( ResRuntimeView != (PVOID)-1LL )
        ResCIncrementCMFMissCount();
    }
    *ResourceDllBase = v36;
    if ( v54 )
      *v54 = v41;
    ModuleInfoFromVirtualMemory = 0;
    v33 = 0;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    ModuleInfoFromVirtualMemory = v33;
  }
  if ( v49 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v49);
    ModuleInfoFromVirtualMemory = v33;
  }
  if ( v8 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    return v33;
  }
  return ModuleInfoFromVirtualMemory;
}
