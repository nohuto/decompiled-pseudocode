/*
 * XREFs of DefSetText @ 0x1C0041BC0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     NtUserDefSetText @ 0x1C0100A30 (NtUserDefSetText.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0042C20 (DesktopAlloc.c)
 *     DwmAsyncTextChange @ 0x1C00436A0 (DwmAsyncTextChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00E1584 (DesktopVerifyHeapLargeUnicodeString.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall DefSetText(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rsi
  ULONG v5; // ecx
  unsigned int v6; // esi
  unsigned int v7; // ecx
  void *v8; // r8
  __int64 v9; // rax
  BOOL v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rax
  ULONG BytesInUnicodeString; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && a2 && *((_QWORD *)a2 + 1) )
  {
    v5 = *a2;
    if ( *a2 >= 0x3FFFFFFE )
      goto LABEL_5;
    if ( a2[1] < 0x80000000 )
      v7 = v5 + 2;
    else
      v7 = 2 * v5 + 2;
    BytesInUnicodeString = v7;
    if ( *(_QWORD *)(a1 + 240) )
    {
      DesktopVerifyHeapLargeUnicodeString(v4, a1 + 232);
      v7 = BytesInUnicodeString;
    }
    if ( (*(_DWORD *)(a1 + 236) & 0x7FFFFFFFu) < v7 )
    {
      v8 = *(void **)(a1 + 240);
      if ( v8 )
      {
        RtlFreeHeap(*(PVOID *)(v4 + 128), 0, v8);
        v7 = BytesInUnicodeString;
      }
      v9 = DesktopAlloc(v4, v7, 4LL);
      *(_QWORD *)(a1 + 240) = v9;
      *(_DWORD *)(a1 + 232) = 0;
      if ( !v9 )
      {
        *(_DWORD *)(a1 + 236) &= 0x80000000;
        goto LABEL_6;
      }
      v7 = BytesInUnicodeString;
      *(_DWORD *)(a1 + 236) ^= (BytesInUnicodeString ^ *(_DWORD *)(a1 + 236)) & 0x7FFFFFFF;
    }
    v6 = 1;
    v10 = 1;
    if ( *a2 )
    {
      if ( a2[1] >= 0x80000000 )
      {
        v10 = RtlMultiByteToUnicodeN(*(PWCH *)(a1 + 240), v7, &BytesInUnicodeString, *((const CHAR **)a2 + 1), *a2) >= 0;
        v7 = BytesInUnicodeString + 2;
        BytesInUnicodeString += 2;
      }
      else
      {
        memmove(*(void **)(a1 + 240), *((const void **)a2 + 1), *a2);
        v7 = BytesInUnicodeString;
      }
    }
    if ( !v10 )
    {
LABEL_5:
      *(_DWORD *)(a1 + 232) = 0;
LABEL_6:
      v6 = 0;
      goto LABEL_25;
    }
    *(_DWORD *)(a1 + 232) = v7 - 2;
    *(_WORD *)(*(_QWORD *)(a1 + 240) + 2 * ((unsigned __int64)(v7 - 2) >> 1)) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 232) = 0;
    v6 = 1;
  }
LABEL_25:
  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v15 = (void *)ReferenceDwmApiPort(v12, v11, v13, v14);
    DwmAsyncTextChange(v15);
  }
  return v6;
}
