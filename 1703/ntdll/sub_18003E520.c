/*
 * XREFs of sub_18003E520 @ 0x18003E520
 * Callers:
 *     RtlGetFullPathName_UEx @ 0x18003BAA0 (RtlGetFullPathName_UEx.c)
 *     RtlGetFullPathName_UstrEx @ 0x18003CCD0 (RtlGetFullPathName_UstrEx.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     sub_18004BC44 @ 0x18004BC44 (sub_18004BC44.c)
 *     RtlSetCurrentDirectory_U @ 0x18007ADF0 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     sub_18003EF60 @ 0x18003EF60 (sub_18003EF60.c)
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlUpcaseUnicodeChar @ 0x18004A690 (RtlUpcaseUnicodeChar.c)
 *     sub_18006227C @ 0x18006227C (sub_18006227C.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180062DA0 (RtlQueryEnvironmentVariable_U.c)
 *     sub_180070790 @ 0x180070790 (sub_180070790.c)
 *     sub_18007098C @ 0x18007098C (sub_18007098C.c)
 *     sub_18007B108 @ 0x18007B108 (sub_18007B108.c)
 *     sub_180082D3C @ 0x180082D3C (sub_180082D3C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D4C18 @ 0x1800D4C18 (sub_1800D4C18.c)
 *     sub_1800D4C84 @ 0x1800D4C84 (sub_1800D4C84.c)
 */

