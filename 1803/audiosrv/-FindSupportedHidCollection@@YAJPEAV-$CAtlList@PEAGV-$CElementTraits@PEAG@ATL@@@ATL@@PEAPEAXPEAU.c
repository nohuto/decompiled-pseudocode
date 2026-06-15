/*
 * XREFs of ?FindSupportedHidCollection@@YAJPEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x18009F038
 * Callers:
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x18009FC40 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 * Callees:
 *     ?IsSupportedHidCollection@@YA_NPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x18009F2AC (-IsSupportedHidCollection@@YA_NPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 */

__int64 __fastcall FindSupportedHidCollection(_QWORD *a1, __int64 *a2, _OWORD *a3, struct _HIDP_PREPARSED_DATA **a4)
{
  _QWORD *v4; // r14
  unsigned int v8; // ebx
  const WCHAR *v9; // rcx
  struct _HIDP_PREPARSED_DATA *v10; // rdi
  bool v11; // bl
  HANDLE FileW; // rax
  __int64 v13; // rsi
  __int128 v14; // xmm1
  struct _HIDP_PREPARSED_DATA *v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  struct _HIDP_CAPS v19; // [rsp+40h] [rbp-68h] BYREF
  struct _HIDP_PREPARSED_DATA *v20; // [rsp+B0h] [rbp+8h] BYREF

  v4 = (_QWORD *)*a1;
  v8 = -2147023728;
  while ( v4 && v8 == -2147023728 )
  {
    v9 = (const WCHAR *)v4[2];
    v10 = 0LL;
    v4 = (_QWORD *)*v4;
    v11 = 0;
    v20 = 0LL;
    FileW = CreateFileW(v9, 0xC0000000, 3u, 0LL, 3u, 0x40000000u, 0LL);
    v13 = (__int64)FileW;
    if ( FileW != (HANDLE)-1LL )
    {
      v11 = IsSupportedHidCollection(FileW, &v19, &v20);
      if ( v11 )
      {
        v14 = *(_OWORD *)&v19.Reserved[3];
        v15 = v20;
        *a3 = *(_OWORD *)&v19.Usage;
        v16 = *(_OWORD *)&v19.Reserved[11];
        a3[1] = v14;
        v17 = *(_OWORD *)&v19.NumberInputValueCaps;
        a3[2] = v16;
        *a2 = v13;
        v13 = -1LL;
        a3[3] = v17;
        *a4 = v15;
      }
      else
      {
        v10 = v20;
      }
    }
    v8 = !v11 ? 0x80070490 : 0;
    if ( v13 != -1 )
      CloseHandle((HANDLE)v13);
    if ( v10 )
      HidD_FreePreparsedData(v10);
  }
  return v8;
}
