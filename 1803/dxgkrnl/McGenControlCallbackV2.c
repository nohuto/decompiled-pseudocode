/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0030DD0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0030C20 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
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
  UCHAR v7; // di
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  bool v11; // r11
  int v12; // edx
  int *v13; // rcx
  int v14; // eax
  int v15; // edx
  unsigned __int16 v16; // ax

  v7 = Level;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        *(_DWORD *)&Level = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_DWORD *)CallbackContext + 9) = 1;
        if ( *((_WORD *)CallbackContext + 21) )
        {
          do
          {
            v9 = *((_BYTE *)CallbackContext + 40);
            v11 = 0;
            if ( *(_BYTE *)(Level + *((_QWORD *)CallbackContext + 8)) <= v9 || !v9 )
            {
              v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * Level);
              if ( !v10
                || (v10 & *((_QWORD *)CallbackContext + 2)) != 0
                && (v10 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
              {
                v11 = 1;
              }
            }
            MatchAnyKeyword = (unsigned __int64)Level >> 5;
            v12 = 1 << (Level & 0x1F);
            v13 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * MatchAnyKeyword);
            v14 = *v13;
            if ( v11 )
              v15 = v14 | v12;
            else
              v15 = v14 & ~v12;
            *v13 = v15;
            *(_DWORD *)&Level = Level + 1;
          }
          while ( Level < (unsigned int)*((unsigned __int16 *)CallbackContext + 21) );
        }
      }
    }
    else
    {
      v16 = *((_WORD *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( v16 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v16 - 1) / 32 + 1));
    }
    DxgkEtwEnableCallback(ControlCode, v7, Level, MatchAnyKeyword);
  }
}