__int64 __fastcall sub_18003E520(unsigned __int16 *a1, unsigned int a2, WCHAR *a3, _QWORD *a4, _BYTE *a5, __int64 a6)
{
  WCHAR *Buffer; // rsi
  USHORT Length; // r12
  unsigned int v9; // r13d
  unsigned int v10; // edi
  _WORD *v11; // rdx
  unsigned int i; // ecx
  __int16 v13; // ax
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rdx
  unsigned int j; // ebx
  unsigned int v19; // r11d
  unsigned int v20; // r15d
  unsigned int v21; // edx
  unsigned int k; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  WCHAR v27; // ax
  __int64 v28; // r8
  unsigned int v29; // ebx
  WCHAR *v30; // rcx
  unsigned int m; // ecx
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int16 v34; // r9
  __int64 v35; // rax
  __int16 v36; // cx
  USHORT v37; // cx
  USHORT v38; // cx
  int v39; // r8d
  __int16 v40; // dx
  CURDIR *v41; // rax
  CURDIR *v42; // rcx
  CURDIR *v43; // rax
  CURDIR *p_CurrentDirectory; // rsi
  WCHAR v45; // ax
  WCHAR v46; // r15
  NTSTATUS v47; // eax
  unsigned __int64 v48; // rax
  CURDIR *v49; // rax
  CURDIR *v50; // rsi
  int v51; // eax
  __int16 v52; // ax
  unsigned __int64 v53; // rax
  __int64 result; // rax
  unsigned int v55; // edi
  __int64 v56; // rsi
  char v57; // [rsp+20h] [rbp-E8h]
  bool v58; // [rsp+21h] [rbp-E7h]
  unsigned int v59; // [rsp+24h] [rbp-E4h]
  unsigned int v60; // [rsp+2Ch] [rbp-DCh]
  unsigned int v61; // [rsp+30h] [rbp-D8h]
  _UNICODE_STRING Value; // [rsp+40h] [rbp-C8h] BYREF
  USHORT v63; // [rsp+50h] [rbp-B8h]
  CURDIR *v64; // [rsp+58h] [rbp-B0h]
  int v65; // [rsp+60h] [rbp-A8h]
  PVOID BaseAddress; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING DosPath; // [rsp+70h] [rbp-98h] BYREF
  CURDIR *v68; // [rsp+80h] [rbp-88h]
  WCHAR v69; // [rsp+88h] [rbp-80h]
  WCHAR v70; // [rsp+8Ch] [rbp-7Ch]
  int v71; // [rsp+90h] [rbp-78h]
  unsigned int v72; // [rsp+94h] [rbp-74h]
  unsigned int v73; // [rsp+98h] [rbp-70h]
  NTSTATUS v74; // [rsp+9Ch] [rbp-6Ch]
  _QWORD *v75; // [rsp+A0h] [rbp-68h]
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v78[6]; // [rsp+BAh] [rbp-4Eh]

  v75 = a4;
  Buffer = a3;
  Length = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v9 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v9 = a2;
  *(_QWORD *)a6 = 0LL;
  v72 = *a1;
  v10 = v72 >> 1;
  if ( !(v72 >> 1) )
    return 0LL;
  v11 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v11 )
    return 0LL;
  for ( i = v72 >> 1; i && v11[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v13 = v11[v10 - 1];
  v58 = v13 != 92 && v13 != 47;
  v61 = v9 >> 1;
  v73 = v9 >> 1;
  memset(a3, 0, v9);
  Value.Length = 0;
  v63 = 2 * (v9 >> 1);
  Value.MaximumLength = v63;
  Value.Buffer = Buffer;
  v14 = sub_18003EF60(a1);
  if ( v14 )
  {
    v55 = HIWORD(v14);
    v56 = (unsigned __int16)v14;
    if ( !a5 || !v55 || (int)sub_1800D4C84(a1, v55, a5) >= 0 && !*a5 )
    {
      if ( (int)v56 + 8 >= (unsigned int)v63 )
      {
        result = 0LL;
        if ( (unsigned int)(v56 + 10) <= 0xFFFF )
          return (unsigned int)(v56 + 10);
      }
      else
      {
        sub_18007098C(&Value, L"\b\n");
        sub_180070790(&Value, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v55 >> 1), v56);
        return (unsigned int)(v56 + 8);
      }
      return result;
    }
    return 0LL;
  }
  v15 = sub_18003F2C4(a1);
  *(_DWORD *)a6 = v15;
  *(_DWORD *)&DosPath.Length = 0;
  DosPath.Buffer = 0LL;
  v17 = 0LL;
  v64 = 0LL;
  BaseAddress = 0LL;
  v57 = 0;
  j = 0;
  if ( v15 != 2 )
  {
    switch ( v15 )
    {
      case 1:
        v39 = 0;
        v71 = 0;
        for ( j = 2; j < v10; ++j )
        {
          v40 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v40 == 92 || v40 == 47 )
          {
            v71 = ++v39;
            if ( v39 == 2 )
              break;
          }
        }
        v59 = j;
        v65 = j;
        DosPath.Buffer = (PWCH)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_94;
      case 3:
        v43 = (CURDIR *)sub_18007B108(0LL, 0LL);
        v64 = v43;
        BaseAddress = v43;
        v57 = 1;
        if ( v43 )
        {
          p_CurrentDirectory = v43 + 1;
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v64 = 0LL;
        }
        v68 = p_CurrentDirectory;
        v69 = RtlUpcaseUnicodeChar(*p_CurrentDirectory->DosPath.Buffer);
        v45 = RtlUpcaseUnicodeChar(**((_WORD **)a1 + 1));
        v46 = v45;
        v70 = v45;
        if ( v69 == v45 )
        {
          DosPath = p_CurrentDirectory->DosPath;
          sub_18007098C(&Value, &DosPath);
          Buffer = Value.Buffer;
          Length = Value.Length;
        }
        else
        {
          sub_18006227C(v45);
          SourceString = 61;
          *(_WORD *)v78 = v46;
          *(_DWORD *)&v78[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v47 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value);
          v74 = v47;
          if ( v47 < 0 )
          {
            if ( v47 == -1073741789 )
            {
              Length = Value.Length;
              if ( (unsigned int)Value.Length + 2 > 0xFFFF )
              {
                v20 = 0;
                v60 = 0;
                Buffer = Value.Buffer;
                v29 = v9 >> 1;
                goto LABEL_52;
              }
              DosPath.Length = Value.Length + 2;
              Buffer = Value.Buffer;
            }
            else
            {
              Value.Length = 0;
              SourceString = v46;
              *(_DWORD *)v78 = 6029370;
              *(_WORD *)&v78[4] = 0;
              sub_1800D4C18(&Value, &SourceString);
              DosPath.Length = 8;
              Buffer = Value.Buffer;
              Length = Value.Length;
            }
          }
          else
          {
            Length = Value.Length;
            v48 = (unsigned __int64)Value.Length >> 1;
            if ( (unsigned int)v48 <= 3 || (unsigned int)v48 >= v61 )
            {
              Buffer = Value.Buffer;
            }
            else
            {
              Buffer = Value.Buffer;
              Value.Buffer[(unsigned int)v48] = 92;
              Length += 2;
              Value.Length = Length;
            }
            DosPath.Length = Length;
          }
        }
        v19 = 3;
        v65 = 3;
        j = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v16) = 1;
        v49 = (CURDIR *)sub_18007B108(v16, 0LL);
        v64 = v49;
        BaseAddress = v49;
        v57 = 1;
        if ( v49 )
        {
          v50 = v49 + 1;
        }
        else
        {
          v50 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v64 = 0LL;
          j = 0;
        }
        v68 = v50;
        v51 = sub_180082D3C(v50);
        v59 = v51;
        v65 = v51;
        DosPath = v50->DosPath;
        if ( v51 == 3 )
          v52 = 4;
        else
          v52 = 2 * v51;
        DosPath.Length = v52;
        goto LABEL_94;
      case 5:
        v41 = (CURDIR *)sub_18007B108(0LL, 0LL);
        v64 = v41;
        BaseAddress = v41;
        v57 = 1;
        if ( v41 )
        {
          v42 = v41 + 1;
          *(_DWORD *)(a6 + 4) = v41[1].Handle;
        }
        else
        {
          v42 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v64 = 0LL;
          j = 0;
        }
        v68 = v42;
        DosPath = v42->DosPath;
        v59 = sub_180082D3C(v42);
        v65 = v59;
LABEL_94:
        sub_18007098C(&Value, &DosPath);
        Buffer = Value.Buffer;
        Length = Value.Length;
        v19 = v59;
        goto LABEL_19;
      case 6:
      case 7:
        v65 = 4;
        j = 4;
        if ( v10 < 4 )
          j = v10;
        DosPath = *(UNICODE_STRING *)L"\b\n";
        sub_18007098C(&Value, &DosPath);
        Length = Value.Length;
        Buffer = Value.Buffer;
        if ( Value.Length >= 6u )
          Value.Buffer[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v19 = 4;
        if ( *(_DWORD *)a6 == 7 )
          v58 = 0;
        goto LABEL_19;
      default:
        v20 = 0;
        v60 = 0;
        v29 = v9 >> 1;
        goto LABEL_147;
    }
  }
  v19 = 3;
  v65 = 3;
