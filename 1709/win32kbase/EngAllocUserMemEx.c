/*
 * XREFs of EngAllocUserMemEx @ 0x1C001EEB8
 * Callers:
 *     EngAllocUserMem @ 0x1C001B230 (EngAllocUserMem.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0041B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001F06C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001F0A0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall EngAllocUserMemEx(ULONG_PTR a1, int a2, PVOID *a3)
{
  NTSTATUS v4; // edi
  HANDLE v5; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r14
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+30h] BYREF
  int NewElement; // [rsp+88h] [rbp+38h] BYREF
  char v12; // [rsp+90h] [rbp+40h] BYREF

  NewElement = a2;
  RegionSize = a1;
  *a3 = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v4 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = MmSecureVirtualMemory(*a3, RegionSize, 4u);
  if ( !v5 )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
    *a3 = 0LL;
    return (unsigned int)-2143354876;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v7 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    Buffer[0] = *a3;
    Buffer[1] = RegionSize;
    LOBYTE(NewElement) = 0;
    Buffer[2] = v5;
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v12, (struct _EX_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
    if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v7 + 88), Buffer, 0x18u, (PBOOLEAN)&NewElement)
      || !(_BYTE)NewElement )
    {
      MmUnsecureVirtualMemory(v5);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
      *a3 = 0LL;
      v4 = -1073741801;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v12);
    return (unsigned int)v4;
  }
  MmUnsecureVirtualMemory(v5);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
  *a3 = 0LL;
  return 3221225473LL;
}
