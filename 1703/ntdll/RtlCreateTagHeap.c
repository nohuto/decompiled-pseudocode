/*
 * XREFs of RtlCreateTagHeap @ 0x180081820
 * Callers:
 *     CsrClientConnectToServer @ 0x18000B620 (CsrClientConnectToServer.c)
 *     sub_180081774 @ 0x180081774 (sub_180081774.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_180101254 @ 0x180101254 (sub_180101254.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800456F0 @ 0x1800456F0 (sub_1800456F0.c)
 *     sub_1800EFE3C @ 0x1800EFE3C (sub_1800EFE3C.c)
 *     sub_180101254 @ 0x180101254 (sub_180101254.c)
 */

ULONG __cdecl RtlCreateTagHeap(PVOID HeapHandle, ULONG Flags, PWSTR TagPrefix, PWSTR TagNames)
{
  ULONG v6; // edx
  ULONG v7; // edi
  int v8; // edi
  int v9; // edx
  PWSTR v10; // rsi
  PWSTR v11; // r15
  PWSTR v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  PWSTR v17; // r13
  unsigned __int64 v18; // r15
  _WORD *v19; // r12
  char v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+A0h] [rbp+8h]

  v21 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0;
  if ( !qword_18015C468 )
  {
    qword_18015C468 = (__int64)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x2A0uLL);
    if ( !qword_18015C468 )
      return 0;
  }
  if ( HeapHandle && (*((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0) )
    return 0;
  if ( !HeapHandle )
  {
LABEL_13:
    v8 = 0;
    v9 = 0;
    v10 = TagNames;
    if ( *TagNames == 33 )
    {
      v11 = TagNames + 1;
      while ( *v10++ )
        ;
    }
    else
    {
      v11 = 0LL;
    }
    v13 = v10;
    while ( *v13 )
    {
      while ( *v13++ )
        ;
      ++v9;
    }
    if ( !v9 || (v14 = sub_1800EFE3C(HeapHandle), (v15 = v14) == 0) )
    {
LABEL_44:
      v7 = v8 << 18;
      goto LABEL_45;
    }
    v22 = 23LL;
    v8 = *(unsigned __int16 *)(v14 + 16);
    if ( *(_WORD *)(v14 + 16) )
    {
      if ( v8 != 2048 )
        goto LABEL_31;
      sub_1800456F0((_WORD *)(v14 + 20), 0x2EuLL, (__int64)L"GlobalTags");
      v15 += 72LL;
    }
    else
    {
      if ( v11 )
        sub_1800456F0((_WORD *)(v14 + 20), 0x2EuLL, (__int64)v11);
      v15 += 72LL;
    }
    v8 = *(unsigned __int16 *)(v15 + 16);
LABEL_31:
    v17 = TagPrefix;
    if ( !TagPrefix )
      goto LABEL_37;
    v18 = -1LL;
    do
      ++v18;
    while ( TagPrefix[v18] );
    if ( v18 && v18 < 0x13 )
    {
      v22 = 23 - v18;
    }
    else
    {
LABEL_37:
      v18 = 0LL;
      v17 = 0LL;
    }
    while ( *v10 )
    {
      v19 = (_WORD *)(v15 + 20);
      if ( v17 )
      {
        sub_1800456F0((_WORD *)(v15 + 20), 2 * v22, (__int64)v17);
        v19 += v18;
      }
      sub_1800456F0(v19, 2 * (v22 - v18), (__int64)v10);
      while ( *v10++ )
        ;
      v15 += 72LL;
    }
    goto LABEL_44;
  }
  v6 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v6 & 0x61000000) == 0 || (v6 & 0x10000000) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v21 = 1;
    }
    goto LABEL_13;
  }
  v7 = sub_180101254(HeapHandle);
LABEL_45:
  if ( v21 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return v7;
}
