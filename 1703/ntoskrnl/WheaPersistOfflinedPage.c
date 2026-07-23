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

__int64 __fastcall WheaPersistOfflinedPage(UNICODE_STRING *a1, BCD_OPEN_FLAGS a2)
{
  _QWORD *v2; // rdi
  NTSTATUS v4; // ebx
  HANDLE v5; // rsi
  NTSTATUS ElementData; // eax
  ULONG v7; // r14d
  NTSTATUS v8; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rbx
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+20h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+78h] [rbp+48h] BYREF
  HANDLE BcdStoreHandle; // [rsp+80h] [rbp+50h] BYREF
  HANDLE BcdObjectHandle; // [rsp+88h] [rbp+58h] BYREF

  BcdStoreHandle = 0LL;
  v2 = 0LL;
  BcdObjectHandle = 0LL;
  v4 = BcdOpenStore(a1, a2, &BcdStoreHandle);
  if ( v4 < 0 )
    goto LABEL_20;
  if ( BcdOpenObject(BcdStoreHandle, &GUID_BAD_MEMORY_GROUP, &BcdObjectHandle) < 0 )
  {
    Description.Version = 1;
    Description.Type = 537919488;
    v4 = BcdCreateObject(BcdStoreHandle, &GUID_BAD_MEMORY_GROUP, &Description, &BcdObjectHandle);
    if ( v4 < 0 )
    {
      v5 = BcdObjectHandle;
      goto LABEL_18;
    }
  }
  v5 = BcdObjectHandle;
  BufferSize = 0;
  ElementData = BcdGetElementData(BcdObjectHandle, 0x1700000Au, 0LL, &BufferSize);
  v7 = BufferSize;
  if ( ElementData != -1073741789 )
    v7 = 0;
  v8 = ElementData;
  BufferSize = v7;
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
        v4 = BcdSetElementData(v5, 0x1700000Au, v2, v7 + 8);
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
  v4 = BcdGetElementData(v5, 0x1700000Au, PoolWithTag, &BufferSize);
  if ( v4 >= 0 )
  {
    v7 = BufferSize;
    goto LABEL_12;
  }
LABEL_18:
  if ( v5 )
    BcdCloseObject(v5);
LABEL_20:
  if ( BcdStoreHandle )
    BcdCloseStore(BcdStoreHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x61656857u);
  return (unsigned int)v4;
}
