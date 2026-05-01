/*
 * XREFs of QueryTransientObjectSecurityDescriptor @ 0x18002AD14
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18002A6B4 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 * Callees:
 *     QuerySecurityDescriptorValue @ 0x18002AB30 (QuerySecurityDescriptorValue.c)
 *     AccessHlprFree @ 0x18002AE28 (AccessHlprFree.c)
 *     RtlStringCbCatW @ 0x18002AF04 (RtlStringCbCatW.c)
 *     GetNormalizedObjectPath @ 0x18002AFF4 (GetNormalizedObjectPath.c)
 *     RtlStringCbLengthW @ 0x18002B190 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     RtlStringCbPrintfExW @ 0x18006AF00 (RtlStringCbPrintfExW.c)
 */

__int64 __fastcall QueryTransientObjectSecurityDescriptor(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int128 v3; // rax
  PSECURITY_DESCRIPTOR *v4; // r12
  PSID *Heap; // r13
  const WCHAR *v6; // r15
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
  void *v19; // rdi
  const wchar_t *v20; // r14
  const wchar_t *v21; // rcx
  unsigned int v22; // esi
  wchar_t *v23; // rax
  SIZE_T v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rbx
  wchar_t *v27; // r12
  wchar_t v28; // [rsp+48h] [rbp-29h]
  _DWORD *v29; // [rsp+50h] [rbp-21h] BYREF
  SIZE_T v30; // [rsp+58h] [rbp-19h] BYREF
  HLOCAL v31; // [rsp+60h] [rbp-11h] BYREF
  __int64 v32; // [rsp+68h] [rbp-9h] BYREF
  HLOCAL hMem; // [rsp+70h] [rbp-1h] BYREF
  __int64 v34; // [rsp+78h] [rbp+7h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp+Fh] BYREF
  PSECURITY_DESCRIPTOR *v36; // [rsp+88h] [rbp+17h]
  wchar_t SubStr[4]; // [rsp+90h] [rbp+1Fh] BYREF

  *((_QWORD *)&v3 + 1) = a2;
  wcscpy(SubStr, L"%s");
  v4 = (PSECURITY_DESCRIPTOR *)a3;
  Heap = 0LL;
  v6 = 0LL;
  v36 = (PSECURITY_DESCRIPTOR *)a3;
  v7 = 0;
  v34 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  hMem = 0LL;
  if ( !a3 )
  {
    NormalizedObjectPath = -1073741811;
    goto LABEL_4;
  }
  NormalizedObjectPath = GetNormalizedObjectPath(a1, *((_QWORD *)&v3 + 1), &v34);
  if ( NormalizedObjectPath >= 0 )
  {
    NormalizedObjectPath = QuerySecurityDescriptorValue(v34, &v29);
    if ( NormalizedObjectPath >= 0 )
    {
      v18 = v29;
      if ( v29[1] == 3 )
      {
        *(_QWORD *)&v3 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)v29[2]);
        v19 = (void *)v3;
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
        if ( !ConvertSidToStringSidW(*Heap, (LPWSTR *)&v31) )
          goto LABEL_21;
        NormalizedObjectPath = RtlStringCbLengthW(v31, 4294967294LL, &v30);
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
        v3 = v30 * (unsigned __int128)v7;
        a3 = v30 * v7;
        if ( !is_mul_ok(v30, v7) )
          goto LABEL_4;
        v24 = -1LL;
        v25 = (unsigned int)v29[2] - 4LL * v7;
        *((_QWORD *)&v3 + 1) = v25 + a3;
        if ( v25 + a3 >= a3 )
          v24 = v25 + a3;
        NormalizedObjectPath = v25 + a3 < a3 ? 0xC0000095 : 0;
        v30 = v24;
        if ( *((_QWORD *)&v3 + 1) < a3 )
          goto LABEL_4;
        *(_QWORD *)&v3 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v24);
        v6 = (const WCHAR *)v3;
        if ( (_QWORD)v3 )
        {
          v32 = v3;
          v26 = v3;
          if ( v7 )
          {
            while ( 1 )
            {
              v27 = wcsstr(v20, SubStr);
              v28 = v27[2];
              v27[2] = 0;
              NormalizedObjectPath = RtlStringCbPrintfExW(
                                       v26,
                                       v30,
                                       (unsigned int)&v32,
                                       (unsigned int)&v30,
                                       0,
                                       (__int64)v20,
                                       (char)v31);
              if ( NormalizedObjectPath < 0 )
                goto LABEL_4;
              v20 = v27 + 2;
              v26 = v32;
              ++v22;
              v27[2] = v28;
              if ( v22 >= v7 )
              {
                v4 = v36;
                break;
              }
            }
          }
          NormalizedObjectPath = RtlStringCbCatW(v26, v30, v20);
          if ( NormalizedObjectPath < 0 )
            goto LABEL_4;
          if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(v6, 1u, &hMem, 0LL) )
          {
            NormalizedObjectPath = RtlCopySecurityDescriptor(hMem, v4);
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
  if ( v31 )
    LocalFree(v31);
  AccessHlprFree(v6, *((_QWORD *)&v3 + 1), a3);
  AccessHlprFree(Heap, v9, v10);
  AccessHlprFree(0LL, v11, v12);
  AccessHlprFree(v29, v13, v14);
  AccessHlprFree(v34, v15, v16);
  return (unsigned int)NormalizedObjectPath;
}
