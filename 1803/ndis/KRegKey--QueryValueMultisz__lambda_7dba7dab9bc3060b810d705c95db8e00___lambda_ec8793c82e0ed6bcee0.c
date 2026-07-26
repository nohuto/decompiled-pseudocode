/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___ @ 0x1C00BA960
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00BB984 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00FDC1C (-ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _lambda_ec8793c82e0ed6bcee09c56382ecb370_::operator() @ 0x1C00BB60C (_lambda_ec8793c82e0ed6bcee09c56382ecb370_--operator().c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00BF14C (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00CA238 (--_V@YAXPEAX@Z.c)
 */

__int64 KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
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
  _WORD *v15; // rdi
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
    {
LABEL_13:
      v9 = -1073741670;
      goto LABEL_20;
    }
    operator delete[](0LL);
    v7 = PoolWithTag;
    ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
    v9 = ValueKey;
  }
  if ( ValueKey >= 0 )
  {
    if ( PoolWithTag[1] != 7 )
    {
      v9 = -1073741788;
      goto LABEL_20;
    }
    v10 = (unsigned int)PoolWithTag[2];
    if ( (v10 & 1) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_20;
    }
    v11 = PoolWithTag + 3;
    v12 = PoolWithTag + 3;
    v13 = (unsigned __int64)PoolWithTag + v10 + 12;
    v14 = 0;
    if ( (unsigned __int64)(PoolWithTag + 3) >= v13 )
    {
LABEL_26:
      v9 = -1073741789;
      goto LABEL_20;
    }
LABEL_6:
    if ( *v12 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)++v12 >= v13 )
          goto LABEL_26;
        if ( !*v12 )
        {
          ++v14;
          if ( (unsigned __int64)++v12 < v13 )
            goto LABEL_6;
          goto LABEL_26;
        }
      }
    }
    if ( v14 > 0x80 )
    {
      v9 = -1073740757;
      goto LABEL_20;
    }
    if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
                             a3,
                             v14) )
      goto LABEL_13;
    while ( *v11 )
    {
      v15 = v11;
      do
        ++v15;
      while ( *v15 );
      v9 = lambda_ec8793c82e0ed6bcee09c56382ecb370_::operator()((__int64 *)va, v11);
      if ( v9 < 0 )
        goto LABEL_20;
      v11 = v15 + 1;
    }
    v9 = 0;
  }
LABEL_20:
  operator delete[](v7);
  return (unsigned int)v9;
}
