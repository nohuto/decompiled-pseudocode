/*
 * XREFs of StringLengthWorkerW @ 0x1801A8908
 * Callers:
 *     ?LoadLibraryShellCompositor@CHolographicClient@@AEAAPEAUHINSTANCE__@@XZ @ 0x1801A7C6C (-LoadLibraryShellCompositor@CHolographicClient@@AEAAPEAUHINSTANCE__@@XZ.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  __int64 v3; // rdx
  HRESULT result; // eax

  v3 = 260LL;
  do
  {
    if ( !*psz )
      break;
    ++psz;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0x80070057 : 0;
  if ( pcchLength )
  {
    if ( v3 )
      *pcchLength = 260 - v3;
    else
      *pcchLength = 0LL;
  }
  return result;
}
