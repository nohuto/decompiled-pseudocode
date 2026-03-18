/*
 * XREFs of RIMFreeHidTLCInfo @ 0x1C00088A0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0008734 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00906DC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0090700 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 */

void __fastcall RIMFreeHidTLCInfo(__int64 *a1)
{
  __int64 *v2; // rcx
  __int64 **v3; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v4, (struct RIMLOCK *)&gTLCInfoLock);
  v2 = (__int64 *)*a1;
  v3 = (__int64 **)a1[1];
  if ( *(__int64 **)(*a1 + 8) != a1 || *v3 != a1 )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = (__int64)v3;
  if ( !*((_DWORD *)a1 + 10) )
    Win32FreePool(a1);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v4);
}
