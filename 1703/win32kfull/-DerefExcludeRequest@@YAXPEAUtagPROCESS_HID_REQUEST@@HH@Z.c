/*
 * XREFs of ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01B2E44
 * Callers:
 *     FreeHidProcessRequest @ 0x1C00B08E0 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01B3088 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C013DBA4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C013DBDC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall DerefExcludeRequest(struct tagPROCESS_HID_REQUEST *a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rcx
  __int64 **v7; // rax
  char v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !a2 )
  {
    if ( (*((_DWORD *)a1 + 5) & 8) != 0 )
      --*(_DWORD *)(*((_QWORD *)a1 + 3) + 36LL);
    v3 = *((_QWORD *)a1 + 3);
    if ( (*(_DWORD *)(v3 + 32))-- == 1 )
    {
      if ( a3 )
      {
        v5 = (__int64 *)*((_QWORD *)a1 + 3);
        if ( !(*((_DWORD *)v5 + 5) | *((_DWORD *)v5 + 6) | *((_DWORD *)v5 + 7) | *((_DWORD *)v5 + 8)) )
        {
          RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
            (RIMLOCKExclusiveIfNeeded *)&v8,
            (struct _KTHREAD **)gTLCInfoLock);
          v6 = (__int64 *)*v5;
          v7 = (__int64 **)v5[1];
          if ( *(__int64 **)(*v5 + 8) != v5 || *v7 != v5 )
            __fastfail(3u);
          *v7 = v6;
          v6[1] = (__int64)v7;
          Win32FreePool(v5);
          RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8);
        }
      }
    }
  }
}
