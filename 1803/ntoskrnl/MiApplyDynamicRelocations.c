/*
 * XREFs of MiApplyDynamicRelocations @ 0x1408BB388
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x1408BB1A4 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14003FAC0 (RtlpImageDirectoryEntryToDataEx.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     LdrApplyDynamicRelocations @ 0x14017D46C (LdrApplyDynamicRelocations.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x14063B3D0 (MiCaptureDynamicRelocationTableRva.c)
 */

NTSTATUS __fastcall MiApplyDynamicRelocations(char *BaseAddress, __int64 Size, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
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

  v5 = a3;
  v6 = Size;
  if ( (MiFlags & 0x200000) != 0 )
  {
    v19 = BaseAddress;
    v20 = a3;
    v21 = a4;
    return VslpEnterIumSecureMode(2u, 211LL, 0, (__int64)v18);
  }
  else
  {
    LOWORD(a3) = 10;
    LOBYTE(Size) = 1;
    v8 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, Size, a3, (__int64)&v16, &v17);
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
        return LdrApplyDynamicRelocations((__int64)BaseAddress, &BaseAddress[(unsigned int)v16], v13, v14, v15, v5, a4);
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
