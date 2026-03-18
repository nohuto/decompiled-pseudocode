/*
 * XREFs of NtGdiCancelDC @ 0x1C028CE80
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiCancelDC(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  GreAcquireHmgrSemaphore(a1, a2);
  v9 = 0;
  v3 = 1;
  v10 = 0;
  LOBYTE(v4) = 1;
  v5 = HmgShareLockCheck(a1, v4);
  v8 = v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 512);
    if ( v6 )
      *(_DWORD *)(v6 + 112) |= 0x40000000u;
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v8);
    DEC_SHARE_REF_CNT(v8);
  }
  else
  {
    v3 = 0;
  }
  GreReleaseHmgrSemaphore();
  return v3;
}
