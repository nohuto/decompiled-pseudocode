/*
 * XREFs of ndisOidPostPacketFilter @ 0x1C001C270
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostSetOpenPacketFilter @ 0x1C001BC64 (ndisPostSetOpenPacketFilter.c)
 *     NdisMIndicateStatusEx @ 0x1C001C410 (NdisMIndicateStatusEx.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001D8D4 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

void __fastcall ndisOidPostPacketFilter(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // r15
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  char v8; // r8
  _BYTE *v9; // rdx
  int v10; // [rsp+28h] [rbp-59h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+38h] [rbp-49h] BYREF

  v1 = a1[4];
  v2 = *a1;
  v4 = a1[3];
  v5 = a1[2];
  v10 = 0;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    return;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v1 + 88) & 0x800) != 0 )
    {
      *(_QWORD *)(v1 + 40) = *(_QWORD *)(v2 + 528);
      *(_DWORD *)(v1 + 48) = *(unsigned __int16 *)(v2 + 536);
      *(_QWORD *)(v2 + 528) = 0LL;
      *(_WORD *)(v2 + 536) = 0;
      *(_DWORD *)(v1 + 88) &= ~0x800u;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      v6 = *(_DWORD *)(v2 + 1836);
      if ( v6 )
      {
        if ( v6 != 16 )
          goto LABEL_3;
        *(_DWORD *)(*(_QWORD *)(v2 + 600) + 312LL) = **(_DWORD **)(v1 + 40);
        v10 = **(_DWORD **)(v1 + 40);
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(v2 + 400) + 312LL) = **(_DWORD **)(v1 + 40);
        v10 = *(_DWORD *)(*(_QWORD *)(v2 + 400) + 312LL);
        v7 = *(_QWORD *)(v2 + 4064);
        v8 = (v10 & 0x20) != 0;
        v9 = (_BYTE *)(v7 + 1216);
        if ( *(_BYTE *)(v7 + 1216) != v8 )
        {
          *v9 = v8;
          ndisNsiScheduleIfBlockRodChangeNotification(v7, v9, 1LL, 640LL);
        }
      }
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v10;
      StatusIndication.SourceHandle = (void *)v2;
      StatusIndication.StatusCode = 1073807396;
      StatusIndication.StatusBufferSize = 4;
      NdisMIndicateStatusEx((NDIS_HANDLE)v2, &StatusIndication);
    }
  }
LABEL_3:
  if ( v4 )
    ndisPostSetOpenPacketFilter(v4, v1, *((_DWORD *)a1 + 10));
  if ( !*((_DWORD *)a1 + 10) && v5 && (*(_DWORD *)(v5 + 56) & 0x8000) != 0 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 400LL) + 312LL) = **(_DWORD **)(v1 + 40);
}
