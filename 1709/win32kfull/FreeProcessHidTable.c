/*
 * XREFs of FreeProcessHidTable @ 0x1C00C4B88
 * Callers:
 *     DestroyProcessHidRequests @ 0x1C00C4B50 (DestroyProcessHidRequests.c)
 * Callees:
 *     FreeHidProcessRequest @ 0x1C00C7160 (FreeHidProcessRequest.c)
 *     ?HidDeviceStartStop@@YAXXZ @ 0x1C00C7AE4 (-HidDeviceStartStop@@YAXXZ.c)
 */

void __fastcall FreeProcessHidTable(struct tagPROCESS_HID_REQUEST **a1)
{
  struct tagPROCESS_HID_REQUEST **v1; // rdi
  BOOL v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  struct tagPROCESS_HID_REQUEST **i; // rdi
  struct tagPROCESS_HID_REQUEST **j; // rdi
  struct tagPROCESS_HID_REQUEST *v8; // rax
  struct tagPROCESS_HID_REQUEST ***v9; // rcx

  v1 = a1 + 2;
  v3 = *v1 != (struct tagPROCESS_HID_REQUEST *)v1
    || a1[4] != (struct tagPROCESS_HID_REQUEST *)(a1 + 4)
    || a1[6] != (struct tagPROCESS_HID_REQUEST *)(a1 + 6);
  HMAssignmentUnlock(a1 + 9);
  HMAssignmentUnlock(a1 + 8);
  while ( *v1 != (struct tagPROCESS_HID_REQUEST *)v1 )
    FreeHidProcessRequest(*v1);
  for ( i = a1 + 4; *i != (struct tagPROCESS_HID_REQUEST *)i; FreeHidProcessRequest(*i) )
    ;
  for ( j = a1 + 6; *j != (struct tagPROCESS_HID_REQUEST *)j; FreeHidProcessRequest(*j) )
    ;
  v8 = *a1;
  if ( *((struct tagPROCESS_HID_REQUEST ***)*a1 + 1) != a1 || (v9 = (struct tagPROCESS_HID_REQUEST ***)a1[1], *v9 != a1) )
    __fastfail(3u);
  *v9 = (struct tagPROCESS_HID_REQUEST **)v8;
  *((_QWORD *)v8 + 1) = v9;
  Win32FreePool(a1, v4, v5);
  --gnHidProcess;
  if ( v3 )
    HidDeviceStartStop();
}
