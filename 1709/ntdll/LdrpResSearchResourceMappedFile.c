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
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 *a6,
        __int64 *a7,
        void *a8,
        _DWORD *a9)
{
  BOOL v9; // r14d
  unsigned int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // r15
  int v15; // ebx
  int v16; // eax
  int v17; // r14d
  int v18; // esi
  __int64 v19; // rcx
  bool v20; // dl
  bool v21; // bl
  int v22; // r15d
  char v23; // bl
  int MappingSize; // esi
  unsigned __int16 v25; // r15
  char v26; // si
  __int64 v27; // r8
  unsigned __int16 *v28; // r11
  int v29; // r10d
  __int64 *v30; // rax
  __int64 v31; // rdx
  int v32; // r9d
  int v33; // r8d
  int v34; // ecx
  char v35; // al
  char v36; // al
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 result; // rax
  char v42; // al
  bool v43; // zf
  int v44; // eax
  int v45; // r8d
  __int16 v46; // cx
  int RCConfig; // eax
  __int64 v48; // r8
  __int64 v49; // r8
  int AlternateResourceModule; // eax
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rax
  unsigned int v55; // r15d
  char v56; // [rsp+70h] [rbp-3F8h]
  int v57; // [rsp+74h] [rbp-3F4h]
  char v58; // [rsp+78h] [rbp-3F0h]
  char v59; // [rsp+79h] [rbp-3EFh]
  char v60; // [rsp+7Ah] [rbp-3EEh]
  char v61; // [rsp+7Bh] [rbp-3EDh]
  char v62; // [rsp+7Ch] [rbp-3ECh]
  char v63; // [rsp+7Dh] [rbp-3EBh]
  unsigned __int16 v64; // [rsp+80h] [rbp-3E8h] BYREF
  __int64 v65; // [rsp+88h] [rbp-3E0h]
  __int64 v66; // [rsp+90h] [rbp-3D8h] BYREF
  __int64 v67; // [rsp+98h] [rbp-3D0h] BYREF
  __int64 MUIFromCMFSegment; // [rsp+A0h] [rbp-3C8h]
  __int64 v69; // [rsp+A8h] [rbp-3C0h]
  __int64 v70; // [rsp+B0h] [rbp-3B8h]
  BOOL v71; // [rsp+B8h] [rbp-3B0h]
  int v72; // [rsp+BCh] [rbp-3ACh] BYREF
  __int64 v73; // [rsp+C0h] [rbp-3A8h]
  __int64 *v74; // [rsp+C8h] [rbp-3A0h]
  int v75; // [rsp+D0h] [rbp-398h]
  __int64 *v76; // [rsp+D8h] [rbp-390h]
  _DWORD *v77; // [rsp+E0h] [rbp-388h]
  __int64 v78; // [rsp+E8h] [rbp-380h] BYREF
  __int64 v79; // [rsp+F0h] [rbp-378h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-370h] BYREF
  __int64 v81; // [rsp+100h] [rbp-368h] BYREF
  __int64 v82; // [rsp+108h] [rbp-360h] BYREF
  __int64 v83; // [rsp+110h] [rbp-358h] BYREF
  void *v84; // [rsp+118h] [rbp-350h]
  __int64 v85; // [rsp+120h] [rbp-348h] BYREF
  __int64 v86; // [rsp+128h] [rbp-340h] BYREF
  int v87; // [rsp+130h] [rbp-338h] BYREF
  const wchar_t *v88; // [rsp+138h] [rbp-330h]
  _WORD v89[4]; // [rsp+140h] [rbp-328h] BYREF
  _WORD *v90; // [rsp+148h] [rbp-320h]
  int v91; // [rsp+150h] [rbp-318h] BYREF
  const wchar_t *v92; // [rsp+158h] [rbp-310h]
  _WORD v93[2]; // [rsp+160h] [rbp-308h] BYREF
  _WORD v94[262]; // [rsp+164h] [rbp-304h]
  _WORD Src[88]; // [rsp+370h] [rbp-F8h] BYREF

  v73 = a4;
  v11 = a3;
  v70 = a2;
  v65 = a1;
  v74 = a6;
  v76 = a7;
  v84 = a8;
  v77 = a9;
  v67 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v59 = 0;
  v75 = a3 & 0x40;
  v78 = 0LL;
  v60 = 0;
  MUIFromCMFSegment = 0LL;
  v69 = 0LL;
  LOBYTE(v9) = 0;
  v71 = v9;
  v61 = 0;
  v87 = 4980810;
  v88 = L"LdrpResSearchResourceMappedFile Enter";
  v91 = 4849736;
  v92 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a9, a2) )
  {
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
    MUIFromCMFSegment = v69;
  }
  else
  {
    v13 = 2147353477LL;
  }
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v12) )
    {
      v52 = (__int64)NtCurrentPeb()->SharedData + 554;
      MUIFromCMFSegment = v69;
    }
    else
    {
      v52 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll(&v87, *(unsigned __int8 *)v52);
  }
  v14 = 0;
  v15 = v11 & 0x80;
  if ( (v11 & 8) != 0 )
    v71 = *(_QWORD *)a4 == 16LL;
  v16 = a5;
  if ( a5 == 3 )
  {
    v14 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v43 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v42 = 1, !v43) )
    {
      v42 = 0;
    }
    v59 = v42;
    v16 = 3;
  }
  v17 = v11 & 0x80;
  if ( (v11 & 0x10) != 0 )
    goto LABEL_8;
  v17 = v11 & 0x80;
  if ( v16 < 1 || v16 > 3 )
    goto LABEL_8;
  if ( v16 == 3 )
    v46 = *(_WORD *)(a4 + 16);
  else
    v46 = 0;
  if ( (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 || v59)
    && (~(_BYTE)v11 & 8) != 0
    && (v46 & 0xF3FF) == 0
    && v46 != 3072 )
  {
    v11 |= 0x10u;
    v17 = v15;
LABEL_8:
    v18 = v65;
    goto LABEL_9;
  }
  RCConfig = LdrResGetRCConfig(v65, v70, 0, v11, 1);
  MappingSize = RCConfig;
  v57 = RCConfig;
  if ( RCConfig < 0 )
  {
    if ( RCConfig != -1073741686 )
      goto LABEL_44;
    v17 = v15 | 0x80000;
    goto LABEL_8;
  }
  v18 = v65;
  v17 = v15 | LdrIsResItemExist(v65, v73, v48, v11);
