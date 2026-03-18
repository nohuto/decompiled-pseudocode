/*
 * XREFs of ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00B19E8
 * Callers:
 *     FreeHidProcessRequest @ 0x1C00B08E0 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01B3088 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C013DBA4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C013DBDC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall DerefIncludeRequest(struct tagPROCESS_HID_REQUEST *a1, struct tagPROCESS_HID_TABLE *a2, int a3, int a4)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 *v14; // rsi
  __int64 *v15; // rcx
  __int64 **v16; // rax
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 )
  {
    v7 = *((_DWORD *)a2 + 25);
    if ( (v7 & 0x100) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 2 )
      *((_DWORD *)a2 + 25) = v7 & 0xFFFFFEFF;
    v8 = *((_DWORD *)a2 + 25);
    if ( (v8 & 0x200) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
      *((_DWORD *)a2 + 25) = v8 & 0xFFFFFDFF;
    v9 = *((_DWORD *)a2 + 25);
    if ( (v9 & 0x400) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
      *((_DWORD *)a2 + 25) = v9 & 0xFFFFFBFF;
    v10 = *((_DWORD *)a2 + 25);
    if ( (v10 & 0x800) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
      *((_DWORD *)a2 + 25) = v10 & 0xFFFFF7FF;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 3);
    if ( (*(_DWORD *)(v12 + 24))-- == 1 )
    {
      if ( a4 )
      {
        v14 = (__int64 *)*((_QWORD *)a1 + 3);
        if ( !(*((_DWORD *)v14 + 5) | *((_DWORD *)v14 + 6) | *((_DWORD *)v14 + 7) | *((_DWORD *)v14 + 8)) )
        {
          RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v17, gTLCInfoLock);
          v15 = (__int64 *)*v14;
          v16 = (__int64 **)v14[1];
          if ( *(__int64 **)(*v14 + 8) != v14 || *v16 != v14 )
            __fastfail(3u);
          *v16 = v15;
          v15[1] = (__int64)v16;
          Win32FreePool(v14);
          RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v17);
        }
      }
    }
  }
  v11 = *((_DWORD *)a1 + 5);
  if ( (v11 & 1) != 0 )
  {
    *((_DWORD *)a1 + 5) = v11 & 0xFFFFFFFE;
    if ( !a3 )
    {
      --*((_DWORD *)a2 + 20);
      --gHidCounters[2];
    }
  }
}
