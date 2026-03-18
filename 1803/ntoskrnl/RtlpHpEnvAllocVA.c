/*
 * XREFs of RtlpHpEnvAllocVA @ 0x1402975D8
 * Callers:
 *     RtlpHpAllocVA @ 0x1402943E0 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrAllocAligned @ 0x14029668C (RtlpHpVaMgrAllocAligned.c)
 *     RtlCSparseBitmapStart @ 0x14029DB28 (RtlCSparseBitmapStart.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14029DDC4 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     MmAllocatePoolMemory @ 0x140025B30 (MmAllocatePoolMemory.c)
 *     RtlpHpEnvFreeVA @ 0x140297764 (RtlpHpEnvFreeVA.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        ULONG_PTR *a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        ULONG_PTR a8)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned int v12; // r9d
  int v13; // edx
  unsigned int v14; // esi
  unsigned int v15; // eax
  int v16; // r9d
  ULONG_PTR v17; // r8
  ULONG_PTR v18; // rcx
  int v19; // eax
  int v20; // eax
  _QWORD v22[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR v23; // [rsp+70h] [rbp+30h] BYREF
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF

  v8 = *a2;
  v9 = 1LL;
  if ( a3 )
    v9 = a3;
  v12 = a4 & 0xFFEFFFFE | 1;
  if ( (v12 & 0x2000) != 0 )
  {
    v8 = v8 - ((v8 - 1) & 0x1FFFFF) + 0x1FFFFF;
    v24 = v8;
    if ( v9 > 0x200000 )
      v24 = v9 + v8;
  }
  else
  {
    v24 = *a2;
  }
  if ( a7 )
  {
    v13 = 512;
  }
  else
  {
    v13 = 33;
    if ( a6 == 1 )
      v13 = 1;
  }
  if ( (a5 & 0x60) != 0 && v13 == 512 )
    v13 = 0;
  v23 = *a1;
  v14 = v12 & 0xFFFBFFFF;
  if ( (v12 & 0x40000) == 0 )
    v14 = v12;
  v15 = v13 | 0x80000000;
  if ( (v12 & 0x40000) == 0 )
    v15 = v13;
  v16 = MmAllocatePoolMemory(&v23, (ULONG_PTR *)&v24, v14, a5, v15);
  if ( v16 >= 0 && (v14 & 0x2000) != 0 )
  {
    v22[0] = v23;
    v17 = ~(v9 - 1) & (v9 + v23 - 1);
    v23 = v17;
    v18 = v17 - v22[0];
    a8 = v17 - v22[0];
    if ( v17 != v22[0] )
    {
      v19 = RtlpHpEnvFreeVA(v22, &a8);
      v17 = v23;
      v16 = v19;
      v18 = a8;
    }
    v22[0] = v17 + v8;
    a8 = v24 - v18 - v8;
    if ( v24 - v18 != v8 )
    {
      v20 = RtlpHpEnvFreeVA(v22, &a8);
      v17 = v23;
      v16 = v20;
    }
    *a1 = v17;
    *a2 = v8;
  }
  return (unsigned int)v16;
}
