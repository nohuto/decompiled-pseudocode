/*
 * XREFs of McGenControlCallbackV2 @ 0x1C00062D0
 * Callers:
 *     <none>
 * Callees:
 *     W32kEtwEnableCallback @ 0x1C0007C20 (W32kEtwEnableCallback.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned int v8; // ebx
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  unsigned __int16 v11; // ax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        v8 = 0;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = Level;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v8 < *((unsigned __int16 *)CallbackContext + 21); ++v8 )
        {
          v9 = *((_BYTE *)CallbackContext + 40);
          if ( *(_BYTE *)(v8 + *((_QWORD *)CallbackContext + 8)) > v9 && v9
            || (v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v8)) != 0
            && ((v10 & *((_QWORD *)CallbackContext + 2)) == 0
             || (v10 & *((_QWORD *)CallbackContext + 3)) != *((_QWORD *)CallbackContext + 3)) )
          {
            *(_DWORD *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v8 >> 5)) &= ~(1 << (v8 & 0x1F));
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v8 >> 5)) |= 1 << (v8 & 0x1F);
          }
        }
      }
    }
    else
    {
      v11 = *((_WORD *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( v11 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v11 - 1) / 32 + 1));
    }
    W32kEtwEnableCallback((struct _GUID *)SourceId);
  }
}
