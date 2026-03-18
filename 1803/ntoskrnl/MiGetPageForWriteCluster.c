/*
 * XREFs of MiGetPageForWriteCluster @ 0x140150850
 * Callers:
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiReferencePageForModifiedWrite @ 0x140131E00 (MiReferencePageForModifiedWrite.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiGetPageFileReservationOffset @ 0x14025F90C (MiGetPageFileReservationOffset.c)
 */

__int64 MiGetPageForWriteCluster(__int64 a1, ULONG_PTR a2, ...)
{
  _DWORD *v2; // r14
  _DWORD *v3; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  ULONG_PTR v10; // rdi
  __int64 v11; // rdx
  int v13; // edx
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF
  va_list va1; // [rsp+68h] [rbp+20h]
  __int64 v18; // [rsp+70h] [rbp+28h]
  _DWORD *v19; // [rsp+78h] [rbp+30h]
  _DWORD *v20; // [rsp+80h] [rbp+38h]
  va_list va2; // [rsp+88h] [rbp+40h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, _DWORD *);
  v20 = va_arg(va2, _DWORD *);
  v2 = v20;
  v3 = v19;
  v5 = v14;
  *v20 = 1;
  v6 = MiLockTransitionLeafPage(a2, (__int64 *)va1);
  v9 = 0;
  v10 = v6;
  if ( !v6 )
  {
LABEL_6:
    v11 = (unsigned int)*v3;
    if ( (unsigned int)v11 <= 0x1F
      && !_bittest64(
            *(const signed __int64 **)(a1 + 8),
            (unsigned int)MiGetPageFileReservationOffset((__int64 *)va, v11)) )
    {
      v10 = qword_1403CC400;
      v9 = v13 + 1;
      goto LABEL_16;
    }
    return -1LL;
  }
  if ( (*(_BYTE *)(v6 + 34) & 7) != 3 || *(_WORD *)(v6 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v16);
    v10 = 0LL;
  }
  else if ( (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFC00FC1FuLL) != v5
         || _bittest64(*(const signed __int64 **)(a1 + 8), (unsigned int)MiGetPteTimeStamp(v5)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v16);
    goto LABEL_6;
  }
  if ( !v10 )
    goto LABEL_6;
  *v2 = MiReferencePageForModifiedWrite(v10, 0, v7, v8);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8((unsigned __int8)v16);
  if ( !*v2 )
    return -1LL;
LABEL_16:
  *v3 = v9;
  return (__int64)(v10 + 0x58000000000LL) / 48;
}
