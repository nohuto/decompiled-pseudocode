/*
 * XREFs of CleanupHidRequestList @ 0x1C00C4C70
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidTLCInfo @ 0x1C00C6A64 (FreeHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00C7BA4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C7BDC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void CleanupHidRequestList()
{
  __int64 v0; // r8
  _QWORD *v1; // rcx
  __int64 v2; // rax
  _QWORD *v3; // rdx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v4, gTLCInfoLock);
  while ( (_QWORD *)RawInputManagerObject::gHidRequestTable[2] != &RawInputManagerObject::gHidRequestTable[2] )
  {
    v1 = (_QWORD *)qword_1C032B4D8;
    *(_DWORD *)(qword_1C032B4D8 + 20) = 0;
    v2 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    Win32FreePool(v1, v3, v0);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v4);
}
