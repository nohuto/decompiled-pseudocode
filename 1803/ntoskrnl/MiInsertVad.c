/*
 * XREFs of MiInsertVad @ 0x14001F3B0
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiInsertPrivateVad @ 0x1400E4BE4 (MiInsertPrivateVad.c)
 *     MiGetWsAndInsertVad @ 0x1400E6090 (MiGetWsAndInsertVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140137C60 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140181AD8 (MiInsertViewOfPhysicalSection.c)
 *     MiReInsertPlaceholderVad @ 0x140268574 (MiReInsertPlaceholderVad.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 */

__int64 __fastcall MiInsertVad(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 *v11; // rdx
  unsigned __int64 v12; // r8
  __int64 *v13; // rax
  __int64 result; // rax

  v5 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v6 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v7 = *(unsigned int *)(a1 + 24);
  ++*(_QWORD *)(a2 + 1592);
  v8 = v7 | v6;
  v9 = *(_QWORD *)(a2 + 1152) >> 12;
  *(_QWORD *)(a2 + 1584) = a1;
  if ( v5 <= v9 && !a3 )
  {
    *(_QWORD *)(a2 + 824) += ((v5 - v8) << 12) + 4096;
    v10 = *(_QWORD *)(a2 + 824);
    if ( *(_QWORD *)(a2 + 816) < v10 )
      *(_QWORD *)(a2 + 816) = v10;
  }
  v11 = *(__int64 **)(a2 + 1576);
  v12 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  LOBYTE(v13) = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      if ( v12 > (*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32))
        || v12 >= (*((unsigned int *)v11 + 6) | ((unsigned __int64)*((unsigned __int8 *)v11 + 32) << 32)) )
      {
        v13 = (__int64 *)v11[1];
        if ( !v13 )
        {
          LOBYTE(v13) = 1;
          break;
        }
      }
      else
      {
        v13 = (__int64 *)*v11;
        if ( !*v11 )
          break;
      }
      v11 = v13;
    }
  }
  RtlAvlInsertNodeEx(a2 + 1576, v11, (unsigned __int8)v13, a1);
  result = *(_DWORD *)(a1 + 48) & 7;
  if ( (_DWORD)result == 5 || (_DWORD)result == 2 && (result = *(unsigned int *)(a1 + 64), (result & 0x1000000) != 0) )
    ++*(_DWORD *)(a2 + 1708);
  return result;
}
