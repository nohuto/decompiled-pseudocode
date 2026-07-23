/*
 * XREFs of sub_18003D640 @ 0x18003D640
 * Callers:
 *     RtlGetFullPathName_UstrEx @ 0x18003BF10 (RtlGetFullPathName_UstrEx.c)
 *     RtlGetFullPathName_UEx @ 0x18003C1A0 (RtlGetFullPathName_UEx.c)
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     sub_18003FB24 @ 0x18003FB24 (sub_18003FB24.c)
 *     RtlSetCurrentDirectory_U @ 0x180076700 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18003E0C0 @ 0x18003E0C0 (sub_18003E0C0.c)
 *     sub_18003E414 @ 0x18003E414 (sub_18003E414.c)
 *     sub_1800402E4 @ 0x1800402E4 (sub_1800402E4.c)
 *     RtlUpcaseUnicodeChar @ 0x180040920 (RtlUpcaseUnicodeChar.c)
 *     sub_18004454C @ 0x18004454C (sub_18004454C.c)
 *     sub_18004B1D4 @ 0x18004B1D4 (sub_18004B1D4.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004BD30 (RtlQueryEnvironmentVariable_U.c)
 *     sub_180076A28 @ 0x180076A28 (sub_180076A28.c)
 *     sub_18007EC68 @ 0x18007EC68 (sub_18007EC68.c)
 *     sub_180089248 @ 0x180089248 (sub_180089248.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800C90F4 @ 0x1800C90F4 (sub_1800C90F4.c)
 */

