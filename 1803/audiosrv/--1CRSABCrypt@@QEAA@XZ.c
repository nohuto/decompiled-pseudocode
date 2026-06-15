/*
 * XREFs of ??1CRSABCrypt@@QEAA@XZ @ 0x18009A1C0
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180026B40 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRSABCrypt::~CRSABCrypt(CRSABCrypt *this)
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
