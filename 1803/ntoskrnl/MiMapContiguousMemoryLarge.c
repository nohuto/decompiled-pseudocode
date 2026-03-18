/*
 * XREFs of MiMapContiguousMemoryLarge @ 0x140177CFC
 * Callers:
 *     MiMapContiguousMemory @ 0x14013A054 (MiMapContiguousMemory.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiDereferenceIoPages @ 0x140139794 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x140139FA8 (MiIoSpaceIsConstant.c)
 *     MiMapWithLargePages @ 0x140177EDC (MiMapWithLargePages.c)
 *     MiAssignInitialPageAttribute @ 0x140181FB4 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMapContiguousMemoryLarge(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3, int a4, _DWORD *a5)
{
  _QWORD *v5; // r13
  unsigned int v8; // esi
  int v9; // r12d
  int v10; // r15d
  __int64 v11; // rbp
  ULONG_PTR v12; // r14
  unsigned __int8 *v13; // r15
  unsigned __int64 v14; // rdx
  ULONG_PTR v15; // r8
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // r10
  __int64 v18; // rsi
  unsigned __int8 v20; // cl
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h]
  int IsPfnInline; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+18h]
  int v25; // [rsp+A8h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v5 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
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
    goto LABEL_15;
  v13 = (unsigned __int8 *)(v11 + 34);
  while ( MiIsPfnInline(v12 + a1) )
  {
    if ( (v16 & (unsigned __int8)v14) != 0 && ((*v13 & 7) != 5 || !(unsigned int)MiIsPfnFileOnly((__int64)(v13 - 34))) )
      KeBugCheckEx(0x1Au, 0x1160CuLL, v15, 0LL, 0LL);
    if ( !v11 )
      goto LABEL_14;
    v20 = *v13;
    if ( (*v13 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v13 - 34, v8);
      v20 = *v13;
    }
    if ( v20 >> 6 != v8 )
      goto LABEL_14;
    v9 = v8;
LABEL_10:
    ++v12;
    v13 += 48;
    if ( v12 >= a2 )
      goto LABEL_14;
  }
  if ( v11 )
    goto LABEL_14;
  if ( v12 )
    goto LABEL_10;
  KeGetCurrentIrql();
  __writecr8(v14);
  v5 = MiIoSpaceIsConstant(a1, a2);
  __writecr8(v17);
  if ( !v5 )
    goto LABEL_10;
  v9 = *((_DWORD *)v5 + 10);
  v12 = a2;
LABEL_14:
  v10 = IsPfnInline;
LABEL_15:
  if ( v12 != a2 )
    return v22;
  if ( v10 || v5 )
    goto LABEL_21;
  if ( (int)MiReferenceIoPages(1, a1, a2, v8, &IsPfnInline, &v21) < 0 )
    return v22;
  if ( ((IsPfnInline - 1) & IsPfnInline) != 0 )
  {
    MiDereferenceIoPages(1, a1, a2);
    return v22;
  }
  v9 = *(unsigned __int16 *)(*(_QWORD *)(v21 + 48) + 2 * ((a1 & 0xFFFFFFFFFLL) - *(_QWORD *)(v21 + 40))) >> 14;
  LOWORD(IsPfnInline) = *(_WORD *)(*(_QWORD *)(v21 + 48) + 2 * ((a1 & 0xFFFFFFFFFLL) - *(_QWORD *)(v21 + 40)));
LABEL_21:
  v18 = MiMapWithLargePages(a1, a2, v24, v9, 9);
  if ( v18 )
  {
    if ( v21 )
      *a5 |= 1u;
  }
  else if ( !v10 && !v5 )
  {
    MiDereferenceIoPages(1, a1, a2);
  }
  return v18;
}
