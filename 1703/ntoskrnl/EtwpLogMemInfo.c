/*
 * XREFs of EtwpLogMemInfo @ 0x1402541D0
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x140254310 (EtwpLogMemInfoTimerCallback.c)
 *     EtwpLogMemInfoRundown @ 0x140710334 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     MmQueryMemoryListInformation @ 0x1400DD920 (MmQueryMemoryListInformation.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall EtwpLogMemInfo(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // [rsp+40h] [rbp-C0h] BYREF
  GUID v7; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int8 *v9; // [rsp+110h] [rbp+10h] BYREF
  int v10; // [rsp+118h] [rbp+18h]
  int v11; // [rsp+11Ch] [rbp+1Ch]
  __int64 v12; // [rsp+120h] [rbp+20h]
  int v13; // [rsp+128h] [rbp+28h]
  int v14; // [rsp+12Ch] [rbp+2Ch]

  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v6;
  v6 = 8;
  UserData.Size = 1;
  MmQueryMemoryListInformation(0LL, &v7.Data4[4], 0xB0u, a4, &v7);
  v11 = 0;
  v14 = 0;
  v9 = &v7.Data4[4];
  v10 = 176;
  v12 = a2;
  v13 = 32;
  if ( a1 )
  {
    EtwpLogKernelEvent((__int64)&v9, EtwpHostSiloState, *a1, 2u, 0x270u, 0x401803u);
  }
  else
  {
    if ( (dword_140345004 & 0x80000) != 0 )
      EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    EtwTraceKernelEvent((int)&v9, 2, 0x20080000u, 624, 4200451);
  }
}