LABEL_19:
  v20 = DosPath.Length;
  v21 = v72 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v21 + 2 > v9 )
  {
    if ( v10 > 1 || **((_WORD **)a1 + 1) != 46 )
    {
      v32 = v21 + 2;
      if ( v32 > 0xFFFF )
        v32 = 0;
      v20 = v32;
      v60 = v32;
      v29 = v9 >> 1;
      goto LABEL_52;
    }
    if ( v10 != 1 )
    {
      v20 = v72 + DosPath.Length - 2 * j;
      if ( v21 > 0xFFFF )
        v20 = 0;
      v29 = v9 >> 1;
      goto LABEL_51;
    }
    if ( DosPath.Length == 8 )
    {
      if ( v9 <= 8 )
      {
        v20 = 10;
        v29 = v9 >> 1;
        goto LABEL_51;
      }
    }
    else
    {
      if ( v9 < DosPath.Length )
      {
        v29 = v9 >> 1;
        goto LABEL_51;
      }
      v53 = (unsigned __int64)Length >> 1;
      if ( (_DWORD)v53 && Buffer[(unsigned int)(v53 - 1)] == 92 )
      {
        Length -= 2;
        Value.Length = Length;
      }
    }
  }
  for ( k = 0; k < Length >> 1; ++k )
  {
    if ( Buffer[k] == 47 )
      Buffer[k] = 92;
  }
  v23 = Length >> 1;
  while ( j < v10 )
  {
    v24 = *((_QWORD *)a1 + 1);
    v25 = *(unsigned __int16 *)(v24 + 2LL * j);
    if ( v25 == 92 )
      goto LABEL_36;
    v26 = v25 - 46;
    if ( v26 )
    {
      if ( v26 != 1 )
        goto LABEL_27;
LABEL_36:
      if ( !(_DWORD)v23 || Buffer[(unsigned int)(v23 - 1)] != 92 )
      {
        Buffer[v23] = 92;
        v23 = (unsigned int)(v23 + 1);
      }
      goto LABEL_35;
    }
    v33 = j + 1;
    if ( (_DWORD)v33 != v10 )
    {
      v34 = *(_WORD *)(v24 + 2 * v33);
      if ( v34 == 92 || v34 == 47 )
      {
        ++j;
      }
      else if ( v34 == 46
             && ((v35 = j + 2, (_DWORD)v35 == v10) || (v36 = *(_WORD *)(v24 + 2 * v35), v36 == 92) || v36 == 47) )
      {
        while ( (unsigned int)v23 >= v19 )
        {
          v63 = Buffer[v23];
          v37 = v63;
          Buffer[v23] = 0;
          if ( v37 == 92 )
          {
            while ( (unsigned int)v23 >= v19 )
            {
              v63 = Buffer[v23];
              v38 = v63;
              Buffer[v23] = 0;
              if ( v38 == 92 )
              {
                if ( (unsigned int)v23 < v19 )
                  goto LABEL_83;
                goto LABEL_80;
              }
              v23 = (unsigned int)(v23 - 1);
            }
            break;
          }
          v23 = (unsigned int)(v23 - 1);
        }
LABEL_83:
        v23 = (unsigned int)(v23 + 1);
LABEL_80:
        ++j;
      }
      else
      {
LABEL_27:
        while ( j < v10 )
        {
          v27 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v27 == 92 || v27 == 47 )
          {
            if ( j < v10 && (unsigned int)v23 >= 2 )
            {
              v28 = (unsigned int)(v23 - 1);
              if ( Buffer[v28] == 46 && Buffer[(unsigned int)(v23 - 2)] != 46 )
                v23 = (unsigned int)v28;
            }
            break;
          }
          Buffer[v23] = v27;
          v23 = (unsigned int)(v23 + 1);
          ++j;
        }
        --j;
      }
    }
