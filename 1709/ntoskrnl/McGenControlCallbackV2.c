/*
 * XREFs of McGenControlCallbackV2 @ 0x1401558F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     memset @ 0x140192F40 (memset.c)
 *     McTemplateK0jq @ 0x1401E86B0 (McTemplateK0jq.c)
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
  unsigned int v8; // r11d
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 i; // rbx
  unsigned __int16 v14; // ax

  if ( !CallbackContext )
    return;
  if ( !ControlCode )
  {
    v14 = *((_WORD *)CallbackContext + 21);
    *((_DWORD *)CallbackContext + 9) = 0;
    *((_BYTE *)CallbackContext + 40) = 0;
    *((_QWORD *)CallbackContext + 2) = 0LL;
    *((_QWORD *)CallbackContext + 3) = 0LL;
    if ( !v14 )
      return;
    memset(*((void **)CallbackContext + 6), 0, 4LL * ((v14 - 1) / 32 + 1));
LABEL_20:
    if ( ControlCode != 1 )
      return;
    goto LABEL_10;
  }
  if ( ControlCode != 1 )
    goto LABEL_20;
  v8 = 0;
  *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
  *((_BYTE *)CallbackContext + 40) = Level;
  *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
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
LABEL_10:
  ExAcquireResourceSharedLite(&Resource, 1u);
  for ( i = FsRtlTieringHeatData; (__int64 *)i != &FsRtlTieringHeatData; i = *(_QWORD *)i )
  {
    if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 1) != 0 )
      McTemplateK0jq(v12, v11, 0LL, i + 20, *(_DWORD *)(i + 36));
  }
  ExReleaseResourceLite(&Resource);
}
