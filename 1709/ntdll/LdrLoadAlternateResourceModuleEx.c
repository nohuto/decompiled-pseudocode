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

__int64 __fastcall LdrLoadAlternateResourceModuleEx(
        __int64 a1,
        unsigned __int16 a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned int a5)
{
  wchar_t *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rsi
  _DWORD *v10; // rax
  __int64 v11; // r8
  __int64 v13; // r15
  int DataModulePath; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int ModuleInfoFromVirtualMemory; // edi
  int v19; // edi
  char v20; // di
  unsigned __int16 v21; // si
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // r8
  char v27; // al
  bool v28; // cf
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 MUIFromCMFSegment; // rax
  __int64 v32; // rax
  __int64 Heap; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  char v37; // [rsp+52h] [rbp-7E6h]
  unsigned int v38; // [rsp+54h] [rbp-7E4h]
  char v39; // [rsp+58h] [rbp-7E0h] BYREF
  char v40; // [rsp+59h] [rbp-7DFh]
  unsigned int v41; // [rsp+5Ch] [rbp-7DCh] BYREF
  __int64 v42; // [rsp+60h] [rbp-7D8h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-7D0h] BYREF
  unsigned int v44; // [rsp+6Ch] [rbp-7CCh]
  int v45; // [rsp+70h] [rbp-7C8h] BYREF
  __int64 v46; // [rsp+78h] [rbp-7C0h]
  __int64 v47; // [rsp+80h] [rbp-7B8h] BYREF
  __int128 v48; // [rsp+88h] [rbp-7B0h] BYREF
  int v49; // [rsp+98h] [rbp-7A0h]
  wchar_t *Str; // [rsp+A0h] [rbp-798h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-790h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-788h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-780h] BYREF
  wchar_t *v54; // [rsp+C0h] [rbp-778h] BYREF
  wchar_t *v55; // [rsp+C8h] [rbp-770h]
  __int16 v56; // [rsp+D0h] [rbp-768h] BYREF
  __int16 v57; // [rsp+D2h] [rbp-766h]
  char *v58; // [rsp+D8h] [rbp-760h]
  __int64 v59; // [rsp+E0h] [rbp-758h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-750h]
  _BYTE v61[2]; // [rsp+F0h] [rbp-748h] BYREF
  __int16 v62; // [rsp+F2h] [rbp-746h]
  char *v63; // [rsp+F8h] [rbp-740h]
  _QWORD *v64; // [rsp+100h] [rbp-738h]
  int v65; // [rsp+108h] [rbp-730h] BYREF
  __int64 v66; // [rsp+110h] [rbp-728h]
  int v67; // [rsp+118h] [rbp-720h] BYREF
  _BYTE *v68; // [rsp+120h] [rbp-718h]
  __int64 v69; // [rsp+130h] [rbp-708h] BYREF
  int v70; // [rsp+138h] [rbp-700h]
  _BYTE v71[56]; // [rsp+140h] [rbp-6F8h] BYREF
  char v72; // [rsp+180h] [rbp-6B8h] BYREF
  WCHAR SourceString[352]; // [rsp+1C0h] [rbp-678h] BYREF
  char v74; // [rsp+480h] [rbp-3B8h] BYREF
  _BYTE v75[704]; // [rsp+530h] [rbp-308h] BYREF

  v64 = a4;
  v46 = a1;
  v44 = a5;
  v51 = 0LL;
  Handle = 0LL;
  v43 = 0;
  v7 = 0LL;
  Str = 0LL;
  v41 = 0;
  v8 = 0LL;
  v60 = 0LL;
  v47 = 0LL;
  v59 = 0LL;
  v37 = 0;
  v69 = 72LL;
  v70 = 1;
  memset(v71, 0, sizeof(v71));
  v39 = 0;
  v45 = -1;
  v55 = 0LL;
  v54 = 0LL;
  v40 = 1;
  v9 = 0LL;
  v52 = 0LL;
  if ( !v46 || !a2 || !a3 )
    return 3221225485LL;
  v10 = LdrpGetFromMUIMemCache(v46, a2, &v47, 4);
  if ( v10 == (_DWORD *)-1LL )
  {
    if ( (a5 & 0x400000) == 0 )
    {
      *a3 = 0LL;
      return 3221946374LL;
    }
  }
  else if ( v10 )
  {
    *a3 = (__int64)v10;
    if ( a4 )
      *a4 = v47;
    return 0LL;
  }
  v13 = 0LL;
  v42 = 0LL;
  v49 = v44 & 0x400000;
  if ( (v44 & 0x400000) != 0 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(v46, SourceString, v11, &v43, &Str, &v41, &v52);
    v7 = Str;
    v9 = v52;
  }
  if ( DataModulePath < 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v46, SourceString, 702LL, &v43, &v54, &v41, &v39);
    v38 = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
      goto LABEL_75;
    v7 = v54;
    Str = v54;
  }
  v15 = v43 & 0xFFFFFFFE;
  if ( v15 >= 0x2BE )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)SourceString + v15) = 0;
  if ( wcsrchr(v7, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(SourceString, v7) >= 0 )
  {
    v7 = v55;
    Str = v55;
    v34 = -1LL;
    do
      ++v34;
    while ( v55[v34] );
    v41 = 2 * v34;
  }
  v68 = v75;
  v67 = 46006272;
  v66 = 0LL;
  v65 = 0;
  if ( (unsigned __int64)v41 + 12 > 0x3C )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 2LL * v41 + 10);
    v8 = Heap;
    v60 = Heap;
    v13 = v42;
    if ( !Heap )
    {
      ModuleInfoFromVirtualMemory = -1073741801;
LABEL_88:
      v38 = ModuleInfoFromVirtualMemory;
      goto LABEL_75;
    }
    v58 = (char *)Heap;
    v57 = 2 * (v41 + 5);
    v7 = Str;
    v9 = v52;
  }
  else
  {
    v58 = &v72;
    v57 = 60;
  }
  v56 = 0;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v56, v7);
  v38 = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_75;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v56, L".mui");
  v38 = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_75;
  if ( v9 )
    RtlActivateActivationContextUnsafeFast(&v69, v9);
  v19 = LdrpQuerySxSMUIFile(&v56, a2, &v67, &v65, &v59);
  if ( v9 )
    RtlDeactivateActivationContextUnsafeFast(&v69);
  if ( v19 >= 0 )
  {
    v20 = 1;
    v37 = 1;
    v17 = v59;
    *((_QWORD *)&v48 + 1) = *(_QWORD *)(v59 + 8);
    LODWORD(v48) = *(_DWORD *)v59;
  }
  else
  {
    v20 = 0;
  }
  if ( v20
    || ResRuntimeView == -1
    || ResRuntimeView
    && ((v17 = *(_QWORD *)(ResRuntimeView + 16)) == 0
     || (v32 = *(_QWORD *)(v17 + 24)) == 0
     || (*(_DWORD *)(v32 + 48) & 0x100000) != 0) )
  {
    v21 = a2;
LABEL_27:
    if ( v20 )
    {
      v63 = 0LL;
LABEL_30:
      v23 = 2147353477LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v16) )
      {
        v24 = (__int64)NtCurrentPeb()->SharedData + 555;
        v13 = v42;
      }
      else
      {
        v24 = 2147353477LL;
      }
      if ( (*(_BYTE *)v24 & 1) != 0 )
      {
        v25 = 2147353476LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v24, v22) )
        {
          v35 = (__int64)NtCurrentPeb()->SharedData + 554;
          v13 = v42;
        }
        else
        {
          v35 = 2147353476LL;
        }
        LdrpTraceLoadMUIDll(&v48, *(unsigned __int8 *)v35);
      }
      else
      {
        v25 = 2147353476LL;
      }
      ModuleInfoFromVirtualMemory = LdrpMapResourceFile(v46, &v48, v39, &Handle, &v51, &v47);
      v38 = ModuleInfoFromVirtualMemory;
      if ( ModuleInfoFromVirtualMemory >= 0 )
      {
        v13 = v51 | 1;
        if ( !v37 && !(unsigned __int8)LdrpVerifyAlternateResourceModule(v46, v51 | 1, v63, v44) )
        {
          NtUnmapViewOfSection(-1LL, v51, v26);
          NtClose(Handle);
          Handle = 0LL;
          v47 = 0LL;
          v13 = 0LL;
          ModuleInfoFromVirtualMemory = -1073020926;
          v38 = -1073020926;
        }
      }
      goto LABEL_38;
    }
    *((_QWORD *)&v48 + 1) = v75;
    LODWORD(v48) = 46006272;
    RtlAppendUnicodeToString(&v48, SourceString);
    v63 = &v74;
    v62 = 170;
    if ( (int)RtlLcidToLocaleName(v21, v61, 2LL) >= 0 )
    {
      RtlAppendUnicodeStringToString(&v48, v61);
      RtlAppendUnicodeToString(&v48, L"\\");
      RtlAppendUnicodeToString(&v48, v58);
      goto LABEL_30;
    }
    ModuleInfoFromVirtualMemory = -1073741811;
    goto LABEL_88;
  }
  v21 = a2;
  MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(v46, a2, 0, v44, &v45, 0LL);
  v51 = MUIFromCMFSegment;
  if ( !MUIFromCMFSegment )
    goto LABEL_27;
  v13 = MUIFromCMFSegment | 1;
  ModuleInfoFromVirtualMemory = 0;
  v38 = 0;
