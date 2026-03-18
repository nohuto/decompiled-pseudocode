/*
 * XREFs of ObpInsertCallbackByAltitude @ 0x14064D3F4
 * Callers:
 *     ObRegisterCallbacks @ 0x14064D220 (ObRegisterCallbacks.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x1400C0F70 (RtlCompareAltitudes.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ObpInsertCallbackByAltitude(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // r14
  unsigned int v4; // esi
  ULONG_PTR v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  const UNICODE_STRING *v13; // r15
  LONG v14; // eax
  bool v15; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = (_QWORD *)(a1 + 200);
  v4 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = a1 + 184;
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  v9 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
    goto LABEL_2;
  v13 = (const UNICODE_STRING *)a2[3];
  while ( 1 )
  {
    v14 = RtlCompareAltitudes((PCUNICODE_STRING)(v9[3] + 16LL), v13 + 1);
    v15 = v14 == 0;
    if ( v14 <= 0 )
      break;
    v9 = (_QWORD *)*v9;
    if ( v9 == v3 )
    {
      v15 = v14 == 0;
      break;
    }
  }
  if ( !v15 )
  {
LABEL_2:
    v10 = (__int64 *)v9[1];
    v11 = *v10;
    if ( *(__int64 **)(*v10 + 8) != v10 )
      __fastfail(3u);
    *a2 = v11;
    a2[1] = v10;
    *(_QWORD *)(v11 + 8) = a2;
    *v10 = (__int64)a2;
  }
  else
  {
    v4 = -1071906799;
  }
  ExReleasePushLockEx(v6, 0LL, v7, v8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
