/*
 * XREFs of QueryTransientObjectSecurityDescriptor @ 0x18001CDF4
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18001C548 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 * Callees:
 *     QuerySecurityDescriptorValue @ 0x18001CC10 (QuerySecurityDescriptorValue.c)
 *     AccessHlprFree @ 0x18001CF08 (AccessHlprFree.c)
 *     RtlStringCbCatW @ 0x18001CFE4 (RtlStringCbCatW.c)
 *     GetNormalizedObjectPath @ 0x18001D0D0 (GetNormalizedObjectPath.c)
 *     RtlStringCbLengthW @ 0x18001D270 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     RtlStringCbPrintfExW @ 0x180049B8C (RtlStringCbPrintfExW.c)
 */

__int64 __fastcall QueryTransientObjectSecurityDescriptor(__int64 a1, __int64 a2, SIZE_T a3)
{
  unsigned __int128 v3; // rax
  _QWORD *v4; // r14
  PSID *Heap; // r12
  const WCHAR *v6; // r13
  unsigned int v7; // edi
  signed int NormalizedObjectPath; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v18; // rsi
  __int64 v19; // rdi
  const wchar_t *v20; // r15
  const wchar_t *v21; // rcx
  unsigned int v22; // r14d
  wchar_t *v23; // rax
  __int64 v24; // rcx
  SIZE_T v25; // rsi
  __int64 v26; // rbx
  wchar_t v27; // [rsp+48h] [rbp-29h]
  SIZE_T Size; // [rsp+50h] [rbp-21h] BYREF
  _DWORD *v29; // [rsp+58h] [rbp-19h] BYREF
  HLOCAL v30; // [rsp+60h] [rbp-11h] BYREF
  __int64 v31; // [rsp+68h] [rbp-9h] BYREF
  HLOCAL hMem; // [rsp+70h] [rbp-1h] BYREF
  __int64 v33; // [rsp+78h] [rbp+7h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp+Fh] BYREF
  wchar_t *v35; // [rsp+88h] [rbp+17h]
  PSECURITY_DESCRIPTOR *pDestinationSecurityDescriptor; // [rsp+90h] [rbp+1Fh]
  wchar_t SubStr[4]; // [rsp+98h] [rbp+27h] BYREF

  *((_QWORD *)&v3 + 1) = a2;
  wcscpy(SubStr, L"%s");
  v4 = (_QWORD *)a3;
  Heap = 0LL;
  v6 = 0LL;
  pDestinationSecurityDescriptor = (PSECURITY_DESCRIPTOR *)a3;
  v7 = 0;
  v33 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  hMem = 0LL;
  if ( !a3 )
  {
    NormalizedObjectPath = -1073741811;
    goto LABEL_4;
  }
  NormalizedObjectPath = GetNormalizedObjectPath(a1, *((_QWORD *)&v3 + 1), &v33);
  if ( NormalizedObjectPath >= 0 )
  {
    NormalizedObjectPath = QuerySecurityDescriptorValue(v33, &v29);
    if ( NormalizedObjectPath >= 0 )
    {
      v18 = v29;
      if ( v29[1] == 3 )
      {
        *(_QWORD *)&v3 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)v29[2]);
        v19 = v3;
        if ( (_QWORD)v3 )
        {
          memcpy_0((void *)v3, v29 + 3, (unsigned int)v18[2]);
          *v4 = v19;
          goto LABEL_4;
        }
        goto LABEL_12;
      }
      if ( v29[1] != 1 )
      {
        NormalizedObjectPath = -1073739509;
        goto LABEL_4;
      }
      Heap = (PSID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x54uLL);
      if ( Heap )
      {
        NormalizedObjectPath = NtQueryInformationToken(
                                 (HANDLE)0xFFFFFFFFFFFFFFFALL,
                                 TokenUser,
                                 Heap,
                                 0x54u,
                                 &ReturnLength);
        if ( NormalizedObjectPath < 0 )
          goto LABEL_4;
        if ( !ConvertSidToStringSidW(*Heap, (LPWSTR *)&v30) )
          goto LABEL_21;
        NormalizedObjectPath = RtlStringCbLengthW(v30, 4294967294LL, &Size);
        if ( NormalizedObjectPath < 0 )
          goto LABEL_4;
        v20 = (const wchar_t *)(v29 + 3);
        v21 = (const wchar_t *)(v29 + 3);
        v22 = 0;
        while ( 1 )
        {
          v23 = wcsstr(v21, SubStr);
          if ( !v23 )
            break;
          v21 = v23 + 2;
          ++v7;
        }
        NormalizedObjectPath = -1073741675;
        v3 = Size * (unsigned __int128)v7;
        a3 = Size * v7;
        if ( !is_mul_ok(Size, v7) )
          goto LABEL_4;
        *(_QWORD *)&v3 = -1LL;
        v24 = (unsigned int)v29[2] - 4LL * v7;
        *((_QWORD *)&v3 + 1) = v24 + a3;
        if ( v24 + a3 >= a3 )
          *(_QWORD *)&v3 = v24 + a3;
        Size = v3;
        NormalizedObjectPath = v24 + a3 < a3 ? 0xC0000095 : 0;
        if ( *((_QWORD *)&v3 + 1) < a3 )
          goto LABEL_4;
        v25 = Size;
        *(_QWORD *)&v3 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
        v6 = (const WCHAR *)v3;
        if ( (_QWORD)v3 )
        {
          v31 = v3;
          v26 = v3;
          if ( v7 )
          {
            do
            {
              v35 = wcsstr(v20, SubStr) + 2;
              v27 = *v35;
              *v35 = 0;
              NormalizedObjectPath = RtlStringCbPrintfExW(
                                       v26,
                                       v25,
                                       (unsigned int)&v31,
                                       (unsigned int)&Size,
                                       0,
                                       (__int64)v20,
                                       (char)v30);
              if ( NormalizedObjectPath < 0 )
                goto LABEL_4;
              v20 = v35;
              ++v22;
              v25 = Size;
              v26 = v31;
              *v35 = v27;
            }
            while ( v22 < v7 );
          }
          NormalizedObjectPath = RtlStringCbCatW(v26, v25, v20);
          if ( NormalizedObjectPath < 0 )
            goto LABEL_4;
          if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(v6, 1u, &hMem, 0LL) )
          {
            NormalizedObjectPath = RtlCopySecurityDescriptor(hMem, pDestinationSecurityDescriptor);
            goto LABEL_4;
          }
LABEL_21:
          NormalizedObjectPath = -1073741823;
          goto LABEL_4;
        }
      }
LABEL_12:
      NormalizedObjectPath = -1073741801;
    }
  }
LABEL_4:
  if ( hMem )
    LocalFree(hMem);
  if ( v30 )
    LocalFree(v30);
  AccessHlprFree(v6, *((_QWORD *)&v3 + 1), a3);
  AccessHlprFree(Heap, v9, v10);
  AccessHlprFree(0LL, v11, v12);
  AccessHlprFree(v29, v13, v14);
  AccessHlprFree(v33, v15, v16);
  return (unsigned int)NormalizedObjectPath;
}
