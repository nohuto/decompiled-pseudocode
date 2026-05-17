/*
 * XREFs of RtlGetFileMUIPath @ 0x18001B6F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFileIsWin32WithRCManifest @ 0x18001621C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18001BBFC (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpCalcAllocSize @ 0x18001C10C (LdrpCalcAllocSize.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlIntegerToUnicode @ 0x18002D420 (RtlIntegerToUnicode.c)
 *     RtlGetFullPathName_UEx @ 0x1800354C0 (RtlGetFullPathName_UEx.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED098 (RtlpMUIEnumerateFolder.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800ED438 (RtlpMUIGetAllInstalledLang.c)
 */

__int64 __fastcall RtlGetFileMUIPath(
        unsigned int a1,
        __int64 a2,
        const WCHAR *a3,
        int *a4,
        void *a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  wchar_t *v7; // r11
  unsigned __int64 v9; // rsi
  const WCHAR *v10; // r14
  __int64 v11; // rdi
  int v12; // ebx
  __int64 v13; // r14
  int FullPathName_UEx; // eax
  int v15; // ecx
  unsigned __int64 v16; // rax
  __int16 v18; // cx
  unsigned int v19; // edi
  unsigned int v20; // ecx
  unsigned int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rcx
  const WCHAR *m; // rbx
  int v28; // r12d
  char v29; // al
  WCHAR *v30; // r12
  int *v31; // rdi
  unsigned __int64 Length; // rbx
  __int64 v33; // rax
  bool IsWin32WithRCManifest; // al
  __int64 v35; // r10
  unsigned __int16 v36; // r8
  unsigned __int64 v37; // rax
  unsigned __int64 i; // r9
  char v39; // cl
  __int64 v40; // rax
  __int64 v41; // rax
  int ThreadPreferredUILanguages; // eax
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  const WCHAR *j; // rbx
  __int64 v46; // rax
  int v47; // r12d
  char MUIRedirectedFilePath; // al
  __int64 v49; // rax
  char v50; // al
  char v51; // r13
  int v52; // eax
  PCWSTR v53; // rcx
  int v54; // eax
  wchar_t *Heap; // rax
  char v56; // al
  char v57; // al
  wchar_t *v58; // rbx
  unsigned __int64 k; // rcx
  __int64 v60; // rax
  int v61; // r14d
  int v62; // eax
  __int64 v63; // rax
  char v64; // al
  char v65; // bl
  char v66; // [rsp+40h] [rbp-C0h]
  _BYTE v67[15]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int64 v68; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v69; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  int v71[2]; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h]
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v74; // [rsp+88h] [rbp-78h] BYREF
  int v75[2]; // [rsp+90h] [rbp-70h] BYREF
  void *v76; // [rsp+98h] [rbp-68h]
  int v77; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 v78; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v79; // [rsp+A8h] [rbp-58h] BYREF
  int v80[2]; // [rsp+B0h] [rbp-50h]
  int *v81; // [rsp+B8h] [rbp-48h]
  __int64 v82; // [rsp+C0h] [rbp-40h]
  PCWSTR SourceString; // [rsp+C8h] [rbp-38h]
  wchar_t *v84; // [rsp+D0h] [rbp-30h]
  unsigned __int64 *v85; // [rsp+D8h] [rbp-28h]
  char v86[8]; // [rsp+E0h] [rbp-20h] BYREF
  char v87[8]; // [rsp+E8h] [rbp-18h] BYREF
  int v88[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v89[4]; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v90; // [rsp+110h] [rbp+10h] BYREF
  int v91[4]; // [rsp+120h] [rbp+20h] BYREF
  WCHAR v92[4]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v93; // [rsp+138h] [rbp+38h]

  v7 = 0LL;
  v76 = a5;
  v9 = 0LL;
  v10 = 0LL;
  *(_QWORD *)v80 = a6;
  v81 = a4;
  SourceString = a3;
  v11 = a1;
  v85 = a7;
  v68 = 0LL;
  v82 = 0LL;
  v72 = 0LL;
  v67[0] = 0;
  *(_QWORD *)v92 = 0LL;
  v93 = 0;
  *(_QWORD *)&v67[7] = 0LL;
  String1 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v84 = 0LL;
  *(_QWORD *)v71 = 0LL;
  *(_QWORD *)v75 = 0LL;
  v79 = 0LL;
  if ( !a2 || !a7 )
  {
    v12 = -1073741811;
    goto LABEL_173;
  }
  v12 = RtlpCreateProcessRegistryInfo(&v79);
  if ( v12 < 0 )
    return (unsigned int)v12;
  *(_QWORD *)v71 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 522LL);
  v13 = *(_QWORD *)v71;
  if ( !*(_QWORD *)v71 )
    return (unsigned int)-1073741801;
  FullPathName_UEx = RtlGetFullPathName_UEx(a2, 520, v71[0], (unsigned int)v75, (__int64)&v77);
  v7 = 0LL;
  v15 = 0;
  if ( FullPathName_UEx >= 0 )
    v15 = v77;
  if ( (unsigned int)(v15 - 1) > 0x206
    || !*(_QWORD *)v75
    || *(_QWORD *)v75 <= *(_QWORD *)v71
    || *(_QWORD *)v75 >= (unsigned __int64)(*(_QWORD *)v71 + 520LL) )
  {
    goto LABEL_13;
  }
  *(_WORD *)(*(_QWORD *)v75 - 2LL) = 0;
  v16 = *a7;
  if ( *a7 )
  {
    v25 = v68;
    v35 = *a7 & 0xF;
    v82 = v35;
    v36 = v16 & 0xF;
    v37 = v16 >> 4;
    for ( i = 0LL; i < 4; ++i )
    {
      v39 = v37;
      v36 ^= v37 & 0xFFF;
      if ( i )
      {
        if ( i == 2 )
        {
          v25 = v37 & 0xFFF;
        }
        else if ( i == 3 )
        {
          v9 = v37 & 0xFFF;
        }
        v39 = v72;
      }
      else
      {
        v72 = v37 & 0xFFF;
      }
      v37 >>= 12;
    }
    v68 = v25;
    if ( (((unsigned __int16)v37 ^ v36) & 0xFFF) != 0 )
    {
      v12 = -1073741776;
    }
    else
    {
      if ( v9 <= v25 )
      {
        if ( (v39 & 0x20) != 0 )
          v19 = 2;
        else
          v19 = (v39 & 0x40 | 0x20u) >> 5;
        v10 = *(const WCHAR **)&v67[7];
        v67[1] = (v39 & 4) == 0;
        v66 = v35 & 1;
LABEL_29:
        if ( v19 != 1 )
        {
          if ( v19 == 2 )
          {
            if ( !v10 )
            {
              RtlpMUIGetAllInstalledLang(v79, &v67[7], v86);
              v10 = *(const WCHAR **)&v67[7];
              v7 = 0LL;
            }
            v44 = 0LL;
            for ( j = v10; v44 < v9; j += v46 + 1 )
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              ++v44;
              v46 = -1LL;
              do
                ++v46;
              while ( j[v46] );
            }
            if ( v9 >= v25 )
              goto LABEL_55;
            v47 = v75[0];
            do
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              RtlInitUnicodeString(&DestinationString, j);
              *(UNICODE_STRING *)v89 = DestinationString;
              MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath(
                                        (int)v89,
                                        v71[0],
                                        v47,
                                        v80[0],
                                        v66,
                                        v76,
                                        (__int64)v67);
              v7 = 0LL;
              if ( MUIRedirectedFilePath )
                break;
              ++v9;
              v49 = -1LL;
              do
                ++v49;
              while ( j[v49] );
              j += v49 + 1;
            }
            while ( v9 < v25 );
          }
          else
          {
            if ( !String1 )
            {
              v50 = RtlpMUIEnumerateFolder(*(_QWORD *)v71, v87, &String1);
              v7 = 0LL;
              if ( !v50 )
                v9 = v25;
            }
            v51 = 0;
            if ( !v9 )
            {
              v52 = *v81;
              if ( *v81 )
              {
                if ( SourceString )
                {
                  v53 = SourceString;
                  do
                  {
                    if ( !*v53 )
                      break;
                    ++v53;
                    --v52;
                  }
                  while ( v52 );
                  if ( v52 )
                  {
                    if ( v67[1] )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      v57 = RtlCultureNameToLCID(&DestinationString, &v74);
                      v7 = 0LL;
                      if ( v57 )
                        v51 = 1;
                    }
                    else
                    {
                      RtlInitUnicodeString(&v90, SourceString);
                      v54 = RtlUnicodeStringToInteger(&v90, 16LL, &v74);
                      v7 = 0LL;
                      if ( v54 >= 0 )
                      {
                        Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 170LL);
                        v7 = 0LL;
                        v84 = Heap;
                        if ( !Heap )
                          goto LABEL_175;
                        DestinationString.Buffer = Heap;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v56 = RtlLCIDToCultureName(v74, &DestinationString);
                        v25 = v68;
                        v7 = 0LL;
                        v10 = *(const WCHAR **)&v67[7];
                        if ( v56 )
                          v51 = 1;
                      }
                    }
                  }
                }
              }
            }
            v58 = String1;
            for ( k = 0LL; k < v9; v58 += v60 + 1 )
            {
              if ( !v58 )
                break;
              if ( !*v58 )
                break;
              ++k;
              v60 = -1LL;
              do
                ++v60;
              while ( v58[v60] );
            }
            if ( v9 >= v25 )
              goto LABEL_55;
            v61 = v75[0];
            do
            {
              if ( v51 && (v62 = wcsicmp(v58, DestinationString.Buffer), v7 = 0LL, v62) )
              {
                v63 = -1LL;
                do
                  ++v63;
                while ( v58[v63] );
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, v58);
                *(UNICODE_STRING *)v91 = DestinationString;
                v64 = RtlpGetMUIRedirectedFilePath((int)v91, v71[0], v61, v80[0], v66, v76, (__int64)v67);
                v7 = 0LL;
                if ( v64 )
                  break;
                v63 = -1LL;
                do
                  ++v63;
                while ( v58[v63] );
              }
              v58 += v63 + 1;
              ++v9;
            }
            while ( v9 < v25 );
            v10 = *(const WCHAR **)&v67[7];
          }
          goto LABEL_36;
        }
        if ( v10 )
        {
LABEL_31:
          v26 = 0LL;
          for ( m = v10; v26 < v9; m += v43 + 1 )
          {
            if ( !m )
              break;
            if ( !*m )
              break;
            ++v26;
            v43 = -1LL;
            do
              ++v43;
            while ( m[v43] );
          }
          if ( v9 >= v25 )
            goto LABEL_55;
          v28 = v75[0];
          do
          {
            if ( !*m )
              break;
            RtlInitUnicodeString(&DestinationString, m);
            *(UNICODE_STRING *)v88 = DestinationString;
            v29 = RtlpGetMUIRedirectedFilePath((int)v88, v71[0], v28, v80[0], v66, v76, (__int64)v67);
            v7 = 0LL;
            if ( v29 )
              break;
            ++v9;
            v33 = -1LL;
            do
              ++v33;
            while ( m[v33] );
            m += v33 + 1;
          }
          while ( v9 < v25 );
LABEL_36:
          if ( v9 < v25 )
          {
            v30 = (WCHAR *)SourceString;
            v31 = v81;
            if ( SourceString || v81 )
            {
              if ( v67[1] )
                goto LABEL_39;
              v65 = RtlCultureNameToLCID(&DestinationString, &v78);
              if ( v65 )
                v65 = (int)RtlIntegerToUnicode(v78, 16LL, 4294967292LL, v92) >= 0;
              RtlInitUnicodeString(&DestinationString, v92);
              v7 = 0LL;
              if ( v65 )
              {
LABEL_39:
                if ( v30 )
                {
                  if ( v31 )
                  {
                    if ( *v31 <= (unsigned int)(DestinationString.Length >> 1) )
                    {
                      v67[0] = 1;
                    }
                    else
                    {
                      Length = DestinationString.Length;
                      memmove(v30, DestinationString.Buffer, DestinationString.Length);
                      v7 = 0LL;
                      v30[Length >> 1] = 0;
                    }
                  }
                }
                else if ( v31 )
                {
                  *v31 = 85;
                }
              }
            }
            if ( !v76 || !v30 && v31 )
            {
              v12 = 0;
              goto LABEL_173;
            }
            if ( v67[0] )
            {
              v12 = -1073741789;
              goto LABEL_173;
            }
            v12 = 0;
LABEL_47:
            *v85 = v82 | (((v9 + 1) ^ v25 ^ v82 ^ v72) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v72 | ((v25 | ((v9 + 1) << 12)) << 24) | 0xCB7000));
LABEL_173:
            if ( !v84 )
              goto LABEL_67;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v84);
            v7 = 0LL;
