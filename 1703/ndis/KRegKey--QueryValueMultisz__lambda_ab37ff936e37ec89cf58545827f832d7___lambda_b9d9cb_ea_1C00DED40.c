/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4____0 @ 0x1C00DED40
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4___ @ 0x1C00DECB0 (KRegKey--QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11b.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00BD6B4 (--_V@YAXPEAX@Z.c)
 *     _lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_::operator() @ 0x1C00DEEC4 (_lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_--operator().c)
 */

__int64 KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4____0(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        ...)
{
  void *v5; // rbx
  _DWORD *PoolWithTag; // rsi
  NTSTATUS ValueKey; // eax
  int v8; // edi
  __int64 v9; // rax
  _WORD *v10; // rdx
  _WORD *v11; // rcx
  unsigned __int64 v12; // r8
  unsigned int v14; // ebp
  _WORD *v15; // rsi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF
  va_list va; // [rsp+198h] [rbp+20h] BYREF

  va_start(va, a3);
  v5 = 0LL;
  PoolWithTag = KeyValueInformation;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v8 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x7A536C4Du);
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_16;
    }
    operator delete[](0LL);
    v5 = PoolWithTag;
    ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
    v8 = ValueKey;
  }
  if ( ValueKey >= 0 )
  {
    if ( PoolWithTag[1] != 7 )
    {
      v8 = -1073741788;
      goto LABEL_16;
    }
    v9 = (unsigned int)PoolWithTag[2];
    if ( (v9 & 1) != 0 )
    {
      v8 = -1073741811;
      goto LABEL_16;
    }
    v10 = PoolWithTag + 3;
    v11 = PoolWithTag + 3;
    v12 = (unsigned __int64)PoolWithTag + v9 + 12;
    if ( (unsigned __int64)(PoolWithTag + 3) >= v12 )
    {
LABEL_15:
      v8 = -1073741789;
      goto LABEL_16;
    }
LABEL_11:
    if ( *v11 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)++v11 >= v12 )
          goto LABEL_15;
        if ( !*v11 )
        {
          if ( (unsigned __int64)++v11 < v12 )
            goto LABEL_11;
          goto LABEL_15;
        }
      }
    }
    v14 = 0;
    while ( *v10 )
    {
      v15 = v10;
      do
        ++v15;
      while ( *v15 );
      v8 = lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_::operator()((__int64 *)va, v10, v14);
      if ( v8 < 0 )
        goto LABEL_16;
      v10 = v15 + 1;
      ++v14;
    }
    v8 = 0;
  }
LABEL_16:
  operator delete[](v5);
  return (unsigned int)v8;
}
