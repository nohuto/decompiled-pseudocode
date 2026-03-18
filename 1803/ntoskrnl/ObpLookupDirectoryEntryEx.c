/*
 * XREFs of ObpLookupDirectoryEntryEx @ 0x140558350
 * Callers:
 *     ObpDeleteNameCheck @ 0x140519A30 (ObpDeleteNameCheck.c)
 *     ObpCreateSymbolicLinkName @ 0x14057B354 (ObpCreateSymbolicLinkName.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 *     ObpLookupDirectoryEntry @ 0x1406220A8 (ObpLookupDirectoryEntry.c)
 * Callees:
 *     ObpLockDirectoryShared @ 0x140060DB0 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x140061134 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     ObpLookupDirectoryUsingHash @ 0x140558498 (ObpLookupDirectoryUsingHash.c)
 *     ObpGetShadowDirectory @ 0x140758584 (ObpGetShadowDirectory.c)
 */

__int64 __fastcall ObpLookupDirectoryEntryEx(
        PVOID Object,
        unsigned __int16 *a2,
        char a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  unsigned __int16 *v6; // r14
  char v7; // r15
  bool v9; // r12
  unsigned int v10; // edi
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned int v14; // ebx
  unsigned int v15; // edx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v20; // r15
  __int64 v21; // rax
  __int128 v22; // rt0
  void *ShadowDirectory; // rbx
  __int64 v24; // r9
  char v25; // [rsp+68h] [rbp+20h]

  v25 = a4;
  v6 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v7 = a4;
  v9 = (a3 & 0x40) != 0;
  v10 = *a2 >> 1;
  if ( v10 < 4 )
  {
    v14 = 0;
  }
  else
  {
    v12 = 0LL;
    do
    {
      v13 = *(_QWORD *)v6;
      if ( (*(_QWORD *)v6 & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v20 = 4LL;
        do
        {
          v21 = (unsigned __int16)v13;
          if ( (unsigned __int16)v13 >= 0x61u )
          {
            if ( (unsigned __int16)v13 <= 0x7Au )
              v21 = (unsigned int)(unsigned __int16)v13 - 32;
            else
              v21 = RtlUpcaseUnicodeChar(v13);
          }
          *(_QWORD *)&v22 = v13;
          *((_QWORD *)&v22 + 1) = v21;
          v13 = v22 >> 16;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        v13 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      v6 += 4;
      v10 -= 4;
      v12 = v13 + (v12 >> 1) + 3 * v12;
    }
    while ( v10 >= 4 );
    v7 = v25;
    v14 = v12 + HIDWORD(v12);
  }
  while ( v10 )
  {
    v15 = *v6;
    v16 = (v14 >> 1) + 3 * v14;
    ++v6;
    --v10;
    if ( v15 < 0x61 )
      goto LABEL_12;
    if ( v15 > 0x7A )
    {
      v14 = RtlUpcaseUnicodeChar(v15) + v16;
    }
    else
    {
      v16 -= 32;
LABEL_12:
      v14 = v15 + v16;
    }
  }
  LOBYTE(a4) = v9;
  *(_DWORD *)(a6 + 24) = v14;
  *(_WORD *)(a6 + 28) = v14 % 0x25;
  v18 = ObpLookupDirectoryUsingHash(Object, a2, a6, a4);
  if ( !v18 && v7 )
  {
    do
    {
      LOBYTE(v17) = a5;
      ShadowDirectory = (void *)ObpGetShadowDirectory(Object, v17);
      if ( ShadowDirectory )
      {
        if ( *(_BYTE *)(a6 + 30) )
        {
          ObfReferenceObject(Object);
          ObpUnlockDirectory((__int64)Object, a6);
          ObpLockDirectoryShared(a6, ShadowDirectory);
          ObfDereferenceObject(Object);
        }
        LOBYTE(v24) = v9;
        v18 = ObpLookupDirectoryUsingHash(ShadowDirectory, a2, a6, v24);
      }
      Object = ShadowDirectory;
    }
    while ( !v18 && ShadowDirectory );
  }
  return v18;
}
