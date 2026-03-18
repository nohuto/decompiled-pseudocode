/*
 * XREFs of DrvDbGetDriverInfFileMappedProperty @ 0x1404E9634
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1404E8230 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1404E8D50 (DrvDbGetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverInfFileMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  _UNKNOWN **v11; // r11
  __int64 v12; // r8
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  _UNKNOWN **v15; // rdi
  int RegValueMappedProperty; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF

  Handle[0] = 0LL;
  v11 = &off_140289780;
  *a5 = 0;
  *a8 = 0;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *v11;
    if ( *((_DWORD *)*v11 + 4) == *(_DWORD *)(a4 + 16) )
    {
      v14 = *v13 - *(_QWORD *)a4;
      if ( *v13 == *(_QWORD *)a4 )
        v14 = v13[1] - *(_QWORD *)(a4 + 8);
      if ( !v14 )
        break;
    }
    v12 = (unsigned int)(v12 + 1);
    v11 += 5;
    if ( (unsigned int)v12 >= 4 )
      return (unsigned int)-1073741802;
  }
  v15 = &off_140289780 + 5 * v12;
  if ( !v15 )
    return (unsigned int)-1073741802;
  if ( !a3 )
  {
    RegValueMappedProperty = DrvDbOpenObjectRegKey(a1, 0LL, 3u, a2, 1, 0, Handle, 0LL);
    if ( RegValueMappedProperty < 0 )
      goto LABEL_11;
    a3 = Handle[0];
  }
  RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v14, a3, (__int64)v15, a5, a6, a7, a8);
LABEL_11:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)RegValueMappedProperty;
}
