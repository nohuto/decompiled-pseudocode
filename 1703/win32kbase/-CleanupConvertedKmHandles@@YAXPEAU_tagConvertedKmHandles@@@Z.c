/*
 * XREFs of ?CleanupConvertedKmHandles@@YAXPEAU_tagConvertedKmHandles@@@Z @ 0x1C007E660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CleanupConvertedKmHandles(struct _tagConvertedKmHandles *a1)
{
  HANDLE *v2; // rdi
  __int64 v3; // rsi

  if ( *(_DWORD *)a1 )
  {
    v2 = (HANDLE *)((char *)a1 + 8);
    v3 = *(unsigned int *)a1;
    do
    {
      if ( *v2 )
        ZwClose(*v2);
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  Win32FreePool((__int64)a1);
}
