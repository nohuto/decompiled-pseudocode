/*
 * XREFs of ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00C7B18
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00C7368 (_RegisterRawInputDevices.c)
 * Callees:
 *     FreeHidTLCInfo @ 0x1C00C6A64 (FreeHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00C7BA4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C7BDC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void CleanupFreedTLCInfo(void)
{
  __int64 v0; // r8
  __int64 v1; // rax
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  _QWORD **v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v9, gTLCInfoLock);
  v1 = RawInputManagerObject::gHidRequestTable[0];
  v2 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  while ( v2 != (_QWORD *)v1 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    if ( !(*((_DWORD *)v3 + 5) | *((_DWORD *)v3 + 6) | *((_DWORD *)v3 + 8) | *((_DWORD *)v3 + 9)) )
      FreeHidTLCInfo(v3);
    v1 = RawInputManagerObject::gHidRequestTable[0];
  }
  v4 = (_QWORD **)(v1 + 16);
  v5 = *v4;
  while ( v5 != v4 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    if ( !*((_DWORD *)v6 + 5) )
    {
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      Win32FreePool(v6, v8, v0);
    }
    v4 = (_QWORD **)&RawInputManagerObject::gHidRequestTable[2];
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v9);
}
