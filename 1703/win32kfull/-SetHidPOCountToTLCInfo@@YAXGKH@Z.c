/*
 * XREFs of ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C000482C
 * Callers:
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0004794 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00B1514 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C013DBA4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C013DBDC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall SetHidPOCountToTLCInfo(__int16 a1, int a2, int a3)
{
  _BOOL8 v6; // rbp
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+68h] [rbp+20h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v12, gTLCInfoLock);
  v6 = a3 && !a2;
  v7 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  v8 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  while ( v8 != v7 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    if ( *((_WORD *)v9 + 8) == a1 )
    {
      *((_DWORD *)v9 + 7) = a2;
      if ( v6 && !(a2 | *((_DWORD *)v9 + 5) | *((_DWORD *)v9 + 6) | *((_DWORD *)v9 + 8)) )
      {
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13, gTLCInfoLock);
        v10 = *v9;
        v11 = (_QWORD *)v9[1];
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v11 != v9 )
          __fastfail(3u);
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        Win32FreePool(v9);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13);
      }
      v7 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
    }
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v12);
}