LABEL_9:
  v19 = 393216LL;
  if ( (v17 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    v57 = -1073741686;
LABEL_44:
    v37 = 2147353476LL;
    v38 = 2147353477LL;
LABEL_45:
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v19, v12) )
    {
      v38 = (__int64)NtCurrentPeb()->SharedData + 555;
      MappingSize = v57;
    }
    if ( (*(_BYTE *)v38 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v40, v39) )
      {
        v37 = (__int64)NtCurrentPeb()->SharedData + 554;
        MappingSize = v57;
      }
      LdrpTraceLoadMUIDll(&v91, *(unsigned __int8 *)v37);
    }
    return (unsigned int)MappingSize;
  }
  v20 = (~v17 & 0x20000) != 0 && (~v17 & 0x80000) != 0 && (~(_BYTE)v11 & 0x10) != 0;
  v21 = v20;
  v93[0] = 1;
  v94[0] = 0;
  if ( !v20 && a5 != 3 || (v11 & 0x10) != 0 && (v11 & 0x20) != 0 )
  {
    v22 = v70;
LABEL_13:
    if ( (v11 & 0x10) != 0 || (~v17 & 0x40000) != 0 || (v17 & 0x80000) != 0 )
    {
      result = LdrpResGetResourceDirectory(v18, v22, v11, (unsigned int)&v81, (__int64)&v79);
      if ( (int)result < 0 )
        return result;
    }
LABEL_14:
    v19 = 0LL;
    if ( (v17 & 0x20000) == 0 )
      v19 = v21;
    v23 = v19;
    v58 = v19;
    v56 = v19;
    v63 = v19;
    v62 = v19;
    MappingSize = 0;
    v57 = 0;
    v66 = 0LL;
    v25 = 0;
    v64 = 0;
    v12 = 0LL;
    LODWORD(v69) = 0;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= v93[0] )
      {
LABEL_40:
        v36 = v56;
        if ( v56 && (v11 & 0x200000) == 0 )
        {
          LdrpResReportResourceAccessInternal(v67, v66, v73, a5);
          v36 = v56;
        }
        v21 = v58;
        if ( MappingSize >= 0 )
          goto LABEL_44;
        if ( v36 )
        {
          if ( v61 || v60 || (int)LdrpIsReparsePoint(v65) < 0 )
          {
            if ( (v17 & 0x40000) != 0 )
            {
              v21 = 0;
            }
            else
            {
              v17 |= 0x20000u;
              v21 = v63;
            }
          }
          else
          {
            v17 |= 0x400000u;
            v61 = 1;
            v21 = v62;
          }
        }
        if ( !v21 )
          goto LABEL_44;
        goto LABEL_14;
      }
      if ( (_BYTE)v19 )
      {
        v67 = 0LL;
        v66 = 0LL;
        if ( !v94[4 * (unsigned int)v12] )
        {
          if ( *(_DWORD *)&v94[4 * (unsigned int)v12 + 2] == 2 )
            goto LABEL_137;
LABEL_90:
          MappingSize = -1073741811;
          v57 = -1073741811;
          goto LABEL_137;
        }
        if ( *(_DWORD *)&v94[4 * (unsigned int)v12 + 2] == 10 )
          goto LABEL_90;
        v25 = v94[4 * (unsigned int)v12];
        v64 = v25;
      }
      v26 = v56;
      if ( !v56 )
        goto LABEL_20;
      v49 = 0LL;
      MUIFromCMFSegment = 0LL;
      if ( v71 )
      {
        v72 = 0;
        MUIFromCMFSegment = LdrpGetMUIFromCMFSegment(v65, v25, 0x1000000, 0, &v72, &v78);
        if ( !MUIFromCMFSegment )
          goto LABEL_81;
        v53 = v78;
        LdrpSetAlternateResourceModuleHandle(v65, 0, 0, 0, v72, v25, 4, 0, v78);
        v49 = MUIFromCMFSegment;
        if ( v74 )
          *v74 = MUIFromCMFSegment;
        if ( v76 )
          *v76 = v53;
        v23 = v58;
      }
      if ( v49 )
        goto LABEL_20;
