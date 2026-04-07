/*
 * XREFs of ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x180085CB8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032100 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x180032EA0 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18003C4CC (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::UpdateThumbnailProperties(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *a3)
{
  struct CThumbnailData *ThumbnailData; // rax
  int updated; // eax
  unsigned int v8; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  if ( ThumbnailData
    && a2 == *((_DWORD *)a3 + 2)
    && (!*((_BYTE *)ThumbnailData + 34)
     || (*((_DWORD *)a3 + 3) & 0x3EFFFFF) != 0x3EFFFFF && (*((_DWORD *)a3 + 3) & 0xFC100000) != 0) )
  {
    updated = CThumbnailData::UpdateProperties(
                ThumbnailData,
                (const struct _DWM_THUMBNAIL_PROPERTIES *)((char *)a3 + 12));
    v8 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xCFCu);
  }
  else
  {
    v8 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v8;
}