__int64 __fastcall sub_18003D640(unsigned __int16 *a1, unsigned int a2, WCHAR *a3, _QWORD *a4, _BYTE *a5, __int64 a6)
{
  WCHAR *Buffer; // rdi
  USHORT Length; // r12
  unsigned int v9; // r13d
  unsigned int v10; // esi
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
  unsigned __int16 v31; // r9
  unsigned int m; // ecx
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int16 v35; // r9
  __int64 v36; // rax
  __int16 v37; // cx
  USHORT v38; // cx
  USHORT v39; // cx
  USHORT v40; // dx
  unsigned __int64 v41; // rax
  int v42; // r8d
  __int16 v43; // dx
  CURDIR *v44; // rax
  CURDIR *v45; // rcx
  CURDIR *v46; // rax
  CURDIR *p_CurrentDirectory; // rdi
  WCHAR v48; // ax
  WCHAR v49; // r15
  CURDIR *v50; // rax
  CURDIR *v51; // rdi
  int v52; // eax
  __int16 v53; // ax
  NTSTATUS v54; // eax
  USHORT v55; // cx
  unsigned __int64 v56; // rax
  __int64 result; // rax
  unsigned int v58; // edi
  __int64 v59; // rsi
  char v60; // [rsp+20h] [rbp-E8h]
  bool v61; // [rsp+21h] [rbp-E7h]
  unsigned int v62; // [rsp+28h] [rbp-E0h]
  unsigned int v63; // [rsp+2Ch] [rbp-DCh]
  unsigned int v64; // [rsp+30h] [rbp-D8h]
  _UNICODE_STRING Value; // [rsp+40h] [rbp-C8h] BYREF
  USHORT v66; // [rsp+50h] [rbp-B8h]
  CURDIR *v67; // [rsp+58h] [rbp-B0h]
  int v68; // [rsp+60h] [rbp-A8h]
  PVOID BaseAddress; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING DosPath; // [rsp+70h] [rbp-98h] BYREF
  CURDIR *v71; // [rsp+80h] [rbp-88h]
  WCHAR v72; // [rsp+88h] [rbp-80h]
  WCHAR v73; // [rsp+8Ch] [rbp-7Ch]
  int v74; // [rsp+90h] [rbp-78h]
  unsigned int v75; // [rsp+94h] [rbp-74h]
  unsigned int v76; // [rsp+98h] [rbp-70h]
  NTSTATUS v77; // [rsp+9Ch] [rbp-6Ch]
  _QWORD *v78; // [rsp+A0h] [rbp-68h]
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v81[6]; // [rsp+BAh] [rbp-4Eh]

  v78 = a4;
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
  v75 = *a1;
  v10 = v75 >> 1;
  if ( !(v75 >> 1) )
    return 0LL;
  v11 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v11 )
    return 0LL;
  for ( i = v75 >> 1; i && v11[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v13 = v11[v10 - 1];
  v61 = v13 != 92 && v13 != 47;
  v64 = v9 >> 1;
  v76 = v9 >> 1;
  memset(a3, 0, v9);
  Value.Length = 0;
  v66 = 2 * (v9 >> 1);
  Value.MaximumLength = v66;
  Value.Buffer = Buffer;
  v14 = sub_18003E0C0(a1);
  if ( v14 )
  {
    v58 = HIWORD(v14);
    v59 = (unsigned __int16)v14;
    if ( !a5 || !v58 || (int)sub_180089248(a1, v58, a5) >= 0 && !*a5 )
    {
      if ( (int)v59 + 8 >= (unsigned int)v66 )
      {
        result = 0LL;
        if ( (unsigned int)(v59 + 10) <= 0xFFFF )
          return (unsigned int)(v59 + 10);
      }
      else
      {
        sub_1800402E4(&Value, L"\b\n");
        sub_18004454C(&Value, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v58 >> 1), v59);
        return (unsigned int)(v59 + 8);
      }
      return result;
    }
    return 0LL;
  }
  v15 = sub_18003E414(a1);
  *(_DWORD *)a6 = v15;
  *(_DWORD *)&DosPath.Length = 0;
  DosPath.Buffer = 0LL;
  v17 = 0LL;
  v67 = 0LL;
  BaseAddress = 0LL;
  v60 = 0;
  j = 0;
  if ( v15 != 2 )
  {
    switch ( v15 )
    {
      case 1:
        v42 = 0;
        v74 = 0;
        for ( j = 2; j < v10; ++j )
        {
          v43 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v43 == 92 || v43 == 47 )
          {
            v74 = ++v42;
            if ( v42 == 2 )
              break;
          }
        }
        v63 = j;
        v68 = j;
        DosPath.Buffer = (PWCH)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_103;
      case 3:
        v46 = (CURDIR *)sub_180076A28(0LL, 0LL);
        v67 = v46;
        BaseAddress = v46;
        v60 = 1;
        if ( v46 )
        {
          p_CurrentDirectory = v46 + 1;
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v67 = 0LL;
        }
        v71 = p_CurrentDirectory;
        v72 = RtlUpcaseUnicodeChar(*p_CurrentDirectory->DosPath.Buffer);
        v48 = RtlUpcaseUnicodeChar(**((_WORD **)a1 + 1));
        v49 = v48;
        v73 = v48;
        if ( v72 == v48 )
        {
          DosPath = p_CurrentDirectory->DosPath;
          sub_1800402E4(&Value, &DosPath);
          Buffer = Value.Buffer;
          Length = Value.Length;
        }
        else
        {
          sub_18004B1D4(v48);
          SourceString = 61;
          *(_WORD *)v81 = v49;
          *(_DWORD *)&v81[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v54 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value);
          v77 = v54;
          if ( v54 < 0 )
          {
            if ( v54 == -1073741789 )
            {
              Length = Value.Length;
              if ( (unsigned int)Value.Length + 2 > 0xFFFF )
              {
                v20 = 0;
                v62 = 0;
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
              SourceString = v49;
              *(_DWORD *)v81 = 6029370;
              *(_WORD *)&v81[4] = 0;
              sub_1800C90F4(&Value, &SourceString);
              DosPath.Length = 8;
              Buffer = Value.Buffer;
              Length = Value.Length;
            }
          }
          else
          {
            Length = Value.Length;
            v55 = Value.Length;
            v56 = (unsigned __int64)Value.Length >> 1;
            if ( (unsigned int)v56 <= 3 || (unsigned int)v56 >= v64 )
            {
              Buffer = Value.Buffer;
              DosPath.Length = Value.Length;
            }
            else
            {
              Buffer = Value.Buffer;
              Value.Buffer[(unsigned int)v56] = 92;
              Length = v55 + 2;
              Value.Length = v55 + 2;
              DosPath.Length = v55 + 2;
            }
          }
        }
        v19 = 3;
        v68 = 3;
        j = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v16) = 1;
        v50 = (CURDIR *)sub_180076A28(v16, 0LL);
        v67 = v50;
        BaseAddress = v50;
        v60 = 1;
        if ( v50 )
        {
          v51 = v50 + 1;
        }
        else
        {
          v51 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v67 = 0LL;
          j = 0;
        }
        v71 = v51;
        v52 = sub_18007EC68(v51);
        v63 = v52;
        v68 = v52;
        DosPath = v51->DosPath;
        if ( v52 == 3 )
          v53 = 4;
        else
          v53 = 2 * v52;
        DosPath.Length = v53;
        goto LABEL_103;
      case 5:
        v44 = (CURDIR *)sub_180076A28(0LL, 0LL);
        v67 = v44;
        BaseAddress = v44;
        v60 = 1;
        if ( v44 )
        {
          v45 = v44 + 1;
          *(_DWORD *)(a6 + 4) = v44[1].Handle;
        }
        else
        {
          v45 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v67 = 0LL;
          j = 0;
        }
        v71 = v45;
        DosPath = v45->DosPath;
        v63 = sub_18007EC68(v45);
        v68 = v63;
LABEL_103:
        sub_1800402E4(&Value, &DosPath);
        Buffer = Value.Buffer;
        Length = Value.Length;
        v19 = v63;
        goto LABEL_19;
      case 6:
      case 7:
        v68 = 4;
        j = 4;
        if ( v10 < 4 )
          j = v10;
        DosPath = *(UNICODE_STRING *)L"\b\n";
        sub_1800402E4(&Value, &DosPath);
        Length = Value.Length;
        Buffer = Value.Buffer;
        if ( Value.Length >= 6u )
          Value.Buffer[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v19 = 4;
        if ( *(_DWORD *)a6 == 7 )
          v61 = 0;
        goto LABEL_19;
      default:
        v20 = 0;
        v62 = 0;
        v29 = v9 >> 1;
        goto LABEL_146;
    }
  }
  v19 = 3;
  v68 = 3;
LABEL_19:
  v20 = DosPath.Length;
  v21 = v75 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v21 + 2 <= v9 )
    goto LABEL_20;
  if ( v10 > 1 || **((_WORD **)a1 + 1) != 46 )
  {
    v33 = v21 + 2;
    if ( v33 > 0xFFFF )
      v33 = 0;
    v20 = v33;
    v62 = v33;
    v29 = v9 >> 1;
    v17 = (volatile signed __int32 *)v67;
    goto LABEL_146;
  }
  if ( v10 != 1 )
  {
    v20 = 0;
    if ( v21 <= 0xFFFF )
      v20 = v75 + DosPath.Length - 2 * j;
    v29 = v9 >> 1;
    goto LABEL_51;
  }
  if ( DosPath.Length != 8 )
  {
    if ( v9 < DosPath.Length )
    {
      v29 = v9 >> 1;
      v62 = DosPath.Length;
      v17 = (volatile signed __int32 *)v67;
      goto LABEL_146;
    }
    v40 = Length;
    v41 = (unsigned __int64)Length >> 1;
    if ( (_DWORD)v41 && Buffer[(unsigned int)(v41 - 1)] == 92 )
    {
      Length -= 2;
      Value.Length = v40 - 2;
    }
    goto LABEL_20;
  }
  if ( v9 <= 8 )
  {
    v20 = 10;
    v29 = v9 >> 1;
LABEL_51:
    v62 = v20;
LABEL_52:
    v17 = (volatile signed __int32 *)v67;
    goto LABEL_146;
  }
