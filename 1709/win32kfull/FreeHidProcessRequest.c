/*
 * XREFs of FreeHidProcessRequest @ 0x1C00C7160
 * Callers:
 *     FreeProcessHidTable @ 0x1C00C4B88 (FreeProcessHidTable.c)
 *     DestroyThreadHidObjects @ 0x1C00C6FF0 (DestroyThreadHidObjects.c)
 *     _RegisterRawInputDevices @ 0x1C00C7368 (_RegisterRawInputDevices.c)
 * Callees:
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0009354 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C00C8190 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00C8240 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01B5E34 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 */

__int64 __fastcall FreeHidProcessRequest(struct tagPROCESS_HID_REQUEST *a1, int a2, struct tagPROCESS_HID_TABLE *a3)
{
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  struct tagPROCESS_HID_REQUEST **v10; // rcx

  v6 = IsLegacyDevice(*((_WORD *)a1 + 8), *((_WORD *)a1 + 9));
  HMAssignmentUnlock((char *)a1 + 32);
  *((_QWORD *)a1 + 5) = 0LL;
  v8 = 1LL;
  switch ( a2 )
  {
    case 1:
      DerefIncludeRequest(a1, a3, v6, 1);
      break;
    case 2:
      DerefPageOnlyRequest(a1, a3, 1);
      break;
    case 3:
      DerefExcludeRequest(a1, v6, 1);
      break;
  }
  v9 = *(_QWORD *)a1;
  if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)a1 + 8LL) != a1
    || (v10 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)a1 + 1), *v10 != a1) )
  {
    __fastfail(3u);
  }
  *v10 = (struct tagPROCESS_HID_REQUEST *)v9;
  *(_QWORD *)(v9 + 8) = v10;
  return Win32FreePool(a1, v7, v8);
}
