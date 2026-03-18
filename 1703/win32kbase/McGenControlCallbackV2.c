/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0076430
 * Callers:
 *     <none>
 * Callees:
 *     W32kEtwEnableCallback @ 0x1C0074FA0 (W32kEtwEnableCallback.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned int v10; // r11d
  unsigned __int8 v11; // cl
  __int64 v12; // rdx
  unsigned __int16 v13; // ax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        v10 = 0;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = Level;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v10 < *((unsigned __int16 *)CallbackContext + 21); ++v10 )
        {
          v11 = *((_BYTE *)CallbackContext + 40);
          v12 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v10);
          if ( *(_BYTE *)(v10 + *((_QWORD *)CallbackContext + 8)) > v11 && v11
            || v12
            && ((v12 & *((_QWORD *)CallbackContext + 2)) == 0
             || (v12 & *((_QWORD *)CallbackContext + 3)) != *((_QWORD *)CallbackContext + 3)) )
          {
            *(_QWORD *)&Level = *((_QWORD *)CallbackContext + 6);
            *(_DWORD *)(Level + 4 * ((unsigned __int64)v10 >> 5)) &= ~(1 << (v10 & 0x1F));
          }
          else
          {
            *(_QWORD *)&Level = *((_QWORD *)CallbackContext + 6);
            *(_DWORD *)(Level + 4 * ((unsigned __int64)v10 >> 5)) |= 1 << (v10 & 0x1F);
          }
        }
      }
    }
    else
    {
      v13 = *((_WORD *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( v13 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v13 - 1) / 32 + 1));
    }
    W32kEtwEnableCallback((struct _GUID *)SourceId, ControlCode, Level, MatchAnyKeyword);
  }
}
