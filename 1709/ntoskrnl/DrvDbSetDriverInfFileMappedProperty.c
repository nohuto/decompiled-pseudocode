/*
 * XREFs of DrvDbSetDriverInfFileMappedProperty @ 0x140443EA8
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x140530710 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14044435C (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x14053360C (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbSetDriverInfFileMappedProperty(
        int a1,
        int a2,
        HANDLE a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7)
{
  __int64 v7; // r10
  _UNKNOWN **i; // rbx
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  _UNKNOWN **v14; // rsi
  int v15; // ebx
  __int64 v17; // [rsp+28h] [rbp-30h]
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF

  Handle[0] = 0LL;
  v7 = 0LL;
  for ( i = &off_1402B61A0; ; i += 5 )
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
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 4 )
      return (unsigned int)-1073741802;
  }
  v13 = 5 * v7;
  v14 = &off_1402B61A0 + 5 * v7;
  if ( !v14 )
    return (unsigned int)-1073741802;
  if ( a5 != *((_DWORD *)v14 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v15 = DrvDbOpenObjectRegKey(a1, 0, 3, a2, 2, 0, (__int64)Handle, 0LL);
    if ( v15 < 0 )
      goto LABEL_12;
    a3 = Handle[0];
  }
  LODWORD(v17) = a7;
  v15 = DrvDbSetRegValueMappedProperty(v13, a3, v14, a5, a6, v17);
LABEL_12:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v15;
}
