/*
 * XREFs of ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x140017F5C
 * Callers:
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140017C58 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140056070 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x140059AD0 (--$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCr.c)
 * Callees:
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14003BD5C (WPP_SF_q.c)
 */

__int64 __fastcall AERTUnlockMemory(void *lpAddress, SIZE_T dwSize)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rcx
  signed int LastError; // eax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids, lpAddress);
  }
  if ( VirtualUnlock(lpAddress, dwSize) )
  {
    v4 = 0;
  }
  else
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( (v4 & 0x80000000) == 0 )
    goto LABEL_6;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
    return v4;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids);
LABEL_6:
    v5 = WPP_GLOBAL_Control;
  }
  if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x40000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
    WPP_SF_(v5[2], 44LL, &WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids);
  return v4;
}
