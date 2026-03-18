/*
 * XREFs of MiInitializeDriverImages @ 0x140814868
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     MiSplitBitmapPages @ 0x140127E80 (MiSplitBitmapPages.c)
 *     MiBuildDynamicRegion @ 0x14015A518 (MiBuildDynamicRegion.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     VfInitBootDriversLoaded @ 0x14081526C (VfInitBootDriversLoaded.c)
 *     MiMarkBootImagesNonPaged @ 0x14081570C (MiMarkBootImagesNonPaged.c)
 *     MiCreateInitialSystemWsles @ 0x1408157CC (MiCreateInitialSystemWsles.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x14081628C (MiInitializeBootLoadedDriverPfns.c)
 *     MxMarkActiveDriverBits @ 0x1408163F0 (MxMarkActiveDriverBits.c)
 */

__int64 __fastcall MiInitializeDriverImages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // r8
  unsigned __int64 *v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  _DWORD *v8; // rdi
  unsigned __int64 i; // rbx
  __int64 result; // rax
  unsigned __int16 *v11; // rbx
  char *v12; // r14
  __int64 v13; // rdx
  unsigned __int16 v14; // cx
  char *v15; // rdi
  unsigned __int16 v16; // cx
  __int16 v17; // si
  _QWORD *PoolWithTag; // rax
  _QWORD *v19; // rcx
  char v20; // [rsp+30h] [rbp-78h] BYREF
  char v21; // [rsp+38h] [rbp-70h] BYREF

  v1 = qword_14036D8C0;
  if ( !(unsigned int)MiBuildDynamicRegion(&qword_14036C318, qword_14036D8C0, 0x8000000000uLL) )
    return 0LL;
  v3 = v1 + 0x7FFFFFFFFFLL;
  v4 = (unsigned __int64 *)&v21;
  v5 = 4LL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v4 - 1) = v1;
    *v4 = v3;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  MxMarkActiveDriverBits((unsigned int)&qword_14036C318, v1, v3, (unsigned int)&v20, 3);
  v6 = qword_14036C320;
  v7 = qword_14036C318;
  v8 = (_DWORD *)((((unsigned __int64)qword_14036C320 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = 0LL; i < v7; i += 0x8000LL )
  {
    if ( (*v8 & 0x800LL) == 0 )
    {
      if ( !(unsigned int)MiSplitBitmapPages(5u, v6, 8LL) )
        return 0LL;
      RtlClearBitsEx((__int64)&qword_14036C318, i, 0x8000uLL);
      v7 = qword_14036C318;
    }
    v6 += 4096LL;
    v8 += 2;
  }
  qword_14036C318 = i;
  if ( !(unsigned int)MiBuildDynamicRegion(qword_14036C360, qword_14036C140, 0x2000000000uLL) )
    return 0LL;
  qword_14036C090 = -1LL;
  qword_14036C0C0 = 0LL;
  qword_14036C0A0 = (__int64)&qword_14036C098;
  qword_14036C098 = (__int64)&qword_14036C098;
  if ( MmLargePageDriverBufferLength != -1 )
  {
    v11 = (unsigned __int16 *)&MmLargePageDriverBuffer;
    v12 = (char *)&MmLargePageDriverBuffer
        + 2 * (((unsigned __int64)(unsigned int)MmLargePageDriverBufferLength - 2) >> 1);
    if ( &MmLargePageDriverBuffer < (_UNKNOWN *)v12 )
    {
      v13 = 0x100002601LL;
      do
      {
        v14 = *v11;
        if ( *v11 <= 0x20u && _bittest64(&v13, v14) || v14 == 12288 )
        {
          v15 = (char *)v11;
        }
        else
        {
          if ( v14 == 42 )
          {
            byte_14036C08D = 1;
            break;
          }
          v15 = (char *)v11;
          if ( v11 < (unsigned __int16 *)v12 )
          {
            do
            {
              v16 = *(_WORD *)v15;
              if ( *(_WORD *)v15 <= 0x20u && _bittest64(&v13, v16) )
                break;
              if ( v16 == 12288 )
                break;
              v15 += 2;
            }
            while ( v15 < v12 );
          }
          v17 = 2 * ((v15 - (char *)v11) >> 1);
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x704C6D4Du);
          if ( !PoolWithTag )
            break;
          PoolWithTag[3] = v11;
          *((_WORD *)PoolWithTag + 8) = v17;
          *((_WORD *)PoolWithTag + 9) = v17;
          v19 = (_QWORD *)qword_14036C0A0;
          if ( *(__int64 **)qword_14036C0A0 != &qword_14036C098 )
            __fastfail(3u);
          *PoolWithTag = &qword_14036C098;
          v13 = 0x100002601LL;
          PoolWithTag[1] = v19;
          *v19 = PoolWithTag;
          qword_14036C0A0 = (__int64)PoolWithTag;
        }
        v11 = (unsigned __int16 *)(v15 + 2);
      }
      while ( v15 + 2 < v12 );
    }
  }
  MiInitializeBootLoadedDriverPfns(a1);
  MiReloadBootLoadedDrivers(a1);
  if ( !(unsigned int)MiCreateInitialSystemWsles() )
    return 0LL;
  MiMarkBootImagesNonPaged(a1);
  VfInitBootDriversLoaded(a1);
  result = 1LL;
  qword_14036C0B0 = (__int64)&qword_14036C0A8;
  qword_14036C0A8 = &qword_14036C0A8;
  return result;
}
