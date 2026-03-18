/*
 * XREFs of ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C00D1090
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1C00D58C4 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0031CD0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memcmp @ 0x1C0078C50 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvUpdateDpiInfoOnOptimizedModeChange(struct _MDEV *a1, unsigned __int8 *a2)
{
  __int64 v2; // rbp
  __int64 i; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // rdx
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
        v7 = *(_QWORD *)(v6 + 2568);
        v8 = *(_OWORD *)(v6 + 2464);
        Buf1[0] = *(_OWORD *)(v6 + 2448);
        v9 = *(_OWORD *)(v6 + 2480);
        v10 = *(_QWORD *)(v7 + 240);
        v11 = *(unsigned int *)(v7 + 256);
        Buf1[1] = v8;
        v12 = *(_OWORD *)(v6 + 2496);
        Buf1[2] = v9;
        v13 = *(_OWORD *)(v6 + 2512);
        Buf1[3] = v12;
        v14 = *(_OWORD *)(v6 + 2528);
        Buf1[4] = v13;
        Buf1[5] = v14;
        v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))qword_1C01A1CB0)(
                v10,
                v11,
                0xFFFFFFFFLL,
                v6 + 2128,
                v6 + 2448);
        v2 = v15;
        if ( v15 >= 0 )
        {
          if ( memcmp(Buf1, (const void *)(v6 + 2448), 0x60uLL) )
          {
            *((_DWORD *)a1 + 10 * i + 16) = *(_DWORD *)(v6 + 2456);
            *a2 = 1;
          }
        }
        else
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
          v19[3] = v2;
          v19[4] = *(_QWORD *)(*(_QWORD *)(v6 + 2568) + 240LL);
          v19[5] = *(unsigned int *)(*(_QWORD *)(v6 + 2568) + 256LL);
          WdLogEvent5_WdError(v19);
        }
      }
    }
  }
  return (unsigned int)v2;
}
