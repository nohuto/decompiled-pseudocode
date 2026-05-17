/*
 * XREFs of sub_18005A0E4 @ 0x18005A0E4
 * Callers:
 *     LdrResSearchResource @ 0x180059D70 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x18005C640 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180036588 @ 0x180036588 (sub_180036588.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18003802C @ 0x18003802C (sub_18003802C.c)
 *     RtlLcidToLocaleName @ 0x1800454D0 (RtlLcidToLocaleName.c)
 *     LdrpResGetResourceDirectory @ 0x18005A920 (LdrpResGetResourceDirectory.c)
 *     sub_18005AD34 @ 0x18005AD34 (sub_18005AD34.c)
 *     LdrpResGetMappingSize @ 0x18005BF00 (LdrpResGetMappingSize.c)
 *     sub_18005C0F4 @ 0x18005C0F4 (sub_18005C0F4.c)
 *     LdrResGetRCConfig @ 0x18005C640 (LdrResGetRCConfig.c)
 *     sub_18005CB40 @ 0x18005CB40 (sub_18005CB40.c)
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
 *     sub_180075EA0 @ 0x180075EA0 (sub_180075EA0.c)
 *     sub_180081D84 @ 0x180081D84 (sub_180081D84.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 */

__int64 __fastcall sub_18005A0E4(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int **a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  BOOL v9; // r14d
  unsigned int v11; // r12d
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int16 v14; // r15
  int v15; // ebx
  int v16; // eax
  int v17; // r14d
  int v18; // esi
  bool v19; // dl
  bool v20; // bl
  int v21; // r15d
  bool v22; // cl
  bool v23; // bl
  int MappingSize; // esi
  unsigned __int16 v25; // r15
  __int64 v26; // rdx
  bool v27; // si
  unsigned __int16 *v28; // r11
  int v29; // r10d
  unsigned __int64 *v30; // rax
  __int64 v31; // rdx
  int v32; // r9d
  int v33; // r8d
  int v34; // ecx
  bool v35; // al
  bool v36; // al
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 result; // rax
  char v40; // al
  bool v41; // zf
  int v42; // eax
  int v43; // r8d
  unsigned int *v44; // rcx
  __int16 v45; // cx
  int RCConfig; // eax
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rax
  unsigned int v53; // r15d
  bool v54; // [rsp+70h] [rbp-3F8h]
  int v55; // [rsp+74h] [rbp-3F4h]
  bool v56; // [rsp+78h] [rbp-3F0h]
  char v57; // [rsp+79h] [rbp-3EFh]
  char v58; // [rsp+7Ah] [rbp-3EEh]
  char v59; // [rsp+7Bh] [rbp-3EDh]
  bool v60; // [rsp+7Ch] [rbp-3ECh]
  bool v61; // [rsp+7Dh] [rbp-3EBh]
  unsigned __int16 v62; // [rsp+80h] [rbp-3E8h] BYREF
  __int64 v63; // [rsp+88h] [rbp-3E0h]
  __int64 v64; // [rsp+90h] [rbp-3D8h] BYREF
  __int64 v65; // [rsp+98h] [rbp-3D0h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-3C8h]
  __int64 v67; // [rsp+A8h] [rbp-3C0h]
  __int64 v68; // [rsp+B0h] [rbp-3B8h]
  BOOL v69; // [rsp+B8h] [rbp-3B0h]
  int v70; // [rsp+BCh] [rbp-3ACh] BYREF
  _QWORD *v71; // [rsp+C0h] [rbp-3A8h]
  unsigned int **v72; // [rsp+C8h] [rbp-3A0h]
  int v73; // [rsp+D0h] [rbp-398h]
  __int64 *v74; // [rsp+D8h] [rbp-390h]
  unsigned int *v75; // [rsp+E0h] [rbp-388h]
  __int64 v76; // [rsp+E8h] [rbp-380h] BYREF
  __int64 v77; // [rsp+F0h] [rbp-378h] BYREF
  __int64 v78; // [rsp+F8h] [rbp-370h] BYREF
  __int64 v79; // [rsp+100h] [rbp-368h] BYREF
  __int64 v80; // [rsp+108h] [rbp-360h] BYREF
  unsigned __int64 v81; // [rsp+110h] [rbp-358h] BYREF
  void *v82; // [rsp+118h] [rbp-350h]
  __int64 v83; // [rsp+120h] [rbp-348h] BYREF
  __int64 v84; // [rsp+128h] [rbp-340h] BYREF
  int v85; // [rsp+130h] [rbp-338h] BYREF
  const wchar_t *v86; // [rsp+138h] [rbp-330h]
  _WORD v87[4]; // [rsp+140h] [rbp-328h] BYREF
  _WORD *v88; // [rsp+148h] [rbp-320h]
  int v89; // [rsp+150h] [rbp-318h] BYREF
  const wchar_t *v90; // [rsp+158h] [rbp-310h]
  _WORD v91[2]; // [rsp+160h] [rbp-308h] BYREF
  _WORD v92[262]; // [rsp+164h] [rbp-304h]
  _WORD Src[88]; // [rsp+370h] [rbp-F8h] BYREF

  v71 = (_QWORD *)a4;
  v11 = a3;
  v68 = a2;
  v63 = a1;
  v72 = a6;
  v74 = a7;
  v82 = a8;
  v75 = a9;
  v65 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v57 = 0;
  v73 = a3 & 0x40;
  v76 = 0LL;
  v58 = 0;
  v66 = 0LL;
  v67 = 0LL;
  LOBYTE(v9) = 0;
  v69 = v9;
  v59 = 0;
  v85 = 4980810;
  v86 = L"LdrpResSearchResourceMappedFile Enter";
  v89 = 4849736;
  v90 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    v66 = v67;
  }
  else
  {
    v13 = 2147353477LL;
  }
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v50 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      v66 = v67;
    }
    else
    {
      v50 = 2147353476LL;
    }
    sub_1800E2008(&v85, *(unsigned __int8 *)v50);
  }
  v14 = 0;
  v15 = v11 & 0x80;
  if ( (v11 & 8) != 0 )
    v69 = *(_QWORD *)a4 == 16LL;
  v16 = a5;
  if ( a5 == 3 )
  {
    v14 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v41 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v40 = 1, !v41) )
    {
      v40 = 0;
    }
    v57 = v40;
    v16 = 3;
  }
  v17 = v11 & 0x80;
  if ( (v11 & 0x10) != 0 )
    goto LABEL_8;
  v17 = v11 & 0x80;
  if ( v16 < 1 || v16 > 3 )
    goto LABEL_8;
  if ( v16 == 3 )
    v45 = *(_WORD *)(a4 + 16);
  else
    v45 = 0;
  if ( (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 || v57)
    && (~(_BYTE)v11 & 8) != 0
    && (v45 & 0xF3FF) == 0
    && v45 != 3072 )
  {
    v11 |= 0x10u;
    v17 = v15;
LABEL_8:
    v18 = v63;
    goto LABEL_9;
  }
  RCConfig = LdrResGetRCConfig(v63, v68, 0, v11, 1);
  MappingSize = RCConfig;
  v55 = RCConfig;
  if ( RCConfig < 0 )
  {
    if ( RCConfig != -1073741686 )
      goto LABEL_44;
    v17 = v15 | 0x80000;
    goto LABEL_8;
  }
  v18 = v63;
  v17 = v15 | sub_180036588(v63, v71, v12, v11);
