/*
 * XREFs of ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C0015CD4
 * Callers:
 *     ndisRecordEvent @ 0x1C0015C4C (ndisRecordEvent.c)
 * Callees:
 *     ndisReleaseStackTrace @ 0x1C00115F8 (ndisReleaseStackTrace.c)
 *     ndisCaptureStackTrace @ 0x1C006C5A4 (ndisCaptureStackTrace.c)
 */

void __fastcall ndisFillEventLogEntry(struct _NDIS_EVENT_LOG *a1, int a2, __int16 a3, void *a4)
{
  __int64 v5; // rdi
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int16 v10; // cx
  ULONG_PTR v11; // rcx

  v5 = a2 * (unsigned int)a1->EntrySize;
  if ( (a1->Flags & 1) != 0 )
  {
    v8 = MEMORY[0xFFFFF78000000014];
    v9 = (MEMORY[0xFFFFF78000000014] - a1->LastEventTime) / 0x2710;
    if ( v9 >= 0x7FFF )
    {
      if ( v9 >= 0x1F3FC18 )
      {
        *(_WORD *)((char *)&a1[1].LastEventTime + v5 + 2) |= 0x8000u;
        goto LABEL_5;
      }
      v10 = (v9 / 0x3E8) | 0x8000;
    }
    else
    {
      v10 = v9 & 0x7FFF;
    }
    *(_WORD *)((char *)&a1[1].LastEventTime + v5 + 2) = v10;
LABEL_5:
    a1->LastEventTime = v8;
  }
  if ( (a1->Flags & 4) != 0 )
    *(_QWORD *)((char *)&a1[1].LastUsedEntry + v5) = a4;
  if ( (a1->Flags & 2) != 0 )
  {
    v11 = *(unsigned int *)((char *)&a1[1].LastEventTime + v5 + 4);
    if ( (_DWORD)v11 )
      ndisReleaseStackTrace(v11);
    *(_DWORD *)((char *)&a1[1].LastEventTime + v5 + 4) = ndisCaptureStackTrace();
  }
  *(_WORD *)((char *)&a1[1].LastEventTime + v5) = a3;
}
