/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x1800FBAA8
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x1800FBC58 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800537A0 (LdrpQueryValueKey.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 */

int __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, void *a2)
{
  __int64 v4; // r14
  wchar_t *Heap; // rax
  int v6; // ecx
  unsigned int v7; // ecx
  wchar_t *v8; // rbx
  unsigned int v9; // r13d
  unsigned int v10; // esi
  const wchar_t *v11; // rdi
  _WORD *v12; // r15
  __int64 v13; // rax
  ULONG Value; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  int v18; // [rsp+A8h] [rbp+58h] BYREF

  v18 = 7;
  v4 = 0LL;
  LODWORD(v17) = 0;
  Value = 0;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  LODWORD(Heap) = LdrpQueryValueKey(a2, &DestinationString, &v18, 0LL, (ULONG *)&v17);
  if ( (_DWORD)Heap != -1073741772 )
  {
    v6 = v17;
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)Heap == -2147483643 )
      {
        LODWORD(v17) = v17 + 2;
        v7 = (v6 + 5) & 0xFFFFFFFC;
        if ( v7 )
        {
          Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v7);
          v8 = Heap;
        }
        else
        {
          v8 = 0LL;
        }
        if ( v8 )
        {
          if ( !(unsigned int)LdrpQueryValueKey(a2, &DestinationString, &v18, v8, (ULONG *)&v17)
            && (v18 == 1 || v18 == 7) )
          {
            v9 = 0;
            v10 = (unsigned int)v17 >> 1;
            v11 = v8;
            if ( (unsigned int)v17 >> 1 )
            {
              v12 = (_WORD *)(a1 + 20);
              while ( v11 && *v11 )
              {
                if ( !wcsicmp(v11, L"*") )
                {
                  *(_WORD *)(a1 + 20) = -1;
                  break;
                }
                RtlInitUnicodeString(&DestinationString, v11);
                if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value) || (++v4, *v12 = Value, ++v12, v4 < 4) )
                {
                  v13 = -1LL;
                  do
                    ++v13;
                  while ( v11[v13] );
                  v9 += v13 + 1;
                  v11 += (unsigned int)(v13 + 1);
                  if ( v9 < v10 )
                    continue;
                }
                break;
              }
            }
          }
          LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
        }
      }
    }
  }
  return (int)Heap;
}
