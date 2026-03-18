/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x140295E0C
 * Callers:
 *     RtlpHpHeapCreate @ 0x140294F54 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x140295244 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14029679C (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1402968EC (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  unsigned int v5; // ebx
  __int64 HeapManager; // rax
  int v8; // edx
  __int64 v9; // r8
  int v10; // eax
  __int128 v12; // [rsp+20h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h]

  v4 = *a1;
  v5 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v12 = v4;
  if ( BYTE3(v4) )
    LODWORD(v14) = BYTE3(v4) - 1;
  else
    LODWORD(v14) = -1;
  HIDWORD(v14) = BYTE1(v4);
  LODWORD(v15) = BYTE2(v4);
  if ( (v4 & 8) != 0 )
    HIDWORD(v15) |= 1u;
  v16 = *((_QWORD *)&v4 + 1);
  v13 = v4;
  HeapManager = RtlpHpEnvGetHeapManager(&v13, a2, (unsigned __int64)v4 >> 16, a4);
  if ( v8 )
  {
    v9 = 0x200000LL;
    if ( BYTE1(v4) == 3 )
      v9 = 0x40000000LL;
    v10 = RtlpHpVaMgrCtxAllocatorReference(HeapManager + 80, &v14, v9);
    if ( v10 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      BYTE3(v12) = v10 + 1;
      *a1 = v12;
    }
  }
  else
  {
    RtlpHpVaMgrCtxAllocatorDereference(HeapManager + 80, &v14);
  }
  return v5;
}
