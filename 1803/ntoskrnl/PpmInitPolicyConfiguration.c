/*
 * XREFs of PpmInitPolicyConfiguration @ 0x1408C19C4
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x140584DA4 (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x14064A9B4 (PpmEnableProfile.c)
 */

void PpmInitPolicyConfiguration()
{
  char *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  _QWORD *v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v0 = (char *)&unk_14044BAF0;
  v1 = 46LL;
  do
  {
    v2 = 1LL << v0[4];
    if ( (v0[5] & 4) != 0 )
      *(_DWORD *)v0 >>= 1;
    v3 = &unk_1403A65A8;
    do
    {
      *v3 |= v2;
      v3 += 336;
    }
    while ( (__int64)v3 < (__int64)qword_1403A7AA8 );
    v0 += 40;
    --v1;
  }
  while ( v1 );
  qword_1403A7AC0 = -1LL;
  PpmDefaultProfile[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_1403A658C = (__int128)NullGuid;
  dword_1403A659C = 2;
  PpmEnableProfile((__int64)PpmDefaultProfile, (__int64)v0);
  PpmBeginProfileAccumulation((__int64)PpmDefaultProfile, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x2EuLL, 0x28uLL, (int (__cdecl *)(const void *, const void *))PpmInfoConfigComparer);
  PpmReleaseLock(&PpmPerfPolicyLock);
}
