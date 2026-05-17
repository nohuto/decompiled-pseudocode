/*
 * XREFs of RtlGetUILanguageInfo @ 0x1800E7C80
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180031068 @ 0x180031068 (sub_180031068.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_1800352EC @ 0x1800352EC (sub_1800352EC.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     sub_1800362CC @ 0x1800362CC (sub_1800362CC.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006E8F0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006E920 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlUnicodeStringToInteger @ 0x180074BF0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800E81C8 @ 0x1800E81C8 (sub_1800E81C8.c)
 *     sub_1800F8FB0 @ 0x1800F8FB0 (sub_1800F8FB0.c)
 *     sub_1800F9170 @ 0x1800F9170 (sub_1800F9170.c)
 *     sub_1800F92E8 @ 0x1800F92E8 (sub_1800F92E8.c)
 */

__int64 __fastcall RtlGetUILanguageInfo(int a1, WCHAR *a2, _WORD *a3, unsigned int *a4, int *a5)
{
  char v5; // bl
  _WORD *v7; // r15
  WCHAR *v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rdx
  int v11; // r12d
  int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // r15
  wchar_t *Heap; // rax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r12
  const WCHAR *v20; // rdi
  int v22; // r8d
  int v23; // r15d
  int v24; // r9d
  int v25; // eax
  int v26; // eax
  __int16 v27; // [rsp+30h] [rbp-71h] BYREF
  _WORD *v28; // [rsp+38h] [rbp-69h]
  unsigned int v29; // [rsp+40h] [rbp-61h] BYREF
  int v30; // [rsp+44h] [rbp-5Dh]
  __int64 v31; // [rsp+48h] [rbp-59h] BYREF
  int v32; // [rsp+50h] [rbp-51h]
  int v33; // [rsp+54h] [rbp-4Dh]
  int v34; // [rsp+58h] [rbp-49h]
  wchar_t *v35; // [rsp+60h] [rbp-41h]
  UNICODE_STRING v36; // [rsp+68h] [rbp-39h] BYREF
  int *v37; // [rsp+78h] [rbp-29h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-21h] BYREF
  __int128 v39; // [rsp+90h] [rbp-11h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-1h]
  int v41; // [rsp+A8h] [rbp+7h]

  v5 = a1;
  v33 = a1;
  v28 = a3;
  v37 = a5;
  v31 = 0LL;
  v7 = a3;
  v27 = -1;
  v8 = a2;
  LOBYTE(v30) = 0;
  v35 = 0LL;
  if ( a4 )
    v9 = *a4;
  else
    v9 = 0;
  if ( !a2 || !*a2 || (a1 & 0xC) == 0xC || (a1 & 0xFFFFFF73) != 0 || v9 && !a3 )
    return 3221225485LL;
  v10 = 4LL;
  v11 = a1 & 4;
  v32 = v11;
  if ( (a1 & 4) == 0 )
    v10 = 85LL;
  if ( (int)sub_180031068(v8, v10) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter pwmszLanguage for function RtlGetUILanguageInfo is not a valid multi-string!\n");
  if ( v7 )
  {
    if ( v9 )
      *v7 = 0;
    if ( v9 > 1 )
      v7[1] = 0;
  }
  if ( a4 )
    *a4 = 2;
  if ( a5 )
    *a5 = 0;
  v34 = v5 & 0x80;
  if ( v5 < 0 )
    v12 = RtlpInitializeLangRegistryInfo(&v31);
  else
    v12 = RtlpCreateProcessRegistryInfo(&v31);
  v13 = v31;
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( !v31 )
    {
      v14 = -1073741823;
      goto LABEL_56;
    }
    v15 = *(_QWORD *)(v31 + 24);
    if ( v11 )
    {
      Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
      v35 = Heap;
      if ( !Heap )
      {
        v13 = v31;
        v14 = -1073741801;
LABEL_32:
        v7 = v28;
        goto LABEL_56;
      }
      v36.Buffer = Heap;
      *(_DWORD *)&v36.Length = 11141120;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( (int)sub_1800E81C8(&DestinationString, &v29) < 0 || !RtlLCIDToCultureName(v29, (__int64)&v36) )
      {
        v13 = v31;
        v14 = -1073741811;
        goto LABEL_53;
      }
      v13 = v31;
      v17 = sub_1800362CC(v31, v29, 1, &v27);
    }
    else
    {
      RtlInitUnicodeString(&v36, v8);
      if ( !RtlCultureNameToLCID(&v36.Length, &v29) )
      {
        v14 = -1073741811;
        goto LABEL_32;
      }
      v17 = sub_1800352EC(v13, v8, 1, &v27);
    }
    v14 = v17;
    if ( v17 < 0 )
    {
      v7 = v28;
      if ( v17 == -1073741823 )
        v14 = -1073741772;
      goto LABEL_54;
    }
    if ( v27 < 0 || v27 >= (int)*(unsigned __int16 *)(v15 + 6) )
      goto LABEL_52;
    v19 = *(_QWORD *)(v15 + 16) + 28LL * v27;
    while ( *v8 )
      ++v8;
    v20 = v8 + 1;
    v39 = *(_OWORD *)v19;
    v40 = *(_QWORD *)(v19 + 16);
    v41 = *(_DWORD *)(v19 + 24);
    if ( (*(_BYTE *)v19 & 1) != 0 )
    {
      if ( (*(_BYTE *)v19 & 6) != 0 )
      {
        v14 = -1073741595;
        goto LABEL_53;
      }
      if ( *v20 )
      {
LABEL_52:
        v14 = -1073741772;
        goto LABEL_53;
      }
      LOBYTE(v22) = v30;
    }
    else
    {
      LOBYTE(v22) = v30;
      if ( *v20 )
      {
        v23 = v32;
        while ( !(_BYTE)v22 )
        {
          if ( v23 )
          {
            RtlInitUnicodeString(&DestinationString, v20);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v29) < 0 )
              break;
            LOBYTE(v24) = 1;
            v25 = sub_1800F8FB0(v13, (unsigned int)&v39, (unsigned __int16)v29, v24, (__int64)&v39);
          }
          else
          {
            LOBYTE(v18) = 1;
            v25 = sub_1800F9170(v13, &v39, v20, v18, &v39);
          }
          v14 = v25;
          if ( v25 < 0 )
            goto LABEL_53;
          v22 = (unsigned __int8)v30;
          if ( (v39 & 0x20) != 0 )
            v22 = 1;
          v30 = v22;
          while ( *v20 )
            ++v20;
          if ( !*++v20 )
            goto LABEL_82;
        }
        v14 = -1073741811;
        goto LABEL_53;
      }
    }
LABEL_82:
    if ( v37 )
    {
      v26 = *(_WORD *)v19 & 0x419F | 0x20;
      if ( (*(_WORD *)v19 & 0x1000) != 0 )
        v26 = *(_WORD *)v19 & 0x419F;
      *v37 = v26 | 0x40;
    }
    if ( a4 )
    {
      v7 = v28;
      *a4 = v9;
      if ( (_BYTE)v22 )
        *a4 = 2;
      else
        v14 = sub_1800F92E8(v33, v13, (unsigned int)&v39, (_DWORD)a4, (__int64)v7);
LABEL_54:
      if ( v35 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v35);
        v13 = v31;
      }
      goto LABEL_56;
    }
LABEL_53:
    v7 = v28;
    goto LABEL_54;
  }
LABEL_56:
  if ( v34 && v13 )
    RtlpMuiFreeLangRegistryInfo(v13);
  if ( !v14 && a4 && *a4 > v9 )
  {
    if ( v7 )
      return (unsigned int)-1073741789;
  }
  return v14;
}
