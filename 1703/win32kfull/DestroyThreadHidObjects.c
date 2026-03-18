/*
 * XREFs of DestroyThreadHidObjects @ 0x1C00B0770
 * Callers:
 *     <none>
 * Callees:
 *     UpdateRawMouseMode @ 0x1C004A46C (UpdateRawMouseMode.c)
 *     FreeHidProcessRequest @ 0x1C00B08E0 (FreeHidProcessRequest.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00B0EA0 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01B2ED0 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  struct tagPROCESSINFO *v6; // rcx
  int v7; // eax
  struct tagPROCESSINFO *v8; // rdi
  __int64 v9; // rax
  struct tagPROCESSINFO *v10; // rdi
  struct tagPROCESSINFO *v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  const struct tagPROCESSINFO *v16; // rcx
  struct tagPROCESS_HID_REQUEST *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 776LL);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) == a1 )
    {
      HMAssignmentUnlock(v2 + 72);
      *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      if ( (*(_DWORD *)(v2 + 100) & 0x40) != 0 )
      {
        --gHidCounters[0];
        *(_DWORD *)(v2 + 100) &= ~0x40u;
      }
    }
  }
  v4 = v2 + 64;
  v5 = *(_QWORD *)(v2 + 64);
  if ( v5 && *(_QWORD *)(v5 + 16) == a1 )
  {
    HMAssignmentUnlock(v4);
    *(_DWORD *)(v2 + 100) &= 0xFFFFFFFC;
    if ( (*(_DWORD *)(v2 + 100) & 4) != 0 )
    {
      --gHidCounters[1];
      *(_DWORD *)(v2 + 100) &= ~4u;
    }
    v4 = gpqForeground;
    if ( gpqForeground )
    {
      v15 = *(_QWORD *)(gpqForeground + 72LL);
      if ( v15 )
        v13 = *(_QWORD *)(v15 + 16);
      else
        v13 = *(_QWORD *)(gpqForeground + 56LL);
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 == a1 )
      UpdateRawMouseMode(gpqForeground);
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  EnterDeviceInfoListCrit_(v4);
  v7 = *(_DWORD *)(a1 + 1096);
  if ( (v7 & 0x200000) != 0 )
  {
    v16 = *(const struct tagPROCESSINFO **)(a1 + 376);
    *(_DWORD *)(a1 + 1096) = v7 & 0xFFDFFFFF;
    if ( !(unsigned int)HasRawKeyboardPerThreadRegistration(v16) )
    {
      v17 = SearchProcessHidRequest(v6, 1u, 6u, &v19);
      if ( v17 )
      {
        FreeHidProcessRequest(v17);
        *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      }
    }
  }
  v8 = *(struct tagPROCESSINFO **)(v2 + 16);
  while ( v8 != (struct tagPROCESSINFO *)(v2 + 16) )
  {
    v6 = v8;
    v8 = *(struct tagPROCESSINFO **)v8;
    v9 = *((_QWORD *)v6 + 4);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 16) == a1 )
        FreeHidProcessRequest(v6);
    }
  }
  v10 = *(struct tagPROCESSINFO **)(v2 + 32);
  while ( v10 != (struct tagPROCESSINFO *)(v2 + 32) )
  {
    v6 = v10;
    v10 = *(struct tagPROCESSINFO **)v10;
    v14 = *((_QWORD *)v6 + 4);
    if ( v14 && *(_QWORD *)(v14 + 16) == a1 )
      FreeHidProcessRequest(v6);
  }
  v11 = *(struct tagPROCESSINFO **)(v2 + 48);
  while ( v11 != (struct tagPROCESSINFO *)(v2 + 48) )
  {
    v6 = v11;
    v11 = *(struct tagPROCESSINFO **)v11;
    v18 = *((_QWORD *)v6 + 4);
    if ( v18 && *(_QWORD *)(v18 + 16) == a1 )
      FreeHidProcessRequest(v6);
  }
  return LeaveDeviceInfoListCrit_(v6);
}
