/*
 * XREFs of ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C00AD510
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C00EFFE0 (-NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z.c)
 */

void __fastcall ndisTemporarilyScribbleNetLuidIndex(struct KRegKey *a1, union _NET_LUID_LH *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  __int16 v7; // ax
  void *m_ptr; // rcx
  int v9; // eax
  __int64 v10; // rax
  const wchar_t *v11; // rdx
  ULONG64 v12; // rcx
  int v13; // edx
  __int16 v14; // di
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-68h] BYREF
  ULONG Data; // [rsp+40h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-50h] BYREF
  int v18; // [rsp+4Ch] [rbp-4Ch]
  int v19; // [rsp+50h] [rbp-48h]
  int v20; // [rsp+54h] [rbp-44h]

  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v3 = 0;
  v4 = 0x7FFFLL;
  v5 = L"NetLuidIndex";
  while ( *v5 )
  {
    ++v5;
    if ( !--v4 )
      goto LABEL_14;
  }
  ValueName.Buffer = L"NetLuidIndex";
  v7 = 0x7FFF - v4;
  m_ptr = a1->m_ptr;
  ValueName.Length = 2 * v7;
  ValueName.MaximumLength = 2 * v7 + 2;
  if ( ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &Data) >= 0 )
  {
    if ( v18 == 4 )
    {
      if ( v19 == 4 )
      {
        v3 = v20;
        v9 = 0;
      }
      else
      {
        v9 = -1073741789;
      }
    }
    else
    {
      v9 = -1073741788;
    }
    if ( v9 >= 0 && v3 == ((a2->Value >> 24) & 0xFFFFFF) )
      return;
  }
LABEL_14:
  v10 = 0x7FFFLL;
  v11 = L"NetLuidIndex";
  v12 = (a2->Value >> 24) & 0xFFFFFF;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v10;
  }
  while ( v10 );
  v13 = -1073741811;
  if ( v10 )
  {
    v13 = 0;
    v14 = 0x7FFF - v10;
  }
  else
  {
    v14 = 0;
  }
  if ( v10 )
  {
    ValueName.Buffer = L"NetLuidIndex";
    ValueName.Length = 2 * v14;
    ValueName.MaximumLength = 2 * v14 + 2;
  }
  if ( v13 >= 0 )
  {
    Data = v12;
    ZwSetValueKey(a1->m_ptr, &ValueName, 0, 4u, &Data, 4u);
  }
  NdisTraceLoggingTemporarilyScribbleNetLuidIndex(a2);
}
