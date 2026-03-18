/*
 * XREFs of DefSetText @ 0x1C0096934
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     NtUserDefSetText @ 0x1C010C9D0 (NtUserDefSetText.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTextChange @ 0x1C008B524 (DwmAsyncTextChange.c)
 *     DesktopAlloc @ 0x1C0097C60 (DesktopAlloc.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00F4038 (DesktopVerifyHeapLargeUnicodeString.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall DefSetText(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rsi
  ULONG v5; // ecx
  unsigned int v6; // ecx
  void *v7; // r8
  __int64 v8; // rax
  unsigned int v9; // esi
  BOOL v10; // r15d
  __int64 v11; // rcx
  void *v13; // rax
  ULONG BytesInUnicodeString; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( !v4 || !a2 || !*((_QWORD *)a2 + 1) )
  {
    *(_DWORD *)(a1 + 232) = 0;
    v9 = 1;
    goto LABEL_20;
  }
  v5 = *a2;
  if ( *a2 < 0x3FFFFFFE )
  {
    if ( (a2[1] & 0x80000000) != 0 )
      v6 = 2 * v5 + 2;
    else
      v6 = (v5 & 0xFFFFFFFE) + 2;
    BytesInUnicodeString = v6;
    if ( *(_QWORD *)(a1 + 240) )
    {
      DesktopVerifyHeapLargeUnicodeString(v4, a1 + 232);
      v6 = BytesInUnicodeString;
    }
    if ( (*(_DWORD *)(a1 + 236) & 0x7FFFFFFFu) < v6 )
    {
      v7 = *(void **)(a1 + 240);
      if ( v7 )
      {
        RtlFreeHeap(*(PVOID *)(v4 + 128), 0, v7);
        v6 = BytesInUnicodeString;
      }
      v8 = DesktopAlloc(v4, v6, 4LL);
      *(_QWORD *)(a1 + 240) = v8;
      *(_DWORD *)(a1 + 232) = 0;
      if ( !v8 )
      {
        *(_DWORD *)(a1 + 236) &= 0x80000000;
        goto LABEL_27;
      }
      v6 = BytesInUnicodeString;
      *(_DWORD *)(a1 + 236) ^= (BytesInUnicodeString ^ *(_DWORD *)(a1 + 236)) & 0x7FFFFFFF;
    }
    v9 = 1;
    v10 = 1;
    if ( *a2 )
    {
      if ( (a2[1] & 0x80000000) != 0 )
      {
        v10 = RtlMultiByteToUnicodeN(*(PWCH *)(a1 + 240), v6, &BytesInUnicodeString, *((const CHAR **)a2 + 1), *a2) >= 0;
        v6 = BytesInUnicodeString + 2;
        BytesInUnicodeString += 2;
      }
      else
      {
        memmove(*(void **)(a1 + 240), *((const void **)a2 + 1), *a2);
        v6 = BytesInUnicodeString;
      }
    }
    if ( v10 )
    {
      *(_DWORD *)(a1 + 232) = v6 - 2;
      *(_WORD *)(*(_QWORD *)(a1 + 240) + 2 * ((unsigned __int64)(v6 - 2) >> 1)) = 0;
      goto LABEL_20;
    }
  }
  *(_DWORD *)(a1 + 232) = 0;
LABEL_27:
  v9 = 0;
LABEL_20:
  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v13 = (void *)ReferenceDwmApiPort(v11);
    DwmAsyncTextChange(v13, *(_QWORD *)a1);
  }
  return v9;
}
