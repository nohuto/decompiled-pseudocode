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

__int64 __fastcall sub_18003D640(unsigned __int16 *a1, unsigned int a2, _WORD *a3, _QWORD *a4, _BYTE *a5, __int64 a6)
{
  _WORD *v6; // rdi
  unsigned __int16 v8; // r12
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
  unsigned int Length; // r15d
  unsigned int v21; // edx
  unsigned int k; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  __int16 v27; // ax
  __int64 v28; // r8
  unsigned int v29; // ebx
  _WORD *v30; // rcx
  unsigned __int16 v31; // r9
  unsigned int m; // ecx
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int16 v35; // r9
  __int64 v36; // rax
  __int16 v37; // cx
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // dx
  unsigned __int64 v41; // rax
  int v42; // r8d
  __int16 v43; // dx
  __int64 v44; // rax
  struct _CURDIR *v45; // rcx
  __int64 v46; // rax
  struct _CURDIR *p_CurrentDirectory; // rdi
  WCHAR v48; // ax
  WCHAR v49; // r15
  __int64 v50; // rax
  struct _CURDIR *v51; // rdi
  int v52; // eax
  __int16 v53; // ax
  int v54; // eax
  __int16 v55; // cx
  unsigned __int64 v56; // rax
  __int64 result; // rax
  unsigned int v58; // edi
  __int64 v59; // rsi
  char v60; // [rsp+20h] [rbp-E8h]
  bool v61; // [rsp+21h] [rbp-E7h]
  unsigned int v62; // [rsp+28h] [rbp-E0h]
  unsigned int v63; // [rsp+2Ch] [rbp-DCh]
  unsigned int v64; // [rsp+30h] [rbp-D8h]
  _WORD v65[4]; // [rsp+40h] [rbp-C8h] BYREF
  _WORD *v66; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v67; // [rsp+50h] [rbp-B8h]
  volatile signed __int32 *v68; // [rsp+58h] [rbp-B0h]
  int v69; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v70; // [rsp+68h] [rbp-A0h]
  struct _UNICODE_STRING DosPath; // [rsp+70h] [rbp-98h] BYREF
  struct _CURDIR *v72; // [rsp+80h] [rbp-88h]
  __int16 v73; // [rsp+88h] [rbp-80h]
  WCHAR v74; // [rsp+8Ch] [rbp-7Ch]
  int v75; // [rsp+90h] [rbp-78h]
  unsigned int v76; // [rsp+94h] [rbp-74h]
  unsigned int v77; // [rsp+98h] [rbp-70h]
  int v78; // [rsp+9Ch] [rbp-6Ch]
  _QWORD *v79; // [rsp+A0h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v82[6]; // [rsp+BAh] [rbp-4Eh]

  v79 = a4;
  v6 = a3;
  v8 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v9 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v9 = a2;
  *(_QWORD *)a6 = 0LL;
  v76 = *a1;
  v10 = v76 >> 1;
  if ( !(v76 >> 1) )
    return 0LL;
  v11 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v11 )
    return 0LL;
  for ( i = v76 >> 1; i && v11[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v13 = v11[v10 - 1];
  v61 = v13 != 92 && v13 != 47;
  v64 = v9 >> 1;
  v77 = v9 >> 1;
  memset(a3, 0, v9);
  v65[0] = 0;
  v67 = 2 * (v9 >> 1);
  v65[1] = v67;
  v66 = v6;
  v14 = sub_18003E0C0(a1);
  if ( v14 )
  {
    v58 = HIWORD(v14);
    v59 = (unsigned __int16)v14;
    if ( !a5 || !v58 || (int)sub_180089248(a1, v58, a5) >= 0 && !*a5 )
    {
      if ( (int)v59 + 8 >= (unsigned int)v67 )
      {
        result = 0LL;
        if ( (unsigned int)(v59 + 10) <= 0xFFFF )
          return (unsigned int)(v59 + 10);
      }
      else
      {
        sub_1800402E4(v65, L"\b\n");
        sub_18004454C(v65, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v58 >> 1), v59);
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
  v68 = 0LL;
  v70 = 0LL;
  v60 = 0;
  j = 0;
  if ( v15 != 2 )
  {
    switch ( v15 )
    {
      case 1:
        v42 = 0;
        v75 = 0;
        for ( j = 2; j < v10; ++j )
        {
          v43 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v43 == 92 || v43 == 47 )
          {
            v75 = ++v42;
            if ( v42 == 2 )
              break;
          }
        }
        v63 = j;
        v69 = j;
        DosPath.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_103;
      case 3:
        v46 = sub_180076A28(0LL, 0LL);
        v68 = (volatile signed __int32 *)v46;
        v70 = v46;
        v60 = 1;
        if ( v46 )
        {
          p_CurrentDirectory = (struct _CURDIR *)(v46 + 24);
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v68 = 0LL;
        }
        v72 = p_CurrentDirectory;
        v73 = RtlUpcaseUnicodeChar(*p_CurrentDirectory->DosPath.Buffer);
        v48 = RtlUpcaseUnicodeChar(**((unsigned __int16 **)a1 + 1));
        v49 = v48;
        v74 = v48;
        if ( v73 == v48 )
        {
          DosPath = p_CurrentDirectory->DosPath;
          sub_1800402E4(v65, &DosPath);
          v6 = v66;
          v8 = v65[0];
        }
        else
        {
          sub_18004B1D4(v48);
          SourceString = 61;
          *(_WORD *)v82 = v49;
          *(_DWORD *)&v82[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v54 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, v65);
          v78 = v54;
          if ( v54 < 0 )
          {
            if ( v54 == -1073741789 )
            {
              v8 = v65[0];
              if ( (unsigned int)v65[0] + 2 > 0xFFFF )
              {
                Length = 0;
                v62 = 0;
                v6 = v66;
                v29 = v9 >> 1;
                goto LABEL_52;
              }
              DosPath.Length = v65[0] + 2;
              v6 = v66;
            }
            else
            {
              v65[0] = 0;
              SourceString = v49;
              *(_DWORD *)v82 = 6029370;
              *(_WORD *)&v82[4] = 0;
              sub_1800C90F4(v65, &SourceString);
              DosPath.Length = 8;
              v6 = v66;
              v8 = v65[0];
            }
          }
          else
          {
            v8 = v65[0];
            v55 = v65[0];
            v56 = (unsigned __int64)v65[0] >> 1;
            if ( (unsigned int)v56 <= 3 || (unsigned int)v56 >= v64 )
            {
              v6 = v66;
              DosPath.Length = v65[0];
            }
            else
            {
              v6 = v66;
              v66[(unsigned int)v56] = 92;
              v8 = v55 + 2;
              v65[0] = v55 + 2;
              DosPath.Length = v55 + 2;
            }
          }
        }
        v19 = 3;
        v69 = 3;
        j = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v16) = 1;
        v50 = sub_180076A28(v16, 0LL);
        v68 = (volatile signed __int32 *)v50;
        v70 = v50;
        v60 = 1;
        if ( v50 )
        {
          v51 = (struct _CURDIR *)(v50 + 24);
        }
        else
        {
          v51 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v68 = 0LL;
          j = 0;
        }
        v72 = v51;
        v52 = sub_18007EC68(v51);
        v63 = v52;
        v69 = v52;
        DosPath = v51->DosPath;
        if ( v52 == 3 )
          v53 = 4;
        else
          v53 = 2 * v52;
        DosPath.Length = v53;
        goto LABEL_103;
      case 5:
        v44 = sub_180076A28(0LL, 0LL);
        v68 = (volatile signed __int32 *)v44;
        v70 = v44;
        v60 = 1;
        if ( v44 )
        {
          v45 = (struct _CURDIR *)(v44 + 24);
          *(_DWORD *)(a6 + 4) = *(_DWORD *)(v44 + 40);
        }
        else
        {
          v45 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v68 = 0LL;
          j = 0;
        }
        v72 = v45;
        DosPath = v45->DosPath;
        v63 = sub_18007EC68(v45);
        v69 = v63;
LABEL_103:
        sub_1800402E4(v65, &DosPath);
        v6 = v66;
        v8 = v65[0];
        v19 = v63;
        goto LABEL_19;
      case 6:
      case 7:
        v69 = 4;
        j = 4;
        if ( v10 < 4 )
          j = v10;
        DosPath = *(struct _UNICODE_STRING *)L"\b\n";
        sub_1800402E4(v65, &DosPath);
        v8 = v65[0];
        v6 = v66;
        if ( v65[0] >= 6u )
          v66[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v19 = 4;
        if ( *(_DWORD *)a6 == 7 )
          v61 = 0;
        goto LABEL_19;
      default:
        Length = 0;
        v62 = 0;
        v29 = v9 >> 1;
        goto LABEL_146;
    }
  }
  v19 = 3;
  v69 = 3;
LABEL_19:
  Length = DosPath.Length;
  v21 = v76 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v21 + 2 <= v9 )
    goto LABEL_20;
  if ( v10 > 1 || **((_WORD **)a1 + 1) != 46 )
  {
    v33 = v21 + 2;
    if ( v33 > 0xFFFF )
      v33 = 0;
    Length = v33;
    v62 = v33;
    v29 = v9 >> 1;
    v17 = v68;
    goto LABEL_146;
  }
  if ( v10 != 1 )
  {
    Length = 0;
    if ( v21 <= 0xFFFF )
      Length = v76 + DosPath.Length - 2 * j;
    v29 = v9 >> 1;
    goto LABEL_51;
  }
  if ( DosPath.Length != 8 )
  {
    if ( v9 < DosPath.Length )
    {
      v29 = v9 >> 1;
      v62 = DosPath.Length;
      v17 = v68;
      goto LABEL_146;
    }
    v40 = v8;
    v41 = (unsigned __int64)v8 >> 1;
    if ( (_DWORD)v41 && v6[(unsigned int)(v41 - 1)] == 92 )
    {
      v8 -= 2;
      v65[0] = v40 - 2;
    }
    goto LABEL_20;
  }
  if ( v9 <= 8 )
  {
    Length = 10;
    v29 = v9 >> 1;
LABEL_51:
    v62 = Length;
LABEL_52:
    v17 = v68;
    goto LABEL_146;
  }
LABEL_20:
  for ( k = 0; k < v8 >> 1; ++k )
  {
    if ( v6[k] == 47 )
      v6[k] = 92;
  }
  v23 = v8 >> 1;
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
      if ( !(_DWORD)v23 || v6[(unsigned int)(v23 - 1)] != 92 )
      {
        v6[v23] = 92;
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
          v67 = v6[v23];
          v38 = v67;
          v6[v23] = 0;
          if ( v38 == 92 )
          {
            while ( (unsigned int)v23 >= v19 )
            {
              v67 = v6[v23];
              v39 = v67;
              v6[v23] = 0;
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
              if ( v6[v28] == 46 && v6[(unsigned int)(v23 - 2)] != 46 )
                v23 = (unsigned int)v28;
            }
            break;
          }
          v6[v23] = v27;
          v23 = (unsigned int)(v23 + 1);
          ++j;
        }
        --j;
      }
    }