LABEL_9:
  if ( (v17 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    v55 = -1073741686;
LABEL_44:
    v37 = 2147353476LL;
    v38 = 2147353477LL;
LABEL_45:
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v38 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
      MappingSize = v55;
    }
    if ( (*(_BYTE *)v38 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v37 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
        MappingSize = v55;
      }
      sub_1800E2008(&v89, *(unsigned __int8 *)v37);
    }
    return (unsigned int)MappingSize;
  }
  v19 = (~v17 & 0x20000) != 0 && (~v17 & 0x80000) != 0 && (~(_BYTE)v11 & 0x10) != 0;
  v20 = v19;
  v91[0] = 1;
  v92[0] = 0;
  if ( !v19 && a5 != 3 || (v11 & 0x10) != 0 && (v11 & 0x20) != 0 )
  {
    v21 = v68;
LABEL_13:
    if ( (v11 & 0x10) != 0 || (~v17 & 0x40000) != 0 || (v17 & 0x80000) != 0 )
    {
      result = LdrpResGetResourceDirectory(v18, v21, v11, (unsigned int)&v79, (__int64)&v77);
      if ( (int)result < 0 )
        return result;
    }
LABEL_14:
    v22 = 0;
    if ( (v17 & 0x20000) == 0 )
      v22 = v20;
    v23 = v22;
    v56 = v22;
    v54 = v22;
    v61 = v22;
    v60 = v22;
    MappingSize = 0;
    v55 = 0;
    v64 = 0LL;
    v25 = 0;
    v62 = 0;
    v26 = 0LL;
    LODWORD(v67) = 0;
    while ( 1 )
    {
      if ( (unsigned int)v26 >= v91[0] )
      {
LABEL_40:
        v36 = v54;
        if ( v54 && (v11 & 0x200000) == 0 )
        {
          sub_180081D84(v65, v64, v71, a5);
          v36 = v54;
        }
        v20 = v56;
        if ( MappingSize >= 0 )
          goto LABEL_44;
        if ( v36 )
        {
          if ( v59 || v58 || (int)sub_180075EA0(v63, v26, v12) < 0 )
          {
            if ( (v17 & 0x40000) != 0 )
            {
              v20 = 0;
            }
            else
            {
              v17 |= 0x20000u;
              v20 = v61;
            }
          }
          else
          {
            v17 |= 0x400000u;
            v59 = 1;
            v20 = v60;
          }
        }
        if ( !v20 )
          goto LABEL_44;
        goto LABEL_14;
      }
      if ( v22 )
      {
        v65 = 0LL;
        v64 = 0LL;
        if ( !v92[4 * (unsigned int)v26] )
        {
          if ( *(_DWORD *)&v92[4 * (unsigned int)v26 + 2] == 2 )
            goto LABEL_137;
LABEL_90:
          MappingSize = -1073741811;
          v55 = -1073741811;
          goto LABEL_137;
        }
        if ( *(_DWORD *)&v92[4 * (unsigned int)v26 + 2] == 10 )
          goto LABEL_90;
        v25 = v92[4 * (unsigned int)v26];
        v62 = v25;
      }
      v27 = v54;
      if ( !v54 )
        goto LABEL_20;
      v47 = 0LL;
      v66 = 0LL;
      if ( v69 )
      {
        v70 = 0;
        v66 = sub_18005D2C8(v63, v25, 0x1000000, 0, (__int64)&v70, (__int64)&v76);
        if ( !v66 )
          goto LABEL_81;
        v51 = v76;
        sub_18005CB40(v63, 0, 0, 0, v70, v25, 4, 0, v76);
        v47 = v66;
        if ( v72 )
          *v72 = (unsigned int *)v66;
        if ( v74 )
          *v74 = v51;
        v23 = v56;
      }
      if ( v47 )
        goto LABEL_20;
LABEL_81:
      v48 = LdrLoadAlternateResourceModuleEx(v63, v25, &v65, &v64, v17 | 0x1000u);
      MappingSize = v48;
      v55 = v48;
      if ( v48 >= 0 )
      {
        v58 = 1;
        if ( !v64 )
        {
          LOBYTE(v49) = 1;
          MappingSize = LdrpResGetMappingSize(v65, &v64, 512LL, v49);
          v55 = MappingSize;
        }
        if ( (v11 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_40;
        MappingSize = LdrpResGetResourceDirectory(v65, v64, v11, (unsigned int)&v80, (__int64)&v78);
        v55 = MappingSize;
        if ( MappingSize < 0 )
          goto LABEL_99;
        v27 = v54;
LABEL_20:
        v12 = 0LL;
        v81 = 0LL;
        if ( v66 )
        {
          MappingSize = 0;
          v55 = 0;
        }
        else
        {
          v28 = &v62;
          if ( v23 )
            v28 = 0LL;
          v29 = v11;
          if ( v27 )
            v29 = v11 | 0x20;
          v30 = &v81;
          if ( v74 )
            v30 = (unsigned __int64 *)v74;
          v31 = v77;
          if ( v27 )
            v31 = v78;
          v32 = v79;
          if ( v27 )
            v32 = v80;
          v33 = v68;
          if ( v27 )
            v33 = v64;
          v34 = v63;
          if ( v27 )
            v34 = v65;
          MappingSize = sub_18005AD34(
                          v34,
                          0,
                          v33,
                          v32,
                          v31,
                          0LL,
                          (__int64)v71,
                          a5,
                          (__int64)v91,
                          (__int64)v72,
                          (__int64)v30,
                          v29,
                          (__int64)v28);
          v55 = MappingSize;
          v25 = v62;
          v12 = v81;
        }
        if ( v73 && (~v17 & 0x40000) != 0 )
        {
          v35 = v54;
          if ( MappingSize >= 0 )
          {
            if ( v72 && v54 )
            {
              if ( v74 )
                v12 = *v74;
              MappingSize = sub_18003802C(v65, *v72, v12, *((_DWORD *)v71 + 6), 1);
              v55 = MappingSize;
              if ( MappingSize < 0 )
              {
                *v72 = 0LL;
                if ( MappingSize == -1073741701 )
                  goto LABEL_44;
              }
              goto LABEL_37;
            }
LABEL_38:
            if ( MappingSize >= 0 )
            {
              v44 = v75;
              if ( v75 )
              {
                if ( v25 )
                {
                  v88 = Src;
                  v87[1] = 172;
                  MappingSize = RtlLcidToLocaleName(v25, (__int64)v87, 2, 0);
                  v55 = MappingSize;
                  if ( MappingSize < 0 )
                    goto LABEL_44;
                  v53 = v87[0] >> 1;
                  v44 = v75;
                }
                else
                {
                  Src[0] = 0;
                  v53 = 0;
                }
                if ( v53 >= *v44 || !v82 )
                {
                  *v44 = v53 + 1;
                  MappingSize = -1073741789;
                  v55 = -1073741789;
                  v37 = 2147353476LL;
                  v38 = 2147353477LL;
                  goto LABEL_45;
                }
                memmove(v82, Src, 2LL * v53);
                *v75 = v53 + 1;
                *((_WORD *)v82 + v53) = 0;
              }
              goto LABEL_40;
            }
          }
          if ( !v35 )
            goto LABEL_40;
          if ( (int)LdrResGetRCConfig(v63, v68, (unsigned int)&v84, 4096, 1) >= 0
            && (int)LdrResGetRCConfig(v65, v64, (unsigned int)&v83, 4096, 0) >= 0 )
          {
            v26 = v84;
            v52 = *(_QWORD *)(v84 + 28) - *(_QWORD *)(v83 + 28);
            if ( !v52 )
              v52 = *(_QWORD *)(v84 + 36) - *(_QWORD *)(v83 + 36);
            if ( !v52 )
              goto LABEL_40;
          }
          goto LABEL_99;
        }
LABEL_37:
        v35 = v54;
        goto LABEL_38;
      }
      if ( v48 == -1073741772 || v48 == -1073741766 )
      {
        MappingSize = -1073020927;
        v55 = -1073020927;
      }
LABEL_99:
      v22 = v54;
LABEL_137:
      LODWORD(v67) = v67 + 1;
      v26 = (unsigned int)v67;
    }
  }
  v42 = v17 | 4;
  if ( (v11 & 4) == 0 )
    v42 = v17;
  v17 = v42;
  v43 = v14;
  v21 = v68;
  result = sub_18005C0F4(v18, v68, v43, v42, (__int64)v91);
  if ( (int)result >= 0 || (v11 & 0x1000) == 0 )
    goto LABEL_13;
  return result;
}
