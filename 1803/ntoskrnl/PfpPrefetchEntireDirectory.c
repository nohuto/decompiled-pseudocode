/*
 * XREFs of PfpPrefetchEntireDirectory @ 0x1404A08D8
 * Callers:
 *     PfSnPrefetchMetadata @ 0x1404A0608 (PfSnPrefetchMetadata.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     PfpOpenHandleCreate @ 0x1404A2488 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1404A25EC (PfpOpenHandleClose.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 */

__int64 PfpPrefetchEntireDirectory(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, ...)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  int v10; // ebx
  _QWORD *v11; // rbx
  SIZE_T Length; // [rsp+50h] [rbp-11h]
  __int64 v14; // [rsp+68h] [rbp+7h] BYREF
  HANDLE Handle[4]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+77h] BYREF
  va_list va; // [rsp+D8h] [rbp+77h]
  va_list va1; // [rsp+E0h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v16 = va_arg(va1, _QWORD);
  memset(Handle, 0, sizeof(Handle));
  Handle[3] = (HANDLE)0x200000000LL;
  v8 = PfpOpenHandleCreate((unsigned int)Handle, a1, *(_QWORD *)(v16 + 16), *(_QWORD *)(v16 + 8), 1048577, 16417, 0, a2);
  v9 = (unsigned __int64)Handle[3];
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( a4 )
    {
      v11 = Handle[1];
      if ( (int)IopQueryXxxInformation(Handle[1], (__int64)va, (__int64)va1, 1) >= 0 )
      {
        *(_QWORD *)(a4 + 12) = v16;
        *(_QWORD *)a4 = v11[3];
        *(_DWORD *)(a4 + 8) = v9;
      }
    }
    LODWORD(Length) = 0;
    v10 = IopXxxControlFile(Handle[0], (__int64)&v14, 590112, a3, 8 * a3[1] + 16, 0LL, Length, 0);
    if ( v10 >= 0 )
      v10 = 0;
  }
  if ( (v9 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(Handle, a1);
  return (unsigned int)v10;
}
