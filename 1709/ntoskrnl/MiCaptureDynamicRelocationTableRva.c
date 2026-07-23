/*
 * XREFs of MiCaptureDynamicRelocationTableRva @ 0x1405BF3F8
 * Callers:
 *     MiApplyDynamicRelocations @ 0x14083982C (MiApplyDynamicRelocations.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1400AE3E0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall MiCaptureDynamicRelocationTableRva(
        char *BaseAddress,
        ULONGLONG Size,
        _IMAGE_NT_HEADERS64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  NTSTATUS v7; // r8d
  unsigned __int16 v8; // bx
  int v9; // r14d
  __int64 v10; // r9
  _DWORD *v11; // rsi
  char *v12; // rdi
  char *v13; // rdx
  PIMAGE_NT_HEADERS NtHeader; // [rsp+60h] [rbp+18h] BYREF

  NtHeader = a3;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = a7;
  *a7 = 0;
  if ( a6 >= 0xE6 )
  {
    v8 = *(_WORD *)(a5 + 228);
    v9 = *(_DWORD *)(a5 + 224);
  }
  if ( a6 >= 0xC8 )
    v10 = *(_QWORD *)(a5 + 192);
  if ( v8 )
  {
    v12 = &BaseAddress[(unsigned int)Size];
    v7 = RtlImageNtHeaderEx(0, BaseAddress, (unsigned int)Size, &NtHeader);
    if ( v7 >= 0 )
    {
      if ( v8 > NtHeader->FileHeader.NumberOfSections )
      {
        return (unsigned int)-1073741701;
      }
      else
      {
        v13 = (char *)NtHeader + 40 * v8 + NtHeader->FileHeader.SizeOfOptionalHeader - 16;
        if ( v12 <= v13 || v12 < v13 + 40 )
          return (unsigned int)-1073741701;
        else
          *v11 = v9 + *((_DWORD *)v13 + 3);
      }
    }
  }
  else if ( v10 )
  {
    *v11 = v10 - (_DWORD)BaseAddress;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
