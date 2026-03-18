/*
 * XREFs of ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C00F8A30
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1C00FA434 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memcmp @ 0x1C00AA900 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvUpdateDpiInfoOnOptimizedModeChange(struct _MDEV *a1, unsigned __int8 *a2)
{
  __int64 v2; // rbp
  __int64 i; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v21; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD Buf1[6]; // [rsp+40h] [rbp-98h] BYREF

  LODWORD(v2) = 0;
  *a2 = 0;
  if ( a1 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 5); i = (unsigned int)(i + 1) )
    {
      v6 = *((_QWORD *)a1 + 5 * i + 4);
      v21 = v6;
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v21) )
      {
        v7 = *(_QWORD *)(v6 + 2592);
        v8 = *(_OWORD *)(v6 + 2488);
        v9 = *(_QWORD *)(v7 + 256);
        v10 = *(unsigned int *)(v7 + 272);
        Buf1[0] = *(_OWORD *)(v6 + 2472);
        v11 = *(_OWORD *)(v6 + 2504);
        Buf1[1] = v8;
        v12 = *(_OWORD *)(v6 + 2520);
        Buf1[2] = v11;
        v13 = *(_OWORD *)(v6 + 2536);
        Buf1[3] = v12;
        v14 = *(_OWORD *)(v6 + 2552);
        Buf1[4] = v13;
        Buf1[5] = v14;
        v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))qword_1C01908E0)(
                v9,
                v10,
                0xFFFFFFFFLL,
                v6 + 2152,
                v6 + 2472);
        v2 = v15;
        if ( v15 >= 0 )
        {
          if ( memcmp(Buf1, (const void *)(v6 + 2472), 0x60uLL) )
          {
            *((_DWORD *)a1 + 10 * i + 16) = *(_DWORD *)(v6 + 2480);
            *a2 = 1;
          }
        }
        else
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
          v19[3] = v2;
          v19[4] = *(_QWORD *)(*(_QWORD *)(v6 + 2592) + 256LL);
          v19[5] = *(unsigned int *)(*(_QWORD *)(v6 + 2592) + 272LL);
          WdLogEvent5_WdError(v19);
        }
      }
    }
  }
  return (unsigned int)v2;
}
