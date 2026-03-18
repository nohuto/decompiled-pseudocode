/*
 * XREFs of ?GenerateUmdFileName@@YAJQEAGPEBG1@Z @ 0x1C01662C4
 * Callers:
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C0166AD0 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 * Callees:
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C00266B8 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 */

int __fastcall GenerateUmdFileName(char *a1, const unsigned __int16 *a2, size_t *a3)
{
  __int64 v3; // rdx
  signed __int64 v4; // r9
  unsigned __int16 *v6; // rdi
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax
  size_t *NtSystemRoot; // rax
  __int64 v10; // rdx
  int result; // eax
  __int64 v12; // rdx
  unsigned __int16 *v13; // rax
  int v14; // ecx
  char *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int16 v18; // r8
  char *v19; // rax
  __int64 v20; // rdx

  v3 = 260LL;
  v4 = (char *)L"\\??\\" - a1;
  v6 = (unsigned __int16 *)a1;
  do
  {
    if ( v3 == -2147483386 )
      break;
    v7 = *(_WORD *)&a1[v4];
    if ( !v7 )
      break;
    *(_WORD *)a1 = v7;
    a1 += 2;
    --v3;
  }
  while ( v3 );
  v8 = (unsigned __int16 *)(a1 - 2);
  if ( v3 )
    v8 = (unsigned __int16 *)a1;
  *v8 = 0;
  NtSystemRoot = (size_t *)RtlGetNtSystemRoot(a1, v3, a3, v4);
  result = RtlStringCbCatW(v6, v10, NtSystemRoot);
  if ( result >= 0 )
  {
    v12 = 260LL;
    v13 = v6;
    do
    {
      if ( !*v13 )
        break;
      ++v13;
      --v12;
    }
    while ( v12 );
    v14 = -1073741811;
    if ( v12 )
    {
      v15 = (char *)&v6[260 - v12];
      v16 = v12;
      v17 = 2147483646LL;
      v12 = (char *)L"\\System32\\" - v15;
      do
      {
        if ( !v17 )
          break;
        v18 = *(_WORD *)&v15[v12];
        if ( !v18 )
          break;
        *(_WORD *)v15 = v18;
        --v17;
        v15 += 2;
        --v16;
      }
      while ( v16 );
      v19 = v15 - 2;
      if ( v16 )
        v19 = v15;
      v14 = -2147483643;
      if ( v16 )
        v14 = 0;
      *(_WORD *)v19 = 0;
    }
    if ( v14 < 0 )
    {
      return v14;
    }
    else
    {
      result = RtlStringCbCatW(v6, v12, (size_t *)L"HostDriverStore");
      if ( result >= 0 )
        return RtlStringCbCatW(v6, v20, a3);
    }
  }
  return result;
}