LABEL_175:
            v10 = *(const WCHAR **)&v67[7];
LABEL_67:
            if ( v10 )
            {
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *(_QWORD *)&v67[7]);
              v7 = 0LL;
            }
            goto LABEL_69;
          }
LABEL_55:
          v12 = -2147483642;
          goto LABEL_47;
        }
        *(_DWORD *)&v67[3] = 0;
        RtlGetThreadPreferredUILanguages(48LL, &v69, 0LL, &v67[3]);
        v7 = 0LL;
        if ( *(_DWORD *)&v67[3] )
        {
          v40 = LdrpCalcAllocSize(*(unsigned int *)&v67[3], 2LL);
          if ( !v40 )
          {
            v12 = -1073741675;
LABEL_69:
            if ( String1 != v7 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, String1);
            goto LABEL_71;
          }
          v41 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v40);
          v7 = 0LL;
          *(_QWORD *)&v67[7] = v41;
          v10 = (const WCHAR *)v41;
          if ( v41 )
          {
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(48LL, &v69, v41, &v67[3]);
            v7 = 0LL;
            if ( ThreadPreferredUILanguages >= 0 )
            {
              v25 = v68;
              goto LABEL_31;
            }
          }
          v25 = v68;
        }
        v9 = v25;
        goto LABEL_31;
      }
      v12 = -2147483642;
    }
    goto LABEL_14;
  }
  if ( (v11 & 0xC) == 0xC
    || (v11 & 0x30) == 0x30
    || (v11 & 0x50) == 0x50
    || (v11 & 0x60) == 0x60
    || (v11 & 0x70) == 112
    || (v11 & 0x300) == 768 )
  {
LABEL_13:
    v12 = -1073741811;
    goto LABEL_14;
  }
  v18 = v11;
  v72 = v11;
  if ( (v11 & 0x20) != 0 )
    v19 = 2;
  else
    v19 = (unsigned __int64)(v11 & 0x40 | 0x20) >> 5;
  v67[1] = (v18 & 4) == 0;
  if ( (v18 & 0x200) == 0
    && ((v18 & 0x100) != 0
     || (IsWin32WithRCManifest = RtlpFileIsWin32WithRCManifest(a2), v7 = 0LL, IsWin32WithRCManifest)) )
  {
    v66 = 1;
    v82 = 1LL;
  }
  else
  {
    v66 = 0;
  }
  v20 = v19 - 1;
  if ( v19 != 1 )
  {
    if ( v19 == 2 )
    {
      v68 = 0LL;
      RtlpMUIGetAllInstalledLang(v79, &v67[7], &v68);
    }
    else
    {
      if ( v19 != 3 )
      {
        v25 = v68;
        v10 = *(const WCHAR **)&v67[7];
LABEL_28:
        v9 = 0LL;
        goto LABEL_29;
      }
      v68 = 0LL;
      RtlpMUIEnumerateFolder(v13, &v68, &String1);
    }
    v25 = v68;
    v7 = 0LL;
    v10 = *(const WCHAR **)&v67[7];
    goto LABEL_28;
  }
  v21 = v20 + 48;
  *(_DWORD *)&v67[3] = 0;
  RtlGetThreadPreferredUILanguages(v20 + 48, &v69, 0LL, &v67[3]);
  if ( !*(_DWORD *)&v67[3] )
    goto LABEL_14;
  v22 = LdrpCalcAllocSize(*(unsigned int *)&v67[3], 2LL);
  if ( v22 )
  {
    v23 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v21 - 40, v22);
    *(_QWORD *)&v67[7] = v23;
    v10 = (const WCHAR *)v23;
    if ( !v23 )
    {
      v12 = -1073741801;
LABEL_71:
      v13 = *(_QWORD *)v71;
      goto LABEL_14;
    }
    v24 = RtlGetThreadPreferredUILanguages(v21, &v69, v23, &v67[3]);
    v7 = 0LL;
    if ( v24 < 0 )
    {
      v12 = v24;
      goto LABEL_67;
    }
    v25 = v69;
    v68 = v69;
    goto LABEL_28;
  }
  v12 = -1073741675;
LABEL_14:
  if ( v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v13);
  return (unsigned int)v12;
}
