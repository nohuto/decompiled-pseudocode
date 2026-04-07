/*
 * XREFs of ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180085720
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180012FC0 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18002BB18 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::QueryThumbnailSourceSize(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *a3)
{
  struct CThumbnailData *ThumbnailData; // rax
  int v7; // edi
  struct CThumbnailData *v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // r8d
  int v14; // eax
  int v16; // [rsp+34h] [rbp-24h]
  int v17; // [rsp+38h] [rbp-20h]
  int v18; // [rsp+3Ch] [rbp-1Ch]
  struct CSecondaryWindowRepresentation *v19; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+78h] [rbp+20h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  v7 = 0;
  v8 = ThumbnailData;
  if ( ThumbnailData && a2 == *((_DWORD *)a3 + 2) && !*((_BYTE *)ThumbnailData + 34) )
  {
    v9 = *(_QWORD *)ThumbnailData;
    v19 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct CThumbnailData *))(v9 + 8))(ThumbnailData);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(*((CThumbnailVisual **)v8 + 11), &v19);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v13 = *((_DWORD *)v19 + 22);
        v16 = *((_DWORD *)v19 + 24);
        v18 = *((_DWORD *)v19 + 21) - *((_DWORD *)v19 + 25);
        v14 = 0;
        v17 = *((_DWORD *)v19 + 20) - *((_DWORD *)v19 + 23);
        if ( v17 - v13 >= 0 )
          v14 = v17 - v13;
        *((_DWORD *)a3 + 3) = v14;
        if ( v18 - v16 >= 0 )
          v7 = v18 - v16;
        *((_DWORD *)a3 + 4) = v7;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xE49u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xE48u);
    }
  }
  else
  {
    v11 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v11;
}
