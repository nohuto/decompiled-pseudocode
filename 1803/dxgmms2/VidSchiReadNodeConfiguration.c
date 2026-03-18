/*
 * XREFs of VidSchiReadNodeConfiguration @ 0x1C007C264
 * Callers:
 *     VidSchiReadGlobalConfiguration @ 0x1C007C368 (VidSchiReadGlobalConfiguration.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiOpenPnpRegistryKey @ 0x1C0015CA4 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall VidSchiReadNodeConfiguration(__int64 a1, char *a2)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v6; // rax
  const wchar_t *v7; // rdx
  __int16 v8; // cx
  NTSTATUS v9; // eax
  SIZE_T v11; // rax
  _DWORD *v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned int v14; // edx
  __int64 v15; // r8
  signed __int64 v16; // rcx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+40h]

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  KeyHandle = 0LL;
  ResultLength = 0;
  v5 = DpiOpenPnpRegistryKey(*(_QWORD *)(v3 + 192));
  if ( v5 >= 0 )
  {
    *(_DWORD *)&ValueName.Length = 0;
    ValueName.Buffer = 0LL;
    v6 = 0x7FFFLL;
    v7 = L"HwQueuedRenderPacketGroupLimitPerNode";
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v6;
    }
    while ( v6 );
    if ( v6 )
      v8 = 0x7FFF - v6;
    else
      v8 = 0;
    if ( v6 )
    {
      ValueName.Buffer = L"HwQueuedRenderPacketGroupLimitPerNode";
      ValueName.Length = 2 * v8;
      ValueName.MaximumLength = 2 * v8 + 2;
    }
    v9 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v9 == -2147483643 || v9 == -1073741789 )
    {
      v11 = 4LL * ResultLength;
      if ( !is_mul_ok(ResultLength, 4uLL) )
        v11 = -1LL;
      v12 = operator new[](v11, 0x68536956u, PagedPool);
      if ( v12 )
      {
        v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v12, ResultLength, &ResultLength);
        if ( v5 >= 0 )
        {
          if ( v12[1] != 3
            || (v13 = (unsigned int)v12[2], (v13 & 3) != 0)
            || v13 > 4 * (unsigned __int64)*(unsigned int *)(a1 + 64) )
          {
            v5 = -1073741811;
          }
          else
          {
            v14 = (unsigned int)v13 >> 2;
            if ( v14 )
            {
              v15 = v14;
              v16 = (char *)v12 - a2;
              do
              {
                *(_DWORD *)a2 = _byteswap_ulong(*(_DWORD *)&a2[v16 + 12]);
                a2 += 4;
                --v15;
              }
              while ( v15 );
            }
          }
        }
        operator delete(v12);
      }
      else
      {
        v5 = -1073741801;
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
