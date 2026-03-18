/*
 * XREFs of MiDeleteAllPartialCloneVads @ 0x1406BF284
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiReferenceVad @ 0x1400CE328 (MiReferenceVad.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall MiDeleteAllPartialCloneVads(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  $5BC46E0569261879018906DEC3127961 v10; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v10);
  *(_BYTE *)(*(_QWORD *)(a1 + 1296) + 233LL) |= 1u;
  v3 = *(_QWORD **)(a1 + 1576);
  v4 = 0LL;
  while ( v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
  }
  while ( v4 )
  {
    v5 = (_QWORD *)v4[1];
    v6 = (__int64)v4;
    v7 = v4;
    if ( v5 )
    {
      do
      {
        v4 = v5;
        v5 = (_QWORD *)*v5;
      }
      while ( v5 );
    }
    else
    {
      while ( 1 )
      {
        v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v4 || (_QWORD *)*v4 == v7 )
          break;
        v7 = v4;
      }
    }
    MiLockVad((__int64)CurrentThread, v6);
    MiReferenceVad(v6);
    MiDeleteVad(v8, 0);
  }
  return KiUnstackDetachProcess(&v10, 0LL);
}
