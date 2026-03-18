/*
 * XREFs of HvpViewMapPrefetchFile @ 0x1406A0780
 * Callers:
 *     HvViewMapStart @ 0x1406A02F4 (HvViewMapStart.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmPrefetchPagesEx @ 0x14048E088 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall HvpViewMapPrefetchFile(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // esi
  _QWORD *PoolWithTag; // rax
  void *v6; // rdi
  unsigned int v7; // edx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // eax
  _QWORD *v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v4 = (unsigned int)(a2 + 4095) >> 12;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v4 + 16, 0x39354D43u);
    v13 = PoolWithTag;
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = a1;
      v7 = 0;
      *((_DWORD *)PoolWithTag + 2) = v4;
      *((_DWORD *)PoolWithTag + 3) = 0;
      if ( v4 )
      {
        v8 = PoolWithTag + 2;
        v9 = v4;
        do
        {
          v10 = v7;
          v7 += 4096;
          *v8++ = v10;
          --v9;
        }
        while ( v9 );
      }
      v11 = MmPrefetchPagesEx(1u, (__int64)&v13, 0LL);
      if ( v11 >= 0 )
        v11 = 0;
      v2 = v11;
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
