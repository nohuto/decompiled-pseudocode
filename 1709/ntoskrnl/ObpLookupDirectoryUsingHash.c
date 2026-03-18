/*
 * XREFs of ObpLookupDirectoryUsingHash @ 0x14056ED60
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x14056EC10 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x1400190C8 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ObpLockDirectoryShared @ 0x14008A9CC (ObpLockDirectoryShared.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 */

void *__fastcall ObpLookupDirectoryUsingHash(__int64 a1, const UNICODE_STRING *a2, __int64 a3, BOOLEAN a4)
{
  char v5; // bp
  __int64 **v9; // rsi
  __int64 *v10; // rdi
  int v11; // r15d
  void *v12; // rdi
  void *v13; // rcx
  void *result; // rax

  v5 = *(_BYTE *)(a3 + 30);
  v9 = (__int64 **)(a1 + 8LL * *(unsigned __int16 *)(a3 + 28));
  if ( !v5 )
    ObpLockDirectoryShared(a3, a1);
  v10 = *v9;
  if ( !*v9 )
    goto LABEL_15;
  v11 = *(_DWORD *)(a3 + 24);
  do
  {
    if ( *((_DWORD *)v10 + 4) == v11
      && RtlEqualUnicodeString(
           a2,
           (PCUNICODE_STRING)(v10[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v10[1] - 48 + 26) & 3] + 8),
           a4) )
    {
      break;
    }
    v9 = (__int64 **)v10;
    v10 = (__int64 *)*v10;
  }
  while ( v10 );
  if ( v10 )
  {
    v12 = (void *)v10[1];
    ObfReferenceObject(v12);
    if ( !v5 )
    {
      ObpUnlockDirectory(a1, a3);
      v9 = 0LL;
    }
    v13 = *(void **)(a3 + 8);
    if ( v13 )
      ObfDereferenceObject(v13);
    *(_QWORD *)(a3 + 8) = v12;
    result = v12;
    *(_QWORD *)(a3 + 16) = v9;
  }
  else
  {
LABEL_15:
    if ( !v5 )
      ObpUnlockDirectory(a1, a3);
    return 0LL;
  }
  return result;
}
