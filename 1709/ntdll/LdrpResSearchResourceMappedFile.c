/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x18001D76C
 * Callers:
 *     LdrResSearchResource @ 0x18001D400 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x18001F860 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpIsReparsePoint @ 0x180018D88 (LdrpIsReparsePoint.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18001AA5C (LdrpGetMUIFromCMFSegment.c)
 *     LdrpResGetResourceDirectory @ 0x18001DF80 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x18001E394 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x18001F540 (LdrpResGetMappingSize.c)
 *     LdrResGetRCConfig @ 0x18001F860 (LdrResGetRCConfig.c)
 *     LdrResFallbackLangList @ 0x18001FCD4 (LdrResFallbackLangList.c)
 *     LdrpFindMessageInAlternateModule @ 0x1800219CC (LdrpFindMessageInAlternateModule.c)
 *     LdrIsResItemExist @ 0x18002AA68 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLcidToLocaleName @ 0x180051F50 (RtlLcidToLocaleName.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074F58 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpResReportResourceAccessInternal @ 0x18007F19C (LdrpResReportResourceAccessInternal.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        void *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 *a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  BOOL v9; // r14d
  unsigned int v11; // r12d
  __int64 v12; // rcx
  unsigned __int16 v13; // r15
  int v14; // ebx
  int v15; // eax
  int v16; // r14d
  PVOID v17; // rsi
  bool v18; // dl
  bool v19; // bl
  bool v20; // cl
  bool v21; // bl
  NTSTATUS MappingSize; // esi
  unsigned __int16 v23; // r15
  unsigned int v24; // edx
  bool v25; // si
  __int64 v26; // r8
  unsigned __int16 *v27; // r11
  int v28; // r10d
  __int64 *v29; // rax
  __int64 v30; // rdx
  int v31; // r9d
  int v32; // r8d
  int v33; // ecx
  bool v34; // al
  bool v35; // al
  __int64 v36; // rbx
  __int64 v37; // r14
  __int64 result; // rax
  char v39; // al
  bool v40; // zf
  int v41; // eax
  unsigned int *v42; // rcx
  __int16 v43; // cx
  int RCConfig; // eax
  __int64 v45; // r8
  __int64 v46; // r8
  NTSTATUS v47; // eax
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rax
  unsigned int v52; // r15d
  bool v53; // [rsp+70h] [rbp-3F8h]
  int v54; // [rsp+74h] [rbp-3F4h]
  bool v55; // [rsp+78h] [rbp-3F0h]
  char v56; // [rsp+79h] [rbp-3EFh]
  char v57; // [rsp+7Ah] [rbp-3EEh]
  char v58; // [rsp+7Bh] [rbp-3EDh]
  bool v59; // [rsp+7Ch] [rbp-3ECh]
  bool v60; // [rsp+7Dh] [rbp-3EBh]
  unsigned __int16 v61; // [rsp+80h] [rbp-3E8h] BYREF
  PVOID DllHandle; // [rsp+88h] [rbp-3E0h]
  ULONG_PTR ResourceOffset; // [rsp+90h] [rbp-3D8h] BYREF
  PVOID ResourceDllBase; // [rsp+98h] [rbp-3D0h] BYREF
  __int64 MUIFromCMFSegment; // [rsp+A0h] [rbp-3C8h]
  __int64 v66; // [rsp+A8h] [rbp-3C0h]
  __int64 v67; // [rsp+B0h] [rbp-3B8h]
  BOOL v68; // [rsp+B8h] [rbp-3B0h]
  int v69; // [rsp+BCh] [rbp-3ACh] BYREF
  __int64 v70; // [rsp+C0h] [rbp-3A8h]
  __int64 *v71; // [rsp+C8h] [rbp-3A0h]
  int v72; // [rsp+D0h] [rbp-398h]
  __int64 *v73; // [rsp+D8h] [rbp-390h]
  unsigned int *v74; // [rsp+E0h] [rbp-388h]
  __int64 v75; // [rsp+E8h] [rbp-380h] BYREF
  __int64 v76; // [rsp+F0h] [rbp-378h] BYREF
  __int64 v77; // [rsp+F8h] [rbp-370h] BYREF
  __int64 v78; // [rsp+100h] [rbp-368h]
  __int64 v79; // [rsp+108h] [rbp-360h]
  __int64 v80; // [rsp+110h] [rbp-358h] BYREF
  void *v81; // [rsp+118h] [rbp-350h]
  __int64 v82; // [rsp+120h] [rbp-348h] BYREF
  __int64 v83; // [rsp+128h] [rbp-340h] BYREF
  int v84; // [rsp+130h] [rbp-338h] BYREF
  const wchar_t *v85; // [rsp+138h] [rbp-330h]
  _UNICODE_STRING LocaleName; // [rsp+140h] [rbp-328h] BYREF
  int v87; // [rsp+150h] [rbp-318h] BYREF
  const wchar_t *v88; // [rsp+158h] [rbp-310h]
  _WORD v89[2]; // [rsp+160h] [rbp-308h] BYREF
  _WORD v90[262]; // [rsp+164h] [rbp-304h]
  _WORD Src[88]; // [rsp+370h] [rbp-F8h] BYREF

  v70 = a4;
  v11 = a3;
  v67 = a2;
  DllHandle = a1;
  v71 = a6;
  v73 = a7;
  v81 = a8;
  v74 = a9;
  ResourceDllBase = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v56 = 0;
  v72 = a3 & 0x40;
  v75 = 0LL;
  v57 = 0;
  MUIFromCMFSegment = 0LL;
  v66 = 0LL;
  LOBYTE(v9) = 0;
  v68 = v9;
  v58 = 0;
  v84 = 4980810;
  v85 = L"LdrpResSearchResourceMappedFile Enter";
  v87 = 4849736;
  v88 = L"LdrpResSearchResourceMappedFile Exit";
  if ( RtlGetCurrentServiceSessionId() )
  {
    v12 = (__int64)NtCurrentPeb()->SharedData + 555;
    MUIFromCMFSegment = v66;
  }
  else
  {
    v12 = 2147353477LL;
  }
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v49 = (__int64)NtCurrentPeb()->SharedData + 554;
      MUIFromCMFSegment = v66;
    }
    else
    {
      v49 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll(&v84, *(unsigned __int8 *)v49);
  }
  v13 = 0;
  v14 = v11 & 0x80;
  if ( (v11 & 8) != 0 )
    v68 = *(_QWORD *)a4 == 16LL;
  v15 = a5;
  if ( a5 == 3 )
  {
    v13 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v40 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v39 = 1, !v40) )
    {
      v39 = 0;
    }
    v56 = v39;
    v15 = 3;
  }
  v16 = v11 & 0x80;
  if ( (v11 & 0x10) == 0 )
  {
    v16 = v11 & 0x80;
    if ( v15 >= 1 && v15 <= 3 )
    {
      if ( v15 == 3 )
        v43 = *(_WORD *)(a4 + 16);
      else
        v43 = 0;
      if ( ((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v56
        || (~(_BYTE)v11 & 8) == 0
        || (v43 & 0xF3FF) != 0
        || v43 == 3072 )
      {
        RCConfig = LdrResGetRCConfig((_DWORD)DllHandle, v67, 0, v11, 1);
        MappingSize = RCConfig;
        v54 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v17 = DllHandle;
          v16 = v14 | LdrIsResItemExist(DllHandle, v70, v45, v11);
          goto LABEL_9;
        }
        if ( RCConfig != -1073741686 )
          goto LABEL_43;
        v16 = v14 | 0x80000;
      }
      else
      {
        v11 |= 0x10u;
        v16 = v14;
      }
    }
  }
  v17 = DllHandle;
LABEL_9:
  if ( (v16 & 0x60000) != 0x60000 )
  {
    v18 = (~v16 & 0x20000) != 0 && (~v16 & 0x80000) != 0 && (~(_BYTE)v11 & 0x10) != 0;
    v19 = v18;
    v89[0] = 1;
    v90[0] = 0;
    if ( (v18 || a5 == 3) && ((v11 & 0x10) == 0 || (v11 & 0x20) == 0) )
    {
      v41 = v16 | 4;
      if ( (v11 & 4) == 0 )
        v41 = v16;
      v16 = v41;
      result = LdrResFallbackLangList((_DWORD)v17, v67, v13, v41, (__int64)v89);
      if ( (int)result < 0 && (v11 & 0x1000) != 0 )
        return result;
    }
    if ( (v11 & 0x10) != 0 || (~v16 & 0x40000) != 0 || (v16 & 0x80000) != 0 )
    {
      result = LdrpResGetResourceDirectory(v17, (__int64)&v76);
      if ( (int)result < 0 )
        return result;
    }
LABEL_13:
    v20 = 0;
    if ( (v16 & 0x20000) == 0 )
      v20 = v19;
    v21 = v20;
    v55 = v20;
    v53 = v20;
    v60 = v20;
    v59 = v20;
    MappingSize = 0;
    v54 = 0;
    ResourceOffset = 0LL;
    v23 = 0;
    v61 = 0;
    v24 = 0;
    LODWORD(v66) = 0;
    while ( 1 )
    {
      if ( v24 >= v89[0] )
      {
LABEL_39:
        v35 = v53;
        if ( v53 && (v11 & 0x200000) == 0 )
        {
          LdrpResReportResourceAccessInternal(ResourceDllBase);
          v35 = v53;
        }
        v19 = v55;
        if ( MappingSize >= 0 )
          goto LABEL_43;
        if ( v35 )
        {
          if ( v58 || v57 || (int)LdrpIsReparsePoint(DllHandle) < 0 )
          {
            if ( (v16 & 0x40000) != 0 )
            {
              v19 = 0;
            }
            else
            {
              v16 |= 0x20000u;
              v19 = v60;
            }
          }
          else
          {
            v16 |= 0x400000u;
            v58 = 1;
            v19 = v59;
          }
        }
        if ( !v19 )
          goto LABEL_43;
        goto LABEL_13;
      }
      if ( v20 )
      {
        ResourceDllBase = 0LL;
        ResourceOffset = 0LL;
        if ( !v90[4 * v24] )
        {
          if ( *(_DWORD *)&v90[4 * v24 + 2] == 2 )
            goto LABEL_136;
LABEL_89:
          MappingSize = -1073741811;
          v54 = -1073741811;
          goto LABEL_136;
        }
        if ( *(_DWORD *)&v90[4 * v24 + 2] == 10 )
          goto LABEL_89;
        v23 = v90[4 * v24];
        v61 = v23;
      }
      v25 = v53;
      if ( !v53 )
        goto LABEL_19;
      v46 = 0LL;
      MUIFromCMFSegment = 0LL;
      if ( v68 )
      {
        v69 = 0;
        MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(DllHandle, v23, 0x1000000, 0, &v69, &v75);
        if ( !MUIFromCMFSegment )
          goto LABEL_80;
        v50 = v75;
        LdrpSetAlternateResourceModuleHandle((_DWORD)DllHandle, 0, 0, 0, v69, v23, 4, 0, v75);
        v46 = MUIFromCMFSegment;
        if ( v71 )
          *v71 = MUIFromCMFSegment;
        if ( v73 )
          *v73 = v50;
        v21 = v55;
      }
      if ( v46 )
        goto LABEL_19;
LABEL_80:
      v47 = LdrLoadAlternateResourceModuleEx(DllHandle, v23, &ResourceDllBase, &ResourceOffset, v16 | 0x1000);
      MappingSize = v47;
      v54 = v47;
      if ( v47 >= 0 )
      {
        v57 = 1;
        if ( !ResourceOffset )
        {
          LOBYTE(v48) = 1;
          MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL, v48);
          v54 = MappingSize;
        }
        if ( (v11 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_39;
        MappingSize = LdrpResGetResourceDirectory(ResourceDllBase, (__int64)&v77);
        v54 = MappingSize;
        if ( MappingSize < 0 )
          goto LABEL_98;
        v25 = v53;
LABEL_19:
        LODWORD(v26) = 0;
        v80 = 0LL;
        if ( MUIFromCMFSegment )
        {
          MappingSize = 0;
          v54 = 0;
        }
        else
        {
          v27 = &v61;
          if ( v21 )
            v27 = 0LL;
          v28 = v11;
          if ( v25 )
            v28 = v11 | 0x20;
          v29 = &v80;
          if ( v73 )
            v29 = v73;
          v30 = v76;
          if ( v25 )
            v30 = v77;
          v31 = v78;
          if ( v25 )
            v31 = v79;
          v32 = v67;
          if ( v25 )
            v32 = ResourceOffset;
          v33 = (int)DllHandle;
          if ( v25 )
            v33 = (int)ResourceDllBase;
          MappingSize = LdrpResSearchResourceInsideDirectory(
                          v33,
                          0,
                          v32,
                          v31,
                          v30,
                          0LL,
                          v70,
                          a5,
                          (__int64)v89,
                          (__int64)v71,
                          (__int64)v29,
                          v28,
                          (__int64)v27);
          v54 = MappingSize;
          v23 = v61;
          LODWORD(v26) = v80;
        }
        if ( v72 && (~v16 & 0x40000) != 0 )
        {
          v34 = v53;
          if ( MappingSize >= 0 )
          {
            if ( v71 && v53 )
            {
              if ( v73 )
                v26 = *v73;
              MappingSize = LdrpFindMessageInAlternateModule(
                              (_DWORD)ResourceDllBase,
                              *v71,
                              v26,
                              *(_DWORD *)(v70 + 24),
                              1);
              v54 = MappingSize;
              if ( MappingSize < 0 )
              {
                *v71 = 0LL;
                if ( MappingSize == -1073741701 )
                  goto LABEL_43;
              }
              goto LABEL_36;
            }
LABEL_37:
            if ( MappingSize >= 0 )
            {
              v42 = v74;
              if ( v74 )
              {
                if ( v23 )
                {
                  LocaleName.Buffer = Src;
                  LocaleName.MaximumLength = 172;
                  MappingSize = RtlLcidToLocaleName(v23, &LocaleName, 2u, 0);
                  v54 = MappingSize;
                  if ( MappingSize < 0 )
                    goto LABEL_43;
                  v52 = LocaleName.Length >> 1;
                  v42 = v74;
                }
                else
                {
                  Src[0] = 0;
                  v52 = 0;
                }
                if ( v52 >= *v42 || !v81 )
                {
                  *v42 = v52 + 1;
                  MappingSize = -1073741789;
                  v54 = -1073741789;
                  v36 = 2147353476LL;
                  v37 = 2147353477LL;
                  goto LABEL_44;
                }
                memmove(v81, Src, 2LL * v52);
                *v74 = v52 + 1;
                *((_WORD *)v81 + v52) = 0;
              }
              goto LABEL_39;
            }
          }
          if ( !v34 )
            goto LABEL_39;
          if ( (int)LdrResGetRCConfig((_DWORD)DllHandle, v67, (unsigned int)&v83, 4096, 1) >= 0
            && (int)LdrResGetRCConfig((_DWORD)ResourceDllBase, ResourceOffset, (unsigned int)&v82, 4096, 0) >= 0 )
          {
            v51 = *(_QWORD *)(v83 + 28) - *(_QWORD *)(v82 + 28);
            if ( !v51 )
              v51 = *(_QWORD *)(v83 + 36) - *(_QWORD *)(v82 + 36);
            if ( !v51 )
              goto LABEL_39;
          }
          goto LABEL_98;
        }
LABEL_36:
        v34 = v53;
        goto LABEL_37;
      }
      if ( v47 == -1073741772 || v47 == -1073741766 )
      {
        MappingSize = -1073020927;
        v54 = -1073020927;
      }
LABEL_98:
      v20 = v53;
LABEL_136:
      LODWORD(v66) = v66 + 1;
      v24 = v66;
    }
  }
  MappingSize = -1073741686;
  v54 = -1073741686;
LABEL_43:
  v36 = 2147353476LL;
  v37 = 2147353477LL;
LABEL_44:
  if ( RtlGetCurrentServiceSessionId() )
  {
    v37 = (__int64)NtCurrentPeb()->SharedData + 555;
    MappingSize = v54;
  }
  if ( (*(_BYTE *)v37 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v36 = (__int64)NtCurrentPeb()->SharedData + 554;
      MappingSize = v54;
    }
    LdrpTraceLoadMUIDll(&v87, *(unsigned __int8 *)v36);
  }
  return (unsigned int)MappingSize;
}
