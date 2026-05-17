/*
 * XREFs of LdrpResGetMappingSize @ 0x18001F540
 * Callers:
 *     LdrResSearchResource @ 0x18001D400 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrResGetRCConfig @ 0x18001F860 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180049188 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  unsigned __int64 FileSizeFromLoadAsDataTable; // rsi
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int VirtualMemory; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+30h] [rbp-88h]
  bool v21; // [rsp+34h] [rbp-84h]
  _QWORD v22[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v23; // [rsp+50h] [rbp-68h] BYREF
  int v24; // [rsp+58h] [rbp-60h] BYREF
  const wchar_t *v25; // [rsp+60h] [rbp-58h]
  _BYTE v26[16]; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-40h]

  LODWORD(v22[0]) = 3670070;
  v22[1] = L"LdrpResGetMappingSize Enter";
  v24 = 3538996;
  v25 = L"LdrpResGetMappingSize Exit";
  v7 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v8 = 2147353477LL;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v9 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v6) )
      v19 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v19 = 2147353476LL;
    LdrpTraceLoadMUIDll(v22, *(unsigned __int8 *)v19);
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( a1 && a2 )
  {
    v10 = 0LL;
    if ( (a3 & 0x20000) != 0 )
      v10 = *a2;
    *a2 = 0LL;
    FileSizeFromLoadAsDataTable = 0LL;
    v12 = 0LL;
    v21 = (a3 & 0x100) != 0 && (a1 & 1) == 0;
    v22[0] = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    VirtualMemory = RtlImageNtHeaderEx(1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v23);
    v20 = VirtualMemory;
    if ( VirtualMemory >= 0 )
    {
      v14 = 267LL;
      if ( *(_WORD *)(v23 + 24) == 267 || (v14 = 523LL, *(_WORD *)(v23 + 24) == 523) )
      {
        v12 = *(unsigned int *)(v23 + 80);
      }
      else
      {
        v12 = 0LL;
        VirtualMemory = -1073741701;
        v20 = -1073741701;
      }
    }
    if ( VirtualMemory < 0 )
      return (unsigned int)VirtualMemory;
    if ( !v21 || !v12 )
    {
      if ( !a4 )
        FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
      if ( FileSizeFromLoadAsDataTable )
      {
        VirtualMemory = 0;
        v20 = 0;
      }
      else
      {
        VirtualMemory = ZwQueryVirtualMemory(-1LL, v22[0], 3LL, v26, 32LL, 0LL);
        v20 = VirtualMemory;
        if ( VirtualMemory >= 0 )
          FileSizeFromLoadAsDataTable = v27;
      }
      if ( FileSizeFromLoadAsDataTable || !v12 )
        goto LABEL_18;
      VirtualMemory = 0;
      v20 = 0;
    }
    FileSizeFromLoadAsDataTable = v12;
LABEL_18:
    if ( VirtualMemory >= 0 )
    {
      if ( v10 && v10 < FileSizeFromLoadAsDataTable )
      {
        VirtualMemory = -1073741793;
        v20 = -1073741793;
      }
      else
      {
        *a2 = FileSizeFromLoadAsDataTable;
      }
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v13) )
    {
      v7 = (__int64)NtCurrentPeb()->SharedData + 555;
      VirtualMemory = v20;
    }
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v16) )
      {
        v9 = (__int64)NtCurrentPeb()->SharedData + 554;
        VirtualMemory = v20;
      }
      LdrpTraceLoadMUIDll(&v24, *(unsigned __int8 *)v9);
    }
    return (unsigned int)VirtualMemory;
  }
  return 3221225485LL;
}
