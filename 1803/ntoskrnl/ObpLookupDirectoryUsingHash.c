/*
 * XREFs of ObpLookupDirectoryUsingHash @ 0x140558498
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x140558350 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     ObpLockDirectoryShared @ 0x140060DB0 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x140061134 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 */

void *__fastcall ObpLookupDirectoryUsingHash(char *a1, const UNICODE_STRING *a2, __int64 a3, BOOLEAN a4)
{
  char v5; // si
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdi
  int v11; // ebp
  void *v12; // rdi
  void *v13; // rcx
  __int64 v14; // rsi
  void *result; // rax

  v5 = *(_BYTE *)(a3 + 30);
  v9 = (unsigned __int64)&a1[8 * *(unsigned __int16 *)(a3 + 28)];
  if ( !v5 )
    ObpLockDirectoryShared(a3, a1);
  v10 = *(_QWORD *)v9;
  if ( !*(_QWORD *)v9 )
    goto LABEL_15;
  v11 = *(_DWORD *)(a3 + 24);
  do
  {
    if ( *(_DWORD *)(v10 + 16) == v11
      && RtlEqualUnicodeString(
           a2,
           (PCUNICODE_STRING)(*(_QWORD *)(v10 + 8)
                            - 48LL
                            - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(v10 + 8) - 48LL + 26) & 3]
                            + 8),
           a4) )
    {
      break;
    }
    v9 = v10;
    v10 = *(_QWORD *)v10;
  }
  while ( v10 );
  if ( v10 )
  {
    v12 = *(void **)(v10 + 8);
    ObfReferenceObject(v12);
    if ( !v5 )
      ObpUnlockDirectory((__int64)a1, a3);
    v13 = *(void **)(a3 + 8);
    v14 = v9 & -(__int64)(v5 != 0);
    if ( v13 )
      ObfDereferenceObject(v13);
    *(_QWORD *)(a3 + 8) = v12;
    result = v12;
    *(_QWORD *)(a3 + 16) = v14;
  }
  else
  {
LABEL_15:
    if ( !v5 )
      ObpUnlockDirectory((__int64)a1, a3);
    return 0LL;
  }
  return result;
}
