/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x180006350
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18000625C (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800FE080 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800FEC08 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetLanguageSpec @ 0x180006450 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetParentLocaleName @ 0x180050A40 (RtlGetParentLocaleName.c)
 *     _MuiRegAllocArray @ 0x180051F04 (_MuiRegAllocArray.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int8 v4; // al
  int v6; // r14d
  wchar_t *v7; // rsi
  wchar_t *v8; // rax
  NTSTATUS LanguageSpec; // ebx
  int v10; // r9d
  _UNICODE_STRING ParentLocaleName; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 v13; // [rsp+70h] [rbp+30h] BYREF
  __int16 v14; // [rsp+88h] [rbp+48h] BYREF

  v14 = 0;
  v4 = 0;
  v13 = 0;
  v6 = a1;
  v7 = 0LL;
  if ( a1 && a2 )
  {
    v8 = (wchar_t *)MuiRegAllocArray(a1, 85LL);
    v7 = v8;
    if ( !v8 )
    {
      LanguageSpec = -1073741801;
      goto LABEL_18;
    }
    ParentLocaleName.Buffer = v8;
    *(_DWORD *)&ParentLocaleName.Length = 11141120;
    LanguageSpec = RtlGetParentLocaleName(a3, &ParentLocaleName, 6u, 0);
    if ( LanguageSpec < 0
      || (LanguageSpec = RtlpMuiRegGetLanguageSpec(v6, ParentLocaleName.Buffer, (unsigned int)&v13, v10, (__int64)&v14),
          LanguageSpec < 0) )
    {
      v4 = 0;
      v14 = 0;
      v13 = 0;
    }
    else
    {
      v4 = v13;
    }
  }
  else
  {
    LanguageSpec = -1073741811;
  }
  if ( v7 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v4 = v13;
  }
  if ( !v4 )
  {
    if ( LanguageSpec >= 0 )
      LanguageSpec = -1073741823;
    goto LABEL_18;
  }
  if ( LanguageSpec < 0 )
  {
LABEL_18:
    *(_WORD *)(a2 + 10) = 0;
    *(_WORD *)(a2 + 8) &= 0x3FFFu;
    return (unsigned int)LanguageSpec;
  }
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
  *(_WORD *)(a2 + 8) |= v4 << 14;
  *(_WORD *)(a2 + 10) = v14;
  return (unsigned int)LanguageSpec;
}
