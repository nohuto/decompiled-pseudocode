/*
 * XREFs of ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C010EFA0
 * Callers:
 *     NtGdiGetPerBandInfo @ 0x1C010EF10 (NtGdiGetPerBandInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BE58 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetPerBandInfo(HDC a1, struct _PERBANDINFO *a2)
{
  unsigned int v3; // ebx
  int valid; // eax
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, struct _PERBANDINFO *, __int64); // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  a2->bRepeatThisBand = 0;
  v3 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  valid = XDCOBJ::bValidSurf((XDCOBJ *)v10);
  v5 = v10[0];
  if ( valid )
  {
    v6 = *(_QWORD *)(v10[0] + 512LL);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v10[0] + 48LL);
      if ( *(_QWORD *)(v7 + 2576) )
      {
        if ( (*(_DWORD *)(v6 + 112) & 0x2000000) != 0 )
        {
          v8 = *(__int64 (__fastcall **)(__int64, struct _PERBANDINFO *, __int64))(v7 + 3304);
          if ( v8 )
          {
            v3 = v8((v6 + 24) & -(__int64)(v6 != 0), a2, -v6);
            if ( v3 == -1 )
              v3 = -1;
          }
          else
          {
            v3 = 0;
          }
        }
      }
    }
  }
  if ( v5 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v3;
}
