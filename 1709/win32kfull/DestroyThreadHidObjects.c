/*
 * XREFs of DestroyThreadHidObjects @ 0x1C00C6FF0
 * Callers:
 *     <none>
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00A0E54 (UpdateRawMouseMode.c)
 *     FreeHidProcessRequest @ 0x1C00C7160 (FreeHidProcessRequest.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00C76F8 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01B5E80 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  struct tagPROCESSINFO *v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  struct tagPROCESSINFO *v9; // rdi
  __int64 v10; // rax
  struct tagPROCESSINFO *v11; // rdi
  struct tagPROCESSINFO *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  const struct tagPROCESSINFO *v17; // rcx
  struct tagPROCESS_HID_REQUEST *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 400) + 784LL);
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
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && *(_QWORD *)(v4 + 16) == a1 )
  {
    HMAssignmentUnlock(v2 + 64);
    *(_DWORD *)(v2 + 100) &= 0xFFFFFFFC;
    if ( (*(_DWORD *)(v2 + 100) & 4) != 0 )
    {
      --gHidCounters[1];
      *(_DWORD *)(v2 + 100) &= ~4u;
    }
    if ( gpqForeground )
    {
      v16 = *(_QWORD *)(gpqForeground + 104LL);
      if ( v16 )
        v14 = *(_QWORD *)(v16 + 16);
      else
        v14 = *(_QWORD *)(gpqForeground + 88LL);
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 == a1 )
      UpdateRawMouseMode(gpqForeground);
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  EnterDeviceInfoListCrit_();
  v8 = *(_DWORD *)(a1 + 1184);
  if ( (v8 & 0x200000) != 0 )
  {
    v17 = *(const struct tagPROCESSINFO **)(a1 + 400);
    *(_DWORD *)(a1 + 1184) = v8 & 0xFFDFFFFF;
    if ( !(unsigned int)HasRawKeyboardPerThreadRegistration(v17) )
    {
      v18 = SearchProcessHidRequest(v6, 1u, 6u, &v20);
      if ( v18 )
      {
        FreeHidProcessRequest(v18);
        *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      }
    }
  }
  v9 = *(struct tagPROCESSINFO **)(v2 + 16);
  while ( v9 != (struct tagPROCESSINFO *)(v2 + 16) )
  {
    v6 = v9;
    v9 = *(struct tagPROCESSINFO **)v9;
    v10 = *((_QWORD *)v6 + 4);
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 16) == a1 )
        FreeHidProcessRequest(v6);
    }
  }
  v11 = *(struct tagPROCESSINFO **)(v2 + 32);
  while ( v11 != (struct tagPROCESSINFO *)(v2 + 32) )
  {
    v6 = v11;
    v11 = *(struct tagPROCESSINFO **)v11;
    v15 = *((_QWORD *)v6 + 4);
    if ( v15 && *(_QWORD *)(v15 + 16) == a1 )
      FreeHidProcessRequest(v6);
  }
  v12 = *(struct tagPROCESSINFO **)(v2 + 48);
  while ( v12 != (struct tagPROCESSINFO *)(v2 + 48) )
  {
    v6 = v12;
    v12 = *(struct tagPROCESSINFO **)v12;
    v19 = *((_QWORD *)v6 + 4);
    if ( v19 && *(_QWORD *)(v19 + 16) == a1 )
      FreeHidProcessRequest(v6);
  }
  return LeaveDeviceInfoListCrit_(v6, v5, v7);
}
