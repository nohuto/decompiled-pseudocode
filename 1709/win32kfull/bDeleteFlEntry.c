/*
 * XREFs of bDeleteFlEntry @ 0x1C0274498
 * Callers:
 *     GreEudcUnloadLinkW @ 0x1C0273F4C (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0039D0C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     bUnloadEudcFont @ 0x1C003EFC4 (bUnloadEudcFont.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B1F70 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00B2274 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C00B2304 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00B241C (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C00B250C (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     vUnlinkEudcRFONTs @ 0x1C0274810 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C02748C4 (vUnlinkEudcRFONTsAndPFEs.c)
 */

__int64 __fastcall bDeleteFlEntry(unsigned __int16 *a1, char *a2, int a3)
{
  __int64 v6; // rdx
  unsigned __int16 *v7; // rdi
  unsigned __int16 *v8; // rbx
  struct _LIST_ENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v10; // rsi
  struct _LIST_ENTRY *LinkedFontEntry; // rax
  struct _LIST_ENTRY *v12; // r14
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  bool v15; // zf
  struct _LIST_ENTRY *v16; // rcx
  __int64 v17; // rdx
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *v19; // rax
  unsigned int v20; // ebp
  __int64 v21; // rdx
  wchar_t *Str1; // [rsp+20h] [rbp-38h] BYREF
  char v24[8]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int16 *v25; // [rsp+30h] [rbp-28h]
  unsigned __int16 *v26; // [rsp+78h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v26, 0x24Au);
  v7 = Str1;
  v8 = v26;
  if ( Str1
    && v26
    && (int)StringCchCopyW((char *)v26, 293LL, a2) >= 0
    && ParseFontLinkEntry(v8, (struct FontLinkData *)v24)
    && (unsigned int)bAppendSysDirectory(v7, v8)
    && _wcsicmp(v7, Dst)
    && off_1C03207F0 != (_UNKNOWN *)&off_1C03207F0
    && (BaseFontEntry = (struct _LIST_ENTRY *)FindBaseFontEntry(a1), (v10 = BaseFontEntry) != 0LL)
    && (LinkedFontEntry = FindLinkedFontEntry(BaseFontEntry + 1, v7, v25), (v12 = LinkedFontEntry) != 0LL)
    && LODWORD(LinkedFontEntry[1].Flink) == a3 )
  {
    Flink = LinkedFontEntry->Flink;
    if ( Flink->Blink != v12 || (Blink = v12->Blink, Blink->Flink != v12) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v15 = HIDWORD(v10[6].Flink)-- == 1;
    v16 = v12 + 2;
    if ( v15 )
    {
      vUnlinkEudcRFONTsAndPFEs(v16, v10);
      v18 = v10->Flink;
      if ( v10->Flink->Blink != v10 || (v19 = v10->Blink, v19->Flink != v10) )
        __fastfail(3u);
      v19->Flink = v18;
      v18->Blink = v19;
      Win32FreePool(v10, v17);
      --dword_1C0327BF4;
      v20 = 1;
      ++dword_1C0327BFC;
    }
    else
    {
      vUnlinkEudcRFONTs(v16);
      v20 = 1;
      ++LODWORD(v10[6].Blink);
    }
    bUnloadEudcFont((__int64)&v12[2]);
    Win32FreePool(v12, v21);
  }
  else
  {
    v20 = 0;
  }
  if ( v8 )
    Win32FreePool(v8, v6);
  if ( v7 )
    Win32FreePool(v7, v6);
  return v20;
}
