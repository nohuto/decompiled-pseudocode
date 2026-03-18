/*
 * XREFs of PpmInitPolicyConfiguration @ 0x14081FF4C
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x14045EF8C (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x1405CD9A8 (PpmEnableProfile.c)
 */

LONG PpmInitPolicyConfiguration()
{
  char *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  _QWORD *v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v0 = (char *)&unk_1403E3880;
  v1 = 43LL;
  do
  {
    v2 = 1LL << v0[4];
    if ( (v0[5] & 4) != 0 )
      *(_DWORD *)v0 >>= 1;
    v3 = &unk_140349228;
    do
    {
      *v3 |= v2;
      v3 += 175;
    }
    while ( (__int64)v3 < (__int64)qword_140349D18 );
    v0 += 40;
    --v1;
  }
  while ( v1 );
  qword_140349D30 = -1LL;
  PpmDefaultProfile[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_14034920C = (__int128)NullGuid;
  dword_14034921C = 2;
  PpmEnableProfile((__int64)PpmDefaultProfile);
  PpmBeginProfileAccumulation((__int64)PpmDefaultProfile, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x2BuLL, 0x28uLL, (int (__cdecl *)(const void *, const void *))PpmInfoConfigComparer);
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
