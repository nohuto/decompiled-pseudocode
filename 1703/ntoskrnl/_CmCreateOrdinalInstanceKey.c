/*
 * XREFs of _CmCreateOrdinalInstanceKey @ 0x14059B8A4
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1404E2AA8 (_CmGetDeviceSoftwareKey.c)
 * Callees:
 *     wcstoul @ 0x14016C130 (wcstoul.c)
 *     swprintf_s @ 0x14016EB70 (swprintf_s.c)
 *     _ultow_s @ 0x14016EFA0 (_ultow_s.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _PnpCtxRegCreateKey @ 0x1404DB470 (_PnpCtxRegCreateKey.c)
 */

__int64 __fastcall CmCreateOrdinalInstanceKey(__int64 a1, char *a2, wchar_t *a3, ULONG a4, __int64 a5, HANDLE *a6)
{
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  unsigned int i; // edi
  __int64 v13; // r9
  wchar_t v14; // ax
  int v15; // esi
  wchar_t *v16; // rcx
  int v17; // eax
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  ULONG v23; // [rsp+98h] [rbp+20h] BYREF

  v23 = a4;
  Handle = 0LL;
  v9 = 0;
  v10 = wcstoul(L"999A", 0LL, 36);
  v11 = wcstoul(L"ZZZZ", 0LL, 36);
  if ( v10 - 1 > 0xFFFFFFFD || v11 - 1 > 0xFFFFFFFD )
    return (unsigned int)-1073741595;
  for ( i = 0; ; i = v10 )
  {
LABEL_4:
    if ( i <= 0x270F )
    {
      if ( swprintf_s(a3, 5uLL, L"%04u", i) >= 0 )
        goto LABEL_6;
      return (unsigned int)-1073741595;
    }
    if ( i >= v10 )
      break;
  }
  if ( i > v11 )
    return (unsigned int)-2147483622;
  if ( ultow_s(i, a3, 5uLL, 36) )
    return (unsigned int)-1073741595;
LABEL_6:
  v14 = *a3;
  v15 = 1;
  v16 = a3;
  while ( 2 )
  {
    if ( v14 )
    {
      if ( v14 > 0x61u )
      {
        if ( v14 == 101 || v14 == 105 || v14 == 111 )
        {
LABEL_39:
          v20 = v16 - a3;
          v21 = 3 - v20;
          if ( (_DWORD)v20 != 3 )
          {
            do
            {
              v15 *= 36;
              --v21;
            }
            while ( v21 );
          }
          goto LABEL_20;
        }
        if ( v14 <= 0x74u )
          goto LABEL_15;
        if ( v14 <= 0x76u )
          goto LABEL_39;
        v19 = v14 == 121;
      }
      else
      {
        if ( v14 == 97 || v14 == 65 || v14 == 69 || v14 == 73 || v14 == 79 )
          goto LABEL_39;
        if ( v14 <= 0x54u )
          goto LABEL_15;
        if ( v14 <= 0x56u )
          goto LABEL_39;
        v19 = v14 == 89;
      }
      if ( v19 )
        goto LABEL_39;
LABEL_15:
      v14 = *++v16;
      continue;
    }
    break;
  }
  v17 = PnpCtxRegCreateKey(a1, a2, a3, v13, 1u, 0LL, &Handle, &v23);
  if ( v17 == -1073741444 )
    return (unsigned int)-1073741595;
  if ( v17 < 0 )
  {
    return (unsigned int)v17;
  }
  else
  {
    if ( v23 != 1 )
    {
      ZwClose(Handle);
      Handle = 0LL;
LABEL_20:
      i += v15;
      goto LABEL_4;
    }
    *a6 = Handle;
  }
  return v9;
}
