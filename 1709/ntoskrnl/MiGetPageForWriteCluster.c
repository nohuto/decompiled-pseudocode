/*
 * XREFs of MiGetPageForWriteCluster @ 0x140226540
 * Callers:
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1400EF550 (MiReferencePageForModifiedWrite.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiGetPageFileReservationOffset @ 0x14022647C (MiGetPageFileReservationOffset.c)
 */

__int64 MiGetPageForWriteCluster(__int64 a1, ULONG_PTR *a2, ...)
{
  __int64 v2; // r9
  _DWORD *v3; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  ULONG_PTR v9; // rdi
  __int64 v10; // r8
  _DWORD *v12; // rdx
  int v13; // r8d
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
  v2 = v16;
  v18 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, _DWORD *);
  v20 = va_arg(va2, _DWORD *);
  v3 = v20;
  v5 = v14;
  *v20 = 1;
  v6 = MiLockTransitionLeafPage(a2, (unsigned __int64)va1, v5, v2);
  v9 = v6;
  if ( !v6 )
  {
LABEL_6:
    v10 = (unsigned int)*v19;
    if ( (unsigned int)v10 <= 0x1F
      && !_bittest64(
            *(const signed __int64 **)(a1 + 8),
            (unsigned int)MiGetPageFileReservationOffset((__int64 *)va, (__int64)v19, v10)) )
    {
      v9 = qword_140389180;
      *v12 = v13 + 1;
      return (__int64)(v9 + 0x58000000000LL) / 48;
    }
    return -1LL;
  }
  if ( (*(_BYTE *)(v6 + 34) & 7) != 3 || *(_WORD *)(v6 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v16);
    v9 = 0LL;
  }
  else if ( (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFC00FC1FuLL) != v5
         || _bittest64(*(const signed __int64 **)(a1 + 8), (unsigned int)MiGetPteTimeStamp(v5, v7, v8)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v16);
    goto LABEL_6;
  }
  if ( !v9 )
    goto LABEL_6;
  *v3 = MiReferencePageForModifiedWrite(v9, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8((unsigned __int8)v16);
  if ( !*v3 )
    return -1LL;
  *v19 = 0;
  return (__int64)(v9 + 0x58000000000LL) / 48;
}
