/*
 * XREFs of ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x180024EC0
 * Callers:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x1800260E4 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?GetNotificationDataSize@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEA_K@Z @ 0x180024ACC (-GetNotificationDataSize@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication.c)
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x180024CC4 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 */

__int64 __fastcall GenerateMediaManagerNotification(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  int NotificationDataSize; // edi
  unsigned __int64 v6; // rsi
  SIZE_T v7; // rbp
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rax
  HANDLE v10; // rax
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = 0LL;
  NotificationDataSize = GetNotificationDataSize(a1, &v12);
  if ( NotificationDataSize >= 0 )
  {
    v6 = v12;
    v7 = v12 + 42;
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, v7);
    v4 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, v7);
      v4[1] = 0LL;
      *((_DWORD *)v4 + 6) = 0;
      *(_DWORD *)v4 = v7;
      *((_DWORD *)v4 + 1) = 0x10000;
      if ( v6 )
      {
        NotificationDataSize = SetNotificationData(a1, (__int64)(v4 + 4), v6);
        if ( NotificationDataSize < 0 )
          goto LABEL_9;
        if ( v6 > 0xFFFFFFFF )
        {
          *((_DWORD *)v4 + 7) = -1;
          NotificationDataSize = -2147024362;
          goto LABEL_9;
        }
        *((_DWORD *)v4 + 7) = v6;
        NotificationDataSize = 0;
      }
      *a2 = v4;
      v4 = 0LL;
      goto LABEL_9;
    }
    NotificationDataSize = -2147024882;
  }
LABEL_9:
  v10 = GetProcessHeap();
  HeapFree(v10, 0, v4);
  return (unsigned int)NotificationDataSize;
}
