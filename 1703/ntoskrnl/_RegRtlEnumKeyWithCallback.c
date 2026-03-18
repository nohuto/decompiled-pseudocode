/*
 * XREFs of _RegRtlEnumKeyWithCallback @ 0x1405AA62C
 * Callers:
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405AB144 (_PnpCtxRegEnumKeyWithCallback.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400E77A0 (IoGetStackLimits.c)
 *     _SysCtxInternalEnumSubkeyCallback @ 0x140155DC4 (_SysCtxInternalEnumSubkeyCallback.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlQueryInfoKey @ 0x14044A174 (_RegRtlQueryInfoKey.c)
 *     _RegRtlEnumKey @ 0x1405AA7F4 (_RegRtlEnumKey.c)
 */

__int64 __fastcall RegRtlEnumKeyWithCallback(void *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  void *v5; // rsi
  unsigned int v7; // r9d
  unsigned int v8; // edx
  int v9; // eax
  unsigned __int64 v10; // rdi
  char *v11; // rbp
  unsigned int v12; // r14d
  unsigned int v13; // eax
  int v14; // eax
  PVOID PoolWithTag; // rax
  PVOID v17; // rax
  unsigned __int64 HighLimit; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 LowLimit; // [rsp+38h] [rbp-A0h] BYREF
  char v20; // [rsp+40h] [rbp-98h] BYREF

  v4 = 0;
  v5 = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
    return (unsigned int)-1073741670;
  if ( (unsigned int)RegRtlQueryInfoKey(a1, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL) )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    v7 = HighLimit;
    if ( (_DWORD)HighLimit )
    {
      v8 = HighLimit + 1;
      v9 = -1;
      if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
        v9 = HighLimit + 1;
      v7 = v9;
      v4 = v8 < (unsigned int)HighLimit ? 0xC0000095 : 0;
      if ( v8 < (unsigned int)HighLimit )
        return v4;
    }
    v10 = 2LL * v7;
    if ( v10 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    v4 = 0;
  }
  if ( (unsigned int)v10 > 0x50 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x4C474552u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v11 = (char *)PoolWithTag;
  }
  else
  {
    v11 = &v20;
    LODWORD(v10) = 80;
  }
  v12 = 0;
  while ( 1 )
  {
    LODWORD(HighLimit) = (unsigned int)v10 >> 1;
    v13 = RegRtlEnumKey(a1, v12, v11, &HighLimit);
    if ( v13 == -2147483622 || v13 == -1073741444 )
      break;
    if ( v13 == -1073741789 )
    {
      v10 = 2LL * (unsigned int)HighLimit;
      if ( v10 > 0xFFFFFFFF )
      {
        v4 = -1073741675;
        break;
      }
      v4 = 0;
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v17 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x4C474552u);
      v5 = v17;
      if ( !v17 )
        return (unsigned int)-1073741801;
      v11 = (char *)v17;
    }
    else
    {
      if ( v13 )
      {
        v4 = v13;
        break;
      }
      *(_WORD *)&v11[2 * ((unsigned __int64)(unsigned int)v10 >> 1) - 2] = 0;
      v14 = SysCtxInternalEnumSubkeyCallback((__int64)a1, (__int64)v11, a3);
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v12 = 0;
        }
        else if ( v14 != 2 )
        {
          if ( v14 == 3 )
            v4 = -1073741248;
          else
            v4 = -1073741595;
          break;
        }
      }
      else
      {
        ++v12;
      }
      if ( v14 == 2 )
        break;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v4;
}
