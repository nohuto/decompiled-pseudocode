/*
 * XREFs of CmpVolumeManagerInitialize @ 0x14062C3AC
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpVolumeManagerInitialize()
{
  __int64 *result; // rax

  CmpVolumeManager = 0LL;
  result = &qword_140862DD8;
  qword_140862DE0 = (__int64)&qword_140862DD8;
  qword_140862DD8 = (__int64)&qword_140862DD8;
  return result;
}
