/*
 * XREFs of MiInitializeDriverImages @ 0x14082EE90
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F739C (MiSystemVaToDynamicBitmap.c)
 *     MiSplitBitmapPages @ 0x1400F7414 (MiSplitBitmapPages.c)
 *     MiBuildDynamicRegion @ 0x140138F04 (MiBuildDynamicRegion.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     VfInitBootDriversLoaded @ 0x1408353DC (VfInitBootDriversLoaded.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x14084928C (MiInitializeBootLoadedDriverPfns.c)
 *     MiMarkBootImagesNonPaged @ 0x14084994C (MiMarkBootImagesNonPaged.c)
 *     MxMarkActiveDriverBits @ 0x14084A6C4 (MxMarkActiveDriverBits.c)
 *     MiCreateInitialSystemWsles @ 0x140857248 (MiCreateInitialSystemWsles.c)
 */

__int64 __fastcall MiInitializeDriverImages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 *v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  _DWORD *v8; // rdi
  unsigned __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  char *v13; // rbx
  char *v14; // r15
  __int64 v15; // r8
  unsigned __int16 v16; // cx
  char *j; // rdi
  unsigned __int16 v18; // cx
  __int16 v19; // si
  _QWORD *PoolWithTag; // rax
  _QWORD *v21; // rcx
  char v22; // [rsp+30h] [rbp-78h] BYREF
  char v23; // [rsp+38h] [rbp-70h] BYREF

  v1 = qword_140389BA0;
  v3 = MiSystemVaToDynamicBitmap(12);
  if ( !(unsigned int)MiBuildDynamicRegion(v3, v1, 0x8000000000uLL) )
    return 0LL;
  v4 = v1 + 0x7FFFFFFFFFLL;
  v5 = (unsigned __int64 *)&v23;
  v6 = 4LL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v5 - 1) = v1;
    *v5 = v4;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  MxMarkActiveDriverBits((unsigned int)&qword_1403886A0, v1, v4, (unsigned int)&v22, 3);
  v7 = qword_1403886A8;
  v8 = (_DWORD *)((((unsigned __int64)qword_1403886A8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = 0LL; i < qword_1403886A0; i += 0x8000LL )
  {
    if ( (*v8 & 0x800LL) == 0 )
    {
      if ( !(unsigned int)MiSplitBitmapPages(5u, v7, 8LL) )
        return 0LL;
      RtlClearBitsEx((__int64)&qword_1403886A0, i, 0x8000uLL);
    }
    v7 += 4096LL;
    v8 += 2;
  }
  qword_1403886A0 = i;
  v10 = MiSystemVaToDynamicBitmap(11);
  if ( !(unsigned int)MiBuildDynamicRegion(v10, v11, 0x2000000000uLL) )
    return 0LL;
  qword_1403883D0 = -1LL;
  qword_140388400 = 0LL;
  qword_1403883E0 = (__int64)&qword_1403883D8;
  qword_1403883D8 = (__int64)&qword_1403883D8;
  if ( MmLargePageDriverBufferLength != -1 )
  {
    v13 = (char *)&MmLargePageDriverBuffer;
    v14 = (char *)&MmLargePageDriverBuffer
        + 2 * (((unsigned __int64)(unsigned int)MmLargePageDriverBufferLength - 2) >> 1);
    if ( &MmLargePageDriverBuffer < (_UNKNOWN *)v14 )
    {
      v15 = 0x100002601LL;
      do
      {
        v16 = *(_WORD *)v13;
        if ( *(_WORD *)v13 <= 0x20u && _bittest64(&v15, v16) || v16 == 12288 )
        {
          j = v13;
        }
        else
        {
          if ( v16 == 42 )
          {
            byte_1403883CD = 1;
            break;
          }
          for ( j = v13; j < v14; j += 2 )
          {
            v18 = *(_WORD *)j;
            if ( *(_WORD *)j <= 0x20u && _bittest64(&v15, v18) )
              break;
            if ( v18 == 12288 )
              break;
          }
          v19 = 2 * ((j - v13) >> 1);
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x704C6D4Du);
          if ( !PoolWithTag )
            break;
          PoolWithTag[3] = v13;
          *((_WORD *)PoolWithTag + 8) = v19;
          *((_WORD *)PoolWithTag + 9) = v19;
          v21 = (_QWORD *)qword_1403883E0;
          if ( *(__int64 **)qword_1403883E0 != &qword_1403883D8 )
            __fastfail(3u);
          *PoolWithTag = &qword_1403883D8;
          PoolWithTag[1] = v21;
          v15 = 0x100002601LL;
          *v21 = PoolWithTag;
          qword_1403883E0 = (__int64)PoolWithTag;
        }
        v13 = j + 2;
      }
      while ( j + 2 < v14 );
    }
  }
  MiInitializeBootLoadedDriverPfns(a1);
  MiReloadBootLoadedDrivers(a1);
  if ( !(unsigned int)MiCreateInitialSystemWsles() )
    return 0LL;
  MiMarkBootImagesNonPaged(a1);
  VfInitBootDriversLoaded(a1);
  result = 1LL;
  qword_1403883F0 = (__int64)&qword_1403883E8;
  qword_1403883E8 = &qword_1403883E8;
  return result;
}
