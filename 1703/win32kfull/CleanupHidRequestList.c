/*
 * XREFs of CleanupHidRequestList @ 0x1C011C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C013DBA4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C013DBDC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void CleanupHidRequestList()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+38h] [rbp+10h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v9, gTLCInfoLock);
  v0 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  v1 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  while ( v1 != v0 )
  {
    v2 = v1;
    v1 = (_QWORD *)*v1;
    *((_DWORD *)v2 + 9) = 0;
    *((_DWORD *)v2 + 8) = 0;
    *((_DWORD *)v2 + 7) = 0;
    *((_DWORD *)v2 + 6) = 0;
    if ( !*((_DWORD *)v2 + 5) )
    {
      RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8, gTLCInfoLock);
      v3 = *v2;
      v4 = (_QWORD *)v2[1];
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      Win32FreePool(v2);
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8);
    }
    v0 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  }
  while ( (_QWORD *)v0[2] != v0 + 2 )
  {
    v5 = (_QWORD *)qword_1C032F130;
    *(_DWORD *)(qword_1C032F130 + 20) = 0;
    v6 = *v5;
    v7 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    Win32FreePool(v5);
    v0 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v9);
}
