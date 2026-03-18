/*
 * XREFs of SdbpCheckPackageAttributes @ 0x14076EF30
 * Callers:
 *     <none>
 * Callees:
 *     ULongLongMult @ 0x1401E5E10 (ULongLongMult.c)
 *     AslStringPatternMatchW @ 0x1404F5024 (AslStringPatternMatchW.c)
 *     SdbGetStringTagPtr @ 0x1404F5740 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x1404F5C54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     SdbReadQWORDTag @ 0x140770074 (SdbReadQWORDTag.c)
 *     SdbpCheckFromVersion @ 0x140771BFC (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x140771C3C (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x140771C7C (SdbpCheckVersion.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckPackageAttributes(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        ULONGLONG pullResult)
{
  unsigned int v6; // ebx
  int v9; // ebp
  unsigned __int64 v10; // rsi
  ULONGLONG *v11; // r15
  unsigned int FirstTag; // r10d
  ULONGLONG v13; // rax
  ULONGLONG v14; // r9
  char *v15; // r11
  ULONGLONG v16; // rdi
  ULONGLONG v17; // rcx
  unsigned int v18; // eax
  WCHAR *StringTagPtr; // rax
  int v20; // eax
  __int64 QWORDTag; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int DWORDTag; // ecx

  v6 = 0;
  v9 = 1;
  v10 = 0LL;
  v11 = *(ULONGLONG **)(pullResult + 88);
  *a1 = 0;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(*(_QWORD *)(a2 + 8), a5, *(_WORD *)((char *)&unk_140359B28 + v10));
    if ( FirstTag )
      break;
LABEL_34:
    v10 += 4LL;
    if ( v10 >= 0x28 )
    {
      *a1 = v9;
      return 1;
    }
  }
  v13 = v11[2];
  v14 = 0LL;
  if ( v13 )
  {
    v15 = (char *)&unk_140359B28;
    do
    {
      v16 = 0LL;
      if ( v14 < v13 )
      {
        if ( ULongLongMult(v11[1], v14, &pullResult) < 0
          || (v17 = v11[5], v16 = v17 + pullResult, v17 + pullResult < v17) )
        {
          v16 = 0LL;
        }
      }
      if ( *(_WORD *)v16 == *(_WORD *)&v15[v10 + 2] )
        break;
      v13 = v11[2];
      ++v14;
      v16 = 0LL;
    }
    while ( v14 < v13 );
    if ( v16 )
    {
      v18 = *(unsigned __int16 *)&v15[v10];
      if ( v18 == 16453 )
      {
        DWORDTag = SdbReadDWORDTag(*(_QWORD *)(a2 + 8), FirstTag, 0xFFFFFFFF);
        if ( DWORDTag == -1 )
          return v6;
        v20 = DWORDTag == *(_DWORD *)(v16 + 8);
        goto LABEL_31;
      }
      if ( v18 != 20500 )
      {
        if ( v18 == 20501 )
          goto LABEL_25;
        if ( v18 == 20502 )
        {
LABEL_23:
          QWORDTag = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
          if ( QWORDTag == -1 )
            return v6;
          v20 = SdbpCheckUptoVersion(QWORDTag, *(_QWORD *)(v16 + 8));
LABEL_31:
          if ( !v9 || (v9 = 1, !v20) )
            v9 = 0;
          goto LABEL_34;
        }
        if ( v18 != 20503 )
        {
          if ( v18 != 20504 )
          {
            if ( v18 != 20505 )
            {
              if ( v18 <= 0x6028 )
                return v6;
              if ( v18 > 0x602B )
                return v6;
              StringTagPtr = (WCHAR *)SdbGetStringTagPtr(*(_QWORD *)(a2 + 8), FirstTag);
              if ( !StringTagPtr )
                return v6;
              v20 = AslStringPatternMatchW(StringTagPtr, *(WCHAR **)(v16 + 8));
              goto LABEL_31;
            }
            goto LABEL_23;
          }
LABEL_25:
          v22 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
          if ( v22 == -1 )
            return v6;
          v20 = SdbpCheckFromVersion(v22, *(_QWORD *)(v16 + 8));
          goto LABEL_31;
        }
      }
      v23 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
      if ( v23 == -1 )
        return v6;
      v20 = SdbpCheckVersion(v23, *(_QWORD *)(v16 + 8));
      goto LABEL_31;
    }
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpCheckPackageAttributes",
    3460,
    (unsigned int)"Failed to find Attribute to use for sdb tag");
  return v6;
}
