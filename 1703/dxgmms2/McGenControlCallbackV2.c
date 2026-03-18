/*
 * XREFs of McGenControlCallbackV2 @ 0x1C00141A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0079F40 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
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
  unsigned int v7; // r11d
  unsigned __int8 v8; // cl
  __int64 v9; // rdx
  unsigned __int16 v10; // ax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        v7 = 0;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = Level;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v7 < *((unsigned __int16 *)CallbackContext + 21); ++v7 )
        {
          v8 = *((_BYTE *)CallbackContext + 40);
          v9 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v7);
          if ( *(_BYTE *)(v7 + *((_QWORD *)CallbackContext + 8)) > v8 && v8
            || v9
            && ((v9 & *((_QWORD *)CallbackContext + 2)) == 0
             || (v9 & *((_QWORD *)CallbackContext + 3)) != *((_QWORD *)CallbackContext + 3)) )
          {
            *(_QWORD *)&Level = *((_QWORD *)CallbackContext + 6);
            LODWORD(SourceId) = v7 & 0x1F;
            ControlCode = ~(1 << (char)SourceId);
            *(_DWORD *)(Level + 4 * ((unsigned __int64)v7 >> 5)) &= ControlCode;
          }
          else
          {
            *(_QWORD *)&Level = *((_QWORD *)CallbackContext + 6);
            LODWORD(SourceId) = v7 & 0x1F;
            ControlCode = 1 << (char)SourceId;
            *(_DWORD *)(Level + 4 * ((unsigned __int64)v7 >> 5)) |= 1 << (char)SourceId;
          }
        }
      }
    }
    else
    {
      v10 = *((_WORD *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( v10 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v10 - 1) / 32 + 1));
    }
    DxgkEtwEnableCallback((unsigned int)SourceId, ControlCode, Level);
  }
}
