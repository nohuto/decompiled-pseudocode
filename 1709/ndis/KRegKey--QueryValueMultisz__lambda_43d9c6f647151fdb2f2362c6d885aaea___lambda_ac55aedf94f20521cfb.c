/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfbcaaf74fbc728b___ @ 0x1C00FA9F4
 * Callers:
 *     ?ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z @ 0x1C00FB058 (-ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B3E94 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00C5A4C (--_V@YAXPEAX@Z.c)
 *     _lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator() @ 0x1C00FABA4 (_lambda_ac55aedf94f20521cfbcaaf74fbc728b_--operator().c)
 */

__int64 KRegKey::QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfbcaaf74fbc728b___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        unsigned int *a3,
        ...)
{
  _DWORD *PoolWithTag; // rbp
  void *v7; // rbx
  NTSTATUS ValueKey; // eax
  int v9; // esi
  __int64 v10; // rax
  _WORD *v11; // rsi
  _WORD *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v16; // ebp
  _WORD *v17; // rdi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-158h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-148h] BYREF
  va_list va; // [rsp+1A8h] [rbp+20h] BYREF

  va_start(va, a3);
  PoolWithTag = KeyValueInformation;
  v7 = 0LL;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v9 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x7A536C4Du);
    if ( !PoolWithTag )
      goto LABEL_7;
    operator delete[](0LL);
    v7 = PoolWithTag;
    ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
    v9 = ValueKey;
  }
  if ( ValueKey < 0 )
    goto LABEL_16;
  if ( PoolWithTag[1] != 7 )
  {
    v9 = -1073741788;
    goto LABEL_16;
  }
  v10 = (unsigned int)PoolWithTag[2];
  if ( (v10 & 1) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_16;
  }
  v11 = PoolWithTag + 3;
  v12 = PoolWithTag + 3;
  v13 = (unsigned __int64)PoolWithTag + v10 + 12;
  v14 = 0;
  if ( (unsigned __int64)(PoolWithTag + 3) >= v13 )
  {
LABEL_15:
    v9 = -1073741789;
    goto LABEL_16;
  }
LABEL_11:
  if ( *v12 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)++v12 >= v13 )
        goto LABEL_15;
      if ( !*v12 )
      {
        ++v14;
        if ( (unsigned __int64)++v12 < v13 )
          goto LABEL_11;
        goto LABEL_15;
      }
    }
  }
  if ( v14 > 0x80 )
  {
    v9 = -1073740757;
    goto LABEL_16;
  }
  if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
          a3,
          v14) )
  {
LABEL_7:
    v9 = -1073741670;
    goto LABEL_16;
  }
  v16 = 0;
  while ( *v11 )
  {
    v17 = v11;
    do
      ++v17;
    while ( *v17 );
    v9 = lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator()((__int64 *)va, v11, v16);
    if ( v9 < 0 )
      goto LABEL_16;
    v11 = v17 + 1;
    ++v16;
  }
  v9 = 0;
LABEL_16:
  operator delete[](v7);
  return (unsigned int)v9;
}
