/*
 * XREFs of RtlGetFileMUIPath @ 0x180056E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlGetFullPathName_UEx @ 0x18003BAA0 (RtlGetFullPathName_UEx.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180044560 @ 0x180044560 (sub_180044560.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 *     sub_180057888 @ 0x180057888 (sub_180057888.c)
 *     sub_1800584C8 @ 0x1800584C8 (sub_1800584C8.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800ED3D0 @ 0x1800ED3D0 (sub_1800ED3D0.c)
 *     sub_1800ED770 @ 0x1800ED770 (sub_1800ED770.c)
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
  wchar_t *v8; // r9
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r13
  const WCHAR *v12; // r14
  int v13; // ebx
  unsigned __int64 v14; // r14
  int FullPathName_UEx; // eax
  int v16; // ecx
  unsigned __int64 v17; // rax
  __int16 v19; // r13
  int v20; // edi
  __int64 v21; // rax
  WCHAR *v22; // rax
  int v23; // eax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rcx
  const WCHAR *k; // rbx
  int v27; // r13d
  char v28; // al
  WCHAR *v29; // r13
  int *v30; // rdi
  unsigned __int64 Length; // rbx
  __int64 v32; // rax
  bool v33; // al
  unsigned __int64 v34; // rcx
  const WCHAR *j; // rbx
  __int64 v36; // rax
  int v37; // r13d
  char v38; // al
  char v39; // r13
  int v40; // eax
  PCWSTR v41; // rcx
  int v42; // eax
  wchar_t *Heap; // rax
  char v44; // al
  wchar_t *v45; // rbx
  unsigned __int64 i; // rcx
  __int64 v47; // rax
  int v48; // r12d
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  WCHAR *v52; // rax
  int ThreadPreferredUILanguages; // eax
  char v54; // bl
  __int64 v55; // r11
  unsigned __int16 v56; // r8
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  char v59; // al
  char v60; // al
  char v61; // al
  __int64 v62; // rax
  bool v63; // [rsp+40h] [rbp-C0h]
  char v64; // [rsp+41h] [rbp-BFh]
  _WORD v65[7]; // [rsp+42h] [rbp-BEh] BYREF
  unsigned __int64 v66; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v67; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  int v69[2]; // [rsp+70h] [rbp-90h]
  wchar_t *String1; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v71; // [rsp+80h] [rbp-80h] BYREF
  int v72[2]; // [rsp+88h] [rbp-78h] BYREF
  void *v73; // [rsp+90h] [rbp-70h]
  int v74; // [rsp+98h] [rbp-68h] BYREF
  int v75; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  int v77[2]; // [rsp+A8h] [rbp-58h]
  int *v78; // [rsp+B0h] [rbp-50h]
  __int64 v79; // [rsp+B8h] [rbp-48h]
  __int64 v80; // [rsp+C0h] [rbp-40h]
  PCWSTR SourceString; // [rsp+C8h] [rbp-38h]
  wchar_t *v82; // [rsp+D0h] [rbp-30h]
  unsigned __int64 *v83; // [rsp+D8h] [rbp-28h]
  char v84[8]; // [rsp+E0h] [rbp-20h] BYREF
  char v85[8]; // [rsp+E8h] [rbp-18h] BYREF
  int v86[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v87[4]; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v88; // [rsp+110h] [rbp+10h] BYREF
  int v89[4]; // [rsp+120h] [rbp+20h] BYREF
  WCHAR v90[4]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v91; // [rsp+138h] [rbp+38h]

  v73 = a5;
  *(_QWORD *)v77 = a6;
  v78 = a4;
  v8 = 0LL;
  SourceString = a3;
  v9 = 0LL;
  v10 = a1;
  v11 = 0LL;
  v83 = a7;
  v12 = 0LL;
  v66 = 0LL;
  v80 = 0LL;
  v79 = 0LL;
  LOBYTE(v65[0]) = 0;
  *(_QWORD *)v90 = 0LL;
  v91 = 0;
  *(_QWORD *)&v65[3] = 0LL;
  String1 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v82 = 0LL;
  *(_QWORD *)v69 = 0LL;
  *(_QWORD *)v72 = 0LL;
  v76 = 0LL;
  if ( !a2 || !a7 )
  {
    v13 = -1073741811;
    goto LABEL_63;
  }
  v13 = RtlpCreateProcessRegistryInfo(&v76);
  if ( v13 < 0 )
    return (unsigned int)v13;
  *(_QWORD *)v69 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
  v14 = *(_QWORD *)v69;
  if ( !*(_QWORD *)v69 )
    return (unsigned int)-1073741801;
  FullPathName_UEx = RtlGetFullPathName_UEx(a2, 0x208u, *(__int64 *)v69, (__int64)v72, &v74);
  v8 = 0LL;
  v16 = 0;
  if ( FullPathName_UEx >= 0 )
    v16 = v74;
  if ( (unsigned int)(v16 - 1) > 0x206
    || !*(_QWORD *)v72
    || *(_QWORD *)v72 <= *(_QWORD *)v69
    || *(_QWORD *)v72 >= (unsigned __int64)(*(_QWORD *)v69 + 520LL) )
  {
    goto LABEL_13;
  }
  *(_WORD *)(*(_QWORD *)v72 - 2LL) = 0;
  v17 = *a7;
  if ( *a7 )
  {
    v24 = v66;
    v55 = *a7 & 0xF;
    v80 = v55;
    v56 = v17 & 0xF;
    v57 = v17 >> 4;
    do
    {
      v56 ^= v57 & 0xFFF;
      if ( v8 )
      {
        if ( v8 == (wchar_t *)2 )
        {
          v24 = v57 & 0xFFF;
          v66 = v24;
        }
        else if ( v8 == (wchar_t *)3 )
        {
          v9 = v57 & 0xFFF;
        }
      }
      else
      {
        v11 = v57 & 0xFFF;
      }
      v57 >>= 12;
      v8 = (wchar_t *)((char *)v8 + 1);
    }
    while ( (unsigned __int64)v8 < 4 );
    v79 = v11;
    if ( (((unsigned __int16)v57 ^ v56) & 0xFFF) != 0 )
    {
      v13 = -1073741776;
    }
    else
    {
      if ( v9 <= v24 )
      {
        if ( (v11 & 0x20) != 0 )
          v20 = 2;
        else
          v20 = (unsigned __int64)(v11 & 0x40 | 0x20) >> 5;
        v12 = *(const WCHAR **)&v65[3];
        v64 = v55 & 1;
        v63 = (v11 & 4) == 0;
        v8 = 0LL;
LABEL_32:
        if ( v20 != 1 )
        {
          if ( v20 != 2 )
          {
            if ( !String1 )
            {
              v59 = sub_1800ED3D0(*(_QWORD *)v69, v85, &String1);
              v8 = 0LL;
              if ( !v59 )
                v9 = v24;
            }
            v39 = 0;
            if ( !v9 )
            {
              v40 = *v78;
              if ( *v78 )
              {
                if ( SourceString )
                {
                  v41 = SourceString;
                  do
                  {
                    if ( !*v41 )
                      break;
                    ++v41;
                    --v40;
                  }
                  while ( v40 );
                  if ( v40 )
                  {
                    if ( v63 )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      v44 = RtlCultureNameToLCID(&DestinationString.Length, &v71);
                      v8 = 0LL;
                      if ( v44 )
                        v39 = 1;
                    }
                    else
                    {
                      RtlInitUnicodeString(&v88, SourceString);
                      v42 = RtlUnicodeStringToInteger(&v88, 16LL, &v71);
                      v8 = 0LL;
                      if ( v42 >= 0 )
                      {
                        Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
                        v8 = 0LL;
                        v82 = Heap;
                        if ( !Heap )
                        {
LABEL_93:
                          v12 = *(const WCHAR **)&v65[3];
                          goto LABEL_94;
                        }
                        DestinationString.Buffer = Heap;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v61 = RtlLCIDToCultureName(v71, (__int64)&DestinationString);
                        v24 = v66;
                        v8 = 0LL;
                        v12 = *(const WCHAR **)&v65[3];
                        if ( v61 )
                          v39 = 1;
                      }
                    }
                  }
                }
              }
            }
            v45 = String1;
            for ( i = 0LL; i < v9; v45 += v47 + 1 )
            {
              if ( !v45 )
                break;
              if ( !*v45 )
                break;
              ++i;
              v47 = -1LL;
              do
                ++v47;
              while ( v45[v47] );
            }
            if ( v9 < v24 )
            {
              v48 = v72[0];
              while ( 1 )
              {
                if ( v39 && (v49 = wcsicmp(v45, DestinationString.Buffer), v8 = 0LL, v49) )
                {
                  v50 = -1LL;
                  do
                    ++v50;
                  while ( v45[v50] );
                }
                else
                {
                  RtlInitUnicodeString(&DestinationString, v45);
                  *(UNICODE_STRING *)v89 = DestinationString;
                  v60 = sub_180057888((int)v89, v69[0], v48, v77[0], v64, v73, (__int64)v65);
                  v8 = 0LL;
                  if ( v60 )
                  {
LABEL_114:
                    v12 = *(const WCHAR **)&v65[3];
                    goto LABEL_39;
                  }
                  v50 = -1LL;
                  do
                    ++v50;
                  while ( v45[v50] );
                }
                v45 += v50 + 1;
                if ( ++v9 >= v24 )
                  goto LABEL_114;
              }
            }
            goto LABEL_58;
          }
          if ( !v12 )
          {
            sub_1800ED770(v76, &v65[3], v84);
            v12 = *(const WCHAR **)&v65[3];
            v8 = 0LL;
          }
          v34 = 0LL;
          for ( j = v12; v34 < v9; j += v36 + 1 )
          {
            if ( !j )
              break;
            if ( !*j )
              break;
            ++v34;
            v36 = -1LL;
            do
              ++v36;
            while ( j[v36] );
          }
          if ( v9 >= v24 )
          {
LABEL_58:
            v13 = -2147483642;
            goto LABEL_50;
          }
          v37 = v72[0];
          do
          {
            if ( !j )
              break;
            if ( !*j )
              break;
            RtlInitUnicodeString(&DestinationString, j);
            *(UNICODE_STRING *)v87 = DestinationString;
            v38 = sub_180057888((int)v87, v69[0], v37, v77[0], v64, v73, (__int64)v65);
            v8 = 0LL;
            if ( v38 )
              break;
            ++v9;
            v62 = -1LL;
            do
              ++v62;
            while ( j[v62] );
            j += v62 + 1;
          }
          while ( v9 < v24 );
LABEL_39:
          if ( v9 < v24 )
          {
            v29 = (WCHAR *)SourceString;
            v30 = v78;
            if ( SourceString || v78 )
            {
              if ( v63 )
                goto LABEL_42;
              v54 = RtlCultureNameToLCID(&DestinationString.Length, &v75);
              if ( v54 )
                v54 = (int)sub_180044560((unsigned __int16)v75, 0x10u, -4, (char *)v90) >= 0;
              RtlInitUnicodeString(&DestinationString, v90);
              v8 = 0LL;
              if ( v54 )
              {
LABEL_42:
                if ( v29 )
                {
                  if ( v30 )
                  {
                    if ( *v30 <= (unsigned int)(DestinationString.Length >> 1) )
                    {
                      LOBYTE(v65[0]) = 1;
                    }
                    else
                    {
                      Length = DestinationString.Length;
                      memmove(v29, DestinationString.Buffer, DestinationString.Length);
                      v8 = 0LL;
                      v29[Length >> 1] = 0;
                    }
                  }
                }
                else if ( v30 )
                {
                  *v30 = 85;
                }
              }
            }
            if ( !v73 || !v29 && v30 )
            {
              v13 = 0;
              goto LABEL_63;
            }
            if ( LOBYTE(v65[0]) )
            {
              v13 = -1073741789;
              goto LABEL_63;
            }
            v13 = 0;
LABEL_50:
            *v83 = v80 | (((v9 + 1) ^ v24 ^ v80 ^ v79) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v79 | ((v24 | ((v9 + 1) << 12)) << 24) | 0xCB7000));
LABEL_63:
            if ( !v82 )
              goto LABEL_94;
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v82);
            v8 = 0LL;
            goto LABEL_93;
          }
          goto LABEL_58;
        }
        if ( v12 )
        {
LABEL_34:
          v25 = 0LL;
          for ( k = v12; v25 < v9; k += v58 + 1 )
          {
            if ( !k )
              break;
            if ( !*k )
              break;
            ++v25;
            v58 = -1LL;
            do
              ++v58;
            while ( k[v58] );
          }
          if ( v9 >= v24 )
            goto LABEL_58;
          v27 = v72[0];
          do
          {
            if ( !*k )
              break;
            RtlInitUnicodeString(&DestinationString, k);
            *(UNICODE_STRING *)v86 = DestinationString;
            v28 = sub_180057888((int)v86, v69[0], v27, v77[0], v64, v73, (__int64)v65);
            v8 = 0LL;
            if ( v28 )
              break;
            ++v9;
            v32 = -1LL;
            do
              ++v32;
            while ( k[v32] );
            k += v32 + 1;
          }
          while ( v9 < v24 );
          goto LABEL_39;
        }
        *(_DWORD *)&v65[1] = 0;
        RtlGetThreadPreferredUILanguages(48, (struct _TEB *)&v67, 0LL, &v65[1]);
        v8 = 0LL;
        if ( *(_DWORD *)&v65[1] )
        {
          v51 = sub_1800584C8(*(unsigned int *)&v65[1], 2LL);
          if ( !v51 )
          {
            v13 = -1073741675;
LABEL_96:
            if ( String1 != v8 )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)String1);
            goto LABEL_98;
          }
          v52 = (WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (int)v8 + 8, v51);
          v8 = 0LL;
          *(_QWORD *)&v65[3] = v52;
          v12 = v52;
          if ( v52 )
          {
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(48, (struct _TEB *)&v67, v52, &v65[1]);
            v8 = 0LL;
            if ( ThreadPreferredUILanguages >= 0 )
            {
              v24 = v66;
              goto LABEL_34;
            }
          }
          v24 = v66;
        }
        v9 = v24;
        goto LABEL_34;
      }
      v13 = -2147483642;
    }
    goto LABEL_14;
  }
  if ( (v10 & 0xC) == 0xC
    || (v10 & 0x30) == 0x30
    || (v10 & 0x50) == 0x50
    || (v10 & 0x60) == 0x60
    || (v10 & 0x70) == 112
    || (v10 & 0x300) == 768 )
  {
LABEL_13:
    v13 = -1073741811;
    goto LABEL_14;
  }
  v79 = v10;
  v19 = v10;
  if ( (v10 & 0x20) != 0 )
    v20 = 2;
  else
    v20 = (unsigned __int64)(v10 & 0x40 | 0x20) >> 5;
  v63 = (v19 & 4) == 0;
  if ( (v19 & 0x200) == 0 && ((v19 & 0x100) != 0 || (v33 = sub_1800546DC(a2), v8 = 0LL, v33)) )
  {
    v64 = 1;
    v80 = 1LL;
  }
  else
  {
    v64 = 0;
  }
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      v66 = 0LL;
      sub_1800ED770(v76, &v65[3], &v66);
    }
    else
    {
      if ( v20 != 3 )
      {
        v24 = v66;
        v12 = *(const WCHAR **)&v65[3];
LABEL_31:
        v9 = 0LL;
        goto LABEL_32;
      }
      v66 = 0LL;
      sub_1800ED3D0(v14, &v66, &String1);
    }
    v24 = v66;
    v8 = 0LL;
    v12 = *(const WCHAR **)&v65[3];
    goto LABEL_31;
  }
  *(_DWORD *)&v65[1] = 0;
  RtlGetThreadPreferredUILanguages(48, (struct _TEB *)&v67, 0LL, &v65[1]);
  if ( !*(_DWORD *)&v65[1] )
    goto LABEL_14;
  v21 = sub_1800584C8(*(unsigned int *)&v65[1], 2LL);
  if ( v21 )
  {
    v22 = (WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v21);
    *(_QWORD *)&v65[3] = v22;
    v12 = v22;
    if ( !v22 )
    {
      v13 = -1073741801;
LABEL_98:
      v14 = *(_QWORD *)v69;
      goto LABEL_14;
    }
    v23 = RtlGetThreadPreferredUILanguages(48, (struct _TEB *)&v67, v22, &v65[1]);
    v8 = 0LL;
    if ( v23 < 0 )
    {
      v13 = v23;
LABEL_94:
      if ( v12 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(unsigned __int64 *)&v65[3]);
        v8 = 0LL;
      }
      goto LABEL_96;
    }
    v24 = v67;
    v66 = v67;
    goto LABEL_31;
  }
  v13 = -1073741675;
LABEL_14:
  if ( v14 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
  return (unsigned int)v13;
}
