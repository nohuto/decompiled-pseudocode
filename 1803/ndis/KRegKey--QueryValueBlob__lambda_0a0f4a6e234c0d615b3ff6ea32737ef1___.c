/*
 * XREFs of KRegKey::QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___ @ 0x1C00BAB78
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00BA180 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00CA238 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _WORD *a3)
{
  _UNKNOWN **v5; // rdi
  NTSTATUS ValueKey; // eax
  unsigned int v8; // esi
  ULONG Length[2]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+40h] [rbp-138h] BYREF
  _UNKNOWN *retaddr; // [rsp+178h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+180h] [rbp+8h]
  char Src; // [rsp+184h] [rbp+Ch] BYREF

  v5 = 0LL;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, Length);
  v8 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    if ( !ExAllocatePoolWithTag(PagedPool, Length[0], 0x6E694252u) )
    {
      v8 = -1073741670;
      goto LABEL_6;
    }
    operator delete[](0LL);
    v5 = &retaddr;
    ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, &retaddr, Length[0], Length);
    v8 = ValueKey;
  }
  if ( ValueKey >= 0 )
  {
    if ( HIDWORD(retaddr) == 3 )
    {
      if ( v13 > 0x20 )
      {
        v8 = -1073741811;
      }
      else
      {
        *a3 = v13;
        memmove(a3 + 1, &Src, v13);
        v8 = 0;
      }
    }
    else
    {
      v8 = -1073741788;
    }
  }
LABEL_6:
  operator delete[](v5);
  return v8;
}
