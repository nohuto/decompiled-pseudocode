/*
 * XREFs of RtlGetFileMUIPath @ 0x18004EF20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_180036E00 @ 0x180036E00 (sub_180036E00.c)
 *     RtlGetFullPathName_UEx @ 0x18003C1A0 (RtlGetFullPathName_UEx.c)
 *     sub_18004EC98 @ 0x18004EC98 (sub_18004EC98.c)
 *     sub_18004F58C @ 0x18004F58C (sub_18004F58C.c)
 *     sub_18004F9D8 @ 0x18004F9D8 (sub_18004F9D8.c)
 *     RtlUnicodeStringToInteger @ 0x180074BF0 (RtlUnicodeStringToInteger.c)
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800E94D4 @ 0x1800E94D4 (sub_1800E94D4.c)
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
  unsigned __int64 v13; // r14
  int FullPathName_UEx; // eax
  int v15; // ecx
  unsigned __int64 v16; // rax
  __int16 v18; // cx
  unsigned int v19; // edi
  bool v20; // al
  unsigned int v21; // ecx
  int v22; // esi
  __int64 v23; // rax
  WCHAR *v24; // rax
  int v25; // eax
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rcx
  const WCHAR *m; // rbx
  int v29; // r12d
  char v30; // al
  WCHAR *v31; // r12
  int *v32; // rdi
  unsigned __int64 Length; // rbx
  __int64 v34; // rax
  char v35; // r13
  int v36; // eax
  PCWSTR v37; // rcx
  char v38; // al
  wchar_t *v39; // rbx
  unsigned __int64 k; // rcx
  int v41; // r14d
  int v42; // eax
  char v43; // al
  __int64 v44; // r10
  unsigned __int16 v45; // r8
  unsigned __int64 v46; // rax
  unsigned __int64 i; // r9
  char v48; // cl
  __int64 v49; // rax
  WCHAR *v50; // rax
  int ThreadPreferredUILanguages; // eax
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  const WCHAR *j; // rbx
  __int64 v55; // rax
  int v56; // r12d
  char v57; // al
  __int64 v58; // rax
  char v59; // al
  int v60; // eax
  wchar_t *Heap; // rax
  char v62; // al
  __int64 v63; // rax
  __int64 v64; // rax
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
  int v78; // [rsp+A4h] [rbp-5Ch] BYREF
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
    goto LABEL_176;
  }
  v12 = RtlpCreateProcessRegistryInfo(&v79);
  if ( v12 < 0 )
    return (unsigned int)v12;
  *(_QWORD *)v71 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
  v13 = *(_QWORD *)v71;
  if ( !*(_QWORD *)v71 )
    return (unsigned int)-1073741801;
  FullPathName_UEx = RtlGetFullPathName_UEx(a2, 0x208u, *(__int64 *)v71, (__int64)v75, &v77);
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
    v26 = v68;
    v44 = *a7 & 0xF;
    v82 = v44;
    v45 = v16 & 0xF;
    v46 = v16 >> 4;
    for ( i = 0LL; i < 4; ++i )
    {
      v48 = v46;
      v45 ^= v46 & 0xFFF;
      if ( i )
      {
        if ( i == 2 )
        {
          v26 = v46 & 0xFFF;
        }
        else if ( i == 3 )
        {
          v9 = v46 & 0xFFF;
        }
        v48 = v72;
      }
      else
      {
        v72 = v46 & 0xFFF;
      }
      v46 >>= 12;
    }
    v68 = v26;
    if ( (((unsigned __int16)v46 ^ v45) & 0xFFF) != 0 )
    {
      v12 = -1073741776;
    }
    else
    {
      if ( v9 <= v26 )
      {
        if ( (v48 & 0x20) != 0 )
          v19 = 2;
        else
          v19 = (v48 & 0x40 | 0x20u) >> 5;
        v10 = *(const WCHAR **)&v67[7];
        v67[1] = (v48 & 4) == 0;
        v66 = v44 & 1;
LABEL_31:
        if ( v19 != 1 )
        {
          if ( v19 == 2 )
          {
            if ( !v10 )
            {
              sub_1800E94D4(v79, &v67[7], v86);
              v10 = *(const WCHAR **)&v67[7];
              v7 = 0LL;
            }
            v53 = 0LL;
            for ( j = v10; v53 < v9; j += v55 + 1 )
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              ++v53;
              v55 = -1LL;
              do
                ++v55;
              while ( j[v55] );
            }
            if ( v9 >= v26 )
              goto LABEL_60;
            v56 = v75[0];
            do
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              RtlInitUnicodeString(&DestinationString, j);
              *(UNICODE_STRING *)v89 = DestinationString;
              v57 = sub_18004F58C((int)v89, v71[0], v56, v80[0], v66, v76, (__int64)v67);
              v7 = 0LL;
              if ( v57 )
                break;
              ++v9;
              v58 = -1LL;
              do
                ++v58;
              while ( j[v58] );
              j += v58 + 1;
            }
            while ( v9 < v26 );
          }
          else
          {
            if ( !String1 )
            {
              v59 = sub_180085824(*(_QWORD *)v71, v87, &String1);
              v7 = 0LL;
              if ( !v59 )
                v9 = v26;
            }
            v35 = 0;
            if ( !v9 )
            {
              v36 = *v81;
              if ( *v81 )
              {
                if ( SourceString )
                {
                  v37 = SourceString;
                  do
                  {
                    if ( !*v37 )
                      break;
                    ++v37;
                    --v36;
                  }
                  while ( v36 );
                  if ( v36 )
                  {
                    if ( v67[1] )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      v38 = RtlCultureNameToLCID(&DestinationString.Length, &v74);
                      v7 = 0LL;
                      if ( v38 )
                        v35 = 1;
                    }
                    else
                    {
                      RtlInitUnicodeString(&v90, SourceString);
                      v60 = RtlUnicodeStringToInteger(&v90, 16LL, &v74);
                      v7 = 0LL;
                      if ( v60 >= 0 )
                      {
                        Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
                        v7 = 0LL;
                        v84 = Heap;
                        if ( !Heap )
                          goto LABEL_178;
                        DestinationString.Buffer = Heap;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v62 = RtlLCIDToCultureName(v74, (__int64)&DestinationString);
                        v26 = v68;
                        v7 = 0LL;
                        v10 = *(const WCHAR **)&v67[7];
                        if ( v62 )
                          v35 = 1;
                      }
                    }
                  }
                }
              }
            }
            v39 = String1;
            for ( k = 0LL; k < v9; v39 += v63 + 1 )
            {
              if ( !v39 )
                break;
              if ( !*v39 )
                break;
              ++k;
              v63 = -1LL;
              do
                ++v63;
              while ( v39[v63] );
            }
            if ( v9 >= v26 )
              goto LABEL_60;
            v41 = v75[0];
            do
            {
              if ( v35 && (v42 = wcsicmp(v39, DestinationString.Buffer), v7 = 0LL, v42) )
              {
                v64 = -1LL;
                do
                  ++v64;
                while ( v39[v64] );
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, v39);
                *(UNICODE_STRING *)v91 = DestinationString;
                v43 = sub_18004F58C((int)v91, v71[0], v41, v80[0], v66, v76, (__int64)v67);
                v7 = 0LL;
                if ( v43 )
                  break;
                v64 = -1LL;
                do
                  ++v64;
                while ( v39[v64] );
              }
              v39 += v64 + 1;
              ++v9;
            }
            while ( v9 < v26 );
            v10 = *(const WCHAR **)&v67[7];
          }
          goto LABEL_38;
        }
        if ( v10 )
        {
LABEL_33:
          v27 = 0LL;
          for ( m = v10; v27 < v9; m += v52 + 1 )
          {
            if ( !m )
              break;
            if ( !*m )
              break;
            ++v27;
            v52 = -1LL;
            do
              ++v52;
            while ( m[v52] );
          }
          if ( v9 >= v26 )
            goto LABEL_60;
          v29 = v75[0];
          do
          {
            if ( !*m )
              break;
            RtlInitUnicodeString(&DestinationString, m);
            *(UNICODE_STRING *)v88 = DestinationString;
            v30 = sub_18004F58C((int)v88, v71[0], v29, v80[0], v66, v76, (__int64)v67);
            v7 = 0LL;
            if ( v30 )
              break;
            ++v9;
            v34 = -1LL;
            do
              ++v34;
            while ( m[v34] );
            m += v34 + 1;
          }
          while ( v9 < v26 );
LABEL_38:
          if ( v9 < v26 )
          {
            v31 = (WCHAR *)SourceString;
            v32 = v81;
            if ( SourceString || v81 )
            {
              if ( v67[1] )
                goto LABEL_42;
              v65 = RtlCultureNameToLCID(&DestinationString.Length, &v78);
              if ( v65 )
                v65 = (int)sub_180036E00((unsigned __int16)v78, 0x10u, -4, (char *)v92) >= 0;
              RtlInitUnicodeString(&DestinationString, v92);
              v7 = 0LL;
              if ( v65 )
              {
LABEL_42:
                if ( v31 )
                {
                  if ( v32 )
                  {
                    if ( *v32 <= (unsigned int)(DestinationString.Length >> 1) )
                    {
                      v67[0] = 1;
                    }
                    else
                    {
                      Length = DestinationString.Length;
                      memmove(v31, DestinationString.Buffer, DestinationString.Length);
                      v7 = 0LL;
                      v31[Length >> 1] = 0;
                    }
                  }
                }
                else if ( v32 )
                {
                  *v32 = 85;
                }
              }
            }
            if ( !v76 || !v31 && v32 )
            {
              v12 = 0;
              goto LABEL_176;
            }
            if ( v67[0] )
            {
              v12 = -1073741789;
              goto LABEL_176;
            }
            v12 = 0;
LABEL_50:
            *v85 = v82 | (((v9 + 1) ^ v26 ^ v82 ^ v72) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v72 | ((v26 | ((v9 + 1) << 12)) << 24) | 0xCB7000));
LABEL_176:
            if ( !v84 )
              goto LABEL_88;
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v84);
            v7 = 0LL;
LABEL_178:
            v10 = *(const WCHAR **)&v67[7];
LABEL_88:
            if ( v10 )
            {
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(unsigned __int64 *)&v67[7]);
              v7 = 0LL;
            }
            goto LABEL_90;
          }
LABEL_60:
          v12 = -2147483642;
          goto LABEL_50;
        }
        *(_DWORD *)&v67[3] = 0;
        RtlGetThreadPreferredUILanguages(48, (__int64)&v69, 0LL, &v67[3]);
        v7 = 0LL;
        if ( *(_DWORD *)&v67[3] )
        {
          v49 = sub_18004F9D8(*(unsigned int *)&v67[3], 2LL);
          if ( !v49 )
          {
            v12 = -1073741675;
LABEL_90:
            if ( String1 != v7 )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)String1);
            goto LABEL_92;
          }
          v50 = (WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v49);
          v7 = 0LL;
          *(_QWORD *)&v67[7] = v50;
          v10 = v50;
          if ( v50 )
          {
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(48, (__int64)&v69, v50, &v67[3]);
            v7 = 0LL;
            if ( ThreadPreferredUILanguages >= 0 )
            {
              v26 = v68;
              goto LABEL_33;
            }
          }
          v26 = v68;
        }
        v9 = v26;
        goto LABEL_33;
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
  if ( (v18 & 0x200) == 0 && ((v18 & 0x100) != 0 || (v20 = sub_18004EC98(a2), v7 = 0LL, v20)) )
  {
    v66 = 1;
    v82 = 1LL;
  }
  else
  {
    v66 = 0;
  }
  v21 = v19 - 1;
  if ( v19 != 1 )
  {
    if ( v19 == 2 )
    {
      v68 = 0LL;
      sub_1800E94D4(v79, &v67[7], &v68);
    }
    else
    {
      if ( v19 != 3 )
      {
        v26 = v68;
        v10 = *(const WCHAR **)&v67[7];
        goto LABEL_30;
      }
      v68 = 0LL;
      sub_180085824(v13, &v68, &String1);
    }
    v26 = v68;
    v7 = 0LL;
    v10 = *(const WCHAR **)&v67[7];
LABEL_30:
    v9 = 0LL;
    goto LABEL_31;
  }
  v22 = v21 + 48;
  *(_DWORD *)&v67[3] = 0;
  RtlGetThreadPreferredUILanguages(v21 + 48, (__int64)&v69, 0LL, &v67[3]);
  if ( !*(_DWORD *)&v67[3] )
    goto LABEL_14;
  v23 = sub_18004F9D8(*(unsigned int *)&v67[3], 2LL);
  if ( v23 )
  {
    v24 = (WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, v22 - 40, v23);
    *(_QWORD *)&v67[7] = v24;
    v10 = v24;
    if ( !v24 )
    {
      v12 = -1073741801;
LABEL_92:
      v13 = *(_QWORD *)v71;
      goto LABEL_14;
    }
    v25 = RtlGetThreadPreferredUILanguages(v22, (__int64)&v69, v24, &v67[3]);
    v7 = 0LL;
    if ( v25 < 0 )
    {
      v12 = v25;
      goto LABEL_88;
    }
    v26 = v69;
    v68 = v69;
    goto LABEL_30;
  }
  v12 = -1073741675;
LABEL_14:
  if ( v13 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
  return (unsigned int)v12;
}
