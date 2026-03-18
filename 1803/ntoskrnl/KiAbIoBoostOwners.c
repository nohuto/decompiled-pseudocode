/*
 * XREFs of KiAbIoBoostOwners @ 0x140063C78
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x1401594C8 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbSetMinimumThreadPriority @ 0x140064924 (KiAbSetMinimumThreadPriority.c)
 */

__int64 __fastcall KiAbIoBoostOwners(__int64 a1, char a2, int a3, int a4, __int64 a5)
{
  char v5; // al
  __int64 v7; // r14
  _QWORD *v10; // rbx
  __int64 result; // rax
  __int64 **v12; // rcx
  __int64 *v13; // rcx
  char v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0;
  v5 = 0;
  v7 = a5;
  v10 = *(_QWORD **)(a1 + 56);
  if ( (a2 & 1) != 0 )
    v5 = 2;
  BYTE1(v15) = v5;
  result = BYTE2(v15);
  if ( (a2 & 2) != 0 )
    result = 1LL;
  BYTE2(v15) = result;
  while ( v10 )
  {
    KiAbSetMinimumThreadPriority((_DWORD)v10, (unsigned int)&v15, a3, a4, v7, (__int64)&v14);
    v12 = (__int64 **)v10[1];
    result = (__int64)v10;
    if ( v12 )
    {
      v10 = (_QWORD *)v10[1];
      v13 = *v12;
      if ( v13 )
      {
        do
        {
          result = *v13;
          v10 = v13;
          v13 = (__int64 *)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = (_QWORD *)(v10[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 || *v10 == result )
          break;
        result = (__int64)v10;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
    return KiAbSetMinimumThreadPriority(a1, (unsigned int)&v15, a3, a4, v7, (__int64)&v14);
  return result;
}
