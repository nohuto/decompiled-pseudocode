/*
 * XREFs of IopFastQueryNetworkAttributes @ 0x14068C0A8
 * Callers:
 *     IoFastQueryNetworkAttributes @ 0x14068B870 (IoFastQueryNetworkAttributes.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     FsRtlpRestoreCallerEcpsToCallerList @ 0x1401E2A84 (FsRtlpRestoreCallerEcpsToCallerList.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 */

char __fastcall IopFastQueryNetworkAttributes(__int64 a1, ACCESS_MASK a2, char a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  int v11; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[28]; // [rsp+50h] [rbp-B0h] BYREF
  char v15; // [rsp+130h] [rbp+30h] BYREF

  memset(v14, 0, 0xD8uLL);
  v14[13] = a6;
  HIWORD(v14[8]) = 7;
  LODWORD(v14[0]) = 14155784;
  LODWORD(v14[8]) = a4 | 0x200000;
  v14[6] = a1;
  LODWORD(v14[11]) = 1;
  HIDWORD(v14[10]) = 1;
  BYTE1(v14[17]) = 1;
  BYTE3(v14[17]) = 1;
  v14[18] = &v15;
  memset(&v14[20], 0, 0x28uLL);
  v14[21] = 0LL;
  LOWORD(v14[20]) = 40;
  v14[24] = 1LL;
  if ( !a3 )
    *(_DWORD *)(a1 + 24) |= 0x200u;
  v14[24] = PsGetCurrentSilo();
  v11 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, a3, 0LL, a2, (__int64)v14, v14[24], Handle);
  if ( v14[21] )
    FsRtlpRestoreCallerEcpsToCallerList(v10, (struct _ECP_LIST *)v14[21]);
  if ( LODWORD(v14[4]) == -1096154543 )
  {
    *(_DWORD *)a5 = v14[2];
    *(_QWORD *)(a5 + 8) = v14[3];
  }
  else
  {
    if ( v11 >= 0 )
    {
      ObCloseHandle(Handle[0], a3);
      v11 = -1073741788;
    }
    *(_DWORD *)a5 = v11;
  }
  return 1;
}
