/*
 * XREFs of ??1DolbyOEMLicenseCheck@@QEAA@XZ @ 0x18002F538
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DolbyOEMLicenseCheck::~DolbyOEMLicenseCheck(DolbyOEMLicenseCheck *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    BCryptDestroyKey(v2);
  if ( *(_QWORD *)this )
  {
    BCryptCloseAlgorithmProvider(*(BCRYPT_ALG_HANDLE *)this, 0);
    *(_QWORD *)this = 0LL;
  }
}
