/*
 * XREFs of Template_pppxxxp @ 0x1C0020BD0
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0063ED4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006E6FC (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C009A0FC (-ReportState@VIDMM_DMA_POOL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

NTSTATUS Template_pppxxxp(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-69h] BYREF
  va_list v5; // [rsp+40h] [rbp-59h]
  __int64 v6; // [rsp+48h] [rbp-51h]
  va_list v7; // [rsp+50h] [rbp-49h]
  __int64 v8; // [rsp+58h] [rbp-41h]
  va_list v9; // [rsp+60h] [rbp-39h]
  __int64 v10; // [rsp+68h] [rbp-31h]
  va_list v11; // [rsp+70h] [rbp-29h]
  __int64 v12; // [rsp+78h] [rbp-21h]
  va_list v13; // [rsp+80h] [rbp-19h]
  __int64 v14; // [rsp+88h] [rbp-11h]
  va_list v15; // [rsp+90h] [rbp-9h]
  __int64 v16; // [rsp+98h] [rbp-1h]
  __int64 v17; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v19; // [rsp+F0h] [rbp+57h] BYREF
  va_list va1; // [rsp+F0h] [rbp+57h]
  __int64 v21; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+F8h] [rbp+5Fh]
  __int64 v23; // [rsp+100h] [rbp+67h] BYREF
  va_list va3; // [rsp+100h] [rbp+67h]
  __int64 v25; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+108h] [rbp+6Fh]
  __int64 v27; // [rsp+110h] [rbp+77h] BYREF
  va_list va5; // [rsp+110h] [rbp+77h]
  va_list va6; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v23 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v25 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v27 = va_arg(va6, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 8LL;
  va_copy(v7, va2);
  v8 = 8LL;
  va_copy(v9, va3);
  va_copy(v11, va4);
  va_copy(v13, va5);
  va_copy(v15, va6);
  v10 = 8LL;
  v12 = 8LL;
  v14 = 8LL;
  v16 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventAddDmaBuffer, 0LL, 7u, &UserData);
}
