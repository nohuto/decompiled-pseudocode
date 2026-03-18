/*
 * XREFs of ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00C7790
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00C7368 (_RegisterRawInputDevices.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00A0E54 (UpdateRawMouseMode.c)
 *     HasHidTable @ 0x1C00A0EE0 (HasHidTable.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C00C7A24 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall AdjustLegacyDeviceFlags(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rbx
  struct tagPROCESS_HID_REQUEST *v2; // rax
  int v3; // ecx
  struct tagPROCESS_HID_REQUEST *v4; // rax
  struct tagPROCESS_HID_REQUEST *v5; // rbp
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 98);
  v2 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 6u);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v1 + 100) | 0x10;
    *(_DWORD *)(v1 + 100) = v3;
    if ( -__CFSHR__(v3, 7) != -(*((_DWORD *)v2 + 5) & 1) )
    {
      if ( (*((_DWORD *)v2 + 5) & 1) != 0 )
        ++gHidCounters[0];
      else
        --gHidCounters[0];
      v13 = *(_DWORD *)(v1 + 100) ^ (*(_DWORD *)(v1 + 100) ^ (*((_DWORD *)v2 + 5) << 6)) & 0x40;
      *(_DWORD *)(v1 + 100) = v13;
      *(_DWORD *)(v1 + 100) = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v2 + 5) << 6)) & 0x80;
    }
    v15 = v1 + 72;
    v16 = *((_QWORD *)v2 + 4);
    HMAssignmentLock(&v15);
  }
  else
  {
    v12 = *(_DWORD *)(v1 + 100) & 0xFFFFF9CF;
    *(_DWORD *)(v1 + 100) = v12;
    if ( (v12 & 0x40) != 0 )
      --gHidCounters[0];
    *(_DWORD *)(v1 + 100) &= 0xFFFFFF3F;
    HMAssignmentUnlock(v1 + 72);
  }
  v4 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 2u);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v1 + 100) | 1;
    *(_DWORD *)(v1 + 100) = v6;
    if ( -__CFSHR__(v6, 3) != -(*((_DWORD *)v4 + 5) & 1) )
    {
      if ( (*((_DWORD *)v4 + 5) & 1) != 0 )
        ++gHidCounters[1];
      else
        --gHidCounters[1];
      v14 = *(_DWORD *)(v1 + 100) ^ (*(_DWORD *)(v1 + 100) ^ (4 * *((_DWORD *)v4 + 5))) & 4;
      *(_DWORD *)(v1 + 100) = v14;
      *(_DWORD *)(v1 + 100) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(4 * *((_DWORD *)v4 + 5))) & 8;
    }
    if ( gpqForeground )
    {
      v7 = *(_QWORD *)(gpqForeground + 104LL);
      if ( v7 )
        v8 = *(_QWORD *)(v7 + 16);
      else
        v8 = *(_QWORD *)(gpqForeground + 88LL);
      if ( v8 && (unsigned int)HasHidTable(v8) && *(_QWORD *)(*(_QWORD *)(v8 + 400) + 784LL) == v1 )
        UpdateRawMouseMode(gpqForeground);
    }
    v15 = v1 + 64;
    v16 = *((_QWORD *)v5 + 4);
    HMAssignmentLock(&v15);
  }
  else
  {
    v9 = *(_DWORD *)(v1 + 100) & 0xFFFFFEFC;
    *(_DWORD *)(v1 + 100) = v9;
    if ( (v9 & 4) != 0 )
      --gHidCounters[1];
    *(_DWORD *)(v1 + 100) &= 0xFFFFFFF3;
    if ( gpqForeground )
    {
      v10 = *(_QWORD *)(gpqForeground + 104LL);
      v11 = v10 ? *(_QWORD *)(v10 + 16) : *(_QWORD *)(gpqForeground + 88LL);
      if ( v11 && (unsigned int)HasHidTable(v11) && *(_QWORD *)(*(_QWORD *)(v11 + 400) + 784LL) == v1 )
        UpdateRawMouseMode(gpqForeground);
    }
    HMAssignmentUnlock(v1 + 64);
  }
}