LABEL_81:
      AlternateResourceModule = LdrLoadAlternateResourceModuleEx(
                                  v65,
                                  v25,
                                  (unsigned int)&v67,
                                  (unsigned int)&v66,
                                  v17 | 0x1000u);
      MappingSize = AlternateResourceModule;
      v57 = AlternateResourceModule;
      if ( AlternateResourceModule >= 0 )
      {
        v60 = 1;
        if ( !v66 )
        {
          LOBYTE(v51) = 1;
          MappingSize = LdrpResGetMappingSize(v67, &v66, 512LL, v51);
          v57 = MappingSize;
        }
        if ( (v11 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_40;
        MappingSize = LdrpResGetResourceDirectory(v67, v66, v11, (unsigned int)&v82, (__int64)&v80);
        v57 = MappingSize;
        if ( MappingSize < 0 )
          goto LABEL_99;
        v26 = v56;
LABEL_20:
        LODWORD(v27) = 0;
        v83 = 0LL;
        if ( MUIFromCMFSegment )
        {
          MappingSize = 0;
          v57 = 0;
        }
        else
        {
          v28 = &v64;
          if ( v23 )
            v28 = 0LL;
          v29 = v11;
          if ( v26 )
            v29 = v11 | 0x20;
          v30 = &v83;
          if ( v76 )
            v30 = v76;
          v31 = v79;
          if ( v26 )
            v31 = v80;
          v32 = v81;
          if ( v26 )
            v32 = v82;
          v33 = v70;
          if ( v26 )
            v33 = v66;
          v34 = v65;
          if ( v26 )
            v34 = v67;
          MappingSize = LdrpResSearchResourceInsideDirectory(
                          v34,
                          0,
                          v33,
                          v32,
                          v31,
                          0LL,
                          v73,
                          a5,
                          (__int64)v93,
                          (__int64)v74,
                          (__int64)v30,
                          v29,
                          (__int64)v28);
          v57 = MappingSize;
          v25 = v64;
          LODWORD(v27) = v83;
        }
        if ( v75 && (~v17 & 0x40000) != 0 )
        {
          v35 = v56;
          if ( MappingSize >= 0 )
          {
            v19 = (__int64)v74;
            if ( v74 && v56 )
            {
              if ( v76 )
                v27 = *v76;
              MappingSize = LdrpFindMessageInAlternateModule(v67, *v74, v27, *(_DWORD *)(v73 + 24), 1);
              v57 = MappingSize;
              if ( MappingSize < 0 )
              {
                *v74 = 0LL;
                if ( MappingSize == -1073741701 )
                  goto LABEL_44;
              }
              goto LABEL_37;
            }
LABEL_38:
            if ( MappingSize >= 0 )
            {
              v19 = (__int64)v77;
              if ( v77 )
              {
                if ( v25 )
                {
                  v90 = Src;
                  v89[1] = 172;
                  MappingSize = RtlLcidToLocaleName(v25, v89, 2LL);
                  v57 = MappingSize;
                  if ( MappingSize < 0 )
                    goto LABEL_44;
                  v55 = v89[0] >> 1;
                  v19 = (__int64)v77;
                }
                else
                {
                  Src[0] = 0;
                  v55 = 0;
                }
                if ( v55 >= *(_DWORD *)v19 || !v84 )
                {
                  *(_DWORD *)v19 = v55 + 1;
                  MappingSize = -1073741789;
                  v57 = -1073741789;
                  v37 = 2147353476LL;
                  v38 = 2147353477LL;
                  goto LABEL_45;
                }
                memmove(v84, Src, 2LL * v55);
                v19 = (__int64)v77;
                *v77 = v55 + 1;
                *((_WORD *)v84 + v55) = 0;
              }
              goto LABEL_40;
            }
          }
          if ( !v35 )
            goto LABEL_40;
          if ( (int)LdrResGetRCConfig(v65, v70, (unsigned int)&v86, 4096, 1) >= 0
            && (int)LdrResGetRCConfig(v67, v66, (unsigned int)&v85, 4096, 0) >= 0 )
          {
            v19 = v85;
            v12 = v86;
            v54 = *(_QWORD *)(v86 + 28) - *(_QWORD *)(v85 + 28);
            if ( !v54 )
              v54 = *(_QWORD *)(v86 + 36) - *(_QWORD *)(v85 + 36);
            if ( !v54 )
              goto LABEL_40;
          }
          goto LABEL_99;
        }
LABEL_37:
        v35 = v56;
        goto LABEL_38;
      }
      if ( AlternateResourceModule == -1073741772 || AlternateResourceModule == -1073741766 )
      {
        MappingSize = -1073020927;
        v57 = -1073020927;
      }
LABEL_99:
      LOBYTE(v19) = v56;
LABEL_137:
      LODWORD(v69) = v69 + 1;
      v12 = (unsigned int)v69;
    }
  }
  v44 = v17 | 4;
  if ( (v11 & 4) == 0 )
    v44 = v17;
  v17 = v44;
  v45 = v14;
  v22 = v70;
  result = LdrResFallbackLangList(v18, v70, v45, v44, (__int64)v93);
  if ( (int)result >= 0 || (v11 & 0x1000) == 0 )
    goto LABEL_13;
  return result;
}
