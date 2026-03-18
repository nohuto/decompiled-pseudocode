/*
 * XREFs of CmpDoBuildVirtualStack @ 0x1406F5048
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1406F5730 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpAddSubKeyEx @ 0x140513418 (CmpAddSubKeyEx.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405DDE50 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpCreateEmptyKey @ 0x1406F4C7C (CmpCreateEmptyKey.c)
 */

__int64 __fastcall CmpDoBuildVirtualStack(__int64 a1, unsigned int a2, ULONG_PTR a3)
{
  __int64 v3; // rsi
  unsigned int *i; // rdi
  unsigned int v8; // eax
  unsigned int EmptyKey; // eax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !a2 )
    return 0LL;
  for ( i = (unsigned int *)(a1 + 32); ; i += 12 )
  {
    CmpFindSubKeyByNameWithStatus(a3, *((_QWORD *)i - 2), (unsigned __int16 *)(a1 + 48 * v3), &v16);
    v8 = v16;
    i[1] = v16;
    if ( v8 != -1 )
      goto LABEL_10;
    if ( !HvpMarkCellDirty(a3, *i, 0) )
      break;
    EmptyKey = CmpCreateEmptyKey(a3, (unsigned __int16 *)(a1 + 48 * v3), *i);
    i[1] = EmptyKey;
    if ( EmptyKey == -1 || !CmpAddSubKeyEx(a3, *i, EmptyKey, 0) )
      return 3221225626LL;
    if ( (_DWORD)v3 )
    {
      v10 = *((_QWORD *)i - 2);
      v11 = *((unsigned __int16 *)i - 16);
      if ( (unsigned __int16)*(_DWORD *)(v10 + 52) < v11 )
        *(_WORD *)(v10 + 52) = v11;
    }
LABEL_10:
    if ( (unsigned int)v3 < a2 - 1 )
    {
      v12 = i[1];
      v13 = 48LL * (unsigned int)(v3 + 1);
      *(_DWORD *)(v13 + a1 + 32) = v12;
      v14 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64))(a3 + 8))(a3, v12, v13 + a1 + 24);
      *(_QWORD *)(v13 + a1 + 16) = v14;
      if ( !v14 )
        return 3221225626LL;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= a2 )
      return 0LL;
  }
  return 3221225853LL;
}
