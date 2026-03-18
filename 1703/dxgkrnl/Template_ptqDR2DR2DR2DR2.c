/*
 * XREFs of Template_ptqDR2DR2DR2DR2 @ 0x1C0039170
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00BC4E4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS Template_ptqDR2DR2DR2DR2(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-69h] BYREF
  va_list v5; // [rsp+40h] [rbp-59h]
  __int64 v6; // [rsp+48h] [rbp-51h]
  va_list v7; // [rsp+50h] [rbp-49h]
  __int64 v8; // [rsp+58h] [rbp-41h]
  __int64 v9; // [rsp+60h] [rbp-39h]
  int v10; // [rsp+68h] [rbp-31h]
  int v11; // [rsp+6Ch] [rbp-2Dh]
  __int64 v12; // [rsp+70h] [rbp-29h]
  int v13; // [rsp+78h] [rbp-21h]
  int v14; // [rsp+7Ch] [rbp-1Dh]
  __int64 v15; // [rsp+80h] [rbp-19h]
  int v16; // [rsp+88h] [rbp-11h]
  int v17; // [rsp+8Ch] [rbp-Dh]
  __int64 v18; // [rsp+90h] [rbp-9h]
  int v19; // [rsp+98h] [rbp-1h]
  int v20; // [rsp+9Ch] [rbp+3h]
  __int64 v21; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v23; // [rsp+F0h] [rbp+57h] BYREF
  va_list va1; // [rsp+F0h] [rbp+57h]
  __int64 v25; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+F8h] [rbp+5Fh]
  __int64 v27; // [rsp+100h] [rbp+67h]
  __int64 v28; // [rsp+108h] [rbp+6Fh]
  __int64 v29; // [rsp+110h] [rbp+77h]
  __int64 v30; // [rsp+118h] [rbp+7Fh]
  va_list va3; // [rsp+120h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  v27 = va_arg(va3, _QWORD);
  v28 = va_arg(va3, _QWORD);
  v29 = va_arg(va3, _QWORD);
  v30 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v5, va1);
  va_copy(v7, va2);
  v9 = v27;
  v12 = v28;
  v15 = v29;
  v18 = v30;
  v10 = 4 * v25;
  v13 = 4 * v25;
  v16 = 4 * v25;
  v19 = 4 * v25;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 4LL;
  v8 = 4LL;
  v11 = 0;
  v14 = 0;
  v17 = 0;
  v20 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventBlitRect, 0LL, 7u, &UserData);
}