LABEL_20:
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
    v34 = j + 1;
    if ( (_DWORD)v34 != v10 )
    {
      v35 = *(_WORD *)(v24 + 2 * v34);
      if ( v35 == 92 || v35 == 47 )
      {
        ++j;
      }
      else if ( v35 == 46
             && ((v36 = j + 2, (_DWORD)v36 == v10) || (v37 = *(_WORD *)(v24 + 2 * v36), v37 == 92) || v37 == 47) )
      {
        while ( (unsigned int)v23 >= v19 )
        {
          v66 = Buffer[v23];
          v38 = v66;
          Buffer[v23] = 0;
          if ( v38 == 92 )
          {
            while ( (unsigned int)v23 >= v19 )
            {
              v66 = Buffer[v23];
              v39 = v66;
              Buffer[v23] = 0;
              if ( v39 == 92 )
              {
                if ( (unsigned int)v23 < v19 )
                  goto LABEL_92;
                goto LABEL_80;
              }
              v23 = (unsigned int)(v23 - 1);
            }
            break;
          }
          v23 = (unsigned int)(v23 - 1);
        }
LABEL_92:
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
  if ( v61 && (unsigned int)v23 > v19 && Buffer[(unsigned int)(v23 - 1)] == 92 )
    LODWORD(v23) = v23 - 1;
  v29 = v9 >> 1;
  if ( (unsigned int)v23 < v64 )
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
  v31 = 2 * v23;
  Value.Length = 2 * v23;
  if ( !v78 )
  {
LABEL_50:
    v20 = v31;
    goto LABEL_51;
  }
  for ( m = v23; m && Buffer[m - 1] != 92; --m )
    ;
  if ( m >= (unsigned int)v23 || m < v19 )
  {
    *v78 = 0LL;
    goto LABEL_50;
  }
  *v78 = &Buffer[m];
  v20 = v31;
  v62 = v31;
  v17 = (volatile signed __int32 *)v67;
LABEL_146:
  if ( v60 )
  {
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
      {
        ZwClose(*((HANDLE *)BaseAddress + 1));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      v20 = v62;
      Buffer = Value.Buffer;
    }
    else
    {
      RtlLeaveCriticalSection(&stru_18015BE80);
    }
  }
  if ( v20 >= 2 * (unsigned __int64)v29 && v29 )
    *Buffer = 0;
  return v20;
}
