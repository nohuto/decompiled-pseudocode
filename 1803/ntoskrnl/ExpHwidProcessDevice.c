/*
 * XREFs of ExpHwidProcessDevice @ 0x1405D4B18
 * Callers:
 *     sub_1405D49A0 @ 0x1405D49A0 (sub_1405D49A0.c)
 *     sub_1405E37C0 @ 0x1405E37C0 (sub_1405E37C0.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1405D4C4C (ExpHwidAppendDeviceInfoBlock.c)
 */

__int64 __fastcall ExpHwidProcessDevice(unsigned __int16 *a1, __int128 *a2, __int64 a3)
{
  char v3; // bp
  char *v7; // rdi
  __int128 v8; // xmm0
  unsigned int v9; // esi
  char *PoolWithTag; // rax
  unsigned __int16 v11; // ax
  unsigned int appended; // ebx
  _DWORD v14[8]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_BYTE *)(a3 + 12);
  v7 = 0LL;
  if ( !v3 )
  {
    memset(v14, 0, sizeof(v14));
    LOBYTE(v14[1]) = (a2 != 0LL) + 1;
    HIWORD(v14[1]) = a1[16];
    BYTE1(v14[1]) = *((_BYTE *)a1 + 34);
    v14[2] = *((_DWORD *)a1 + 9);
    if ( a2 )
      v8 = *a2;
    else
      v8 = *((_OWORD *)a1 + 1);
    *(_OWORD *)&v14[3] = v8;
  }
  v9 = a1[28] + *a1;
  if ( !v3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v9, 0x20534C53u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memmove(PoolWithTag, *((const void **)a1 + 1), *a1);
    v11 = a1[28];
    if ( v11 )
      memmove(&v7[2 * ((unsigned __int64)*a1 >> 1)], *((const void **)a1 + 8), v11);
  }
  appended = ExpHwidAppendDeviceInfoBlock(a3, v14, v7, v9);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return appended;
}
