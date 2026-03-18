/*
 * XREFs of DrvDbSetDriverFileMappedProperty @ 0x140744918
 * Callers:
 *     DrvDbDispatchDriverFile @ 0x140745820 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140745158 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverFileMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7)
{
  int v7; // edi
  __int64 v9; // r10
  _UNKNOWN **i; // r8
  _QWORD *v13; // r9
  __int64 v14; // rcx
  int v15; // ebx
  _UNKNOWN **v17; // rsi
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF

  Handle[0] = 0LL;
  v7 = *(_DWORD *)(a4 + 16);
  v9 = 0LL;
  for ( i = &off_14028EB70; ; i += 5 )
  {
    v13 = *i;
    if ( *((_DWORD *)*i + 4) == v7 )
    {
      v14 = *v13 - *(_QWORD *)a4;
      if ( *v13 == *(_QWORD *)a4 )
        v14 = v13[1] - *(_QWORD *)(a4 + 8);
      if ( !v14 )
        break;
    }
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 2 )
      return (unsigned int)-1073741802;
  }
  v17 = &off_14028EB70 + 5 * v9;
  if ( !v17 )
    return (unsigned int)-1073741802;
  if ( a5 != *((_DWORD *)v17 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v15 = DrvDbOpenObjectRegKey(a1, 0LL, 4u, a2, 2, 0, Handle, 0LL);
    if ( v15 < 0 )
      goto LABEL_17;
    a3 = Handle[0];
  }
  v15 = DrvDbSetRegValueMappedProperty(v14, a3, v17, a5, a6, a7);
LABEL_17:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v15;
}
