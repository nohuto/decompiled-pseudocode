/*
 * XREFs of WheaPersistOfflinedPage @ 0x1402898F4
 * Callers:
 *     EmpRemoveBadS3PageWorker @ 0x1406AF670 (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140763138 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     BcdOpenStore @ 0x1405AE300 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x1405AE528 (BcdCloseStore.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1405AF4D8 (BcdCloseObject.c)
 *     WheapCountBadPageExtents @ 0x140763354 (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x14076339C (WheapIsPageInList.c)
 *     WheapSortBadPages @ 0x1407633C0 (WheapSortBadPages.c)
 *     BcdCreateObject @ 0x140778B64 (BcdCreateObject.c)
 *     BcdGetElementData @ 0x14077935C (BcdGetElementData.c)
 *     BcdSetElementData @ 0x140779378 (BcdSetElementData.c)
 */

__int64 __fastcall WheaPersistOfflinedPage(UNICODE_STRING *a1)
{
  _QWORD *v1; // rdi
  NTSTATUS v3; // ebx
  HANDLE v4; // rsi
  NTSTATUS ElementData; // eax
  ULONG v6; // r14d
  NTSTATUS v7; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rbx
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+20h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+78h] [rbp+48h] BYREF
  HANDLE BcdStoreHandle; // [rsp+80h] [rbp+50h] BYREF
  HANDLE BcdObjectHandle; // [rsp+88h] [rbp+58h] BYREF

  BcdStoreHandle = 0LL;
  v1 = 0LL;
  BcdObjectHandle = 0LL;
  v3 = BcdOpenStore(a1, BCD_OPEN_NONE, &BcdStoreHandle);
  if ( v3 < 0 )
    goto LABEL_20;
  if ( BcdOpenObject(BcdStoreHandle, &GUID_BAD_MEMORY_GROUP, &BcdObjectHandle) < 0 )
  {
    Description.Version = 1;
    Description.Type = 537919488;
    v3 = BcdCreateObject(BcdStoreHandle, &GUID_BAD_MEMORY_GROUP, &Description, &BcdObjectHandle);
    if ( v3 < 0 )
    {
      v4 = BcdObjectHandle;
      goto LABEL_18;
    }
  }
  v4 = BcdObjectHandle;
  BufferSize = 0;
  ElementData = BcdGetElementData(BcdObjectHandle, 0x1700000Au, 0LL, &BufferSize);
  v6 = BufferSize;
  if ( ElementData != -1073741789 )
    v6 = 0;
  v7 = ElementData;
  BufferSize = v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + 8LL, 0x61656857u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    goto LABEL_18;
  }
  if ( v7 != -1073741789 )
  {
LABEL_12:
    v9 = v6 >> 3;
    if ( (unsigned __int8)WheapIsPageInList(v1, v9, a1) )
    {
      v3 = 0;
    }
    else
    {
      v1[v9] = a1;
      WheapSortBadPages(v1, (unsigned int)(v9 + 1));
      if ( (unsigned int)WheapCountBadPageExtents(v1, (unsigned int)(v9 + 1)) <= 0x40 )
      {
        v3 = BcdSetElementData(v4, 0x1700000Au, v1, v6 + 8);
        if ( v3 >= 0 )
          v3 = 0;
      }
      else
      {
        v3 = -1073741823;
      }
    }
    goto LABEL_18;
  }
  v3 = BcdGetElementData(v4, 0x1700000Au, PoolWithTag, &BufferSize);
  if ( v3 >= 0 )
  {
    v6 = BufferSize;
    goto LABEL_12;
  }
LABEL_18:
  if ( v4 )
    BcdCloseObject(v4);
LABEL_20:
  if ( BcdStoreHandle )
    BcdCloseStore(BcdStoreHandle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x61656857u);
  return (unsigned int)v3;
}
