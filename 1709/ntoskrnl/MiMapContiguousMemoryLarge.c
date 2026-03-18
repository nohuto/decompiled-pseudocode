/*
 * XREFs of MiMapContiguousMemoryLarge @ 0x14014F27C
 * Callers:
 *     MiMapContiguousMemory @ 0x1401199F4 (MiMapContiguousMemory.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiDereferenceIoPages @ 0x140118C1C (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140118F7C (MiReferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x140119350 (MiIoSpaceIsConstant.c)
 *     MiMapWithLargePages @ 0x14014F450 (MiMapWithLargePages.c)
 *     MiAssignInitialPageAttribute @ 0x140154D24 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMapContiguousMemoryLarge(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3, int a4, _DWORD *a5)
{
  _QWORD *v5; // r13
  unsigned int v8; // esi
  int v9; // r12d
  int v10; // r15d
  __int64 v11; // rbp
  ULONG_PTR v12; // r14
  _BYTE *v13; // r15
  unsigned __int64 v14; // rdx
  ULONG_PTR v15; // r8
  __int64 v16; // r9
  unsigned __int8 v17; // r10
  __int64 v18; // rsi
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  int IsPfnInline; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+18h]
  int v24; // [rsp+A8h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  v5 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  *a5 = 0;
  v8 = 1;
  v9 = 3;
  if ( a3 >> 3 == 1 )
  {
    v8 = 0;
  }
  else if ( a3 >> 3 == 3 && (a3 & 7) != 0 )
  {
    v8 = 2;
  }
  IsPfnInline = MiIsPfnInline(a1);
  v10 = IsPfnInline;
  if ( IsPfnInline )
    v11 = 48 * a1 - 0x58000000000LL;
  else
    v11 = 0LL;
  v12 = 0LL;
  if ( !a2 )
    goto LABEL_17;
  v13 = (_BYTE *)(v11 + 34);
  while ( MiIsPfnInline(v12 + a1) )
  {
    if ( ((unsigned __int8)v16 & (unsigned __int8)v14) != 0
      && ((*v13 & 7) != 5 || !(unsigned int)MiIsPfnFileOnly((__int64)(v13 - 34))) )
    {
      KeBugCheckEx(0x1Au, 0x1160CuLL, v15, 0LL, 0LL);
    }
    if ( !v11 )
      goto LABEL_16;
    if ( (*v13 & 0xC0) == 0xC0 )
      MiAssignInitialPageAttribute(v13 - 34, v8, v15, v16);
    if ( (unsigned __int8)*v13 >> 6 != v8 )
      goto LABEL_16;
    v9 = v8;
LABEL_12:
    ++v12;
    v13 += 48;
    if ( v12 >= a2 )
      goto LABEL_16;
  }
  if ( v11 )
    goto LABEL_16;
  if ( v12 )
    goto LABEL_12;
  KeGetCurrentIrql();
  __writecr8(v14);
  v5 = MiIoSpaceIsConstant(a1, a2);
  __writecr8(v17);
  if ( !v5 )
    goto LABEL_12;
  v9 = *((_DWORD *)v5 + 10);
  v12 = a2;
LABEL_16:
  v10 = IsPfnInline;
LABEL_17:
  if ( v12 != a2 )
    return v21;
  if ( v10 || v5 )
    goto LABEL_23;
  if ( (int)MiReferenceIoPages(1, a1, a2, v8, &IsPfnInline, &v20) < 0 )
    return v21;
  if ( ((IsPfnInline - 1) & IsPfnInline) != 0 )
  {
    MiDereferenceIoPages(1, a1, a2);
    return v21;
  }
  v9 = *(unsigned __int16 *)(*(_QWORD *)(v20 + 48) + 2 * ((a1 & 0xFFFFFFFFFLL) - *(_QWORD *)(v20 + 40))) >> 14;
  LOWORD(IsPfnInline) = *(_WORD *)(*(_QWORD *)(v20 + 48) + 2 * ((a1 & 0xFFFFFFFFFLL) - *(_QWORD *)(v20 + 40)));
LABEL_23:
  v18 = MiMapWithLargePages(a1, a2, v23, v9, 9);
  if ( v18 )
  {
    if ( v20 )
      *a5 |= 1u;
  }
  else if ( !v10 && !v5 )
  {
    MiDereferenceIoPages(1, a1, a2);
  }
  return v18;
}
