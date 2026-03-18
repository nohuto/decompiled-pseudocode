/*
 * XREFs of EtwpBuildNotificationPacket @ 0x14058B92C
 * Callers:
 *     EtwpCalculateUpdateNotification @ 0x14058C620 (EtwpCalculateUpdateNotification.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x1407A5704 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1407A5894 (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407B0900 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     EtwpAllocDataBlock @ 0x14058B9A8 (EtwpAllocDataBlock.c)
 *     EtwpGetSchematizedFilterSize @ 0x140590420 (EtwpGetSchematizedFilterSize.c)
 *     EtwpCopySchematizedFilters @ 0x1407B17C4 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpBuildNotificationPacket(__int64 a1, _OWORD *a2, char a3, _QWORD *a4)
{
  _OWORD *v4; // rbx
  int SchematizedFilterSize; // eax
  int v7; // ebp
  int v8; // edi
  int v10; // r14d
  __int64 v11; // [rsp+20h] [rbp-28h]

  v4 = a2;
  LOBYTE(a2) = a3;
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(a1, a2);
  v7 = SchematizedFilterSize;
  if ( SchematizedFilterSize )
  {
    v10 = SchematizedFilterSize + 136;
    v8 = EtwpAllocDataBlock((unsigned int)(SchematizedFilterSize + 136), 0LL);
    if ( v8 >= 0 )
    {
      if ( v4 )
      {
        *(_OWORD *)v11 = *v4;
        *(_OWORD *)(v11 + 16) = v4[1];
        *(_OWORD *)(v11 + 32) = v4[2];
        *(_OWORD *)(v11 + 48) = v4[3];
        *(_OWORD *)(v11 + 64) = v4[4];
        *(_OWORD *)(v11 + 80) = v4[5];
        *(_OWORD *)(v11 + 96) = v4[6];
        *(_QWORD *)(v11 + 112) = *((_QWORD *)v4 + 14);
      }
      *(_DWORD *)(v11 + 116) = 1;
      *(_DWORD *)(v11 + 8) = 1;
      *(_DWORD *)(v11 + 4) = v10;
      *a4 = v11;
      *(_QWORD *)(v11 + 120) = 136LL;
      *(_DWORD *)(v11 + 132) = 0x80000000;
      *(_DWORD *)(v11 + 128) = v7;
      EtwpCopySchematizedFilters((void *)(v11 + 136));
    }
  }
  else if ( v4 )
  {
    return (unsigned int)EtwpAllocDataBlock(*((unsigned int *)v4 + 1), v4);
  }
  else
  {
    v8 = EtwpAllocDataBlock(0x78uLL, 0LL);
    if ( v8 >= 0 )
    {
      *a4 = v11;
      *(_DWORD *)(v11 + 8) = 1;
      *(_DWORD *)(v11 + 4) = 120;
    }
  }
  return (unsigned int)v8;
}
