/*
 * XREFs of DrvDbSetDriverInfFileMappedProperty @ 0x140744A48
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1404E8230 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140745158 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverInfFileMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // r10
  _UNKNOWN **i; // r8
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  int v13; // ebx
  _UNKNOWN **v15; // rsi
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF

  Handle[0] = 0LL;
  v8 = 0LL;
  for ( i = &off_140289780; ; i += 5 )
  {
    v11 = *i;
    if ( *((_DWORD *)*i + 4) == *(_DWORD *)(a4 + 16) )
    {
      v12 = *v11 - *(_QWORD *)a4;
      if ( *v11 == *(_QWORD *)a4 )
        v12 = v11[1] - *(_QWORD *)(a4 + 8);
      if ( !v12 )
        break;
    }
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= 4 )
      return (unsigned int)-1073741802;
  }
  v15 = &off_140289780 + 5 * v8;
  if ( !v15 )
    return (unsigned int)-1073741802;
  if ( a5 != *((_DWORD *)v15 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v13 = DrvDbOpenObjectRegKey(a1, 0LL, 3u, a2, 2, 0, Handle, 0LL);
    if ( v13 < 0 )
      goto LABEL_17;
    a3 = Handle[0];
  }
  v13 = DrvDbSetRegValueMappedProperty(v12, a3, v15, a5, a6, a7);
LABEL_17:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v13;
}
