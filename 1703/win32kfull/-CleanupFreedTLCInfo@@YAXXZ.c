/*
 * XREFs of ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00B12C0
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00B0B10 (_RegisterRawInputDevices.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C013DBA4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C013DBDC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void CleanupFreedTLCInfo(void)
{
  _QWORD *v0; // rdx
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  char v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+38h] [rbp+10h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v11, gTLCInfoLock);
  v0 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  v1 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  while ( v1 != v0 )
  {
    v2 = v1;
    v1 = (_QWORD *)*v1;
    if ( !(*((_DWORD *)v2 + 5) | *((_DWORD *)v2 + 6) | *((_DWORD *)v2 + 7) | *((_DWORD *)v2 + 8)) )
    {
      RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v10, gTLCInfoLock);
      v3 = *v2;
      v4 = (_QWORD *)v2[1];
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      Win32FreePool(v2);
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v10);
      v0 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
    }
  }
  v5 = v0 + 2;
  v6 = (_QWORD *)v0[2];
  while ( v6 != v5 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    if ( !*((_DWORD *)v7 + 5) )
    {
      v8 = *v7;
      v9 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      Win32FreePool(v7);
      v0 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
    }
    v5 = v0 + 2;
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v11);
}
