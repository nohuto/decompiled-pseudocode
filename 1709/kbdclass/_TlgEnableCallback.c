/*
 * XREFs of _TlgEnableCallback @ 0x1C000D3F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 */

void __stdcall TlgEnableCallback(
        LPCGUID pSourceId,
        ULONG callbackType,
        UCHAR level,
        ULONGLONG keywordAny,
        ULONGLONG keywordAll,
        PEVENT_FILTER_DESCRIPTOR pFilterData,
        PVOID pCallbackContext)
{
  int v8; // ecx

  if ( pCallbackContext )
  {
    if ( callbackType )
    {
      if ( callbackType == 1 )
      {
        if ( level )
          v8 = level + 1;
        else
          v8 = 256;
        *(_DWORD *)pCallbackContext = v8;
        *((_QWORD *)pCallbackContext + 2) = keywordAny;
        *((_QWORD *)pCallbackContext + 3) = keywordAll;
      }
    }
    else
    {
      *(_DWORD *)pCallbackContext = 0;
    }
    if ( *((_QWORD *)pCallbackContext + 5) )
      (*((void (__fastcall **)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD))pCallbackContext
       + 5))(
        pSourceId,
        callbackType,
        level,
        keywordAny,
        keywordAll,
        pFilterData,
        *((_QWORD *)pCallbackContext + 6));
  }
}
