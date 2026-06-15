/*
 * XREFs of StringLengthWorkerW @ 0x18002A260
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180026B40 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  const wchar_t *v3; // rax
  __int64 v4; // rcx
  HRESULT v5; // r9d
  HRESULT result; // eax

  v3 = L"Kernel-OneCore-DeviceFamilyID";
  v4 = 0x7FFFFFFFLL;
  v5 = 0;
  while ( *v3 )
  {
    ++v3;
    if ( !--v4 )
    {
      v5 = -2147024809;
      break;
    }
  }
  result = v5;
  if ( pcchLength )
  {
    if ( v5 < 0 )
      *pcchLength = 0LL;
    else
      *pcchLength = 0x7FFFFFFF - v4;
  }
  return result;
}