LABEL_75:
  v25 = 2147353476LL;
  v23 = 2147353477LL;
LABEL_38:
  if ( !v13 )
    v13 = -1LL;
  v42 = v13;
  if ( ModuleInfoFromVirtualMemory == -1073741659
    || ModuleInfoFromVirtualMemory == -1073741801
    || ModuleInfoFromVirtualMemory == -1073741523 )
  {
    v27 = 0;
  }
  else
  {
    v27 = v40;
  }
  if ( v27 )
  {
    v28 = v49 != 0;
    v49 = -v49;
    LdrpSetAlternateResourceModuleHandle(
      v46,
      (unsigned int)&v42,
      (unsigned int)&Handle,
      0,
      v45,
      a2,
      v28 ? 33 : 1,
      ModuleInfoFromVirtualMemory,
      v47);
  }
  if ( v42 == -1 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( v45 == -1 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v16) )
        v23 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v23 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v30, v29) )
          v25 = (__int64)NtCurrentPeb()->SharedData + 554;
        LdrpTraceLoadMUIDll(&v48, *(unsigned __int8 *)v25);
      }
      if ( ResRuntimeView != -1 )
        ResCIncrementCMFMissCount();
    }
    *a3 = v42;
    if ( v64 )
      *v64 = v47;
    ModuleInfoFromVirtualMemory = 0;
    v38 = 0;
  }
  if ( v54 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v54);
    ModuleInfoFromVirtualMemory = v38;
  }
  if ( v55 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v55);
    ModuleInfoFromVirtualMemory = v38;
  }
  if ( v8 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
    return v38;
  }
  return (unsigned int)ModuleInfoFromVirtualMemory;
}