LABEL_35:
    ++j;
  }
  if ( v58 && (unsigned int)v23 > v19 && Buffer[(unsigned int)(v23 - 1)] == 92 )
    LODWORD(v23) = v23 - 1;
  v29 = v9 >> 1;
  if ( (unsigned int)v23 < v61 )
    Buffer[(unsigned int)v23] = 0;
  while ( (_DWORD)v23 )
  {
    v23 = (unsigned int)(v23 - 1);
    v30 = &Buffer[v23];
    if ( *v30 != 32 && *v30 != 46 )
    {
      LODWORD(v23) = v23 + 1;
      break;
    }
    *v30 = 0;
  }
  Value.Length = 2 * v23;
  if ( v75 )
  {
    for ( m = v23; m && Buffer[m - 1] != 92; --m )
      ;
    if ( m >= (unsigned int)v23 || m < v19 )
      *v75 = 0LL;
    else
      *v75 = &Buffer[m];
  }
  v20 = (unsigned __int16)(2 * v23);
LABEL_51:
  v60 = v20;
LABEL_52:
  v17 = (volatile signed __int32 *)v64;
LABEL_147:
  if ( v57 )
  {
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
      {
        ZwClose(*((HANDLE *)BaseAddress + 1));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      v20 = v60;
      Buffer = Value.Buffer;
    }
    else
    {
      RtlLeaveCriticalSection(&stru_18015AE60);
    }
  }
  if ( v20 >= 2 * (unsigned __int64)v29 && v29 )
    *Buffer = 0;
  return v20;
}