LABEL_35:
    ++j;
  }
  if ( v61 && (unsigned int)v23 > v19 && v6[(unsigned int)(v23 - 1)] == 92 )
    LODWORD(v23) = v23 - 1;
  v29 = v9 >> 1;
  if ( (unsigned int)v23 < v64 )
    v6[(unsigned int)v23] = 0;
  while ( (_DWORD)v23 )
  {
    v23 = (unsigned int)(v23 - 1);
    v30 = &v6[v23];
    if ( *v30 != 32 && *v30 != 46 )
    {
      LODWORD(v23) = v23 + 1;
      break;
    }
    *v30 = 0;
  }
  v31 = 2 * v23;
  v65[0] = 2 * v23;
  if ( !v79 )
  {
LABEL_50:
    Length = v31;
    goto LABEL_51;
  }
  for ( m = v23; m && v6[m - 1] != 92; --m )
    ;
  if ( m >= (unsigned int)v23 || m < v19 )
  {
    *v79 = 0LL;
    goto LABEL_50;
  }
  *v79 = &v6[m];
  Length = v31;
  v62 = v31;
  v17 = v68;
LABEL_146:
  if ( v60 )
  {
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
      {
        ZwClose(*(_QWORD *)(v70 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v70);
      }
      Length = v62;
      v6 = v66;
    }
    else
    {
      RtlLeaveCriticalSection((__int64)&unk_18015BE80);
    }
  }
  if ( Length >= 2 * (unsigned __int64)v29 && v29 )
    *v6 = 0;
  return Length;
}
