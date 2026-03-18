/*
 * XREFs of AslpFileVerQueryBlock @ 0x1407DE780
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1407DDF44 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x1407DE540 (AslpFileQueryVersionString.c)
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     AslpFileStringTokenize @ 0x1402C2C94 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1402C2D88 (AslpFileVerBlockGetValueOffset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslStringDuplicate @ 0x1405FC890 (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, const wchar_t *a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  const char *v11; // r9
  int v12; // r8d
  _WORD *v13; // rcx
  char *v14; // rsi
  unsigned __int16 *v15; // rbx
  __int16 v16; // r14
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  const wchar_t *v20; // r12
  _WORD *v22; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  i = a1;
  P = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
  {
    v7 = -1073741811;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileVerQueryBlock", 1947, (unsigned int)"Version block invalid");
    return v7;
  }
  v8 = AslStringDuplicate((wchar_t **)&P, a2);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v10 = *i;
    if ( *i <= 0x7FFFu )
    {
      if ( v10 >= 8u )
      {
        v13 = P;
        v14 = (char *)i + v10;
        v15 = (unsigned __int16 *)v14;
        v16 = *((_WORD *)v14 - 1);
        *((_WORD *)v14 - 1) = 0;
LABEL_23:
        v20 = AslpFileStringTokenize(v13, v9, &v22);
        if ( v20 )
        {
          v17 = (_DWORD)v14 - (_DWORD)i;
          if ( (unsigned int)((_DWORD)v14 - (_DWORD)i) >= 8
            && *i <= v17
            && AslpFileVerBlockGetValueOffset(&v24, (__int64)i, v17) >= 0 )
          {
            v18 = *i;
            v19 = v24 + ((i[1] + 3) & 0xFFFFFFFC);
            v24 = v19;
            if ( v19 <= v18 )
            {
              v15 = (unsigned __int16 *)((char *)i + v18);
              for ( i = (unsigned __int16 *)((char *)i + v19);
                    i < v15 && *i > 8u && *i <= (unsigned __int64)((char *)v15 - (char *)i);
                    i = (unsigned __int16 *)((char *)i + ((*i + 3) & 0xFFFFFFFC)) )
              {
                if ( !wcsicmp(v20, i + 3) )
                {
                  v13 = 0LL;
                  goto LABEL_23;
                }
              }
            }
          }
          v7 = -1073741275;
        }
        else
        {
          *a3 = i;
          *a4 = (char *)v15 - (char *)i;
          v7 = 0;
        }
        *((_WORD *)v14 - 1) = v16;
        goto LABEL_26;
      }
      v11 = "VersionBlock not long enough";
      v12 = 1970;
    }
    else
    {
      v11 = "VersionBlock is too long";
      v12 = 1965;
    }
    v7 = -1073741811;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileVerQueryBlock", v12, (_DWORD)v11);
  }
  else
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileVerQueryBlock",
      1953,
      (unsigned int)"AslStringDuplicate failed [%x]",
      v8);
  }
LABEL_26:
  if ( P )
    ExFreePoolWithTag(P, 0x74705041u);
  return v7;
}
