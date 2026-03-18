/*
 * XREFs of HvValidateOrInvalidatePrimaryFileHeader @ 0x1404E63B0
 * Callers:
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpFileFlushAndPurge @ 0x1404E410C (CmpFileFlushAndPurge.c)
 *     HvpHeaderCheckSum @ 0x1404E4CA4 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvValidateOrInvalidatePrimaryFileHeader(__int64 a1, char a2, char a3, char a4)
{
  int v7; // esi
  _DWORD *v8; // rdi
  int v9; // ecx
  int v10; // eax
  unsigned __int8 (__fastcall *v11)(__int64, _QWORD, int *, __int64, int *, int); // rax
  unsigned int v12; // ebx
  _DWORD *PoolWithTag; // rax
  _OWORD *v15; // rax
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  int v19; // [rsp+40h] [rbp-38h] BYREF
  _DWORD *v20; // [rsp+48h] [rbp-30h]
  int v21; // [rsp+50h] [rbp-28h]
  int v22; // [rsp+80h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 2664) )
  {
    v7 = a4 & 1;
    if ( a3 )
    {
      v8 = *(_DWORD **)(a1 + 2944);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6F494D43u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, 0x1000uLL);
      v15 = *(_OWORD **)(a1 + 64);
      v16 = 4LL;
      v17 = v8;
      do
      {
        *v17 = *v15;
        v17[1] = v15[1];
        v17[2] = v15[2];
        v17[3] = v15[3];
        v17[4] = v15[4];
        v17[5] = v15[5];
        v17[6] = v15[6];
        v17 += 8;
        v18 = v15[7];
        v15 += 8;
        *(v17 - 1) = v18;
        --v16;
      }
      while ( v16 );
    }
    if ( a2 )
    {
      v10 = *(_DWORD *)(a1 + 152);
      v8[1] = v10;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 152);
      v8[1] = v9;
      v10 = v9 - 1;
    }
    v8[2] = v10;
    v8[127] = HvpHeaderCheckSum(v8);
    v11 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, __int64, int *, int))(a1 + 40);
    v22 = 0;
    v19 = 0;
    v20 = v8;
    v21 = 4096;
    if ( v11(a1, 0LL, &v19, 1LL, &v22, v7) && CmpFileFlushAndPurge(a1, 0) )
    {
      *(_BYTE *)(a1 + 174) = a2;
      *(_DWORD *)(a1 + 164) = v8[2];
      v12 = 0;
    }
    else
    {
      v12 = -1073741491;
    }
    if ( !a3 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return 0;
  }
  return v12;
}
