/*
 * XREFs of WheaPersistOfflinedPage @ 0x14025FD34
 * Callers:
 *     EmpRemoveBadS3PageWorker @ 0x140684270 (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140723688 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BcdOpenStore @ 0x140589990 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140589B74 (BcdCloseStore.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 *     WheapCountBadPageExtents @ 0x1407238A0 (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x1407238E8 (WheapIsPageInList.c)
 *     WheapSortBadPages @ 0x14072390C (WheapSortBadPages.c)
 *     BcdCreateObject @ 0x1407348DC (BcdCreateObject.c)
 *     BcdGetElementData @ 0x1407350C0 (BcdGetElementData.c)
 *     BcdSetElementData @ 0x1407350DC (BcdSetElementData.c)
 */

__int64 __fastcall WheaPersistOfflinedPage(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  int v4; // ebx
  HANDLE v5; // rsi
  int ElementData; // eax
  unsigned int v7; // r14d
  int v8; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+48h] BYREF
  __int64 v14; // [rsp+80h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+58h] BYREF

  v14 = 0LL;
  v2 = 0LL;
  Handle = 0LL;
  v4 = BcdOpenStore(a1, a2, &v14);
  if ( v4 < 0 )
    goto LABEL_20;
  if ( (int)BcdOpenObject(v14, &GUID_BAD_MEMORY_GROUP, &Handle) < 0 )
  {
    v12 = 0x2010000000000001LL;
    v4 = ((__int64 (__fastcall *)(__int64, GUID *, __int64 *, HANDLE *))BcdCreateObject)(
           v14,
           &GUID_BAD_MEMORY_GROUP,
           &v12,
           &Handle);
    if ( v4 < 0 )
    {
      v5 = Handle;
      goto LABEL_18;
    }
  }
  v5 = Handle;
  v13 = 0;
  ElementData = BcdGetElementData(Handle, 385875978LL, 0LL, &v13);
  v7 = v13;
  if ( ElementData != -1073741789 )
    v7 = 0;
  v8 = ElementData;
  v13 = v7;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7 + 8LL, 0x61656857u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_18;
  }
  if ( v8 != -1073741789 )
  {
LABEL_12:
    v10 = v7 >> 3;
    if ( (unsigned __int8)WheapIsPageInList(v2, v10, a1) )
    {
      v4 = 0;
    }
    else
    {
      v2[v10] = a1;
      WheapSortBadPages(v2, (unsigned int)(v10 + 1));
      if ( (unsigned int)WheapCountBadPageExtents(v2, (unsigned int)(v10 + 1)) <= 0x40 )
      {
        v4 = BcdSetElementData(v5, 385875978LL, v2, v7 + 8);
        if ( v4 >= 0 )
          v4 = 0;
      }
      else
      {
        v4 = -1073741823;
      }
    }
    goto LABEL_18;
  }
  v4 = BcdGetElementData(v5, 385875978LL, PoolWithTag, &v13);
  if ( v4 >= 0 )
  {
    v7 = v13;
    goto LABEL_12;
  }
LABEL_18:
  if ( v5 )
    BcdCloseObject(v5);
LABEL_20:
  if ( v14 )
    BcdCloseStore(v14);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x61656857u);
  return (unsigned int)v4;
}
