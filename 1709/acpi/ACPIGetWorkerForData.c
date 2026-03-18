/*
 * XREFs of ACPIGetWorkerForData @ 0x1C002AA40
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

void __fastcall ACPIGetWorkerForData(__int64 a1, int a2, _OWORD *a3, _DWORD *a4)
{
  __int64 v4; // rax
  int v5; // esi
  bool v9; // dl
  void (__fastcall *v10)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v11; // al
  __int64 v12; // r9
  _QWORD *v13; // r8

  v4 = *((_QWORD *)a4 + 7);
  v5 = -1073741670;
  if ( v4 )
    v5 = a2;
  v9 = a2 >= 0;
  if ( v5 >= 0 )
  {
    *(_OWORD *)v4 = *a3;
    *(_OWORD *)(v4 + 16) = a3[1];
    *(_QWORD *)(v4 + 32) = *((_QWORD *)a3 + 4);
    memset(a3, 0, 0x28uLL);
    v9 = 0;
  }
  a4[18] = v5;
  if ( v9 )
  {
    dword_1C00797B8 = 0;
    pszDest = 0;
    FreeDataBuffs((__int64)a3, 1u);
  }
  if ( (*a4 & 0x10000000) == 0 )
  {
    v10 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*((_QWORD *)a4 + 5);
    if ( v10 )
      v10(a1, (unsigned int)v5, 0LL, *((_QWORD *)a4 + 6));
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v12 = *((_QWORD *)a4 + 1);
    if ( *(_DWORD **)(v12 + 8) != a4 + 2 || (v13 = (_QWORD *)*((_QWORD *)a4 + 2), (_DWORD *)*v13 != a4 + 2) )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    KeReleaseSpinLock(&AcpiGetLock, v11);
    ExFreePoolWithTag(a4, 0);
  }
}
