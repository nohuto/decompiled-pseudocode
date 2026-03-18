/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     Etw_EnableCallback @ 0x1C0001150 (Etw_EnableCallback.c)
 *     memset @ 0x1C0002D40 (memset.c)
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
  unsigned int v11; // r8d
  unsigned __int8 v12; // cl
  __int64 v13; // r9
  bool v14; // r10
  int v15; // eax
  int *v16; // r9
  int v17; // ecx
  int v18; // eax
  unsigned __int16 v19; // ax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        v11 = 0;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v11 < *((unsigned __int16 *)CallbackContext + 21); ++v11 )
        {
          v12 = *((_BYTE *)CallbackContext + 40);
          v14 = 0;
          if ( *(_BYTE *)(v11 + *((_QWORD *)CallbackContext + 8)) <= v12 || !v12 )
          {
            v13 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v11);
            if ( !v13
              || (v13 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v13 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
            {
              v14 = 1;
            }
          }
          v15 = 1 << (v11 & 0x1F);
          v16 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v11 >> 5));
          v17 = *v16;
          if ( v14 )
            v18 = v17 | v15;
          else
            v18 = v17 & ~v15;
          *v16 = v18;
        }
      }
    }
    else
    {
      v19 = *((_WORD *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( v19 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v19 - 1) / 32 + 1));
    }
    Etw_EnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword, MatchAllKeyword, FilterData, CallbackContext);
  }
}
