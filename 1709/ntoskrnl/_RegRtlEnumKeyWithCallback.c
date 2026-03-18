/*
 * XREFs of _RegRtlEnumKeyWithCallback @ 0x14057E7E4
 * Callers:
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140594ADC (_PnpCtxRegEnumKeyWithCallback.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400D9020 (IoGetStackLimits.c)
 *     _SysCtxInternalEnumSubkeyCallback @ 0x140122D20 (_SysCtxInternalEnumSubkeyCallback.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _RegRtlEnumKey @ 0x14057E9B4 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x14057EBC4 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall RegRtlEnumKeyWithCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  void *v5; // rdi
  unsigned int v7; // r9d
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  char *v12; // rbp
  unsigned int v13; // r14d
  unsigned int v14; // eax
  int v15; // eax
  PVOID PoolWithTag; // rax
  unsigned __int64 v18; // rax
  PVOID v19; // rax
  unsigned __int64 HighLimit; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 LowLimit; // [rsp+38h] [rbp-A0h] BYREF
  char v22; // [rsp+40h] [rbp-98h] BYREF

  v4 = 0;
  v5 = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
    return (unsigned int)-1073741670;
  if ( (unsigned int)RegRtlQueryInfoKey(a1, 0, (unsigned int)&HighLimit, 0, 0LL, 0LL) )
  {
    v10 = 0;
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
    v10 = -1;
    v11 = 2LL * v7;
    if ( v11 <= 0xFFFFFFFF )
      v10 = 2 * v7;
    v4 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v11 > 0xFFFFFFFF )
      return v4;
  }
  if ( v10 > 0x50 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x4C474552u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v12 = (char *)PoolWithTag;
  }
  else
  {
    v12 = &v22;
    v10 = 80;
  }
  v13 = 0;
  while ( 1 )
  {
    LODWORD(HighLimit) = v10 >> 1;
    v14 = RegRtlEnumKey(a1, v13, v12, &HighLimit);
    if ( v14 == -2147483622 || v14 == -1073741444 )
      break;
    if ( v14 == -1073741789 )
    {
      v18 = 2LL * (unsigned int)HighLimit;
      v10 = -1;
      if ( v18 <= 0xFFFFFFFF )
        v10 = 2 * HighLimit;
      v4 = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v18 > 0xFFFFFFFF )
        break;
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v19 = ExAllocatePoolWithTag(PagedPool, v10, 0x4C474552u);
      v5 = v19;
      if ( !v19 )
        return (unsigned int)-1073741801;
      v12 = (char *)v19;
    }
    else
    {
      if ( v14 )
      {
        v4 = v14;
        break;
      }
      *(_WORD *)&v12[2 * ((unsigned __int64)v10 >> 1) - 2] = 0;
      v15 = SysCtxInternalEnumSubkeyCallback(a1, (__int64)v12, a3);
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          v13 = 0;
        }
        else if ( v15 != 2 )
        {
          if ( v15 == 3 )
            v4 = -1073741248;
          else
            v4 = -1073741595;
          break;
        }
      }
      else
      {
        ++v13;
      }
      if ( v4 || v15 == 2 )
        break;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v4;
}
