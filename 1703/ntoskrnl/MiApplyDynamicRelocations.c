/*
 * XREFs of MiApplyDynamicRelocations @ 0x140810CD0
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140810AF8 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x14008B920 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrApplyDynamicRelocations @ 0x140158F74 (LdrApplyDynamicRelocations.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x1405B88F8 (MiCaptureDynamicRelocationTableRva.c)
 */

NTSTATUS __fastcall MiApplyDynamicRelocations(char *BaseAddress, ULONGLONG Size, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  NTSTATUS v8; // eax
  _IMAGE_NT_HEADERS64 *v9; // r8
  __int64 v10; // r9
  unsigned int *v11; // rcx
  NTSTATUS result; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-C8h]
  __int64 v16; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v18[8]; // [rsp+50h] [rbp-98h] BYREF
  char *v19; // [rsp+58h] [rbp-90h]
  __int64 v20; // [rsp+60h] [rbp-88h]
  __int64 v21; // [rsp+68h] [rbp-80h]

  v6 = Size;
  if ( (MiFlags & 0x200000) != 0 )
  {
    v19 = BaseAddress;
    v20 = a3;
    v21 = a4;
    return VslpEnterIumSecureMode(1, 211LL, 0LL, (__int64)v18);
  }
  else
  {
    v8 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, 1, 0xAu, &v16, &v17);
    v11 = (unsigned int *)v17;
    if ( v8 < 0 )
      v11 = 0LL;
    if ( v11 && (_DWORD)v16 == *v11 )
    {
      result = MiCaptureDynamicRelocationTableRva(BaseAddress, v6, v9, v10, (__int64)v11, *v11, &v16);
      if ( result < 0 )
      {
        if ( result == -1073741637 )
          return 0;
      }
      else
      {
        return LdrApplyDynamicRelocations((__int64)BaseAddress, &BaseAddress[(unsigned int)v16], v13, v14, v15, a3, a4);
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
