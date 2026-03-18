/*
 * XREFs of OPMInitialize @ 0x1C006D794
 * Callers:
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     ??0CMutex@@QEAA@PEAJ@Z @ 0x1C006D9D0 (--0CMutex@@QEAA@PEAJ@Z.c)
 */

__int64 OPMInitialize()
{
  unsigned int v0; // ebx
  int v1; // esi
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  v5 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x4D504F47u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_DWORD *)PoolWithTag + 4) = -1071774452;
    CMutex::CMutex((CMutex *)(PoolWithTag + 3), &v5);
    CMutex::CMutex((CMutex *)(v3 + 4), &v5);
    v1 = v5;
    qword_1C018B748 = (COPM *)v3;
  }
  else
  {
    v3 = 0LL;
    qword_1C018B748 = 0LL;
  }
  if ( !v3 )
    return 3221225495LL;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v0;
}
