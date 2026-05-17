/*
 * XREFs of sub_1800515C0 @ 0x1800515C0
 * Callers:
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x1800539B0 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180033ADC @ 0x180033ADC (sub_180033ADC.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     LdrpResGetResourceDirectory @ 0x180051CC0 (LdrpResGetResourceDirectory.c)
 *     sub_1800520D4 @ 0x1800520D4 (sub_1800520D4.c)
 *     LdrpResGetMappingSize @ 0x180053280 (LdrpResGetMappingSize.c)
 *     sub_180053480 @ 0x180053480 (sub_180053480.c)
 *     LdrResGetRCConfig @ 0x1800539B0 (LdrResGetRCConfig.c)
 *     sub_180054094 @ 0x180054094 (sub_180054094.c)
 *     sub_180069E8C @ 0x180069E8C (sub_180069E8C.c)
 *     sub_18007A164 @ 0x18007A164 (sub_18007A164.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 */

__int64 __fastcall sub_1800515C0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r12
  int v15; // ebx
  int v16; // esi
  int v17; // r14d
  bool v18; // r12
  int v19; // ebx
  int v20; // esi
  bool v21; // cl
  bool v22; // r12
  int MappingSize; // esi
  unsigned int i; // ebx
  unsigned __int16 *v25; // r11
  int v26; // r10d
  __int64 *v27; // rax
  __int64 v28; // rdx
  int v29; // r9d
  int v30; // r8d
  int v31; // ecx
  __int64 v32; // r14
  __int64 result; // rax
  char v34; // al
  bool v35; // zf
  int v36; // eax
  unsigned int *v37; // rcx
  __int16 v38; // cx
  int RCConfig; // eax
  unsigned __int16 v40; // cx
  int v41; // eax
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  unsigned int v46; // r13d
  unsigned __int16 v47; // [rsp+70h] [rbp-3D8h] BYREF
  int v48; // [rsp+74h] [rbp-3D4h]
  char v49; // [rsp+78h] [rbp-3D0h]
  char v50; // [rsp+79h] [rbp-3CFh]
  char v51; // [rsp+7Ah] [rbp-3CEh]
  bool v52; // [rsp+7Bh] [rbp-3CDh]
  bool v53; // [rsp+7Ch] [rbp-3CCh]
  __int64 v54; // [rsp+80h] [rbp-3C8h]
  __int64 v55; // [rsp+88h] [rbp-3C0h] BYREF
  __int64 v56; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v57; // [rsp+98h] [rbp-3B0h]
  _QWORD *v58; // [rsp+A0h] [rbp-3A8h]
  int v59; // [rsp+A8h] [rbp-3A0h]
  _QWORD *v60; // [rsp+B0h] [rbp-398h]
  unsigned int *v61; // [rsp+B8h] [rbp-390h]
  __int64 v62; // [rsp+C0h] [rbp-388h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-380h] BYREF
  __int64 v64; // [rsp+D0h] [rbp-378h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-370h] BYREF
  __int64 *v66; // [rsp+E0h] [rbp-368h]
  __int64 v67; // [rsp+E8h] [rbp-360h] BYREF
  void *v68; // [rsp+F0h] [rbp-358h]
  __int64 v69; // [rsp+F8h] [rbp-350h] BYREF
  __int64 v70; // [rsp+100h] [rbp-348h] BYREF
  int v71; // [rsp+108h] [rbp-340h] BYREF
  const wchar_t *v72; // [rsp+110h] [rbp-338h]
  _WORD v73[4]; // [rsp+118h] [rbp-330h] BYREF
  _WORD *v74; // [rsp+120h] [rbp-328h]
  int v75; // [rsp+128h] [rbp-320h] BYREF
  const wchar_t *v76; // [rsp+130h] [rbp-318h]
  _WORD v77[2]; // [rsp+140h] [rbp-308h] BYREF
  _WORD v78[262]; // [rsp+144h] [rbp-304h]
  _WORD Src[88]; // [rsp+350h] [rbp-F8h] BYREF

  v58 = (_QWORD *)a4;
  v10 = a3;
  v57 = a2;
  v54 = a1;
  v60 = a6;
  v66 = a7;
  v68 = a8;
  v61 = a9;
  v56 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v49 = 0;
  v59 = a3 & 0x40;
  v50 = 0;
  v51 = 0;
  v71 = 4980810;
  v72 = L"LdrpResSearchResourceMappedFile Enter";
  v75 = 4849736;
  v76 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v43 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v43 = 2147353476LL;
    sub_1800DBCC0(&v71, *(unsigned __int8 *)v43);
  }
  else
  {
    v14 = 2147353476LL;
  }
  v47 = 0;
  v15 = v10 & 0x80;
  v16 = a5;
  if ( a5 == 3 )
  {
    v47 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v35 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v34 = 1, !v35) )
    {
      v34 = 0;
    }
    v49 = v34;
  }
  v17 = v10 & 0x80;
  if ( (v10 & 0x10) == 0 )
  {
    v17 = v10 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v38 = *((_WORD *)v58 + 8);
      else
        v38 = 0;
      if ( ((*v58 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v49
        || (~(_BYTE)v10 & 8) == 0
        || (v38 & 0xF3FF) != 0
        || v38 == 3072 )
      {
        RCConfig = LdrResGetRCConfig(v54, v57, 0, v10, 1);
        MappingSize = RCConfig;
        v48 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v17 = v15 | sub_180033ADC(v54, v58, v12, v10);
        }
        else
        {
          if ( RCConfig != -1073741686 )
          {
LABEL_39:
            v32 = 2147353477LL;
            goto LABEL_40;
          }
          v17 = v15 | 0x80000;
        }
        v16 = a5;
      }
      else
      {
        v10 |= 0x10u;
        v17 = v15;
      }
    }
  }
  if ( (v17 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    v48 = -1073741686;
    goto LABEL_39;
  }
  LOBYTE(v11) = (~v17 & 0x20000) != 0 && (~v17 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v18 = (_BYTE)v11 != 0;
  v77[0] = 1;
  v78[0] = 0;
  if ( !(_BYTE)v11 && v16 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    v19 = v54;
    v20 = v57;
  }
  else
  {
    v36 = v17 | 4;
    if ( (v10 & 4) == 0 )
      v36 = v17;
    v17 = v36;
    v20 = v57;
    v19 = v54;
    result = sub_180053480(v54, v57, v47, v36, (__int64)v77);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v17 & 0x40000) != 0 || (v17 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v19, v20, v10, (unsigned int)&v64, (__int64)&v62);
    if ( (int)result < 0 )
      return result;
  }
  while ( 2 )
  {
    v21 = 0;
    if ( (v17 & 0x20000) == 0 )
      v21 = v18;
    v22 = v21;
    v53 = v21;
    v52 = v21;
    MappingSize = 0;
    v48 = 0;
    v55 = 0LL;
    v47 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= v77[0] )
        goto LABEL_34;
      if ( !v22 )
        break;
      v56 = 0LL;
      v55 = 0LL;
      v40 = v78[4 * i];
      if ( !v40 )
      {
        if ( *(_DWORD *)&v78[4 * i + 2] == 2 )
          continue;
LABEL_82:
        MappingSize = -1073741811;
LABEL_83:
        v48 = MappingSize;
        continue;
      }
      if ( *(_DWORD *)&v78[4 * i + 2] == 10 )
        goto LABEL_82;
      v47 = v78[4 * i];
      v41 = LdrLoadAlternateResourceModuleEx(v54, v40, &v56, &v55, v17 | 0x1000u);
      MappingSize = v41;
      v48 = v41;
      if ( v41 < 0 )
      {
        if ( v41 == -1073741772 || v41 == -1073741766 )
        {
          MappingSize = -1073020927;
          goto LABEL_83;
        }
      }
      else
      {
        v50 = 1;
        if ( !v55 )
        {
          LOBYTE(v42) = 1;
          MappingSize = LdrpResGetMappingSize(v56, &v55, 512LL, v42);
          v48 = MappingSize;
        }
        if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_34;
        MappingSize = LdrpResGetResourceDirectory(v56, v55, v10, (unsigned int)&v65, (__int64)&v63);
        v48 = MappingSize;
        if ( MappingSize >= 0 )
          break;
      }
LABEL_80:
      ;
    }
    v67 = 0LL;
    v25 = &v47;
    if ( v22 )
      v25 = 0LL;
    v26 = v10 | 0x20;
    if ( !v22 )
      v26 = v10;
    v27 = &v67;
    if ( v66 )
      v27 = v66;
    v28 = v62;
    if ( v22 )
      v28 = v63;
    v29 = v64;
    if ( v22 )
      v29 = v65;
    v30 = v57;
    if ( v22 )
      v30 = v55;
    v31 = v54;
    if ( v22 )
      v31 = v56;
    MappingSize = sub_1800520D4(
                    v31,
                    0,
                    v30,
                    v29,
                    v28,
                    0LL,
                    (__int64)v58,
                    a5,
                    (__int64)v77,
                    (__int64)v60,
                    (__int64)v27,
                    v26,
                    (__int64)v25);
    v48 = MappingSize;
    if ( v59 && (~v17 & 0x40000) != 0 )
    {
      if ( MappingSize < 0 )
        goto LABEL_33;
      if ( v60 && v22 )
      {
        if ( v66 )
          v44 = *v66;
        else
          LODWORD(v44) = v67;
        MappingSize = sub_180069E8C(v56, *v60, v44, *((_DWORD *)v58 + 6), 1);
        v48 = MappingSize;
        if ( MappingSize < 0 )
        {
          *v60 = 0LL;
          if ( MappingSize == -1073741701 )
            goto LABEL_38;
        }
      }
    }
    if ( MappingSize < 0 )
    {
LABEL_33:
      if ( !v22 )
        goto LABEL_34;
      if ( (int)LdrResGetRCConfig(v54, v57, (unsigned int)&v70, 4096, 1) >= 0
        && (int)LdrResGetRCConfig(v56, v55, (unsigned int)&v69, 4096, 0) >= 0 )
      {
        v11 = v70;
        v45 = *(_QWORD *)(v70 + 28) - *(_QWORD *)(v69 + 28);
        if ( !v45 )
          v45 = *(_QWORD *)(v70 + 36) - *(_QWORD *)(v69 + 36);
        if ( !v45 )
          goto LABEL_34;
      }
      goto LABEL_80;
    }
    v37 = v61;
    if ( !v61 )
    {
LABEL_34:
      if ( v22 && (v10 & 0x200000) == 0 )
        sub_18007A164(v56, v55, v58, (unsigned int)a5);
      if ( MappingSize >= 0 )
        goto LABEL_38;
      v18 = v53;
      if ( !v53 )
      {
LABEL_37:
        if ( v18 )
          continue;
        goto LABEL_38;
      }
      if ( v51 || v50 || (int)sub_180054094(v54, v11, v12) < 0 )
      {
        if ( (v17 & 0x40000) != 0 )
        {
          v18 = 0;
          goto LABEL_37;
        }
        v17 |= 0x20000u;
      }
      else
      {
        v17 |= 0x400000u;
        v51 = 1;
      }
      v18 = v52;
      goto LABEL_37;
    }
    break;
  }
  if ( v47 )
  {
    v74 = Src;
    v73[1] = 172;
    MappingSize = RtlLcidToLocaleName(v47, (__int64)v73, 2, 0);
    v48 = MappingSize;
    if ( MappingSize >= 0 )
    {
      v46 = v73[0] >> 1;
      v37 = v61;
      goto LABEL_128;
    }
LABEL_38:
    v14 = 2147353476LL;
    goto LABEL_39;
  }
  Src[0] = 0;
  v46 = 0;
LABEL_128:
  if ( v46 < *v37 && v68 )
  {
    memmove(v68, Src, 2LL * v46);
    *v61 = v46 + 1;
    *((_WORD *)v68 + v46) = 0;
    goto LABEL_34;
  }
  *v37 = v46 + 1;
  MappingSize = -1073741789;
  v48 = -1073741789;
  v14 = 2147353476LL;
  v32 = 2147353477LL;
LABEL_40:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v32 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    MappingSize = v48;
  }
  if ( (*(_BYTE *)v32 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      MappingSize = v48;
    }
    sub_1800DBCC0(&v75, *(unsigned __int8 *)v14);
  }
  return (unsigned int)MappingSize;
}
